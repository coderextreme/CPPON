/////////////////////////////////////////////////////////////////////////////
// X3DLib.h : Header file; Defines the class definitions
// Ported from MFC to Standard C++ / Modern Windows (no AFX dependency)
/////////////////////////////////////////////////////////////////////////////

#ifndef _X3DLib_H_
#define _X3DLib_H_

#include <gl/gl.h>          // OpenGL
#include <gl/glu.h>
#include <string>
#include <vector>
#include <unordered_map>
#include <memory>
#include <cstdint>

#include "glMath.h"
#include "Abstracts.h"
#include "Concretes.h"
#include "XML_PARSER.h"

/////////////////////////////////////////////////////////////////////////////
// DLL import/export
//
#if !defined(_WIN32)
#   define EXPORT   __export
#   define EXPORT32
#else
#   define EXPORT
#   if defined(_X3DLIBDLL)
#      define EXPORT32 __declspec(dllexport)
#   else
#      define EXPORT32 __declspec(dllimport)
#   endif
#endif

// Use WM_APP instead of WM_USER for application-defined messages
// (WM_APP range is 0xC000–0xFFFF; WM_USER collides with control messages)
#define WM_EVENT_CHANGED    (WM_APP + 2001)

/////////////////////////////////////////////////////////////////////////////
// X3DLib object-type defines
//
#define LIGHT_OBJECT                0
#define TRANSFORM_OBJECT            1
#define SHAPE_OBJECT                2   // object 종류
#define INDEXED_FACE_SET_OBJECT     3
#define JOINT_OBJECT                4
#define SEGMENT_OBJECT              5
#define SITE_OBJECT                 6

#define LIGHT_AMBIENT               0   // light의 type
#define LIGHT_POSITIONAL            1

#define DRAW_POINT                  0   // Draw mode
#define DRAW_WIREFRAME              1
#define DRAW_FLAT                   2
#define DRAW_SMOOTH                 3
#define DRAW_DEFAULT                4

#define OF_RESET                    0x0000  // Object Flags
#define OF_INIT_MESH                0x0001
#define OF_INIT_ALL                 0x0002
#define OF_CREATE_NORMALS           0x0010
#define OF_CREATE_PRIMITIVES        0x0020
#define OF_CREATE_ALL               0x0030

#define INFINATE_DOUBLE             1.7E15  // Largest double precision number

#define NODE_TRANSFORM              0
#define NODE_SHAPE                  1
#define NODE_BOX                    2
#define NODE_CONE                   3
#define NODE_CYLINDER               4
#define NODE_SPHERE                 5
#define NODE_S_TEXT                 6
#define NODE_INDEXEDFACESET         7
#define NODE_HANIMHUMANOID          8
#define NODE_HANIMJOINT             9
#define NODE_HANIMSEGMENT           10
#define NODE_HANIMSITE              11
#define NODE_APPEARANCE             12
#define NODE_DIRECTIONAL_LIGHT      13
#define NODE_POINT_LIGHT            14
#define NODE_SPOT_LIGHT             15
#define NODE_GROUP                  16
#define NODE_SCRIPT                 17
#define NODE_FIELD                  18
#define NODE_ROUTE                  19
#define NODE_FONTSTYLE              99

// Unique name counter for OpenGL selection names
// (Model, Light, Triangle, Polygon selection modes)
static GLuint iGlobalNamesList = 1;

/////////////////////////////////////////////////////////////////////////////
// Type aliases replacing MFC containers
//
using StringMap    = std::unordered_map<std::string, std::string>;
using StringArray  = std::vector<std::string>;
using FloatArray   = std::vector<float>;

/////////////////////////////////////////////////////////////////////////////
// Predefined classes
//

//////////////////////////////////////////////////////////////////////////////
// X3DArrayField
// Replaces: MFC CObject base + DECLARE_DYNAMIC macro
//
class EXPORT32 X3DArrayField : public X3DField
{
public:
    X3DArrayField();
    virtual ~X3DArrayField();

    virtual int  size();
    virtual void clear();
    virtual void remove(int index);
};


//////////////////////////////////////////////////////////////////////////////
// X3DMeta
//
class EXPORT32 X3DMeta
{
public:
    X3DMeta();
    virtual ~X3DMeta();

    std::string getXMLString();
    void setData(const std::string& strName, const std::string& strContent);
    void getData(std::string& strName, std::string& strContent);

protected:
    std::string name;
    std::string content;
};


/////////////////////////////////////////////////////////////////////////////
// X3DNodeArray
// Replaces: MFC CObArray
//
class EXPORT32 X3DNodeArray
{
public:
    X3DNodeArray();
    virtual ~X3DNodeArray();

    void Append(X3DBaseNode* pObject);
    void DeleteAll();
    int  GetCount() const { return static_cast<int>(m_items.size()); }
    std::string get(const std::string& strName);

    // Element access (bounds-checked in debug, unchecked in release)
    X3DBaseNode*       operator[](int i)       { return m_items[i]; }
    const X3DBaseNode* operator[](int i) const { return m_items[i]; }

public:
    // 객체 소유권: array 안에 object를 자동으로 삭제할지 결정
    bool m_bAutoDelete = false;

protected:
    std::vector<X3DBaseNode*> m_items;
};


/////////////////////////////////////////////////////////////////////////////
// fieldArray
// Replaces: MFC CObArray of X3DField pointers
//
class EXPORT32 fieldArray
{
public:
    fieldArray();
    virtual ~fieldArray();

    void      DeleteAll();
    X3DField* get(const std::string& strName);

    int  GetCount() const { return static_cast<int>(m_items.size()); }
    void Append(X3DField* pField) { m_items.push_back(pField); }

protected:
    std::vector<X3DField*> m_items;
};


/////////////////////////////////////////////////////////////////////////////
// Comment node
//
class EXPORT32 Comment : public X3DBaseNode
{
public:
    Comment();
    virtual ~Comment();

    void        setComment(const std::string& str);
    std::string getComment();

    virtual std::string getXMLString() override;

public:
    std::string comment;
};


/////////////////////////////////////////////////////////////////////////////
// X3DScene
// Replaces: MFC CObject base + DECLARE_DYNAMIC macro
//           CMapStringToString  -> StringMap (std::unordered_map<string,string>)
//           BOOL                -> bool
//           LPCTSTR             -> const char*
//           MSXML2::IXMLDOMNodePtr -> abstracted through XML_PARSER
//           CArray<float,float> -> FloatArray (std::vector<float>)
//
class EXPORT32 X3DScene
{
public:
    X3DScene();
    virtual ~X3DScene();

    //-- Execution context services
    X3DBaseNode* createNode(const std::string& strNodeName);
    void addRoute(X3DNode* pSNode, const std::string& strSField,
                  X3DNode* pDNode, const std::string& strDField);

    //-- Scene services
    std::string  getMetaData(const std::string& strKey);
    void         setMetaData(const std::string& strKey, const std::string& strValue);
    X3DNode*     getExportNode(const std::string& strNode);
    void         updateExportedNode(const std::string& strSrNode, const std::string& strTarNode);
    void         removeExportedNode(const std::string& strNode);
    void         addRootNode(X3DBaseNode* node);
    void         removeRootNode(X3DNode* node);
    void         AddChidNode(X3DBaseNode* pParent, X3DBaseNode* pChild);

    bool         SaveScene(const char* lpszPathName);
    std::string  SaveChild(X3DNode* pNode, int nLevel);
    void         ExtractPath(std::string& Target, std::string& FileName);
    void         Draw(GLenum mode = GL_RENDER);
    void         DrawNode(X3DNode* pNode, GLenum mode = GL_RENDER);
    bool         createX3DFromURL(const std::string& strFilePath);
    bool         createX3DFromFile(const std::string& strFilePath);

    X3DBaseNode* getNode(const std::string& strNodeName);
    X3DBaseNode* getNode(const std::string& strNodeName, X3DNode* pNode);
    X3DBaseNode* getNode(int strNodeID);
    X3DBaseNode* getNode(int strNodeID, X3DNode* pNode);

    void InitializeNode();
    void InitializeNode(X3DNode* pNode);
    void MappingIndexedFaceSet(X3DNode* pScr, X3DNode* pTar);

    void   BindingTextue();
    GLuint LoadTexture(const std::string& file_name, int nIdx);

public:
    X3DNodeArray    m_Objects;          // Model Array
    X3DNodeArray    m_Routes;           // ROUTE Array
    fieldArray      m_fields;           // field Array
    X3DNodeArray    m_Coords;           // Coords Array
    X3DNodeArray    m_TextureCoords;    // Texture Coords Array

    X3DBaseNode*    m_pSceneNode   = nullptr;
    X3DBaseNode*    m_pCurrentNode = nullptr;

    StringArray     m_arryTextureName;
    Background*     m_background   = nullptr;

    std::string     m_strDEF;
    std::string     m_strName;
    int             m_nIndex       = 0;

    UINT            m_iDrawMode    = DRAW_DEFAULT;
    XML_PARSER      m_XMLDoc;

    int             m_nCurElement  = 0;
    CFontStyle      m_CurFontstyle;
    int             m_nTextureCnt  = 0;
    std::string     m_strFilePath;
    int             m_CurID        = 0;

protected:
    bool            m_bInitialize  = false;   // World initialization flag

public:
    enum XML_Element
    {
        APPEARANCE,
        AREA,
        BOX,
        BACKGROUND,
        CONE,
        CYLINDER,
        COORDINATE,
        COLOR,
        CONNECT,
        DIRECTIONALLIGHT,
        FONTSTYLE,
        FIELD,
        GROUP,
        HANIMHUMANOID,
        HANIMJOINT,
        HANIMSEGMENT,
        HANIMSITE,
        HEAD,
        HISTORICINFO,
        IMAGETEXTURE,
        INDEXEDFACESET,
        INLINE,
        is,
        KEYDEF,
        KEYDATA,
        LENGTH,
        MATERIAL,
        META,
        NORMAL,
        NAVIGATIONINFO,
        PHYSICAL,
        POINTLIGHT,
        PROTOBODY,
        PROTODECLARE,
        PROTOINTERFACE,
        route,
        SCENE,
        SPOTLIGHT,
        SPHERE,
        SHAPE,
        SCRIPT,
        TEXTURECOORDINATE,
        TEXT,
        TRANSFORM,
        TOUCHSENSOR,
        VIEWPOINT,
        WORLDINFO,
        X3D_,
        INVALID,
    };

    // XML element handlers
    // StringMap replaces MFC CMapStringToString throughout
    void EnumAllElement(void* pParent, const std::string& strElement, StringMap& AttributeList);
    void OnElement(const std::string& strElement, StringMap* pAttributeList);
    void OnElement2(const std::string& strElement, StringMap* pAttributeList);

    void ElementX3D(StringMap* pAttributeList, bool bStart = true);
    void ElementBox(StringMap* pAttributeList, bool bStart = true);
    void ElementCone(StringMap* pAttributeList, bool bStart = true);
    void ElementCylinder(StringMap* pAttributeList, bool bStart = true);
    void ElementSphere(StringMap* pAttributeList, bool bStart = true);
    void ElementText(StringMap* pAttributeList, bool bStart = true);
    void ElementFontStyle(StringMap* pAttributeList, bool bStart = true);
    void ElementHead(StringMap* pAttributeList, bool bStart = true);
    void ElementMeta(StringMap* pAttributeList, bool bStart = true);
    void ElementViewpoint(StringMap* pAttributeList, bool bStart = true);
    void ElementWorldInfo(StringMap* pAttributeList, bool bStart = true);
    void ElementBackground(StringMap* pAttributeList, bool bStart = true);
    void ElementNavigationInfo(StringMap* pAttributeList, bool bStart = true);
    void ElementHAnimHumanoid(StringMap* pAttributeList, bool bStart = true);
    void ElementHAnimJoint(StringMap* pAttributeList, bool bStart = true);
    void ElementHAnimSegment(StringMap* pAttributeList, bool bStart = true);
    void ElementHAnimSite(StringMap* pAttributeList, bool bStart = true);
    void ElementTransform(StringMap* pAttributeList, bool bStart = true);
    void ElementShape(StringMap* pAttributeList, bool bStart = true);
    void ElementIndexedFaceSet(StringMap* pAttributeList, bool bStart = true);
    void ElementCoordinate(StringMap* pAttributeList, bool bStart = true);
    void ElementTextureCoordinate(StringMap* pAttributeList, bool bStart = true);
    void ElementImageTexture(StringMap* pAttributeList, bool bStart = true);
    void ElementColor(StringMap* pAttributeList, bool bStart = true);
    void ElementNormal(StringMap* pAttributeList, bool bStart = true);
    void ElementMaterial(StringMap* pAttributeList, bool bStart = true);
    void ElementInline(StringMap* pAttributeList, bool bStart = true);
    void ElementLength(StringMap* pAttributeList, bool bStart = true);
    void ElementArea(StringMap* pAttributeList, bool bStart = true);
    void ElementHistoricInfo(StringMap* pAttributeList, bool bStart = true);
    void ElementKeyDEF(StringMap* pAttributeList, bool bStart = true);
    void ElementKeyData(StringMap* pAttributeList, bool bStart = true);
    void ElementDirectionalLight(StringMap* pAttributeList, bool bStart = true);
    void ElementPointLight(StringMap* pAttributeList, bool bStart = true);
    void ElementSpotLight(StringMap* pAttributeList, bool bStart = true);
    void ElementGroup(StringMap* pAttributeList, bool bStart = true);
    void ElementAppearance(StringMap* pAttributeList, bool bStart = true);
    void ElementTouchSensor(StringMap* pAttributeList, bool bStart = true);
    void ElementScript(StringMap* pAttributeList, bool bStart = true);
    void ElementField(StringMap* pAttributeList, bool bStart = true);
    void ElementROUTE(StringMap* pAttributeList, bool bStart = true);
    void ElementIS(StringMap* pAttributeList, bool bStart = true);
    void ElementProtoBody(StringMap* pAttributeList, bool bStart = true);
    void ElementProtoDeclare(StringMap* pAttributeList, bool bStart = true);
    void ElementProtoInterface(StringMap* pAttributeList, bool bStart = true);
    void ElementConnect(StringMap* pAttributeList, bool bStart = true);
    void ElementScene(StringMap* pAttributeList, bool bStart = true);

    void MakeCoodIndex(const std::string& strName);
    void SetDEF(StringMap* pAttributeList, X3DNode* pNode);
    bool GetValue3(const std::string& strValue, SFVec3f& Vec);
    bool GetValue4(const std::string& strValue, SFVec4f& Vec);
    void GetValue(const std::string& strValue, FloatArray& Array);
    void AddNode(X3DBaseNode* pObject, X3DBaseNode* pParent, bool bFirst = false);
    void EndNode();
    void Initialize();
};


#define VRLIB_ACCUM     0x0001
#define VRLIB_STENCIL   0x0002

/////////////////////////////////////////////////////////////////////////////
// X3DLibrary
// Replaces: MFC CObject base + DECLARE_DYNAMIC macro
//
class EXPORT32 X3DLibrary
{
public:
    X3DLibrary();
    virtual ~X3DLibrary();

public:
    X3DScene* m_pScene = nullptr;
};

// The one-and-only X3DLib singleton
extern EXPORT32 X3DLibrary EXPORT X3DLib;

// DLL lifecycle
extern "C" EXPORT32 void WINAPI InitX3DDLL(void);
extern "C" EXPORT32 void WINAPI ShutdownX3DDLL(void);

// Resource handle helpers (Windows-specific; non-portable callers should wrap these)
extern HINSTANCE SelectResourceHandle(void);
extern void      SelectResourceHandle(HINSTANCE hOld);

// Public C API
extern "C" EXPORT32 void         WINAPI createX3D(void);
extern "C" EXPORT32 void         WINAPI loadX3DFromFile(const std::string& strFilePath);
extern "C" EXPORT32 X3DBaseNode* WINAPI createNode(const std::string& strNode);
extern "C" EXPORT32 void         WINAPI createNodeParent(const std::string& strNode, X3DBaseNode* pParent, X3DBaseNode* pChild);
extern "C" EXPORT32 void         WINAPI createRootNode(const std::string& strNode, X3DBaseNode* pNode);
extern "C" EXPORT32 void         WINAPI addRootNode(X3DBaseNode* pNode);
extern "C" EXPORT32 void         WINAPI addChildNode(X3DBaseNode* pParent, X3DBaseNode* pChild);
extern "C" EXPORT32 int          WINAPI getRootNodeCount();
extern "C" EXPORT32 X3DNode*     WINAPI getRootNode(int nIndex);
extern "C" EXPORT32 X3DField*    WINAPI getFields(const std::string& strField);
extern "C" EXPORT32 void         WINAPI addRoute(X3DNode* pSNode, const std::string& strSField,
                                                  X3DNode* pDNode, const std::string& strDField);
extern "C" EXPORT32 X3DBaseNode* WINAPI getNodeFromID(int strNodeID);
extern "C" EXPORT32 X3DBaseNode* WINAPI getNodeFromName(const std::string& strNodeName);
extern "C" EXPORT32 X3DScene*    WINAPI getScene();
extern "C" EXPORT32 void         WINAPI setScene(X3DScene* pScene);
extern "C" EXPORT32 void         WINAPI drawScene(void);
extern "C" EXPORT32 void         WINAPI saveX3DFile(const std::string& strFilePath);
extern "C" EXPORT32 void         WINAPI renderScene(GLenum mode = GL_RENDER);

extern std::string GetIndent(int nLevel);

#endif // _X3DLib_H_
