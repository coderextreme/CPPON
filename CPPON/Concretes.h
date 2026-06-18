#include "Abstracts.h"

// Portable DLL export macro (replaces MFC AFX_EXT_CLASS)
#ifndef X3D_API
  #if defined(_WIN32)
    #ifdef X3D_EXPORTS
      #define X3D_API __declspec(dllexport)
    #else
      #define X3D_API __declspec(dllimport)
    #endif
  #else
    #define X3D_API __attribute__((visibility("default")))
  #endif
#endif

// new
class X3D_API X3DNodeMixedContent
{

public:
	X3DNodeMixedContent();
	virtual ~X3DNodeMixedContent();
};

////C.3.1 Anchor 
/** Anchor defines a concrete node interface that extends interface X3DGroupingNode. */

class X3D_API Anchor : public X3DGroupingNode, public X3DUrlObject
{

public:
	Anchor();
	virtual ~Anchor();

	virtual void Draw();
	virtual std::string getXMLString();

	/** Return String result [] from SFString inputOutput field named "description" */
	std::string getDescription ();

	/** Assign String value [] to SFString inputOutput field named "description" */
	void setDescription (std::string value);

	/** Return array of String results array [] from MFString inputOutput field named "parameter" */
	MFString& getParameter ();

	/** Return number of primitive values in "parameter" array */
	int getNumParameter ();

	/** Assign String array [] to MFString inputOutput field named "parameter" */
	void setParameter (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "parameter" */
	void setParameter (std::string value);

	///** Return array of String results array [] from MFString inputOutput field named "url" */
	//std::string* getUrl ();

	///** Return number of primitive values in "url" array */
	//int getNumUrl ();

	///** Assign String array [] to MFString inputOutput field named "url" */
	//void setUrl (std::string* values, int size);

	///** Assign single String value [] as the MFString array for inputOutput field named "url" */
	//void setUrl (std::string value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

protected:
	MFString	parameter;
	std::string		description;
};
 
//C.3.3 Arc2D 
/** Arc2D defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API Arc2D : public X3DGeometryNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	Arc2D();
	virtual ~Arc2D();

	/** Return float result [] from  type initializeOnly field named "radius" */
	float getRadius ();

	/** Assign float value [] to  type initializeOnly field named "radius" */
	void setRadius (float value);

	/** Return float result in radians from  type initializeOnly field named "startAngle" */
	float getStartAngle ();

	/** Assign float value in radians to  type initializeOnly field named "startAngle" */
	void setStartAngle (float angle);

	/** Return float result in radians from  type initializeOnly field named "endAngle" */
	float getEndAngle ();

	/** Assign float value in radians to  type initializeOnly field named "endAngle" */
	void setEndAngle (float angle);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.4 ArcClose2D 
/** ArcClose2D defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API ArcClose2D : public X3DGeometryNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	ArcClose2D();
	virtual ~ArcClose2D();

	/** Return float result [] from  type initializeOnly field named "radius" */
	float getRadius ();

	/** Assign float value [] to  type initializeOnly field named "radius" */
	void setRadius (float value);

	/** Return float result in radians from  type initializeOnly field named "startAngle" */
	float getStartAngle ();

	/** Assign float value in radians to  type initializeOnly field named "startAngle" */
	void setStartAngle (float angle);

	/** Return float result in radians from  type initializeOnly field named "endAngle" */
	float getEndAngle ();

	/** Assign float value in radians to  type initializeOnly field named "endAngle" */
	void setEndAngle (float angle);

	/** Return String enumeration result ("PIE"|"CHORD") from ArcClose2dTypeValues type initializeOnly field named "closureType" */
	std::string getClosureType ();

	/** Assign String enumeration value ("PIE"|"CHORD") to ArcClose2dTypeValues type initializeOnly field named "closureType" */
	void setClosureType (std::string value);

	/** Return boolean result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign boolean value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.5 AudioClip 
/** AudioClip defines a concrete node interface that extends interfaces X3DSoundSourceNodeX3DUrlObject. */

class X3D_API AudioClip : public X3DSoundSourceNode, public X3DUrlObject
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	AudioClip();
	virtual ~AudioClip();
	virtual std::string getXMLString();

	/** Return array of String results array [] from MFString inputOutput field named "url" */
	MFString& getUrl();

	/** Return number of primitive values in "url" array */
	int getNumUrl ();

	/** Assign String array [] to MFString inputOutput field named "url" */
	void setUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "url" */
	void setUrl (std::string value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from SFTime outputOnly field named "duration_changed" */
	//double getDuration ();

	///** Return String result [] from SFString inputOutput field named "description" */
	//std::string getDescription ();

	///** Assign String value [] to SFString inputOutput field named "description" */
	//void setDescription (std::string value);

	///** Return float result [] from  type inputOutput field named "pitch" */
	//float getPitch ();

	///** Assign float value [] to  type inputOutput field named "pitch" */
	//void setPitch (float value);

	///** Return double result in seconds from SFTime outputOnly field named "elapsedTime" */
	//double getElapsedTime ();

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool outputOnly field named "isPaused" */
	//bool getIsPaused ();

	///** Return boolean result from SFBool inputOutput field named "loop" */
	//bool getLoop ();

	///** Assign boolean value to SFBool inputOutput field named "loop" */
	//void setLoop (bool value);

	///** Return double result in seconds from SFTime inputOutput field named "pauseTime" */
	//double getPauseTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "pauseTime" */
	//void setPauseTime (double timestamp);

	///** Return double result in seconds from SFTime inputOutput field named "resumeTime" */
	//double getResumeTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "resumeTime" */
	//void setResumeTime (double timestamp);

	///** Return double result in seconds from SFTime inputOutput field named "startTime" */
	//double getStartTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "startTime" */
	//void setStartTime (double timestamp);

	///** Return double result in seconds from SFTime inputOutput field named "stopTime" */
	//double getStopTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "stopTime" */
	//void setStopTime (double timestamp);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
protected:
	MFString	url;
};
 
//C.3.6 Background 
/** Background defines a concrete node interface that extends interface X3DBackgroundNode. */

class X3D_API Background : public X3DBackgroundNode
{

public:
	Background();
	virtual ~Background();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of String results array [] from MFString inputOutput field named "backUrl" */
	std::string* getBackUrl ();

	/** Return number of primitive values in "backUrl" array */
	int getNumBackUrl ();

	/** Assign String array [] to MFString inputOutput field named "backUrl" */
	void setBackUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "backUrl" */
	void setBackUrl (std::string value);

	/** Return array of String results array [] from MFString inputOutput field named "bottomUrl" */
	std::string* getBottomUrl ();

	/** Return number of primitive values in "bottomUrl" array */
	int getNumBottomUrl ();

	/** Assign String array [] to MFString inputOutput field named "bottomUrl" */
	void setBottomUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "bottomUrl" */
	void setBottomUrl (std::string value);

	/** Return array of String results array [] from MFString inputOutput field named "frontUrl" */
	std::string* getFrontUrl ();

	/** Return number of primitive values in "frontUrl" array */
	int getNumFrontUrl ();

	/** Assign String array [] to MFString inputOutput field named "frontUrl" */
	void setFrontUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "frontUrl" */
	void setFrontUrl (std::string value);

	/** Return array of String results array [] from MFString inputOutput field named "leftUrl" */
	std::string* getLeftUrl ();

	/** Return number of primitive values in "leftUrl" array */
	int getNumLeftUrl ();

	/** Assign String array [] to MFString inputOutput field named "leftUrl" */
	void setLeftUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "leftUrl" */
	void setLeftUrl (std::string value);

	/** Return array of String results array [] from MFString inputOutput field named "rightUrl" */
	std::string* getRightUrl ();

	/** Return number of primitive values in "rightUrl" array */
	int getNumRightUrl ();

	/** Assign String array [] to MFString inputOutput field named "rightUrl" */
	void setRightUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "rightUrl" */
	void setRightUrl (std::string value);

	/** Return array of String results array [] from MFString inputOutput field named "topUrl" */
	std::string* getTopUrl ();

	/** Return number of primitive values in "topUrl" array */
	int getNumTopUrl ();

	/** Assign String array [] to MFString inputOutput field named "topUrl" */
	void setTopUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "topUrl" */
	void setTopUrl (std::string value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of float results array in radians from MFFloat inputOutput field named "groundAngle" */
	//float* getGroundAngle ();

	///** Return number of primitive values in "groundAngle" array */
	//int getNumGroundAngle ();

	///** Assign float array in radians to MFFloat inputOutput field named "groundAngle" */
	//void setGroundAngle (float* angles, int size);

	///** Assign single float value in radians as the MFFloat array for inputOutput field named "groundAngle" */
	//void setGroundAngle (float angle);

	///** Return array of 3-tuple float results array using RGB values [0..1] from MFColor inputOutput field named "groundColor" */
	//float* getGroundColor ();

	///** Return number of 3-tuple primitive values in "groundColor" array */
	//int getNumGroundColor ();

	///** Assign 3-tuple float array using RGB values [0..1] to MFColor inputOutput field named "groundColor" */
	//void setGroundColor (float* colors, int size);

	///** Return array of float results array in radians from MFFloat inputOutput field named "skyAngle" */
	//float* getSkyAngle ();

	///** Return number of primitive values in "skyAngle" array */
	//int getNumSkyAngle ();

	///** Assign float array in radians to MFFloat inputOutput field named "skyAngle" */
	//void setSkyAngle (float* angles, int size);

	///** Assign single float value in radians as the MFFloat array for inputOutput field named "skyAngle" */
	//void setSkyAngle (float angle);

	///** Return array of 3-tuple float results array using RGB values [0..1] from MFColor inputOutput field named "skyColor" */
	//float* getSkyColor ();

	///** Return number of 3-tuple primitive values in "skyColor" array */
	//int getNumSkyColor ();

	///** Assign 3-tuple float array using RGB values [0..1] to MFColor inputOutput field named "skyColor" */
	//void setSkyColor (float* colors, int size);

	///** Return float result [] from intensityType type inputOutput field named "transparency" */
	//float getTransparency ();

	///** Assign float value [] to intensityType type inputOutput field named "transparency" */
	//void setTransparency (float value);

	///** Assign boolean value to SFBool inputOnly field named "set_bind" */
	//void setBind (bool value);

	///** Return double result in seconds from SFTime outputOnly field named "bindTime" */
	//double getBindTime ();

	///** Return boolean result from SFBool outputOnly field named "isBound" */
	//bool getIsBound ();

	/** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.7 BallJoint 
/** BallJoint defines a concrete node interface that extends interface X3DRigidJointNode. */

class X3D_API BallJoint : public X3DRigidJointNode
{

public:
	BallJoint();
	virtual ~BallJoint();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "body1AnchorPoint" */
	float* getBody1AnchorPoint ();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "body2AnchorPoint" */
	float* getBody2AnchorPoint ();

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "anchorPoint" */
	float* getAnchorPoint ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "anchorPoint" */
	void setAnchorPoint (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of String results array [] from MFString inputOutput field named "forceOutput" */
	//std::string* getForceOutput ();

	///** Return number of primitive values in "forceOutput" array */
	//int getNumForceOutput ();

	///** Assign String array [] to MFString inputOutput field named "forceOutput" */
	//void setForceOutput (std::string* values, int size);

	///** Assign single String value [] as the MFString array for inputOutput field named "forceOutput" */
	//void setForceOutput (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body1" */
	//void getBody1 (X3DNode result);

	///** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body1" */
	//void setBody1 (RigidBody node);

	///** Assign RigidBody value (using a properly typed protoInstance) */
	//void setBody1 (X3DPrototypeInstance protoInstance);

	///** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body2" */
	//void getBody2 (X3DNode result);

	///** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body2" */
	//void setBody2 (RigidBody node);

	///** Assign RigidBody value (using a properly typed protoInstance) */
	//void setBody2 (X3DPrototypeInstance protoInstance);
};
 
//C.3.8 Billboard 
/** Billboard defines a concrete node interface that extends interface X3DGroupingNode. */

class X3D_API Billboard : public X3DGroupingNode
{

public:
	Billboard();
	virtual ~Billboard();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return array of 3-tuple float results array in radians from SFVec3f inputOutput field named "axisOfRotation" */
	float* getAxisOfRotation ();

	/** Assign 3-tuple float array in radians to SFVec3f inputOutput field named "axisOfRotation" */
	void setAxisOfRotation (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	float axisOfRotation[3];
};
 
//C.3.9 BlendedVolumeStyle 
/** BlendedVolumeStyle defines a concrete node interface that extends interface X3DComposableVolumeRenderStyleNode. */

class X3D_API BlendedVolumeStyle : public X3DComposableVolumeRenderStyleNode
{

public:
	BlendedVolumeStyle();
	virtual ~BlendedVolumeStyle();

	/** Return float result [] from  type inputOutput field named "weightConstant1" */
	float getWeightConstant1 ();

	/** Assign float value [] to  type inputOutput field named "weightConstant1" */
	void setWeightConstant1 (float value);

	/** Return float result [] from  type inputOutput field named "weightConstant2" */
	float getWeightConstant2 ();

	/** Assign float value [] to  type inputOutput field named "weightConstant2" */
	void setWeightConstant2 (float value);

	/** Return String enumeration result ("CONSTANT"|"ALPHA1"|"ALPHA2"|"ONE_MINUS_ALPHA1"|"ONE_MINUS_ALPHA2"|"TABLE") from volumeRenderingWeightFunctionTypes type inputOutput field named "weightFunction1" */
	std::string getWeightFunction1 ();

	/** Assign String enumeration value ("CONSTANT"|"ALPHA1"|"ALPHA2"|"ONE_MINUS_ALPHA1"|"ONE_MINUS_ALPHA2"|"TABLE") to volumeRenderingWeightFunctionTypes type inputOutput field named "weightFunction1" */
	void setWeightFunction1 (std::string value);

	/** Return String enumeration result ("CONSTANT"|"ALPHA1"|"ALPHA2"|"ONE_MINUS_ALPHA1"|"ONE_MINUS_ALPHA2"|"TABLE") from volumeRenderingWeightFunctionTypes type inputOutput field named "weightFunction2" */
	std::string getWeightFunction2 ();

	/** Assign String enumeration value ("CONSTANT"|"ALPHA1"|"ALPHA2"|"ONE_MINUS_ALPHA1"|"ONE_MINUS_ALPHA2"|"TABLE") to volumeRenderingWeightFunctionTypes type inputOutput field named "weightFunction2" */
	void setWeightFunction2 (std::string value);

	/** Return X3DComposableVolumeRenderStyleNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "renderStyle" */
	void getRenderStyle (X3DNode result);

	/** Assign X3DComposableVolumeRenderStyleNode value (using a properly typed node) to SFNode inputOutput field named "renderStyle" */
	void setRenderStyle (X3DComposableVolumeRenderStyleNode node);

	/** Assign X3DComposableVolumeRenderStyleNode value (using a properly typed protoInstance) */
	void setRenderStyle (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture3DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "voxels" */
	void getVoxels (X3DNode result);

	/** Assign X3DTexture3DNode value (using a properly typed node) to SFNode inputOutput field named "voxels" */
	void setVoxels (X3DTexture3DNode node);

	/** Assign X3DTexture3DNode value (using a properly typed protoInstance) */
	void setVoxels (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture2DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "weightTransferFunction1" */
	void getWeightTransferFunction1 (X3DNode result);

	/** Assign X3DTexture2DNode value (using a properly typed node) to SFNode inputOutput field named "weightTransferFunction1" */
	void setWeightTransferFunction1 (X3DTexture2DNode node);

	/** Assign X3DTexture2DNode value (using a properly typed protoInstance) */
	void setWeightTransferFunction1 (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture2DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "weightTransferFunction2" */
	void getWeightTransferFunction2 (X3DNode result);

	/** Assign X3DTexture2DNode value (using a properly typed node) to SFNode inputOutput field named "weightTransferFunction2" */
	void setWeightTransferFunction2 (X3DTexture2DNode node);

	/** Assign X3DTexture2DNode value (using a properly typed protoInstance) */
	void setWeightTransferFunction2 (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.10 BooleanFilter 
/** BooleanFilter defines a concrete node interface that extends interface X3DChildNode. */

class X3D_API BooleanFilter : public X3DChildNode
{

public:
	BooleanFilter();
	virtual ~BooleanFilter();

	/** Assign boolean value to SFBool inputOnly field named "set_boolean" */
	void setBoolean (bool value);

	/** Return boolean result from SFBool outputOnly field named "inputFalse" */
	bool getInputFalse ();

	/** Return boolean result from SFBool outputOnly field named "inputNegate" */
	bool getInputNegate ();

	/** Return boolean result from SFBool outputOnly field named "inputTrue" */
	bool getInputTrue ();

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.11 BooleanSequencer 
/** BooleanSequencer defines a concrete node interface that extends interface X3DSequencerNode. */

class X3D_API CBooleanSequencer : public X3DSequencerNode
{

public:
	CBooleanSequencer();
	virtual ~CBooleanSequencer();

	/** Return boolean result from SFBool outputOnly field named "value_changed" */
	bool getValue ();

	/** Return array of boolean results array from MFBool inputOutput field named "keyValue" */
	bool* getKeyValue ();

	/** Return number of primitive values in "keyValue" array */
	int getNumKeyValue ();

	/** Assign boolean array to MFBool inputOutput field named "keyValue" */
	void setKeyValue (bool* values, int size);

	/** Assign single boolean value as the MFBool array for inputOutput field named "keyValue" */
	void setKeyValue (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign boolean value to SFBool inputOnly field named "next" */
	//void setNext (bool value);

	///** Assign boolean value to SFBool inputOnly field named "previous" */
	//void setPrevious (bool value);

	///** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	//void setFraction (float value);

	///** Return array of float results array [] from MFFloat inputOutput field named "key" */
	//float* getKey ();

	///** Return number of primitive values in "key" array */
	//int getNumKey ();

	///** Assign float array [] to MFFloat inputOutput field named "key" */
	//void setKey (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	//void setKey (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.12 BooleanToggle 
/** BooleanToggle defines a concrete node interface that extends interface X3DChildNode. */

class X3D_API BooleanToggle : public X3DChildNode
{

public:
	BooleanToggle();
	virtual ~BooleanToggle();

	/** Assign boolean value to SFBool inputOnly field named "set_boolean" */
	void setBoolean (bool value);

	/** Return boolean result from SFBool inputOutput field named "toggle" */
	bool getToggle ();

	/** Assign boolean value to SFBool inputOutput field named "toggle" */
	void setToggle (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.13 BooleanTrigger 
/** BooleanTrigger defines a concrete node interface that extends interface X3DTriggerNode. */

class X3D_API BooleanTrigger : public X3DTriggerNode
{

public:
	BooleanTrigger();
	virtual ~BooleanTrigger();

	/** Assign double value in seconds to SFTime inputOnly field named "set_triggerTime" */
	void setTriggerTime (double timestamp);

	/** Return boolean result from SFBool outputOnly field named "triggerTrue" */
	bool getTriggerTrue ();

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.14 BoundaryEnhancementVolumeStyle 
/** BoundaryEnhancementVolumeStyle defines a concrete node interface that extends interface X3DComposableVolumeRenderStyleNode. */

class X3D_API BoundaryEnhancementVolumeStyle : public X3DComposableVolumeRenderStyleNode
{

public:
	BoundaryEnhancementVolumeStyle();
	virtual ~BoundaryEnhancementVolumeStyle();

	/** Return float result [] from  type inputOutput field named "boundaryOpacity" */
	float getBoundaryOpacity ();

	/** Assign float value [] to  type inputOutput field named "boundaryOpacity" */
	void setBoundaryOpacity (float value);

	/** Return float result [] from  type inputOutput field named "opacityFactor" */
	float getOpacityFactor ();

	/** Assign float value [] to  type inputOutput field named "opacityFactor" */
	void setOpacityFactor (float value);

	/** Return float result [] from  type inputOutput field named "retainedOpacity" */
	float getRetainedOpacity ();

	/** Assign float value [] to  type inputOutput field named "retainedOpacity" */
	void setRetainedOpacity (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.15 BoundedPhysicsModel 
/** BoundedPhysicsModel defines a concrete node interface that extends interface X3DParticlePhysicsModelNode. */

class X3D_API BoundedPhysicsModel : public X3DParticlePhysicsModelNode
{

public:
	BoundedPhysicsModel();
	virtual ~BoundedPhysicsModel();

	/** Return X3DGeometryNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "geometry" */
	void getGeometry (X3DNode result);

	/** Assign X3DGeometryNode value (using a properly typed node) to SFNode inputOutput field named "geometry" */
	void setGeometry (X3DGeometryNode node);

	/** Assign X3DGeometryNode value (using a properly typed protoInstance) */
	void setGeometry (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.16 Box 
/** Box defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API Box : public X3DGeometryNode
{

public:
	Box();
	virtual ~Box();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "size" */
	void getSize (float* value);

	/** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "size" */
	void setSize (float* value);

	/** Return boolean result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign boolean value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	void setSize(SFVec3f vec);
	SFVec3f getSize();

//Attributes
protected:
	float		size[3];
	bool		solid;
};
 
//C.3.17 CADAssembly 
/** CADAssembly defines a concrete node interface that extends interfaces X3DProductStructureChildNodeX3DGroupingNode. */

class X3D_API CADAssembly : public X3DProductStructureChildNode, public X3DGroupingNode
{

public:
	CADAssembly();
	virtual ~CADAssembly();

	//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DProductStructureChildNode|X3DGroupingNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DNode node);

	///** Assign X3DProductStructureChildNode|X3DGroupingNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DProductStructureChildNode|X3DGroupingNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode node);

	///** Assign X3DProductStructureChildNode|X3DGroupingNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Return array of X3DProductStructureChildNode|X3DGroupingNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DProductStructureChildNode|X3DGroupingNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DNode node);

	///** Assign X3DProductStructureChildNode|X3DGroupingNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return String result [] from SFString inputOutput field named "name" */
	//std::string getName ();

	///** Assign String value [] to SFString inputOutput field named "name" */
	//void setName (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.18 CADFace 
/** CADFace defines a concrete node interface that extends interfaces X3DProductStructureChildNodeX3DBoundedObject. */

class X3D_API CADFace : public X3DProductStructureChildNode, public X3DBoundedObject
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	CADFace();
	virtual ~CADFace();

	/** Return Shape|LOD|Transform result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "shape" */
	void getShape(X3DNode result);

	/** Assign Shape|LOD|Transform value (using a properly typed node) to SFNode inputOutput field named "shape" */
	void setShape(X3DNode node);

	/** Assign Shape|LOD|Transform value (using a properly typed protoInstance) */
	void setShape(X3DPrototypeInstance protoInstance);

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return String result [] from SFString inputOutput field named "name" */
	//std::string getName ();

	///** Assign String value [] to SFString inputOutput field named "name" */
	//void setName (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.19 CADLayer 
/** CADLayer defines a concrete node interface that extends interface X3DGroupingNode. */

class X3D_API CADLayer : public X3DGroupingNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	CADLayer();
	virtual ~CADLayer();

	/** Return String result [] from SFString inputOutput field named "name" */
	std::string getName ();

	/** Assign String value [] to SFString inputOutput field named "name" */
	void setName (std::string value);

	/** Return array of boolean results array from MFBool inputOutput field named "visible" */
	bool* getVisible ();

	/** Return number of primitive values in "visible" array */
	int getNumVisible ();

	/** Assign boolean array to MFBool inputOutput field named "visible" */
	void setVisible (bool* values, int size);

	/** Assign single boolean value as the MFBool array for inputOutput field named "visible" */
	void setVisible (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.20 CADPart 
/** CADPart defines a concrete node interface that extends interfaces X3DProductStructureChildNodeX3DGroupingNode. */

class X3D_API CADPart : public X3DProductStructureChildNode, public X3DGroupingNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	CADPart();
	virtual ~CADPart();

	//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "center" */
	float* getCenter ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "center" */
	void setCenter (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "rotation" */
	float* getRotation ();

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "rotation" */
	void setRotation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "scale" */
	float* getScale ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "scale" */
	void setScale (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "scaleOrientation" */
	float* getScaleOrientation ();

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "scaleOrientation" */
	void setScaleOrientation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "translation" */
	float* getTranslation ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "translation" */
	void setTranslation (float* value);

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	/** Assign CADFace array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (CADFace* nodes);

	/** Assign single CADFace value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	virtual void addChildren (CADFace node);

	/** Assign CADFace array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (X3DPrototypeInstance node);

	/** Assign CADFace array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (X3DNode* nodes);

	/** Assign CADFace array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (CADFace* nodes);

	/** Assign single CADFace value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	void removeChildren (CADFace node);

	/** Assign CADFace array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DPrototypeInstance node);

	/** Assign CADFace array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DNode* nodes);

	/** Return array of CADFace results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	void getChildren (X3DNode* result);

	/** Return number of nodes in "children" array */
	int getNumChildren ();

	/** Assign CADFace array (using a properly typed node array) to MFNode inputOutput field named "children" */
	void setChildren (CADFace* nodes);

	/** Assign single CADFace value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	void setChildren (CADFace node);

	/** Assign CADFace array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	void setChildren (X3DPrototypeInstance node);

	/** Assign CADFace array (using a properly typed node array) to MFNode inputOutput field named "children" */
	void setChildren (X3DNode* nodes);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return String result [] from SFString inputOutput field named "name" */
	//std::string getName ();

	///** Assign String value [] to SFString inputOutput field named "name" */
	//void setName (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.21 CartoonVolumeStyle 
/** CartoonVolumeStyle defines a concrete node interface that extends interface X3DComposableVolumeRenderStyleNode. */

class X3D_API CartoonVolumeStyle : public X3DComposableVolumeRenderStyleNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	CartoonVolumeStyle();
	virtual ~CartoonVolumeStyle();

	/** Return int result using RGB values [0..1] from  type inputOutput field named "colorSteps" */
	int getColorSteps ();

	/** Assign int value using RGB values [0..1] to  type inputOutput field named "colorSteps" */
	void setColorSteps (int color);

	/** Return array of 4-tuple float results array using RGBA values [0..1] from SFColorRGBA inputOutput field named "orthogonalColor" */
	void getOrthogonalColor (float* result);

	/** Assign 4-tuple float array using RGBA values [0..1] to SFColorRGBA inputOutput field named "orthogonalColor" */
	void setOrthogonalColor (float* color);

	/** Return array of 4-tuple float results array using RGBA values [0..1] from SFColorRGBA inputOutput field named "parallelColor" */
	void getParallelColor (float* result);

	/** Assign 4-tuple float array using RGBA values [0..1] to SFColorRGBA inputOutput field named "parallelColor" */
	void setParallelColor (float* color);

	/** Return X3DTexture3DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "surfaceNormals" */
	void getSurfaceNormals (X3DNode result);

	/** Assign X3DTexture3DNode value (using a properly typed node) to SFNode inputOutput field named "surfaceNormals" */
	void setSurfaceNormals (X3DTexture3DNode node);

	/** Assign X3DTexture3DNode value (using a properly typed protoInstance) */
	void setSurfaceNormals (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.22 Circle2D 
/** Circle2D defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API Circle2D : public X3DGeometryNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	Circle2D();
	virtual ~Circle2D();

	/** Return float result [] from  type initializeOnly field named "radius" */
	float getRadius ();

	/** Assign float value [] to  type initializeOnly field named "radius" */
	void setRadius (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.23 ClipPlane 
/** ClipPlane defines a concrete node interface that extends interface X3DChildNode. */

class X3D_API ClipPlane : public X3DChildNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	ClipPlane();
	virtual ~ClipPlane();

	/** Return boolean result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign boolean value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	/** Return array of 4-tuple float results array [] from SFVec4f inputOutput field named "plane" */
	float* getPlane ();

	/** Assign 4-tuple float array [] to SFVec4f inputOutput field named "plane" */
	void setPlane (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.24 CollidableOffset 
/** CollidableOffset defines a concrete node interface that extends interface X3DNBodyCollidableNode. */

class X3D_API CollidableOffset : public X3DNBodyCollidableNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	CollidableOffset();
	virtual ~CollidableOffset();

	/** Return X3DNBodyCollidableNode result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "collidable" */
	void getCollidable (X3DNode result);

	/** Assign X3DNBodyCollidableNode value (using a properly typed node) to SFNode initializeOnly field named "collidable" */
	void setCollidable (X3DNBodyCollidableNode node);

	/** Assign X3DNBodyCollidableNode value (using a properly typed protoInstance) */
	void setCollidable (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "rotation" */
	//float* getRotation ();

	///** Assign 4-tuple float array in radians to SFRotation inputOutput field named "rotation" */
	//void setRotation (float* value);

	///** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "translation" */
	//float* getTranslation ();

	///** Assign 3-tuple float array [] to SFVec3f inputOutput field named "translation" */
	//void setTranslation (float* value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 

//C.3.199 Shape 
/** Shape defines a concrete node interface that extends interface X3DShapeNode. */

class X3D_API Shape : public X3DShapeNode
{

public:
	Shape();
	virtual ~Shape();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return X3DAppearanceNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "appearance" */
	void getAppearance (X3DNode result);

	/** Assign X3DAppearanceNode value (using a properly typed node) to SFNode inputOutput field named "appearance" */
	void setAppearance (X3DAppearanceNode node);

	/** Assign X3DAppearanceNode value (using a properly typed protoInstance) */
	void setAppearance (X3DPrototypeInstance protoInstance);

	/** Return X3DGeometryNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "geometry" */
	void getGeometry (X3DNode result);

	/** Assign X3DGeometryNode value (using a properly typed node) to SFNode inputOutput field named "geometry" */
	void setGeometry (X3DGeometryNode* node);

	/** Assign X3DGeometryNode value (using a properly typed protoInstance) */
	void setGeometry (X3DPrototypeInstance protoInstance);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.25 CollidableShape 
/** CollidableShape defines a concrete node interface that extends interface X3DNBodyCollidableNode. */

class X3D_API CollidableShape : public X3DNBodyCollidableNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	CollidableShape();
	virtual ~CollidableShape();

	/** Return Shape result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "shape" */
	void getShape (X3DNode result);

	/** Assign Shape value (using a properly typed node) to SFNode initializeOnly field named "shape" */
	void setShape (Shape node);

	/** Assign Shape value (using a properly typed protoInstance) */
	void setShape (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "rotation" */
	//float* getRotation ();

	///** Assign 4-tuple float array in radians to SFRotation inputOutput field named "rotation" */
	//void setRotation (float* value);

	///** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "translation" */
	//float* getTranslation ();

	///** Assign 3-tuple float array [] to SFVec3f inputOutput field named "translation" */
	//void setTranslation (float* value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.26 Collision 
/** Collision defines a concrete node interface that extends interfaces X3DGroupingNode X3DSensorNode. */

class X3D_API Collision : public X3DGroupingNode//, public X3DSensorNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	Collision();
	virtual ~Collision();

	//using X3DGroupingNode::setDEF;
	//using X3DGroupingNode::addComments;

	//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return double result in seconds from SFTime outputOnly field named "collideTime" */
	double getCollideTime ();

	/** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	/** Return X3DChildNode result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "proxy" */
	void getProxy (X3DNode result);

	/** Assign X3DChildNode value (using a properly typed node) to SFNode initializeOnly field named "proxy" */
	void setProxy (X3DChildNode node);

	/** Assign X3DChildNode value (using a properly typed protoInstance) */
	void setProxy (X3DPrototypeInstance protoInstance);

	/** Return bool result from SFBool inputOutput field named "enabled" */
	bool getEnabled();

	/** Assign bool value to SFBool inputOutput field named "enabled" */
	void setEnabled(bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
public:
	bool enabled;
};
 
//C.3.27 CollisionCollection 
/** CollisionCollection defines a concrete node interface that extends interface X3DNode. */

class X3D_API CollisionCollection : public X3DNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	CollisionCollection();
	virtual ~CollisionCollection();

	/** Return array of String results array array of appliedParameterValues. Note that strict validation of appliedParameters enumeration values does not occur via schema since MFString allows any value in any order. from MFString inputOutput field named "appliedParameters" */
	std::string* getAppliedParameters ();

	/** Return number of primitive values in "appliedParameters" array */
	int getNumAppliedParameters ();

	/** Assign String array array of appliedParameterValues. Note that strict validation of appliedParameters enumeration values does not occur via schema since MFString allows any value in any order. to MFString inputOutput field named "appliedParameters" */
	void setAppliedParameters (std::string* values);

	/** Assign single String value array of appliedParameterValues. Note that strict validation of appliedParameters enumeration values does not occur via schema since MFString allows any value in any order. as the MFString array for inputOutput field named "appliedParameters" */
	void setAppliedParameters (std::string value);

	/** Return float result [] from  type inputOutput field named "bounce" */
	float getBounce ();

	/** Assign float value [] to  type inputOutput field named "bounce" */
	void setBounce (float value);

	/** Return boolean result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign boolean value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	/** Return array of 2-tuple float results array [] from SFVec2f inputOutput field named "frictionCoefficients" */
	void getFrictionCoefficients (float* result);

	/** Assign 2-tuple float array [] to SFVec2f inputOutput field named "frictionCoefficients" */
	void setFrictionCoefficients (float* value);

	/** Return float result [] from  type inputOutput field named "minBounceSpeed" */
	float getMinBounceSpeed ();

	/** Assign float value [] to  type inputOutput field named "minBounceSpeed" */
	void setMinBounceSpeed (float value);

	/** Return array of 2-tuple float results array [] from SFVec2f inputOutput field named "slipFactors" */
	void getSlipFactors (float* result);

	/** Assign 2-tuple float array [] to SFVec2f inputOutput field named "slipFactors" */
	void setSlipFactors (float* value);

	/** Return float result [] from  type inputOutput field named "softnessConstantForceMix" */
	float getSoftnessConstantForceMix ();

	/** Assign float value [] to  type inputOutput field named "softnessConstantForceMix" */
	void setSoftnessConstantForceMix (float value);

	/** Return float result [] from  type inputOutput field named "softnessErrorCorrection" */
	float getSoftnessErrorCorrection ();

	/** Assign float value [] to  type inputOutput field named "softnessErrorCorrection" */
	void setSoftnessErrorCorrection (float value);

	/** Return array of 2-tuple float results array [] from SFVec2f inputOutput field named "surfaceSpeed" */
	float* getSurfaceSpeed ();

	/** Assign 2-tuple float array [] to SFVec2f inputOutput field named "surfaceSpeed" */
	void setSurfaceSpeed (float* value);

	/** Return array of X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "collidables" */
	void getCollidables (X3DNode* result);

	/** Return number of nodes in "collidables" array */
	int getNumCollidables ();

	/** Assign X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode array (using a properly typed node array) to MFNode inputOutput field named "collidables" */
	void setCollidables (X3DNode* nodes);

	/** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOutput field named "collidables" */
	void setCollidables (X3DNode node);

	/** Assign X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "collidables" */
	void setCollidables (X3DPrototypeInstance node);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.28 CollisionSensor 
/** CollisionSensor defines a concrete node interface that extends interface X3DSensorNode. */

class X3D_API CollisionSensor : public X3DSensorNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	CollisionSensor();
	virtual ~CollisionSensor();

	/** Return array of X3DNBodyCollidableNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode outputOnly field named "intersections" */
	void getIntersections (X3DNode* result);

	/** Return number of nodes in "intersections" array */
	int getNumIntersections ();

	/** Return array of Contact results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode outputOnly field named "contacts" */
	void getContacts (X3DNode* result);

	/** Return number of nodes in "contacts" array */
	int getNumContacts ();

	/** Return CollisionCollection result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "collider" */
	void getCollider (X3DNode result);

	/** Assign CollisionCollection value (using a properly typed node) to SFNode inputOutput field named "collider" */
	void setCollider (CollisionCollection node);

	/** Assign CollisionCollection value (using a properly typed protoInstance) */
	void setCollider (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.29 CollisionSpace 
/** CollisionSpace defines a concrete node interface that extends interface X3DNBodyCollisionSpaceNode. */

class X3D_API CollisionSpace : public X3DNBodyCollisionSpaceNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	CollisionSpace();
	virtual ~CollisionSpace();

	/** Return boolean result from SFBool inputOutput field named "useGeometry" */
	bool getUseGeometry ();

	/** Assign boolean value to SFBool inputOutput field named "useGeometry" */
	void setUseGeometry (bool value);

	/** Return array of X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "collidables" */
	void getCollidables (X3DNode* result);

	/** Return number of nodes in "collidables" array */
	int getNumCollidables ();

	/** Assign X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode array (using a properly typed node array) to MFNode inputOutput field named "collidables" */
	void setCollidables (X3DNode* nodes);

	/** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOutput field named "collidables" */
	void setCollidables (X3DNode node);

	/** Assign X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "collidables" */
	void setCollidables (X3DPrototypeInstance node);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
 
//C.3.31 ColorChaser 
/** ColorChaser defines a concrete node interface that extends interface X3DChaserNode. */

class X3D_API ColorChaser : public X3DChaserNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	ColorChaser();
	virtual ~ColorChaser();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOnly field named "set_destination" */
	void setDestination (float* value);

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOnly field named "set_value" */
	void setValue (float* value);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor outputOnly field named "value_changed" */
	void getValue (float* result);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor initializeOnly field named "initialDestination" */
	float* getInitialDestination ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor initializeOnly field named "initialDestination" */
	void setInitialDestination (float* value);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor initializeOnly field named "initialValue" */
	float* getInitialValue ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor initializeOnly field named "initialValue" */
	void setInitialValue (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from  type initializeOnly field named "duration" */
	//double getDuration ();

	///** Assign double value in seconds to  type initializeOnly field named "duration" */
	//void setDuration (double timestamp);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.32 ColorDamper 
/** ColorDamper defines a concrete node interface that extends interface X3DDamperNode. */

class X3D_API ColorDamper : public X3DDamperNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	ColorDamper();
	virtual ~ColorDamper();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOnly field named "set_destination" */
	void setDestination (float* value);

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOnly field named "set_value" */
	void setValue (float* value);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor outputOnly field named "value_changed" */
	float* getValue ();

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor initializeOnly field named "initialDestination" */
	float* getInitialDestination ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor initializeOnly field named "initialDestination" */
	void setInitialDestination (float* value);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor initializeOnly field named "initialValue" */
	float* getInitialValue ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor initializeOnly field named "initialValue" */
	void setInitialValue (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from  type inputOutput field named "tau" */
	//double getTau ();

	///** Assign double value in seconds to  type inputOutput field named "tau" */
	//void setTau (double timestamp);

	///** Return float result [] from SFFloat inputOutput field named "tolerance" */
	//float getTolerance ();

	///** Assign float value [] to SFFloat inputOutput field named "tolerance" */
	//void setTolerance (float value);

	///** Return int result [] from  type initializeOnly field named "order" */
	//int getOrder ();

	///** Assign int value [] to  type initializeOnly field named "order" */
	//void setOrder (int value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.33 ColorInterpolator 
/** ColorInterpolator defines a concrete node interface that extends interface X3DInterpolatorNode. */

class X3D_API ColorInterpolator : public X3DInterpolatorNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	ColorInterpolator();
	virtual ~ColorInterpolator();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor outputOnly field named "value_changed" */
	//float* getValue ();

	/** Return array of 3-tuple float results array using RGB values [0..1] from MFColor inputOutput field named "keyValue" */
	//MFFloat* getKeyValue ();

	/** Return number of 3-tuple primitive values in "keyValue" array */
	//int getNumKeyValue ();

	/** Assign 3-tuple float array using RGB values [0..1] to MFColor inputOutput field named "keyValue" */
	//void setKeyValue (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	//void setFraction (float value);

	///** Return array of float results array [] from MFFloat inputOutput field named "key" */
	//float* getKey ();

	///** Return number of primitive values in "key" array */
	//int getNumKey ();

	///** Assign float array [] to MFFloat inputOutput field named "key" */
	//void setKey (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	//void setKey (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
public:
	//MFFloat* keyValue;

};
 
//C.3.34 ColorRGBA 
/** ColorRGBA defines a concrete node interface that extends interface X3DColorNode. */

class X3D_API ColorRGBA : public X3DColorNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	ColorRGBA();
	virtual ~ColorRGBA();

public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return array of 4-tuple float results array using RGBA values [0..1] from MFColorRGBA inputOutput field named "color" */
	float* getColor ();

	/** Return number of 4-tuple primitive values in "color" array */
	int getNumColor ();

	/** Assign 4-tuple float array using RGBA values [0..1] to MFColorRGBA inputOutput field named "color" */
	void setColor (float* colors, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
private:
	std::vector<float> color;
};
 
 
class X3D_API SceneGraphStructureStatement : public X3DBaseNode
{

public:
	SceneGraphStructureStatement();
	virtual ~SceneGraphStructureStatement();

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DBaseNode* nodes) ;

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren(X3DBaseNode* child);

//Attributes
public:
	//std::vector<X3DBaseNode*>*	children;

};

//C.3.35 component 
/** component defines a concrete node interface that extends interface SceneGraphStructureStatement. */

class X3D_API component : public SceneGraphStructureStatement
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	component();
	virtual ~component();
	virtual std::string getXMLString();

	/** Return String result [] from componentNames type inputOutput field named "name" */
	std::string getName ();

	/** Assign String value [] to componentNames type inputOutput field named "name" */
	void setName (std::string value);

	/** Return int result [] from  type inputOutput field named "level" */
	int getLevel ();

	/** Assign int value [] to  type inputOutput field named "level" */
	void setLevel (int value);

private:
	int level;
	std::string name;
};
 
//C.3.36 ComposedCubeMapTexture 
/** ComposedCubeMapTexture defines a concrete node interface that extends interface X3DEnvironmentTextureNode. */

class X3D_API ComposedCubeMapTexture : public X3DEnvironmentTextureNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	ComposedCubeMapTexture();
	virtual ~ComposedCubeMapTexture();

	/** Return X3DTexture2DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "back" */
	void getBack (X3DNode result);

	/** Assign X3DTexture2DNode value (using a properly typed node) to SFNode inputOutput field named "back" */
	void setBack (X3DTexture2DNode node);

	/** Assign X3DTexture2DNode value (using a properly typed protoInstance) */
	void setBack (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture2DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "bottom" */
	void getBottom (X3DNode result);

	/** Assign X3DTexture2DNode value (using a properly typed node) to SFNode inputOutput field named "bottom" */
	void setBottom (X3DTexture2DNode node);

	/** Assign X3DTexture2DNode value (using a properly typed protoInstance) */
	void setBottom (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture2DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "front" */
	void getFront (X3DNode result);

	/** Assign X3DTexture2DNode value (using a properly typed node) to SFNode inputOutput field named "front" */
	void setFront (X3DTexture2DNode node);

	/** Assign X3DTexture2DNode value (using a properly typed protoInstance) */
	void setFront (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture2DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "left" */
	void getLeft (X3DNode result);

	/** Assign X3DTexture2DNode value (using a properly typed node) to SFNode inputOutput field named "left" */
	void setLeft (X3DTexture2DNode node);

	/** Assign X3DTexture2DNode value (using a properly typed protoInstance) */
	void setLeft (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture2DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "right" */
	void getRight (X3DNode result);

	/** Assign X3DTexture2DNode value (using a properly typed node) to SFNode inputOutput field named "right" */
	void setRight (X3DTexture2DNode node);

	/** Assign X3DTexture2DNode value (using a properly typed protoInstance) */
	void setRight (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture2DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "top" */
	void getTop (X3DNode result);

	/** Assign X3DTexture2DNode value (using a properly typed node) to SFNode inputOutput field named "top" */
	void setTop (X3DTexture2DNode node);

	/** Assign X3DTexture2DNode value (using a properly typed protoInstance) */
	void setTop (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 

//C.3.197 ShaderPart 
/** ShaderPart defines a concrete node interface that extends interfaces X3DNodeMixedContentX3DUrlObject.
* ShaderPart can contain a CDATA section of plain-text source code. */

class X3D_API ShaderPart : public X3DNodeMixedContent, public X3DUrlObject
{

public:
	ShaderPart();
	virtual ~ShaderPart();

	/** Return array of String results array [] from MFString inputOutput field named "url" */
	std::string* getUrl ();

	/** Return number of primitive values in "url" array */
	int getNumUrl ();

	/** Assign String array [] to MFString inputOutput field named "url" */
	void setUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "url" */
	void setUrl (std::string value);

	/** Return String enumeration result ("VERTEX"|"FRAGMENT") from shaderPartTypeValues type initializeOnly field named "type" */
	std::string getType ();

	/** Assign String enumeration value ("VERTEX"|"FRAGMENT") to shaderPartTypeValues type initializeOnly field named "type" */
	void setType (std::string value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.37 ComposedShader 
/** ComposedShader defines a concrete node interface that extends interfaces X3DShaderNode, X3DProgrammableShaderObject.
* ComposedShader can contain field declarations, but no CDATA section of plain-text source code, since programs are composed from child ShaderPart nodes. */

class X3D_API ComposedShader : public X3DShaderNode, public X3DProgrammableShaderObject
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	ComposedShader();
	virtual ~ComposedShader();

	/** Assign boolean value to SFBool inputOnly field named "activate" */
	void setActivate (bool value);

	/** Return boolean result from SFBool outputOnly field named "isSelected" */
	bool getIsSelected ();

	/** Return boolean result from SFBool outputOnly field named "isValid" */
	bool getIsValid ();

	/** Return String result (enumeration values = "Cg"|"GLSL"|"HLSL"|...) from SFString initializeOnly field named "language" */
	std::string getLanguage ();

	/** Assign String value (enumeration values = "Cg"|"GLSL"|"HLSL"|...) to SFString initializeOnly field named "language" */
	void setLanguage (std::string value);

	/** Return array of ShaderPart results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "parts" */
	void getParts (X3DNode* result);

	/** Return number of nodes in "parts" array */
	int getNumParts ();

	/** Assign ShaderPart array (using a properly typed node array) to MFNode inputOutput field named "parts" */
	void setParts (ShaderPart* nodes);

	/** Assign single ShaderPart value (using a properly typed node) as the MFNode array for inputOutput field named "parts" */
	void setParts (ShaderPart node);

	/** Assign ShaderPart array (using a properly typed protoInstance array) to MFNode inputOutput field named "parts" */
	void setParts (X3DPrototypeInstance node);

	/** Assign ShaderPart array (using a properly typed node array) to MFNode inputOutput field named "parts" */
	void setParts (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.38 ComposedTexture3D 
/** ComposedTexture3D defines a concrete node interface that extends interface X3DTexture3DNode. */

class X3D_API ComposedTexture3D : public X3DTexture3DNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	ComposedTexture3D();
	virtual ~ComposedTexture3D();

	/** Return array of X3DTexture2DNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "texture" */
	void getTexture (X3DNode* result);

	/** Return number of nodes in "texture" array */
	int getNumTexture ();

	/** Assign X3DTexture2DNode array (using a properly typed node array) to MFNode inputOutput field named "texture" */
	void setTexture (X3DTexture2DNode* nodes);

	/** Assign single X3DTexture2DNode value (using a properly typed node) as the MFNode array for inputOutput field named "texture" */
	void setTexture (X3DTexture2DNode node);

	/** Assign X3DTexture2DNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "texture" */
	void setTexture (X3DPrototypeInstance node);

	/** Assign X3DTexture2DNode array (using a properly typed node array) to MFNode inputOutput field named "texture" */
	void setTexture (X3DNode* nodes);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool initializeOnly field named "repeatS" */
	//bool getRepeatS ();

	///** Assign boolean value to SFBool initializeOnly field named "repeatS" */
	//void setRepeatS (bool value);

	///** Return boolean result from SFBool initializeOnly field named "repeatT" */
	//bool getRepeatT ();

	///** Assign boolean value to SFBool initializeOnly field named "repeatT" */
	//void setRepeatT (bool value);

	///** Return boolean result from SFBool initializeOnly field named "repeatR" */
	//bool getRepeatR ();

	///** Assign boolean value to SFBool initializeOnly field named "repeatR" */
	//void setRepeatR (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return TextureProperties result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "textureProperties" */
	//void getTextureProperties (X3DNode result);

	///** Assign TextureProperties value (using a properly typed node) to SFNode initializeOnly field named "textureProperties" */
	//void setTextureProperties (TextureProperties node);

	///** Assign TextureProperties value (using a properly typed protoInstance) */
	//void setTextureProperties (X3DPrototypeInstance protoInstance);
};
 
//C.3.39 ComposedVolumeStyle 
/** ComposedVolumeStyle defines a concrete node interface that extends interface X3DComposableVolumeRenderStyleNode. */

class X3D_API ComposedVolumeStyle : public X3DComposableVolumeRenderStyleNode
{

public:
	ComposedVolumeStyle();
	virtual ~ComposedVolumeStyle();

	/** Return array of X3DComposableVolumeRenderStyleNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "renderStyle" */
	void getRenderStyle (X3DNode* result);

	/** Return number of nodes in "renderStyle" array */
	int getNumRenderStyle ();

	/** Assign X3DComposableVolumeRenderStyleNode array (using a properly typed node array) to MFNode inputOutput field named "renderStyle" */
	void setRenderStyle (X3DComposableVolumeRenderStyleNode* nodes);

	/** Assign single X3DComposableVolumeRenderStyleNode value (using a properly typed node) as the MFNode array for inputOutput field named "renderStyle" */
	void setRenderStyle (X3DComposableVolumeRenderStyleNode node);

	/** Assign X3DComposableVolumeRenderStyleNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "renderStyle" */
	void setRenderStyle (X3DPrototypeInstance node);

	/** Assign X3DComposableVolumeRenderStyleNode array (using a properly typed node array) to MFNode inputOutput field named "renderStyle" */
	void setRenderStyle (X3DNode* nodes);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.40 Cone 
/** Cone defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API Cone : public X3DGeometryNode
{

public:
	Cone();
	virtual ~Cone();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return float result [] from  type initializeOnly field named "bottomRadius" */
	float getBottomRadius ();

	/** Assign float value [] to  type initializeOnly field named "bottomRadius" */
	void setBottomRadius (float value);

	/** Return float result [] from  type initializeOnly field named "height" */
	float getHeight ();

	/** Assign float value [] to  type initializeOnly field named "height" */
	void setHeight (float value);

	/** Return boolean result from SFBool initializeOnly field named "side" */
	bool getSide ();

	/** Assign boolean value to SFBool initializeOnly field named "side" */
	void setSide (bool value);

	/** Return boolean result from SFBool initializeOnly field named "bottom" */
	bool getBottom ();

	/** Assign boolean value to SFBool initializeOnly field named "bottom" */
	void setBottom (bool value);

	/** Return boolean result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign boolean value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

//Attributes
protected:
	float		height;
	float		bottomRadius;
	bool		bottom;
	bool		side;
	bool		solid;
};
 
//C.3.41 ConeEmitter 
/** ConeEmitter defines a concrete node interface that extends interface X3DParticleEmitterNode. */

class X3D_API ConeEmitter : public X3DParticleEmitterNode
{

public:
	ConeEmitter();
	virtual ~ConeEmitter();

	/** Return float result in radians from SFFloat inputOutput field named "angle" */
	float getAngle ();

	/** Assign float value in radians to SFFloat inputOutput field named "angle" */
	void setAngle (float angle);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "direction" */
	float* getDirection ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "direction" */
	void setDirection (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "position" */
	float* getPosition ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "position" */
	void setPosition (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return float result [] from SFFloat inputOutput field named "speed" */
	//float getSpeed ();

	///** Assign float value [] to SFFloat inputOutput field named "speed" */
	//void setSpeed (float value);

	///** Return float result [] from SFFloat inputOutput field named "variation" */
	//float getVariation ();

	///** Assign float value [] to SFFloat inputOutput field named "variation" */
	//void setVariation (float value);

	///** Return float result [] from SFFloat inputOutput field named "mass" */
	//float getMass ();

	///** Assign float value [] to SFFloat inputOutput field named "mass" */
	//void setMass (float value);

	///** Return float result [] from SFFloat initializeOnly field named "surfaceArea" */
	//float getSurfaceArea ();

	///** Assign float value [] to SFFloat initializeOnly field named "surfaceArea" */
	//void setSurfaceArea (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

};
 
//C.3.42 connect 
/** connect defines a concrete node interface that extends interface SceneGraphStructureStatement. */

class X3D_API Connect : public SceneGraphStructureStatement
{

public:
	Connect();
	virtual ~Connect();
	virtual std::string getXMLString();


	/** Return xs:NMTOKEN result [] from xs:NMTOKEN type inputOutput field named "nodeField" */
	//xs:NMTOKEN getNodeField ();
	std::string getNodeField ();

	/** Assign xs:NMTOKEN value [] to xs:NMTOKEN type inputOutput field named "nodeField" */
	//void setNodeField (xs:NMTOKEN value);
	void setNodeField (std::string value);

	/** Return xs:NMTOKEN result [] from xs:NMTOKEN type inputOutput field named "protoField" */
	//xs:NMTOKEN getProtoField ();
	std::string getProtoField ();

	/** Assign xs:NMTOKEN value [] to xs:NMTOKEN type inputOutput field named "protoField" */
	//void setProtoField (xs:NMTOKEN value);
	void setProtoField (std::string value);

	std::string nodeField;
	std::string protoField;
};
 
//C.3.43 Contact 
/** Contact defines a concrete node interface that extends interface X3DNode. */

class X3D_API Contact : public X3DNode
{

public:
	Contact();
	virtual ~Contact();

	/** Return array of String results array array of appliedParameterValues. Note that strict validation of appliedParameters enumeration values does not occur via schema since MFString allows any value in any order. from MFString inputOutput field named "appliedParameters" */
	std::string* getAppliedParameters ();

	/** Return number of primitive values in "appliedParameters" array */
	int getNumAppliedParameters ();

	/** Assign String array array of appliedParameterValues. Note that strict validation of appliedParameters enumeration values does not occur via schema since MFString allows any value in any order. to MFString inputOutput field named "appliedParameters" */
	void setAppliedParameters (std::string* values, int size);

	/** Assign single String value array of appliedParameterValues. Note that strict validation of appliedParameters enumeration values does not occur via schema since MFString allows any value in any order. as the MFString array for inputOutput field named "appliedParameters" */
	void setAppliedParameters (std::string value);

	/** Return float result [] from  type inputOutput field named "bounce" */
	float getBounce ();

	/** Assign float value [] to  type inputOutput field named "bounce" */
	void setBounce (float value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "contactNormal" */
	float* getContactNormal ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "contactNormal" */
	void setContactNormal (float* value);

	/** Return float result [] from SFFloat inputOutput field named "depth" */
	float getDepth ();

	/** Assign float value [] to SFFloat inputOutput field named "depth" */
	void setDepth (float value);

	/** Return array of 2-tuple float results array [] from SFVec2f inputOutput field named "frictionCoefficients" */
	float* getFrictionCoefficients ();

	/** Assign 2-tuple float array [] to SFVec2f inputOutput field named "frictionCoefficients" */
	void setFrictionCoefficients (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "frictionDirection" */
	float* getFrictionDirection ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "frictionDirection" */
	void setFrictionDirection (float* value);

	/** Return float result [] from  type inputOutput field named "minBounceSpeed" */
	float getMinBounceSpeed ();

	/** Assign float value [] to  type inputOutput field named "minBounceSpeed" */
	void setMinBounceSpeed (float value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "position" */
	SFVec3f getPosition ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "position" */
	void setPosition (float* value);

	/** Return array of 2-tuple float results array [] from SFVec2f inputOutput field named "slipCoefficients" */
	float* getSlipCoefficients ();

	/** Assign 2-tuple float array [] to SFVec2f inputOutput field named "slipCoefficients" */
	void setSlipCoefficients (float* value);

	/** Return float result [] from  type inputOutput field named "softnessConstantForceMix" */
	float getSoftnessConstantForceMix ();

	/** Assign float value [] to  type inputOutput field named "softnessConstantForceMix" */
	void setSoftnessConstantForceMix (float value);

	/** Return float result [] from  type inputOutput field named "softnessErrorCorrection" */
	float getSoftnessErrorCorrection ();

	/** Assign float value [] to  type inputOutput field named "softnessErrorCorrection" */
	void setSoftnessErrorCorrection (float value);

	/** Return array of 2-tuple float results array [] from SFVec2f inputOutput field named "surfaceSpeed" */
	float* getSurfaceSpeed ();

	/** Assign 2-tuple float array [] to SFVec2f inputOutput field named "surfaceSpeed" */
	void setSurfaceSpeed (float* value);

	/** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body1" */
	void getBody1 (X3DNode result);

	/** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body1" */
	void setBody1 (RigidBody node);

	/** Assign RigidBody value (using a properly typed protoInstance) */
	void setBody1 (X3DPrototypeInstance protoInstance);

	/** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body2" */
	void getBody2 (X3DNode result);

	/** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body2" */
	void setBody2 (RigidBody node);

	/** Assign RigidBody value (using a properly typed protoInstance) */
	void setBody2 (X3DPrototypeInstance protoInstance);

	/** Return X3DNBodyCollidableNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "geometry1" */
	void getGeometry1 (X3DNode result);

	/** Assign X3DNBodyCollidableNode value (using a properly typed node) to SFNode inputOutput field named "geometry1" */
	void setGeometry1 (X3DNBodyCollidableNode node);

	/** Assign X3DNBodyCollidableNode value (using a properly typed protoInstance) */
	void setGeometry1 (X3DPrototypeInstance protoInstance);

	/** Return X3DNBodyCollidableNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "geometry2" */
	void getGeometry2 (X3DNode result);

	/** Assign X3DNBodyCollidableNode value (using a properly typed node) to SFNode inputOutput field named "geometry2" */
	void setGeometry2 (X3DNBodyCollidableNode node);

	/** Assign X3DNBodyCollidableNode value (using a properly typed protoInstance) */
	void setGeometry2 (X3DPrototypeInstance protoInstance);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
public:
	SFVec3f position;
};
 
//C.3.44 Contour2D 
/** Contour2D defines a concrete node interface that extends interface X3DNode. */

class X3D_API Contour2D : public X3DNode
{

public:
	Contour2D();
	virtual ~Contour2D();

	/** Assign NurbsCurve2D|ContourPolyline2D array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (X3DNode* nodes);

	/** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	virtual void addChildren (X3DNode node);

	/** Assign NurbsCurve2D|ContourPolyline2D array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (X3DPrototypeInstance node);

	/** Assign NurbsCurve2D|ContourPolyline2D array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DNode* nodes);

	/** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	void removeChildren (X3DNode node);

	/** Assign NurbsCurve2D|ContourPolyline2D array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DPrototypeInstance node);

	/** Return array of NurbsCurve2D|ContourPolyline2D results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	void getChildren (X3DNode* result);

	/** Return number of nodes in "children" array */
	int getNumChildren ();

	/** Assign NurbsCurve2D|ContourPolyline2D array (using a properly typed node array) to MFNode inputOutput field named "children" */
	void setChildren (X3DNode* nodes);

	/** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	void setChildren (X3DNode node);

	/** Assign NurbsCurve2D|ContourPolyline2D array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	void setChildren (X3DPrototypeInstance node);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.45 ContourPolyline2D 
/** ContourPolyline2D defines a concrete node interface that extends interface X3DNurbsControlCurveNode. */

class X3D_API ContourPolyline2D : public X3DNurbsControlCurveNode
{

public:
	ContourPolyline2D();
	virtual ~ContourPolyline2D();

	/** Return array of 2-tuple double results array [] from MFVec2d inputOutput field named "controlPoint" */
	double* getControlPoint ();

	/** Return number of 2-tuple primitive values in "controlPoint" array */
	int getNumControlPoint ();

	/** Assign 2-tuple double array [] to MFVec2d inputOutput field named "controlPoint" */
	void setControlPoint (double* values, int size);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.47 CoordinateChaser 
/** CoordinateChaser defines a concrete node interface that extends interface X3DChaserNode. */

class X3D_API CoordinateChaser : public X3DChaserNode
{

public:
	CoordinateChaser();
	virtual ~CoordinateChaser();

	/** Assign 3-tuple float array [] to MFVec3f inputOnly field named "set_destination" */
	void setDestination (float* values);

	/** Assign 3-tuple float array [] to MFVec3f inputOnly field named "set_value" */
	void setValue (float* values);

	/** Return array of 3-tuple float results array [] from MFVec3f outputOnly field named "value_changed" */
	float* getValue ();

	/** Return number of 3-tuple primitive values in "value_changed" array */
	int getNumValue ();

	/** Return array of 3-tuple float results array [] from MFVec3f initializeOnly field named "initialDestination" */
	float* getInitialDestination ();

	/** Return number of 3-tuple primitive values in "initialDestination" array */
	int getNumInitialDestination ();

	/** Assign 3-tuple float array [] to MFVec3f initializeOnly field named "initialDestination" */
	void setInitialDestination (float* values, int size);

	/** Return array of 3-tuple float results array [] from MFVec3f initializeOnly field named "initialValue" */
	float* getInitialValue ();

	/** Return number of 3-tuple primitive values in "initialValue" array */
	int getNumInitialValue ();

	/** Assign 3-tuple float array [] to MFVec3f initializeOnly field named "initialValue" */
	void setInitialValue (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from  type initializeOnly field named "duration" */
	//double getDuration ();

	///** Assign double value in seconds to  type initializeOnly field named "duration" */
	//void setDuration (double timestamp);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.48 CoordinateDamper 
/** CoordinateDamper defines a concrete node interface that extends interface X3DDamperNode. */

class X3D_API CoordinateDamper : public X3DDamperNode
{

public:
	CoordinateDamper();
	virtual ~CoordinateDamper();

	/** Assign 3-tuple float array [] to MFVec3f inputOnly field named "set_destination" */
	void setDestination (float* values, int size);

	/** Assign 3-tuple float array [] to MFVec3f inputOnly field named "set_value" */
	void setValue (float* values, int size);

	/** Return array of 3-tuple float results array [] from MFVec3f outputOnly field named "value_changed" */
	float* getValue ();

	/** Return number of 3-tuple primitive values in "value_changed" array */
	int getNumValue ();

	/** Return array of 3-tuple float results array [] from MFVec3f initializeOnly field named "initialDestination" */
	float* getInitialDestination ();

	/** Return number of 3-tuple primitive values in "initialDestination" array */
	int getNumInitialDestination ();

	/** Assign 3-tuple float array [] to MFVec3f initializeOnly field named "initialDestination" */
	void setInitialDestination (float* values, int size);

	/** Return array of 3-tuple float results array [] from MFVec3f initializeOnly field named "initialValue" */
	float* getInitialValue ();

	/** Return number of 3-tuple primitive values in "initialValue" array */
	int getNumInitialValue ();

	/** Assign 3-tuple float array [] to MFVec3f initializeOnly field named "initialValue" */
	void setInitialValue (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from  type inputOutput field named "tau" */
	//double getTau ();

	///** Assign double value in seconds to  type inputOutput field named "tau" */
	//void setTau (double timestamp);

	///** Return float result [] from SFFloat inputOutput field named "tolerance" */
	//float getTolerance ();

	///** Assign float value [] to SFFloat inputOutput field named "tolerance" */
	//void setTolerance (float value);

	///** Return int result [] from  type initializeOnly field named "order" */
	//int getOrder ();

	///** Assign int value [] to  type initializeOnly field named "order" */
	//void setOrder (int value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.49 CoordinateDouble 
/** CoordinateDouble defines a concrete node interface that extends interface X3DCoordinateNode. */

class X3D_API CoordinateDouble : public X3DCoordinateNode
{

public:
	CoordinateDouble();
	virtual ~CoordinateDouble();

	/** Return array of 3-tuple double results array [] from MFVec3d inputOutput field named "point" */
	double* getPoint ();

	/** Return number of 3-tuple primitive values in "point" array */
	int getNumPoint ();

	/** Assign 3-tuple double array [] to MFVec3d inputOutput field named "point" */
	void setPoint (double* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.50 CoordinateInterpolator 
/** CoordinateInterpolator defines a concrete node interface that extends interface X3DInterpolatorNode. */

class X3D_API CoordinateInterpolator : public X3DInterpolatorNode
{

public:
	CoordinateInterpolator();
	virtual ~CoordinateInterpolator();
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return array of 3-tuple float results array [] from MFVec3f outputOnly field named "value_changed" */
	//float* getValue ();

	/** Return number of 3-tuple primitive values in "value_changed" array */
	//int getNumValue ();

	/** Return array of 3-tuple float results array [] from MFVec3f inputOutput field named "keyValue" */
	//float* getKeyValue ();

	/** Return number of 3-tuple primitive values in "keyValue" array */
	//int getNumKeyValue ();

	/** Assign 3-tuple float array [] to MFVec3f inputOutput field named "keyValue" */
	//void setKeyValue (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	//void setFraction (float value);

	///** Return array of float results array [] from MFFloat inputOutput field named "key" */
	//float* getKey ();

	///** Return number of primitive values in "key" array */
	//int getNumKey ();

	///** Assign float array [] to MFFloat inputOutput field named "key" */
	//void setKey (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	//void setKey (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.51 CoordinateInterpolator2D 
/** CoordinateInterpolator2D defines a concrete node interface that extends interface X3DInterpolatorNode. */

class X3D_API CoordinateInterpolator2D : public X3DInterpolatorNode
{

public:
	CoordinateInterpolator2D();
	virtual ~CoordinateInterpolator2D();

	/** Return array of 3-tuple double results array [] from MFVec3d outputOnly field named "value_changed" */
	double* getValue ();

	/** Return number of 3-tuple primitive values in "value_changed" array */
	int getNumValue ();

	/** Return array of 2-tuple float results array [] from MFVec2f inputOutput field named "keyValue" */
	float* getKeyValue ();

	/** Return number of 2-tuple primitive values in "keyValue" array */
	int getNumKeyValue ();

	/** Assign 2-tuple float array [] to MFVec2f inputOutput field named "keyValue" */
	void setKeyValue (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	//void setFraction (float value);

	///** Return array of float results array [] from MFFloat inputOutput field named "key" */
	//float* getKey ();

	///** Return number of primitive values in "key" array */
	//int getNumKey ();

	///** Assign float array [] to MFFloat inputOutput field named "key" */
	//void setKey (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	//void setKey (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.52 Cylinder 
/** Cylinder defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API Cylinder : public X3DGeometryNode
{

public:
	Cylinder();
	virtual ~Cylinder();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return boolean result from SFBool initializeOnly field named "bottom" */
	bool getBottom ();

	/** Assign boolean value to SFBool initializeOnly field named "bottom" */
	void setBottom (bool value);

	/** Return float result [] from  type initializeOnly field named "height" */
	float getHeight ();

	/** Assign float value [] to  type initializeOnly field named "height" */
	void setHeight (float value);

	/** Return float result [] from  type initializeOnly field named "radius" */
	float getRadius ();

	/** Assign float value [] to  type initializeOnly field named "radius" */
	void setRadius (float value);

	/** Return boolean result from SFBool initializeOnly field named "side" */
	bool getSide ();

	/** Assign boolean value to SFBool initializeOnly field named "side" */
	void setSide (bool value);

	/** Return boolean result from SFBool initializeOnly field named "top" */
	bool getTop ();

	/** Assign boolean value to SFBool initializeOnly field named "top" */
	void setTop (bool value);

	/** Return boolean result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign boolean value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

//Attributes
protected:
	float		height;
	float		radius;
	bool		bottom;
	bool		side;
	bool		top;
	bool		solid;
};
 
//C.3.53 CylinderSensor 
/** CylinderSensor defines a concrete node interface that extends interface X3DDragSensorNode. */

class X3D_API CylinderSensor : public X3DDragSensorNode
{

public:
	CylinderSensor();
	virtual ~CylinderSensor();

	/** Return array of 4-tuple float results array in radians from SFRotation outputOnly field named "rotation_changed" */
	float* getRotation ();

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "axisRotation" */
	float* getAxisRotation ();

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "axisRotation" */
	void setAxisRotation (float* value);

	/** Return float result in radians from SFFloat inputOutput field named "diskAngle" */
	float getDiskAngle ();

	/** Assign float value in radians to SFFloat inputOutput field named "diskAngle" */
	void setDiskAngle (float angle);

	/** Return float result in radians from SFFloat inputOutput field named "maxAngle" */
	float getMaxAngle ();

	/** Assign float value in radians to SFFloat inputOutput field named "maxAngle" */
	void setMaxAngle (float angle);

	/** Return float result in radians from SFFloat inputOutput field named "minAngle" */
	float getMinAngle ();

	/** Assign float value in radians to SFFloat inputOutput field named "minAngle" */
	void setMinAngle (float angle);

	/** Return float result [] from SFFloat inputOutput field named "offset" */
	float getOffset ();

	/** Assign float value [] to SFFloat inputOutput field named "offset" */
	void setOffset (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "trackPoint_changed" */
	//float* getTrackPoint ();

	///** Return boolean result from SFBool inputOutput field named "autoOffset" */
	//bool getAutoOffset ();

	///** Assign boolean value to SFBool inputOutput field named "autoOffset" */
	//void setAutoOffset (bool value);

	///** Return boolean result from SFBool outputOnly field named "isOver" */
	//bool getIsOver ();

	///** Return String result [] from SFString inputOutput field named "description" */
	//std::string getDescription ();

	///** Assign String value [] to SFString inputOutput field named "description" */
	//void setDescription (std::string value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.54 DirectionalLight 
/** DirectionalLight defines a concrete node interface that extends interface X3DLightNode. */

class X3D_API DirectionalLight : public X3DLightNode
{

public:
	DirectionalLight();
	virtual ~DirectionalLight();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "direction" */
	void getDirection (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "direction" */
	void setDirection (float* value);

	/** Return boolean result from SFBool inputOutput field named "global" */
	bool getGlobal ();

	/** Assign boolean value to SFBool inputOutput field named "global" */
	void setGlobal (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return float result [] from intensityType type inputOutput field named "ambientIntensity" */
	//float getAmbientIntensity ();

	///** Assign float value [] to intensityType type inputOutput field named "ambientIntensity" */
	//void setAmbientIntensity (float value);

	///** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "color" */
	//SFColor getColor ();

	///** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "color" */
	//void setColor (SFColor color);

	///** Return float result [] from intensityType type inputOutput field named "intensity" */
	//float getIntensity ();

	///** Assign float value [] to intensityType type inputOutput field named "intensity" */
	//void setIntensity (float value);

	///** Return boolean result from SFBool inputOutput field named "on" */
	//bool getOn ();

	///** Assign boolean value to SFBool inputOutput field named "on" */
	//void setOn (bool value);

	/** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	void	setDirection(SFVec3f Direction);
//Attributes
public:
	float	direction[3];
	float	color[3];
};
 
//C.3.56 DISEntityTypeMapping 
/** DISEntityTypeMapping defines a concrete node interface that extends interfaces X3DNodeX3DChildNode, X3DUrlObject. */

class X3D_API DISEntityTypeMapping : public X3DChildNode, public X3DUrlObject
{

public:
	DISEntityTypeMapping();
	virtual ~DISEntityTypeMapping();

	/** Return array of String results array [] from MFString inputOutput field named "url" */
	std::string* getUrl ();

	/** Return number of primitive values in "url" array */
	int getNumUrl ();

	/** Assign String array [] to MFString inputOutput field named "url" */
	void setUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "url" */
	void setUrl (std::string value);

	/** Return int result [] from  type initializeOnly field named "category" */
	int getCategory ();

	/** Assign int value [] to  type initializeOnly field named "category" */
	void setCategory (int value);

	/** Return int result [] from  type initializeOnly field named "country" */
	int getCountry ();

	/** Assign int value [] to  type initializeOnly field named "country" */
	void setCountry (int value);

	/** Return int result [] from  type initializeOnly field named "domain" */
	int getDomain ();

	/** Assign int value [] to  type initializeOnly field named "domain" */
	void setDomain (int value);

	/** Return int result [] from  type initializeOnly field named "extra" */
	int getExtra ();

	/** Assign int value [] to  type initializeOnly field named "extra" */
	void setExtra (int value);

	/** Return int result [] from  type initializeOnly field named "kind" */
	int getKind ();

	/** Assign int value [] to  type initializeOnly field named "kind" */
	void setKind (int value);

	/** Return int result [] from  type initializeOnly field named "specific" */
	int getSpecific ();

	/** Assign int value [] to  type initializeOnly field named "specific" */
	void setSpecific (int value);

	/** Return int result [] from  type initializeOnly field named "subcategory" */
	int getSubcategory ();

	/** Assign int value [] to  type initializeOnly field named "subcategory" */
	void setSubcategory (int value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.55 DISEntityManager 
/** DISEntityManager defines a concrete node interface that extends interface X3DChildNode. */

class X3D_API DISEntityManager : public X3DChildNode
{

public:
	DISEntityManager();
	virtual ~DISEntityManager();

	/** Return String result [] from SFString inputOutput field named "address" */
	std::string getAddress ();

	/** Assign String value [] to SFString inputOutput field named "address" */
	void setAddress (std::string value);

	/** Return int result [] from SFInt32 inputOutput field named "applicationID" */
	int getApplicationID ();

	/** Assign int value [] to SFInt32 inputOutput field named "applicationID" */
	void setApplicationID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "port" */
	int getPort ();

	/** Assign int value [] to SFInt32 inputOutput field named "port" */
	void setPort (int value);

	/** Return int result [] from SFInt32 inputOutput field named "siteID" */
	int getSiteID ();

	/** Assign int value [] to SFInt32 inputOutput field named "siteID" */
	void setSiteID (int value);

	/** Return array of EspduTransform results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode outputOnly field named "addedEntities" */
	void getAddedEntities (X3DNode* result);

	/** Return number of nodes in "addedEntities" array */
	int getNumAddedEntities ();

	/** Return array of EspduTransform results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode outputOnly field named "removedEntities" */
	void getRemovedEntities (X3DNode* result);

	/** Return number of nodes in "removedEntities" array */
	int getNumRemovedEntities ();

	/** Return array of DISEntityTypeMapping results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "mapping" */
	void getMapping (X3DNode* result);

	/** Return number of nodes in "mapping" array */
	int getNumMapping ();

	/** Assign DISEntityTypeMapping array (using a properly typed node array) to MFNode inputOutput field named "mapping" */
	void setMapping (DISEntityTypeMapping* nodes);

	/** Assign single DISEntityTypeMapping value (using a properly typed node) as the MFNode array for inputOutput field named "mapping" */
	void setMapping (DISEntityTypeMapping node);

	/** Assign DISEntityTypeMapping array (using a properly typed protoInstance array) to MFNode inputOutput field named "mapping" */
	void setMapping (X3DPrototypeInstance node);

	/** Assign DISEntityTypeMapping array (using a properly typed node array) to MFNode inputOutput field named "mapping" */
	void setMapping (X3DNode* nodes);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.57 Disk2D 
/** Disk2D defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API Disk2D : public X3DGeometryNode
{

public:
	Disk2D();
	virtual ~Disk2D();

	/** Return float result [] from  type initializeOnly field named "innerRadius" */
	float getInnerRadius ();

	/** Assign float value [] to  type initializeOnly field named "innerRadius" */
	void setInnerRadius (float value);

	/** Return float result [] from  type initializeOnly field named "outerRadius" */
	float getOuterRadius ();

	/** Assign float value [] to  type initializeOnly field named "outerRadius" */
	void setOuterRadius (float value);

	/** Return boolean result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign boolean value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.58 DoubleAxisHingeJoint 
/** DoubleAxisHingeJoint defines a concrete node interface that extends interface X3DRigidJointNode. */

class X3D_API DoubleAxisHingeJoint : public X3DRigidJointNode
{

public:
	DoubleAxisHingeJoint();
	virtual ~DoubleAxisHingeJoint();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "body1AnchorPoint" */
	float* getBody1AnchorPoint ();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "body1Axis" */
	float* getBody1Axis ();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "body2AnchorPoint" */
	float* getBody2AnchorPoint ();

	/** Return float result [] from SFFloat outputOnly field named "body2Axis" */
	float getBody2Axis ();

	/** Return float result in radians from SFFloat outputOnly field named "hinge1Angle" */
	float getHinge1Angle ();

	/** Return float result in radians from SFFloat outputOnly field named "hinge1AngleRate" */
	float getHinge1AngleRate ();

	/** Return float result in radians from SFFloat outputOnly field named "hinge2Angle" */
	float getHinge2Angle ();

	/** Return float result in radians from SFFloat outputOnly field named "hinge2AngleRate" */
	float getHinge2AngleRate ();

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "anchorPoint" */
	float* getAnchorPoint ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "anchorPoint" */
	void setAnchorPoint (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "axis1" */
	float* getAxis1 ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "axis1" */
	void setAxis1 (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "axis2" */
	float* getAxis2 ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "axis2" */
	void setAxis2 (float* value);

	/** Return float result [] from SFFloat inputOutput field named "desiredAngularVelocity1" */
	float getDesiredAngularVelocity1 ();

	/** Assign float value [] to SFFloat inputOutput field named "desiredAngularVelocity1" */
	void setDesiredAngularVelocity1 (float value);

	/** Return float result [] from SFFloat inputOutput field named "desiredAngularVelocity2" */
	float getDesiredAngularVelocity2 ();

	/** Assign float value [] to SFFloat inputOutput field named "desiredAngularVelocity2" */
	void setDesiredAngularVelocity2 (float value);

	/** Return float result in radians from SFFloat inputOutput field named "maxAngle1" */
	float getMaxAngle1 ();

	/** Assign float value in radians to SFFloat inputOutput field named "maxAngle1" */
	void setMaxAngle1 (float angle);

	/** Return float result [] from SFFloat inputOutput field named "maxTorque1" */
	float getMaxTorque1 ();

	/** Assign float value [] to SFFloat inputOutput field named "maxTorque1" */
	void setMaxTorque1 (float value);

	/** Return float result [] from SFFloat inputOutput field named "maxTorque2" */
	float getMaxTorque2 ();

	/** Assign float value [] to SFFloat inputOutput field named "maxTorque2" */
	void setMaxTorque2 (float value);

	/** Return float result in radians from SFFloat inputOutput field named "minAngle1" */
	float getMinAngle1 ();

	/** Assign float value in radians to SFFloat inputOutput field named "minAngle1" */
	void setMinAngle1 (float angle);

	/** Return float result [] from SFFloat inputOutput field named "stop1Bounce" */
	float getStop1Bounce ();

	/** Assign float value [] to SFFloat inputOutput field named "stop1Bounce" */
	void setStop1Bounce (float value);

	/** Return float result [] from SFFloat inputOutput field named "stop1ConstantForceMix" */
	float getStop1ConstantForceMix ();

	/** Assign float value [] to SFFloat inputOutput field named "stop1ConstantForceMix" */
	void setStop1ConstantForceMix (float value);

	/** Return float result [] from SFFloat inputOutput field named "stop1ErrorCorrection" */
	float getStop1ErrorCorrection ();

	/** Assign float value [] to SFFloat inputOutput field named "stop1ErrorCorrection" */
	void setStop1ErrorCorrection (float value);

	/** Return float result [] from SFFloat inputOutput field named "suspensionErrorCorrection" */
	float getSuspensionErrorCorrection ();

	/** Assign float value [] to SFFloat inputOutput field named "suspensionErrorCorrection" */
	void setSuspensionErrorCorrection (float value);

	/** Return float result [] from SFFloat inputOutput field named "suspensionForce" */
	float getSuspensionForce ();

	/** Assign float value [] to SFFloat inputOutput field named "suspensionForce" */
	void setSuspensionForce (float value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return array of String results array [] from MFString inputOutput field named "forceOutput" */
	//std::string* getForceOutput ();

	///** Return number of primitive values in "forceOutput" array */
	//int getNumForceOutput ();

	///** Assign String array [] to MFString inputOutput field named "forceOutput" */
	//void setForceOutput (std::string* values, int size);

	///** Assign single String value [] as the MFString array for inputOutput field named "forceOutput" */
	//void setForceOutput (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body1" */
	//void getBody1 (X3DNode result);

	///** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body1" */
	//void setBody1 (RigidBody node);

	///** Assign RigidBody value (using a properly typed protoInstance) */
	//void setBody1 (X3DPrototypeInstance protoInstance);

	///** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body2" */
	//void getBody2 (X3DNode result);

	///** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body2" */
	//void setBody2 (RigidBody node);

	///** Assign RigidBody value (using a properly typed protoInstance) */
	//void setBody2 (X3DPrototypeInstance protoInstance);
};
 
//C.3.59 EaseInEaseOut 
/** EaseInEaseOut defines a concrete node interface that extends interface X3DChildNode. */

class X3D_API EaseInEaseOut : public X3DChildNode
{

public:
	EaseInEaseOut();
	virtual ~EaseInEaseOut();

	/** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	void setFraction (float value);

	/** Return float result [] from SFFloat outputOnly field named "modifiedFraction_changed" */
	float getModifiedFraction ();

	/** Return array of 2-tuple float results array [] from MFVec2f inputOutput field named "easeInEaseOut" */
	float* getEaseInEaseOut ();

	/** Return number of 2-tuple primitive values in "easeInEaseOut" array */
	int getNumEaseInEaseOut ();

	/** Assign 2-tuple float array [] to MFVec2f inputOutput field named "easeInEaseOut" */
	void setEaseInEaseOut (float* values, int size);

	/** Return array of float results array [] from MFFloat inputOutput field named "key" */
	float* getKey ();

	/** Return number of primitive values in "key" array */
	int getNumKey ();

	/** Assign float array [] to MFFloat inputOutput field named "key" */
	void setKey (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	void setKey (float value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.60 EdgeEnhancementVolumeStyle 
/** EdgeEnhancementVolumeStyle defines a concrete node interface that extends interface X3DComposableVolumeRenderStyleNode. */

class X3D_API EdgeEnhancementVolumeStyle : public X3DComposableVolumeRenderStyleNode
{

public:
	EdgeEnhancementVolumeStyle();
	virtual ~EdgeEnhancementVolumeStyle();

	/** Return array of 4-tuple float results array using RGBA values [0..1] from SFColorRGBA inputOutput field named "edgeColor" */
	float* getEdgeColor ();

	/** Assign 4-tuple float array using RGBA values [0..1] to SFColorRGBA inputOutput field named "edgeColor" */
	void setEdgeColor (float* color);

	/** Return float result [] from  type inputOutput field named "gradientThreshold" */
	float getGradientThreshold ();

	/** Assign float value [] to  type inputOutput field named "gradientThreshold" */
	void setGradientThreshold (float value);

	/** Return X3DTexture3DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "surfaceNormals" */
	void getSurfaceNormals (X3DNode result);

	/** Assign X3DTexture3DNode value (using a properly typed node) to SFNode inputOutput field named "surfaceNormals" */
	void setSurfaceNormals (X3DTexture3DNode node);

	/** Assign X3DTexture3DNode value (using a properly typed protoInstance) */
	void setSurfaceNormals (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.61 ElevationGrid 
/** ElevationGrid defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API ElevationGrid : public X3DGeometryNode
{

public:
	ElevationGrid();
	virtual ~ElevationGrid();

public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Assign float array [] to MFFloat inputOnly field named "set_height" */
	void setHeight (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOnly field named "set_height" */
	void setHeight (float value);

	/** Return array of float results array [] from MFFloat initializeOnly field named "height" */
	float* getHeight ();

	/** Return number of primitive values in "height" array */
	int getNumHeight ();

	/** Return boolean result from SFBool initializeOnly field named "ccw" */
	bool getCcw ();

	/** Assign boolean value to SFBool initializeOnly field named "ccw" */
	void setCcw (bool value);

	/** Return boolean result from SFBool initializeOnly field named "colorPerVertex" */
	bool getColorPerVertex ();

	/** Assign boolean value to SFBool initializeOnly field named "colorPerVertex" */
	void setColorPerVertex (bool color);

	/** Return float result in radians from  type initializeOnly field named "creaseAngle" */
	float getCreaseAngle ();

	/** Assign float value in radians to  type initializeOnly field named "creaseAngle" */
	void setCreaseAngle (float angle);

	/** Return boolean result from SFBool initializeOnly field named "normalPerVertex" */
	bool getNormalPerVertex ();

	/** Assign boolean value to SFBool initializeOnly field named "normalPerVertex" */
	void setNormalPerVertex (bool value);

	/** Return boolean result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign boolean value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	/** Return int result [] from SFInt32 initializeOnly field named "xDimension" */
	int getXDimension ();

	/** Assign int value [] to SFInt32 initializeOnly field named "xDimension" */
	void setXDimension (int value);

	/** Return float result [] from  type initializeOnly field named "xSpacing" */
	float getXSpacing ();

	/** Assign float value [] to  type initializeOnly field named "xSpacing" */
	void setXSpacing (float value);

	/** Return int result [] from SFInt32 initializeOnly field named "zDimension" */
	int getZDimension ();

	/** Assign int value [] to SFInt32 initializeOnly field named "zDimension" */
	void setZDimension (int value);

	/** Return float result [] from  type initializeOnly field named "zSpacing" */
	float getZSpacing ();

	/** Assign float value [] to  type initializeOnly field named "zSpacing" */
	void setZSpacing (float value);

	/** Return array of X3DVertexAttributeNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "attrib" */
	void getAttrib (X3DNode* result);

	/** Return number of nodes in "attrib" array */
	int getNumAttrib ();

	/** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	void setAttrib (X3DVertexAttributeNode* nodes);

	/** Assign single X3DVertexAttributeNode value (using a properly typed node) as the MFNode array for inputOutput field named "attrib" */
	void setAttrib (X3DVertexAttributeNode node);

	/** Assign X3DVertexAttributeNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "attrib" */
	void setAttrib (X3DPrototypeInstance node);

	/** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	void setAttrib (X3DNode* nodes);

	/** Return X3DColorNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "color" */
	void getColor (X3DNode result);

	/** Assign X3DColorNode value (using a properly typed node) to SFNode inputOutput field named "color" */
	void setColor (X3DColorNode color);

	/** Assign X3DColorNode value (using a properly typed protoInstance) */
	void setColor (X3DPrototypeInstance protoInstance);

	/** Return FogCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fogCoord" */
	void getFogCoord (X3DNode result);

	/** Assign FogCoordinate value (using a properly typed node) to SFNode inputOutput field named "fogCoord" */
	void setFogCoord (FogCoordinate node);

	/** Assign FogCoordinate value (using a properly typed protoInstance) */
	void setFogCoord (X3DPrototypeInstance protoInstance);

	/** Return X3DNormalNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "normal" */
	void getNormal (X3DNode result);

	/** Assign X3DNormalNode value (using a properly typed node) to SFNode inputOutput field named "normal" */
	void setNormal (X3DNormalNode node);

	/** Assign X3DNormalNode value (using a properly typed protoInstance) */
	void setNormal (X3DPrototypeInstance protoInstance);

	/** Return X3DTextureCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texCoord" */
	void getTexCoord (X3DNode result);

	/** Assign X3DTextureCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "texCoord" */
	void setTexCoord (X3DTextureCoordinateNode node);

	/** Assign X3DTextureCoordinateNode value (using a properly typed protoInstance) */
	void setTexCoord (X3DPrototypeInstance protoInstance);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	BOOL ccw;
	BOOL colorPerVertex;
	float creaseAngle;
	BOOL normalPerVertex;
	BOOL solid;
	int xDimension;
	float xSpacing;
	int zDimension;
	float zSpacing;

	std::vector<float> height;

};
 
//C.3.62 EspduTransform 
/** EspduTransform defines a concrete node interface that extends interfaces X3DGroupingNodeX3DNetworkSensorNode. */

class X3D_API EspduTransform : public X3DGroupingNode, public X3DNetworkSensorNode
{

public:
	EspduTransform();
	virtual ~EspduTransform();

	//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Assign float value [] to SFFloat inputOnly field named "set_articulationParameterValue0" */
	void setArticulationParameterValue0 (float value);

	/** Assign float value [] to SFFloat inputOnly field named "set_articulationParameterValue1" */
	void setArticulationParameterValue1 (float value);

	/** Assign float value [] to SFFloat inputOnly field named "set_articulationParameterValue2" */
	void setArticulationParameterValue2 (float value);

	/** Assign float value [] to SFFloat inputOnly field named "set_articulationParameterValue3" */
	void setArticulationParameterValue3 (float value);

	/** Assign float value [] to SFFloat inputOnly field named "set_articulationParameterValue4" */
	void setArticulationParameterValue4 (float value);

	/** Assign float value [] to SFFloat inputOnly field named "set_articulationParameterValue5" */
	void setArticulationParameterValue5 (float value);

	/** Assign float value [] to SFFloat inputOnly field named "set_articulationParameterValue6" */
	void setArticulationParameterValue6 (float value);

	/** Assign float value [] to SFFloat inputOnly field named "set_articulationParameterValue7" */
	void setArticulationParameterValue7 (float value);

	/** Return float result [] from SFFloat outputOnly field named "articulationParameterValue0_changed" */
	float getArticulationParameterValue0 ();

	/** Return float result [] from SFFloat outputOnly field named "articulationParameterValue1_changed" */
	float getArticulationParameterValue1 ();

	/** Return float result [] from SFFloat outputOnly field named "articulationParameterValue2_changed" */
	float getArticulationParameterValue2 ();

	/** Return float result [] from SFFloat outputOnly field named "articulationParameterValue3_changed" */
	float getArticulationParameterValue3 ();

	/** Return float result [] from SFFloat outputOnly field named "articulationParameterValue4_changed" */
	float getArticulationParameterValue4 ();

	/** Return float result [] from SFFloat outputOnly field named "articulationParameterValue5_changed" */
	float getArticulationParameterValue5 ();

	/** Return float result [] from SFFloat outputOnly field named "articulationParameterValue6_changed" */
	float getArticulationParameterValue6 ();

	/** Return float result [] from SFFloat outputOnly field named "articulationParameterValue7_changed" */
	float getArticulationParameterValue7 ();

	/** Return double result in seconds from SFTime outputOnly field named "collideTime" */
	double getCollideTime ();

	/** Return double result in seconds from SFTime outputOnly field named "detonateTime" */
	double getDetonateTime ();

	/** Return double result in seconds from SFTime outputOnly field named "firedTime" */
	double getFiredTime ();

	/** Return boolean result from SFBool outputOnly field named "isActive" */
	bool getIsActive ();

	/** Return boolean result from SFBool outputOnly field named "isCollided" */
	bool getIsCollided ();

	/** Return boolean result from SFBool outputOnly field named "isDetonated" */
	bool getIsDetonated ();

	/** Return boolean result from SFBool outputOnly field named "isNetworkReader" */
	bool getIsNetworkReader ();

	/** Return boolean result from SFBool outputOnly field named "isNetworkWriter" */
	bool getIsNetworkWriter ();

	/** Return boolean result from SFBool outputOnly field named "isRtpHeaderHeard" */
	bool getIsRtpHeaderHeard ();

	/** Return boolean result from SFBool outputOnly field named "isStandAlone" */
	bool getIsStandAlone ();

	/** Return double result in seconds from SFTime outputOnly field named "timestamp" */
	double getTimestamp ();

	/** Return boolean result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign boolean value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	/** Return String result [] from SFString inputOutput field named "marking" */
	std::string getMarking ();

	/** Assign String value [] to SFString inputOutput field named "marking" */
	void setMarking (std::string value);

	/** Return int result [] from SFInt32 inputOutput field named "siteID" */
	int getSiteID ();

	/** Assign int value [] to SFInt32 inputOutput field named "siteID" */
	void setSiteID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "applicationID" */
	int getApplicationID ();

	/** Assign int value [] to SFInt32 inputOutput field named "applicationID" */
	void setApplicationID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "entityID" */
	int getEntityID ();

	/** Assign int value [] to SFInt32 inputOutput field named "entityID" */
	void setEntityID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "forceID" */
	int getForceID ();

	/** Assign int value [] to SFInt32 inputOutput field named "forceID" */
	void setForceID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "entityKind" */
	int getEntityKind ();

	/** Assign int value [] to SFInt32 inputOutput field named "entityKind" */
	void setEntityKind (int value);

	/** Return int result [] from SFInt32 inputOutput field named "entityDomain" */
	int getEntityDomain ();

	/** Assign int value [] to SFInt32 inputOutput field named "entityDomain" */
	void setEntityDomain (int value);

	/** Return int result [] from SFInt32 inputOutput field named "entityCountry" */
	int getEntityCountry ();

	/** Assign int value [] to SFInt32 inputOutput field named "entityCountry" */
	void setEntityCountry (int value);

	/** Return int result [] from SFInt32 inputOutput field named "entityCategory" */
	int getEntityCategory ();

	/** Assign int value [] to SFInt32 inputOutput field named "entityCategory" */
	void setEntityCategory (int value);

	/** Return int result [] from SFInt32 inputOutput field named "entitySubcategory" */
	int getEntitySubcategory ();

	/** Assign int value [] to SFInt32 inputOutput field named "entitySubcategory" */
	void setEntitySubcategory (int value);

	/** Return int result [] from SFInt32 inputOutput field named "entitySpecific" */
	int getEntitySpecific ();

	/** Assign int value [] to SFInt32 inputOutput field named "entitySpecific" */
	void setEntitySpecific (int value);

	/** Return int result [] from SFInt32 inputOutput field named "entityExtra" */
	int getEntityExtra ();

	/** Assign int value [] to SFInt32 inputOutput field named "entityExtra" */
	void setEntityExtra (int value);

	/** Return double result in seconds from SFTime inputOutput field named "readInterval" */
	double getReadInterval ();

	/** Assign double value in seconds to SFTime inputOutput field named "readInterval" */
	void setReadInterval (double timestamp);

	/** Return double result in seconds from SFTime inputOutput field named "writeInterval" */
	double getWriteInterval ();

	/** Assign double value in seconds to SFTime inputOutput field named "writeInterval" */
	void setWriteInterval (double timestamp);

	/** Return String enumeration result ("standAlone"|"networkReader"|"networkWriter") from networkModeValues type inputOutput field named "networkMode" */
	std::string getNetworkMode ();

	/** Assign String enumeration value ("standAlone"|"networkReader"|"networkWriter") to networkModeValues type inputOutput field named "networkMode" */
	void setNetworkMode (std::string value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "translation" */
	float* getTranslation ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "translation" */
	void setTranslation (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "rotation" */
	float* getRotation ();

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "rotation" */
	void setRotation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "scale" */
	float* getScale ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "scale" */
	void setScale (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "scaleOrientation" */
	float* getScaleOrientation ();

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "scaleOrientation" */
	void setScaleOrientation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "center" */
	float* getCenter ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "center" */
	void setCenter (float* value);

	/** Return String result [] from SFString inputOutput field named "address" */
	std::string getAddress ();

	/** Assign String value [] to SFString inputOutput field named "address" */
	void setAddress (std::string value);

	/** Return int result [] from SFInt32 inputOutput field named "port" */
	int getPort ();

	/** Assign int value [] to SFInt32 inputOutput field named "port" */
	void setPort (int value);

	/** Return String result [] from SFString inputOutput field named "multicastRelayHost" */
	std::string getMulticastRelayHost ();

	/** Assign String value [] to SFString inputOutput field named "multicastRelayHost" */
	void setMulticastRelayHost (std::string value);

	/** Return int result [] from SFInt32 inputOutput field named "multicastRelayPort" */
	int getMulticastRelayPort ();

	/** Assign int value [] to SFInt32 inputOutput field named "multicastRelayPort" */
	void setMulticastRelayPort (int value);

	/** Return boolean result from SFBool initializeOnly field named "rtpHeaderExpected" */
	bool getRtpHeaderExpected ();

	/** Assign boolean value to SFBool initializeOnly field named "rtpHeaderExpected" */
	void setRtpHeaderExpected (bool value);

	/** Return int result [] from SFInt32 inputOutput field named "deadReckoning" */
	int getDeadReckoning ();

	/** Assign int value [] to SFInt32 inputOutput field named "deadReckoning" */
	void setDeadReckoning (int value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "linearVelocity" */
	float* getLinearVelocity ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "linearVelocity" */
	void setLinearVelocity (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "linearAcceleration" */
	float* getLinearAcceleration ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "linearAcceleration" */
	void setLinearAcceleration (float* value);

	/** Return boolean result from SFBool inputOutput field named "fired1" */
	bool getFired1 ();

	/** Assign boolean value to SFBool inputOutput field named "fired1" */
	void setFired1 (bool value);

	/** Return boolean result from SFBool inputOutput field named "fired2" */
	bool getFired2 ();

	/** Assign boolean value to SFBool inputOutput field named "fired2" */
	void setFired2 (bool value);

	/** Return int result [] from SFInt32 inputOutput field named "collisionType" */
	int getCollisionType ();

	/** Assign int value [] to SFInt32 inputOutput field named "collisionType" */
	void setCollisionType (int value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "detonationLocation" */
	float* getDetonationLocation ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "detonationLocation" */
	void setDetonationLocation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "detonationRelativeLocation" */
	float* getDetonationRelativeLocation ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "detonationRelativeLocation" */
	void setDetonationRelativeLocation (float* value);

	/** Return int result [] from SFInt32 inputOutput field named "detonationResult" */
	int getDetonationResult ();

	/** Assign int value [] to SFInt32 inputOutput field named "detonationResult" */
	void setDetonationResult (int value);

	/** Return int result [] from SFInt32 inputOutput field named "eventApplicationID" */
	int getEventApplicationID ();

	/** Assign int value [] to SFInt32 inputOutput field named "eventApplicationID" */
	void setEventApplicationID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "eventEntityID" */
	int getEventEntityID ();

	/** Assign int value [] to SFInt32 inputOutput field named "eventEntityID" */
	void setEventEntityID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "eventNumber" */
	int getEventNumber ();

	/** Assign int value [] to SFInt32 inputOutput field named "eventNumber" */
	void setEventNumber (int value);

	/** Return int result [] from SFInt32 inputOutput field named "eventSiteID" */
	int getEventSiteID ();

	/** Assign int value [] to SFInt32 inputOutput field named "eventSiteID" */
	void setEventSiteID (int value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "munitionStartPoint" */
	float* getMunitionStartPoint ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "munitionStartPoint" */
	void setMunitionStartPoint (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "munitionEndPoint" */
	float* getMunitionEndPoint ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "munitionEndPoint" */
	void setMunitionEndPoint (float* value);

	/** Return int result [] from SFInt32 inputOutput field named "munitionSiteID" */
	int getMunitionSiteID ();

	/** Assign int value [] to SFInt32 inputOutput field named "munitionSiteID" */
	void setMunitionSiteID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "munitionApplicationID" */
	int getMunitionApplicationID ();

	/** Assign int value [] to SFInt32 inputOutput field named "munitionApplicationID" */
	void setMunitionApplicationID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "munitionEntityID" */
	int getMunitionEntityID ();

	/** Assign int value [] to SFInt32 inputOutput field named "munitionEntityID" */
	void setMunitionEntityID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "fireMissionIndex" */
	int getFireMissionIndex ();

	/** Assign int value [] to SFInt32 inputOutput field named "fireMissionIndex" */
	void setFireMissionIndex (int value);

	/** Return int result [] from SFInt32 inputOutput field named "warhead" */
	int getWarhead ();

	/** Assign int value [] to SFInt32 inputOutput field named "warhead" */
	void setWarhead (int value);

	/** Return int result [] from SFInt32 inputOutput field named "fuse" */
	int getFuse ();

	/** Assign int value [] to SFInt32 inputOutput field named "fuse" */
	void setFuse (int value);

	/** Return int result [] from SFInt32 inputOutput field named "munitionQuantity" */
	int getMunitionQuantity ();

	/** Assign int value [] to SFInt32 inputOutput field named "munitionQuantity" */
	void setMunitionQuantity (int value);

	/** Return int result [] from SFInt32 inputOutput field named "firingRate" */
	int getFiringRate ();

	/** Assign int value [] to SFInt32 inputOutput field named "firingRate" */
	void setFiringRate (int value);

	/** Return float result [] from SFFloat inputOutput field named "firingRange" */
	float getFiringRange ();

	/** Assign float value [] to SFFloat inputOutput field named "firingRange" */
	void setFiringRange (float value);

	/** Return int result [] from SFInt32 inputOutput field named "articulationParameterCount" */
	int getArticulationParameterCount ();

	/** Assign int value [] to SFInt32 inputOutput field named "articulationParameterCount" */
	void setArticulationParameterCount (int value);

	/** Return MFInt32 result [] from MFInt32 inputOutput field named "articulationParameterDesignatorArray" */
	int32_t* getArticulationParameterDesignatorArray ();

	/** Return number of primitive values in "articulationParameterDesignatorArray" array */
	int getNumArticulationParameterDesignatorArray ();

	/** Assign MFInt32 value [] to MFInt32 inputOutput field named "articulationParameterDesignatorArray" */
	void setArticulationParameterDesignatorArray (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOutput field named "articulationParameterDesignatorArray" */
	void setArticulationParameterDesignatorArray (int32_t value);

	/** Return MFInt32 result [] from MFInt32 inputOutput field named "articulationParameterChangeIndicatorArray" */
	int32_t* getArticulationParameterChangeIndicatorArray ();

	/** Return number of primitive values in "articulationParameterChangeIndicatorArray" array */
	int getNumArticulationParameterChangeIndicatorArray ();

	/** Assign MFInt32 value [] to MFInt32 inputOutput field named "articulationParameterChangeIndicatorArray" */
	void setArticulationParameterChangeIndicatorArray (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOutput field named "articulationParameterChangeIndicatorArray" */
	void setArticulationParameterChangeIndicatorArray (int32_t value);

	/** Return MFInt32 result [] from MFInt32 inputOutput field named "articulationParameterIdPartAttachedToArray" */
	int32_t* getArticulationParameterIdPartAttachedToArray ();

	/** Return number of primitive values in "articulationParameterIdPartAttachedToArray" array */
	int getNumArticulationParameterIdPartAttachedToArray ();

	/** Assign MFInt32 value [] to MFInt32 inputOutput field named "articulationParameterIdPartAttachedToArray" */
	void setArticulationParameterIdPartAttachedToArray (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOutput field named "articulationParameterIdPartAttachedToArray" */
	void setArticulationParameterIdPartAttachedToArray (int32_t value);

	/** Return MFInt32 result [] from MFInt32 inputOutput field named "articulationParameterTypeArray" */
	int32_t* getArticulationParameterTypeArray ();

	/** Return number of primitive values in "articulationParameterTypeArray" array */
	int getNumArticulationParameterTypeArray ();

	/** Assign MFInt32 value [] to MFInt32 inputOutput field named "articulationParameterTypeArray" */
	void setArticulationParameterTypeArray (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOutput field named "articulationParameterTypeArray" */
	void setArticulationParameterTypeArray (int32_t value);

	/** Return array of float results array [] from MFFloat inputOutput field named "articulationParameterArray" */
	float* getArticulationParameterArray ();

	/** Return number of primitive values in "articulationParameterArray" array */
	int getNumArticulationParameterArray ();

	/** Assign float array [] to MFFloat inputOutput field named "articulationParameterArray" */
	void setArticulationParameterArray (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "articulationParameterArray" */
	void setArticulationParameterArray (float value);

	/** Return array of String results array [] from geoSystemType type initializeOnly field named "geoSystem" */
	std::string getGeoSystem ();

	/** Return number of primitive values in "geoSystem" array */
	int getNumGeoSystem ();

	/** Assign String array [] to geoSystemType type initializeOnly field named "geoSystem" */
	void setGeoSystem (std::string* values, int size);

	/** Return array of 3-tuple double results array [] from SFVec3d inputOutput field named "geoCoords" */
	double* getGeoCoords ();

	/** Assign 3-tuple double array [] to SFVec3d inputOutput field named "geoCoords" */
	void setGeoCoords (double* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.63 ExplosionEmitter 
/** ExplosionEmitter defines a concrete node interface that extends interface X3DParticleEmitterNode. */

class X3D_API ExplosionEmitter : public X3DParticleEmitterNode
{

public:
	ExplosionEmitter();
	virtual ~ExplosionEmitter();

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "position" */
	float* getPosition ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "position" */
	void setPosition (float* value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return float result [] from SFFloat inputOutput field named "speed" */
	//float getSpeed ();

	///** Assign float value [] to SFFloat inputOutput field named "speed" */
	//void setSpeed (float value);

	///** Return float result [] from SFFloat inputOutput field named "variation" */
	//float getVariation ();

	///** Assign float value [] to SFFloat inputOutput field named "variation" */
	//void setVariation (float value);

	///** Return float result [] from SFFloat inputOutput field named "mass" */
	//float getMass ();

	///** Assign float value [] to SFFloat inputOutput field named "mass" */
	//void setMass (float value);

	///** Return float result [] from SFFloat initializeOnly field named "surfaceArea" */
	//float getSurfaceArea ();

	///** Assign float value [] to SFFloat initializeOnly field named "surfaceArea" */
	//void setSurfaceArea (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.64 EXPORT 
/** EXPORT defines a concrete node interface that extends interface SceneGraphStructureStatement. */

class X3D_API Export : public SceneGraphStructureStatement
{

public:
	Export();
	virtual ~Export();

	/** Return xs:IDREF result [] from xs:IDREF type inputOutput field named "localDEF" */
	//xs:IDREF getLocalDEF ();
	std::string* getLocalDEF ();

	/** Assign xs:IDREF value [] to xs:IDREF type inputOutput field named "localDEF" */
	//void setLocalDEF (xs:IDREF value);
	void setLocalDEF (std::string* value);
	void setLocalDEF (std::string value);

	/** Return xs:NMTOKEN result [] from xs:NMTOKEN type inputOutput field named "AS" */
	//xs:NMTOKEN getAS ();
	std::string* getAS ();

	/** Assign xs:NMTOKEN value [] to xs:NMTOKEN type inputOutput field named "AS" */
	//void setAS (xs:NMTOKEN value);
	void setAS (std::string* value);
};
 
//C.3.65 ExternProtoDeclare 
/** ExternProtoDeclare defines a concrete node interface that extends interface SceneGraphStructureStatement.
* ExternProtoDeclare refers to a ProtoDeclare node declaration provided in another file. ExternProtoDeclare interfaces are defined with field elements (without IS attributes). */

class X3D_API ExternProtoDeclare : public SceneGraphStructureStatement
{

public:
	ExternProtoDeclare();
	virtual ~ExternProtoDeclare();
	virtual std::string getXMLString();

	/** Return xs:NMTOKEN result [] from xs:NMTOKEN type inputOutput field named "name" */
	//xs:NMTOKEN getName ();
	std::string getName ();

	/** Assign xs:NMTOKEN value [] to xs:NMTOKEN type inputOutput field named "name" */
	//void setName (xs:NMTOKEN value);
	void setName (std::string value);

	/** Return array of String results array [] from MFString inputOutput field named "url" */
	MFString& getUrl ();

	/** Return number of primitive values in "url" array */
	int getNumUrl ();

	/** Assign String array [] to MFString inputOutput field named "url" */
	void setUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "url" */
	void setUrl (std::string value);

	/** Return String result [] from SFString inputOutput field named "appinfo" */
	std::string getAppinfo ();

	/** Assign String value [] to SFString inputOutput field named "appinfo" */
	void setAppinfo (std::string value);

	/** Return String result [] from SFString inputOutput field named "documentation" */
	std::string getDocumentation ();

	/** Assign String value [] to SFString inputOutput field named "documentation" */
	void setDocumentation (std::string value);


protected:
	MFString	url;
	std::string		name;
	std::string		appinfo;
	std::string		documentation;


};
 
//C.3.66 Extrusion 
/** Extrusion defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API Extrusion : public X3DGeometryNode
{

public:
	Extrusion();
	virtual ~Extrusion();
	virtual void Draw();
	virtual std::string getXMLString();

	/** Assign 2-tuple float array [] to MFVec2f inputOnly field named "set_crossSection" */
	void setCrossSection (float* values, int size);

	/** Assign 4-tuple float array in radians to MFRotation inputOnly field named "set_orientation" */
	void setOrientation (float* values, int size);

	/** Assign 2-tuple float array [] to MFVec2f inputOnly field named "set_scale" */
	void setScale (float* values, int size);

	/** Assign 3-tuple float array [] to MFVec3f inputOnly field named "set_spine" */
	void setSpine (float* values, int size);

	/** Return boolean result from SFBool initializeOnly field named "beginCap" */
	bool getBeginCap ();

	/** Assign boolean value to SFBool initializeOnly field named "beginCap" */
	void setBeginCap (bool value);

	/** Return boolean result from SFBool initializeOnly field named "ccw" */
	bool getCcw ();

	/** Assign boolean value to SFBool initializeOnly field named "ccw" */
	void setCcw (bool value);

	/** Return boolean result from SFBool initializeOnly field named "convex" */
	bool getConvex ();

	/** Assign boolean value to SFBool initializeOnly field named "convex" */
	void setConvex (bool value);

	/** Return float result in radians from  type initializeOnly field named "creaseAngle" */
	float getCreaseAngle ();

	/** Assign float value in radians to  type initializeOnly field named "creaseAngle" */
	void setCreaseAngle (float angle);

	/** Return array of 2-tuple float results array [] from MFVec2f initializeOnly field named "crossSection" */
	MFFloat* getCrossSection ();

	/** Return number of 2-tuple primitive values in "crossSection" array */
	int getNumCrossSection ();

	/** Return boolean result from SFBool initializeOnly field named "endCap" */
	bool getEndCap ();

	/** Assign boolean value to SFBool initializeOnly field named "endCap" */
	void setEndCap (bool value);

	/** Return array of 4-tuple float results array in radians from MFRotation initializeOnly field named "orientation" */
	MFFloat* getOrientation ();

	/** Return number of 4-tuple primitive values in "orientation" array */
	int getNumOrientation ();

	/** Return array of 2-tuple float results array [] from MFVec2f initializeOnly field named "scale" */
	MFFloat* getScale ();

	/** Return number of 2-tuple primitive values in "scale" array */
	int getNumScale ();

	/** Return boolean result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign boolean value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	/** Return array of 3-tuple float results array [] from MFVec3f initializeOnly field named "spine" */
	MFFloat* getSpine ();

	/** Return number of 3-tuple primitive values in "spine" array */
	int getNumSpine ();

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
public:
	bool beginCap;
	bool ccw;
	bool convex;
	bool endCap;
	bool solid;
	float creaseAngle;
	MFFloat* orientation;
	MFFloat* scale;
	MFFloat* crossSection;
	MFFloat* spine;

};
 
//C.3.67 field 
/** field defines a concrete node interface that extends interface SceneGraphStructureStatement.
* field can contain either attribute-value or node content. field is utilized by ExternProtoDeclare, ProtoDeclare and Script nodes. */

class X3D_API field : public SceneGraphStructureStatement
{

public:
	field();
	virtual ~field();

	virtual std::string getXMLString();

	/** Return xs:NMTOKEN result [] from xs:NMTOKEN type inputOutput field named "name" */
	//xs:NMTOKEN getName ();
	std::string getName ();

	/** Assign xs:NMTOKEN value [] to xs:NMTOKEN type inputOutput field named "name" */
	//void setName (xs:NMTOKEN value);
	void setName (std::string value);

	/** Return String result [] from accessTypeNames type inputOutput field named "accessType" */
	std::string getAccessType ();

	/** Assign String value [] to accessTypeNames type inputOutput field named "accessType" */
	void setAccessType (std::string value);

	/** Return String result [] from fieldTypeName type inputOutput field named "type" */
	std::string getType ();

	/** Assign String value [] to fieldTypeName type inputOutput field named "type" */
	void setType (std::string value);

	/** Return String result [] from SFString inputOutput field named "value" */
	std::string getValue ();

	/** Assign String value [] to SFString inputOutput field named "value" */
	void setValue (std::string value);

	/** Return String result [] from SFString inputOutput field named "appinfo" */
	std::string getAppinfo ();

	/** Assign String value [] to SFString inputOutput field named "appinfo" */
	void setAppinfo (std::string value);

	/** Return String result [] from SFString inputOutput field named "documentation" */
	std::string getDocumentation ();

	/** Assign String value [] to SFString inputOutput field named "documentation" */
	void setDocumentation (std::string value);

	void setField(X3DField* filed);

	std::string name;
	std::string accessType;
	std::string type;
	std::string value;
	std::string appinfo;
	std::string documentation;

	X3DField* m_filed;
};
 
//C.3.68 fieldValue 
/** fieldValue defines a concrete node interface that extends interface SceneGraphStructureStatement.
* fieldValue can contain either attribute-value or node content. fieldValue is utilized by ProtoInstance nodes, reinitializing default values specified in ProtoDeclare field elements. */

class X3D_API fieldValue : public SceneGraphStructureStatement
{

public:
	fieldValue();
	virtual ~fieldValue();

	virtual std::string getXMLString();

	/** Return xs:NMTOKEN result [] from xs:NMTOKEN type inputOutput field named "name" */
	//xs:NMTOKEN getName ();
	std::string getName ();

	/** Assign xs:NMTOKEN value [] to xs:NMTOKEN type inputOutput field named "name" */
	//void setName (xs:NMTOKEN value);
	void setName (std::string value);

	/** Return String result [] from SFString inputOutput field named "value" */
	std::string getValue ();

	/** Assign String value [] to SFString inputOutput field named "value" */
	void setValue (std::string val);

private:
	std::string name;
	std::string value;
};
 
//C.3.70 FloatVertexAttribute 
/** FloatVertexAttribute defines a concrete node interface that extends interface X3DVertexAttributeNode. */

class X3D_API FloatVertexAttribute : public X3DVertexAttributeNode
{

public:
	FloatVertexAttribute();
	virtual ~FloatVertexAttribute();

	/** Return array of float results array [] from MFFloat inputOutput field named "value" */
	float* getValue ();

	/** Return number of primitive values in "value" array */
	int getNumValue ();

	/** Assign float array [] to MFFloat inputOutput field named "value" */
	void setValue (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "value" */
	void setValue (float value);

	/** Return int result [] from  type initializeOnly field named "numComponents" */
	int getNumComponents ();

	/** Assign int value [] to  type initializeOnly field named "numComponents" */
	void setNumComponents (int value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return String result [] from SFString inputOutput field named "name" */
	//std::string getName ();

	///** Assign String value [] to SFString inputOutput field named "name" */
	//void setName (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.71 Fog 
/** Fog defines a concrete node interface that extends interfaces X3DBindableNodeX3DFogObject. */

class X3D_API Fog : public X3DBindableNode, public X3DFogObject
{

public:
	Fog();
	virtual ~Fog();

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "color" */
	float* getColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "color" */
	void setColor (float* color);

	/** Return String enumeration result ("LINEAR"|"EXPONENTIAL") from fogTypeValues type inputOutput field named "fogType" */
	std::string getFogType ();

	/** Assign String enumeration value ("LINEAR"|"EXPONENTIAL") to fogTypeValues type inputOutput field named "fogType" */
	void setFogType (std::string value);

	/** Return float result [] from  type inputOutput field named "visibilityRange" */
	float getVisibilityRange ();

	/** Assign float value [] to  type inputOutput field named "visibilityRange" */
	void setVisibilityRange (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign boolean value to SFBool inputOnly field named "set_bind" */
	//void setBind (bool value);

	///** Return double result in seconds from SFTime outputOnly field named "bindTime" */
	//double getBindTime ();

	///** Return boolean result from SFBool outputOnly field named "isBound" */
	//bool getIsBound ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
 
//C.3.73 FontStyle 
/** FontStyle defines a concrete node interface that extends interface X3DFontStyleNode. */

class X3D_API CFontStyle : public X3DFontStyleNode
{

public:
	CFontStyle();
	virtual ~CFontStyle();

//Implimentation
public:
	virtual std::string getXMLString();


	/** Return array of String results array [] from MFString initializeOnly field named "family" */
	MFString* getFamily ();

	/** Return number of primitive values in "family" array */
	int getNumFamily ();

	/** Assign String array [] to MFString initializeOnly field named "family" */
	void setFamily (std::string* values, int size);

	/** Assign single String value [] as the MFString array for initializeOnly field named "family" */
	void setFamily (std::string value);

	/** Return boolean result from SFBool initializeOnly field named "horizontal" */
	bool getHorizontal ();

	/** Assign boolean value to SFBool initializeOnly field named "horizontal" */
	void setHorizontal (bool value);

	/** Return array of String results array [] from MFString initializeOnly field named "justify" */
	MFString* getJustify ();

	/** Return number of primitive values in "justify" array */
	int getNumJustify ();

	/** Assign String array [] to MFString initializeOnly field named "justify" */
	//void setJustify (MFString* values, int size);
	void setJustify(std::string* values, int size);

	/** Assign single String value [] as the MFString array for initializeOnly field named "justify" */
	void setJustify (std::string value);

	/** Return String result [] from SFString initializeOnly field named "language" */
	std::string getLanguage ();

	/** Assign String value [] to SFString initializeOnly field named "language" */
	void setLanguage (std::string value);

	/** Return boolean result from SFBool initializeOnly field named "leftToRight" */
	bool getLeftToRight ();

	/** Assign boolean value to SFBool initializeOnly field named "leftToRight" */
	void setLeftToRight (bool value);

	/** Return float result [] from SFFloat initializeOnly field named "size" */
	float getSize ();

	/** Assign float value [] to SFFloat initializeOnly field named "size" */
	void setSize (float value);

	/** Return float result [] from SFFloat initializeOnly field named "spacing" */
	float getSpacing ();

	/** Assign float value [] to SFFloat initializeOnly field named "spacing" */
	void setSpacing (float value);

	/** Return String enumeration result ("PLAIN"|"BOLD"|"ITALIC"|"BOLDITALIC") from fontStyleValues type initializeOnly field named "style" */
	std::string getStyle ();

	/** Assign String enumeration value ("PLAIN"|"BOLD"|"ITALIC"|"BOLDITALIC") to fontStyleValues type initializeOnly field named "style" */
	void setStyle (std::string value);

	/** Return boolean result from SFBool initializeOnly field named "topToBottom" */
	bool getTopToBottom ();

	/** Assign boolean value to SFBool initializeOnly field named "topToBottom" */
	void setTopToBottom (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

//Attributes
protected:
	//std::string		family;
	MFString	family;
	bool		horizontal;
	//std::string		justify;
	MFString	justify;
	std::string		language;
	bool		leftToRight;
	float		size;
	float		spacing;
	std::string		style;
	bool		topToBottom;
};
 
//C.3.74 ForcePhysicsModel 
/** ForcePhysicsModel defines a concrete node interface that extends interface X3DParticlePhysicsModelNode. */

class X3D_API ForcePhysicsModel : public X3DParticlePhysicsModelNode
{

public:
	ForcePhysicsModel();
	virtual ~ForcePhysicsModel();

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "force" */
	float* getForce ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "force" */
	void setForce (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.75 GeneratedCubeMapTexture 
/** GeneratedCubeMapTexture defines a concrete node interface that extends interface X3DEnvironmentTextureNode. */

class X3D_API GeneratedCubeMapTexture : public X3DEnvironmentTextureNode
{

public:
	GeneratedCubeMapTexture();
	virtual ~GeneratedCubeMapTexture();

	/** Return String result ["NONE"|"NEXT_FRAME_ONLY"|"ALWAYS"] from  type inputOutput field named "update" */
	std::string getUpdate ();

	/** Assign String value ["NONE"|"NEXT_FRAME_ONLY"|"ALWAYS"] to  type inputOutput field named "update" */
	void setUpdate (std::string value);

	/** Return int result [] from  type initializeOnly field named "size" */
	int getSize ();

	/** Assign int value [] to  type initializeOnly field named "size" */
	void setSize (int value);

	/** Return TextureProperties result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "textureProperties" */
	void getTextureProperties (X3DNode result);

	/** Assign TextureProperties value (using a properly typed node) to SFNode initializeOnly field named "textureProperties" */
	void setTextureProperties (TextureProperties node);

	/** Assign TextureProperties value (using a properly typed protoInstance) */
	void setTextureProperties (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 

//C.3.81 GeoOrigin 
/** GeoOrigin defines a concrete node interface that extends interface X3DNode.
* GeoOrigin is deprecated and discouraged (but nevertheless allowed) in X3D v3.3. */

class X3D_API GeoOrigin : public X3DNode
{

public:
	GeoOrigin();
	virtual ~GeoOrigin();

	/** Return array of String results array [] from geoSystemType type initializeOnly field named "geoSystem" */
	std::string* getGeoSystem ();

	/** Return number of primitive values in "geoSystem" array */
	int getNumGeoSystem ();

	/** Assign String array [] to geoSystemType type initializeOnly field named "geoSystem" */
	void setGeoSystem (std::string* values, int size);

	/** Return array of 3-tuple double results array [] from SFVec3d inputOutput field named "geoCoords" */
	double* getGeoCoords ();

	/** Assign 3-tuple double array [] to SFVec3d inputOutput field named "geoCoords" */
	void setGeoCoords (double* value);

	/** Return boolean result from SFBool initializeOnly field named "rotateYUp" */
	bool getRotateYUp ();

	/** Assign boolean value to SFBool initializeOnly field named "rotateYUp" */
	void setRotateYUp (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};

//C.3.76 GeoCoordinate 
/** GeoCoordinate defines a concrete node interface that extends interface X3DCoordinateNode. */

class X3D_API GeoCoordinate : public X3DCoordinateNode
{

public:
	GeoCoordinate();
	virtual ~GeoCoordinate();

	/** Return array of String results array [] from geoSystemType type initializeOnly field named "geoSystem" */
	std::string* getGeoSystem ();

	/** Return number of primitive values in "geoSystem" array */
	int getNumGeoSystem ();

	/** Assign String array [] to geoSystemType type initializeOnly field named "geoSystem" */
	void setGeoSystem (std::string* values, int size);

	/** Return array of 3-tuple double results array [] from MFVec3d initializeOnly field named "point" */
	double* getPoint ();

	/** Return number of 3-tuple primitive values in "point" array */
	int getNumPoint ();

	/** Assign 3-tuple double array [] to MFVec3d initializeOnly field named "point" */
	void setPoint (double* values, int size);

	/** Return GeoOrigin result (deprecated node, optional) from SFNode initializeOnly field named "geoOrigin" */
	void getGeoOrigin (X3DNode result);

	/** Assign GeoOrigin value (deprecated node, optional) to SFNode initializeOnly field named "geoOrigin" */
	void setGeoOrigin (GeoOrigin node);

	/** Assign GeoOrigin value (deprecated protoInstance) */
	void setGeoOrigin (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.77 GeoElevationGrid 
/** GeoElevationGrid defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API GeoElevationGrid : public X3DGeometryNode
{

public:
	GeoElevationGrid();
	virtual ~GeoElevationGrid();

	/** Assign float array [] to MFFloat inputOnly field named "set_height" */
	void setHeight (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOnly field named "set_height" */
	void setHeight (float value);

	/** Return array of String results array [] from geoSystemType type initializeOnly field named "geoSystem" */
	std::string* getGeoSystem ();

	/** Return number of primitive values in "geoSystem" array */
	int getNumGeoSystem ();

	/** Assign String array [] to geoSystemType type initializeOnly field named "geoSystem" */
	void setGeoSystem (std::string* values, int size);

	/** Return array of 3-tuple double results array [] from SFVec3d initializeOnly field named "geoGridOrigin" */
	double* getGeoGridOrigin ();

	/** Assign 3-tuple double array [] to SFVec3d initializeOnly field named "geoGridOrigin" */
	void setGeoGridOrigin (double* value);

	/** Return array of double results array [] from MFDouble initializeOnly field named "height" */
	double* getHeight ();

	/** Return number of primitive values in "height" array */
	int getNumHeight ();

	/** Assign double array [] to MFDouble initializeOnly field named "height" */
	void setHeight (double* values, int size);

	/** Assign single double value [] as the MFDouble array for initializeOnly field named "height" */
	void setHeight (double value);

	/** Return boolean result from SFBool initializeOnly field named "ccw" */
	bool getCcw ();

	/** Assign boolean value to SFBool initializeOnly field named "ccw" */
	void setCcw (bool value);

	/** Return boolean result from SFBool initializeOnly field named "colorPerVertex" */
	bool getColorPerVertex ();

	/** Assign boolean value to SFBool initializeOnly field named "colorPerVertex" */
	void setColorPerVertex (bool color);

	/** Return float result in radians from  type initializeOnly field named "creaseAngle" */
	float getCreaseAngle ();

	/** Assign float value in radians to  type initializeOnly field named "creaseAngle" */
	void setCreaseAngle (float angle);

	/** Return boolean result from SFBool initializeOnly field named "normalPerVertex" */
	bool getNormalPerVertex ();

	/** Assign boolean value to SFBool initializeOnly field named "normalPerVertex" */
	void setNormalPerVertex (bool value);

	/** Return boolean result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign boolean value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	/** Return int result [] from SFInt32 initializeOnly field named "xDimension" */
	int getXDimension ();

	/** Assign int value [] to SFInt32 initializeOnly field named "xDimension" */
	void setXDimension (int value);

	/** Return double result [] from  type initializeOnly field named "xSpacing" */
	double getXSpacing ();

	/** Assign double value [] to  type initializeOnly field named "xSpacing" */
	void setXSpacing (double value);

	/** Return float result [] from  type inputOutput field named "yScale" */
	float getYScale ();

	/** Assign float value [] to  type inputOutput field named "yScale" */
	void setYScale (float value);

	/** Return int result [] from SFInt32 initializeOnly field named "zDimension" */
	int getZDimension ();

	/** Assign int value [] to SFInt32 initializeOnly field named "zDimension" */
	void setZDimension (int value);

	/** Return double result [] from  type initializeOnly field named "zSpacing" */
	double getZSpacing ();

	/** Assign double value [] to  type initializeOnly field named "zSpacing" */
	void setZSpacing (double value);

	/** Return X3DColorNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "color" */
	void getColor (X3DNode result);

	/** Assign X3DColorNode value (using a properly typed node) to SFNode inputOutput field named "color" */
	void setColor (X3DColorNode color);

	/** Assign X3DColorNode value (using a properly typed protoInstance) */
	void setColor (X3DPrototypeInstance protoInstance);

	/** Return X3DNormalNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "normal" */
	void getNormal (X3DNode result);

	/** Assign X3DNormalNode value (using a properly typed node) to SFNode inputOutput field named "normal" */
	void setNormal (X3DNormalNode node);

	/** Assign X3DNormalNode value (using a properly typed protoInstance) */
	void setNormal (X3DPrototypeInstance protoInstance);

	/** Return GeoOrigin result (deprecated node, optional) from SFNode initializeOnly field named "geoOrigin" */
	void getGeoOrigin (X3DNode result);

	/** Assign GeoOrigin value (deprecated node, optional) to SFNode initializeOnly field named "geoOrigin" */
	void setGeoOrigin (GeoOrigin node);

	/** Assign GeoOrigin value (deprecated protoInstance) */
	void setGeoOrigin (X3DPrototypeInstance protoInstance);

	/** Return X3DTextureCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texCoord" */
	void getTexCoord (X3DNode result);

	/** Assign X3DTextureCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "texCoord" */
	void setTexCoord (X3DTextureCoordinateNode node);

	/** Assign X3DTextureCoordinateNode value (using a properly typed protoInstance) */
	void setTexCoord (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.78 GeoLocation 
/** GeoLocation defines a concrete node interface that extends interface X3DGroupingNode. */

class X3D_API GeoLocation : public X3DGroupingNode
{

public:
	GeoLocation();
	virtual ~GeoLocation();

	/** Return array of String results array [] from geoSystemType type initializeOnly field named "geoSystem" */
	std::string* getGeoSystem ();

	/** Return number of primitive values in "geoSystem" array */
	int getNumGeoSystem ();

	/** Assign String array [] to geoSystemType type initializeOnly field named "geoSystem" */
	void setGeoSystem (std::string* values, int size);

	/** Return array of 3-tuple double results array [] from SFVec3d inputOutput field named "geoCoords" */
	double* getGeoCoords ();

	/** Assign 3-tuple double array [] to SFVec3d inputOutput field named "geoCoords" */
	void setGeoCoords (double* value);

	/** Return GeoOrigin result (deprecated node, optional) from SFNode initializeOnly field named "geoOrigin" */
	void getGeoOrigin (X3DNode result);

	/** Assign GeoOrigin value (deprecated node, optional) to SFNode initializeOnly field named "geoOrigin" */
	void setGeoOrigin (GeoOrigin node);

	/** Assign GeoOrigin value (deprecated protoInstance) */
	void setGeoOrigin (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.79 GeoLOD 
/** GeoLOD defines a concrete node interface that extends interfaces X3DChildNodeX3DBoundedObject. */

class X3D_API GeoLOD : public X3DChildNode, public X3DBoundedObject
{

public:
	GeoLOD();
	virtual ~GeoLOD();

	/** Return int result [] from SFInt32 outputOnly field named "level_changed" */
	int getLevel ();

	/** Return array of String results array [] from geoSystemType type initializeOnly field named "geoSystem" */
	std::string* getGeoSystem ();

	/** Return number of primitive values in "geoSystem" array */
	int getNumGeoSystem ();

	/** Assign String array [] to geoSystemType type initializeOnly field named "geoSystem" */
	void setGeoSystem (std::string* values, int size);

	/** Return array of String results array [] from MFString initializeOnly field named "rootUrl" */
	std::string* getRootUrl ();

	/** Return number of primitive values in "rootUrl" array */
	int getNumRootUrl ();

	/** Assign String array [] to MFString initializeOnly field named "rootUrl" */
	void setRootUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for initializeOnly field named "rootUrl" */
	void setRootUrl (std::string value);

	/** Return array of String results array [] from MFString initializeOnly field named "child1Url" */
	std::string* getChild1Url ();

	/** Return number of primitive values in "child1Url" array */
	int getNumChild1Url ();

	/** Assign String array [] to MFString initializeOnly field named "child1Url" */
	void setChild1Url (std::string* values, int size);

	/** Assign single String value [] as the MFString array for initializeOnly field named "child1Url" */
	void setChild1Url (std::string value);

	/** Return array of String results array [] from MFString initializeOnly field named "child2Url" */
	std::string* getChild2Url ();

	/** Return number of primitive values in "child2Url" array */
	int getNumChild2Url ();

	/** Assign String array [] to MFString initializeOnly field named "child2Url" */
	void setChild2Url (std::string* values, int size);

	/** Assign single String value [] as the MFString array for initializeOnly field named "child2Url" */
	void setChild2Url (std::string value);

	/** Return array of String results array [] from MFString initializeOnly field named "child3Url" */
	std::string* getChild3Url ();

	/** Return number of primitive values in "child3Url" array */
	int getNumChild3Url ();

	/** Assign String array [] to MFString initializeOnly field named "child3Url" */
	void setChild3Url (std::string* values, int size);

	/** Assign single String value [] as the MFString array for initializeOnly field named "child3Url" */
	void setChild3Url (std::string value);

	/** Return array of String results array [] from MFString initializeOnly field named "child4Url" */
	std::string* getChild4Url ();

	/** Return number of primitive values in "child4Url" array */
	int getNumChild4Url ();

	/** Assign String array [] to MFString initializeOnly field named "child4Url" */
	void setChild4Url (std::string* values, int size);

	/** Assign single String value [] as the MFString array for initializeOnly field named "child4Url" */
	void setChild4Url (std::string value);

	/** Return array of 3-tuple double results array [] from SFVec3d inputOutput field named "center" */
	double* getCenter ();

	/** Assign 3-tuple double array [] to SFVec3d inputOutput field named "center" */
	void setCenter (double* value);

	/** Return float result [] from SFFloat initializeOnly field named "range" */
	float getRange ();

	/** Assign float value [] to SFFloat initializeOnly field named "range" */
	void setRange (float value);

	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	float* getBboxCenter ();

	/** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	void setBboxCenter (float* value);

	/** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	float* getBboxSize ();

	/** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	void setBboxSize (float* value);

	/** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode outputOnly field named "children" */
	void getChildren (X3DNode* result);

	/** Return number of nodes in "children" array */
	int getNumChildren ();

	/** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode initializeOnly field named "rootNode" */
	void getRootNode (X3DNode* result);

	/** Return number of nodes in "rootNode" array */
	int getNumRootNode ();

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode initializeOnly field named "rootNode" */
	void setRootNode (X3DChildNode* nodes);

	/** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for initializeOnly field named "rootNode" */
	void setRootNode (X3DChildNode node);

	/** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode initializeOnly field named "rootNode" */
	void setRootNode (X3DPrototypeInstance node);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode initializeOnly field named "rootNode" */
	void setRootNode (X3DNode* nodes);

	/** Return GeoOrigin result (deprecated node, optional) from SFNode initializeOnly field named "geoOrigin" */
	void getGeoOrigin (X3DNode result);

	/** Assign GeoOrigin value (deprecated node, optional) to SFNode initializeOnly field named "geoOrigin" */
	void setGeoOrigin (GeoOrigin node);

	/** Assign GeoOrigin value (deprecated protoInstance) */
	void setGeoOrigin (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.80 GeoMetadata 
/** GeoMetadata defines a concrete node interface that extends interface X3DInfoNode. */

class X3D_API GeoMetadata : public X3DInfoNode
{

public:
	GeoMetadata();
	virtual ~GeoMetadata();

	/** Return array of String results array [] from MFString inputOutput field named "url" */
	std::string* getUrl ();

	/** Return number of primitive values in "url" array */
	int getNumUrl ();

	/** Assign String array [] to MFString inputOutput field named "url" */
	void setUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "url" */
	void setUrl (std::string value);

	/** Return array of String results array [] from MFString inputOutput field named "summary" */
	std::string* getSummary ();

	/** Return number of primitive values in "summary" array */
	int getNumSummary ();

	/** Assign String array [] to MFString inputOutput field named "summary" */
	void setSummary (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "summary" */
	void setSummary (std::string value);

	/** Return array of X3DNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "data" */
	void getData (X3DNode* result);

	/** Return number of nodes in "data" array */
	int getNumData ();

	/** Assign X3DNode array (using a properly typed node array) to MFNode inputOutput field named "data" */
	void setData (X3DNode* nodes);

	/** Assign single X3DNode value (using a properly typed node) as the MFNode array for inputOutput field named "data" */
	void setData (X3DNode node);

	/** Assign X3DNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "data" */
	void setData (X3DPrototypeInstance node);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
 
//C.3.82 GeoPositionInterpolator 
/** GeoPositionInterpolator defines a concrete node interface that extends interface X3DInterpolatorNode. */

class X3D_API GeoPositionInterpolator : public X3DInterpolatorNode
{

public:
	GeoPositionInterpolator();
	virtual ~GeoPositionInterpolator();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "value_changed" */
	float* getValue ();

	/** Return array of 3-tuple double results array [] from SFVec3d outputOnly field named "geovalue_changed" */
	double* getGeovalue ();

	/** Return array of String results array [] from geoSystemType type initializeOnly field named "geoSystem" */
	std::string* getGeoSystem ();

	/** Return number of primitive values in "geoSystem" array */
	int getNumGeoSystem ();

	/** Assign String array [] to geoSystemType type initializeOnly field named "geoSystem" */
	void setGeoSystem (std::string* values, int size);

	/** Return array of 3-tuple double results array [] from MFVec3d inputOutput field named "keyValue" */
	double* getKeyValue ();

	/** Return number of 3-tuple primitive values in "keyValue" array */
	int getNumKeyValue ();

	/** Assign 3-tuple double array [] to MFVec3d inputOutput field named "keyValue" */
	void setKeyValue (double* values, int size);

	/** Return GeoOrigin result (deprecated node, optional) from SFNode initializeOnly field named "geoOrigin" */
	void getGeoOrigin (X3DNode result);

	/** Assign GeoOrigin value (deprecated node, optional) to SFNode initializeOnly field named "geoOrigin" */
	void setGeoOrigin (GeoOrigin node);

	/** Assign GeoOrigin value (deprecated protoInstance) */
	void setGeoOrigin (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	//void setFraction (float value);

	///** Return array of float results array [] from MFFloat inputOutput field named "key" */
	//float* getKey ();

	///** Return number of primitive values in "key" array */
	//int getNumKey ();

	///** Assign float array [] to MFFloat inputOutput field named "key" */
	//void setKey (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	//void setKey (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.83 GeoProximitySensor 
/** GeoProximitySensor defines a concrete node interface that extends interface X3DEnvironmentalSensorNode. */

class X3D_API GeoProximitySensor : public X3DEnvironmentalSensorNode
{

public:
	GeoProximitySensor();
	virtual ~GeoProximitySensor();

	/** Return array of 3-tuple float results array in radians from SFVec3f outputOnly field named "centerOfRotation_changed" */
	float* getCenterOfRotation ();

	/** Return double result in seconds from SFTime outputOnly field named "enterTime" */
	double getEnterTime ();

	/** Return double result in seconds from SFTime outputOnly field named "exitTime" */
	double getExitTime ();

	/** Return array of 3-tuple double results array [] from SFVec3d outputOnly field named "geoCoord_changed" */
	void getGeoCoord (double* result);

	/** Return array of 4-tuple float results array in radians from SFRotation outputOnly field named "orientation_changed" */
	float* getOrientation ();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "position_changed" */
	SFVec3f getPosition ();

	/** Return array of String results array [] from geoSystemType type initializeOnly field named "geoSystem" */
	std::string* getGeoSystem ();

	/** Return number of primitive values in "geoSystem" array */
	int getNumGeoSystem ();

	/** Assign String array [] to geoSystemType type initializeOnly field named "geoSystem" */
	void setGeoSystem (std::string* values, int size);

	/** Return array of 3-tuple double results array [] from SFVec3d inputOutput field named "geoCenter" */
	double* getGeoCenter ();

	/** Assign 3-tuple double array [] to SFVec3d inputOutput field named "geoCenter" */
	void setGeoCenter (double* value);

	/** Return GeoOrigin result (deprecated node, optional) from SFNode initializeOnly field named "geoOrigin" */
	void getGeoOrigin (X3DNode result);

	/** Assign GeoOrigin value (deprecated node, optional) to SFNode initializeOnly field named "geoOrigin" */
	void setGeoOrigin (GeoOrigin node);

	/** Assign GeoOrigin value (deprecated protoInstance) */
	void setGeoOrigin (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "center" */
	//float* getCenter ();

	///** Assign 3-tuple float array [] to SFVec3f inputOutput field named "center" */
	//void setCenter (float* value);

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "size" */
	//float* getSize ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "size" */
	//void setSize (float* value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

public:
	SFVec3f  position_changed;
};
 
//C.3.84 GeoTouchSensor 
/** GeoTouchSensor defines a concrete node interface that extends interface X3DTouchSensorNode. */

class X3D_API GeoTouchSensor : public X3DTouchSensorNode
{

public:
	GeoTouchSensor();
	virtual ~GeoTouchSensor();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "hitNormal_changed" */
	float* getHitNormal ();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "hitPoint_changed" */
	float* getHitPoint ();

	/** Return array of 2-tuple float results array [] from SFVec2f outputOnly field named "hitTexCoord_changed" */
	float* getHitTexCoord ();

	/** Return array of 3-tuple double results array [] from SFVec3d outputOnly field named "hitGeoCoord_changed" */
	double* getHitGeoCoord ();

	/** Return array of String results array [] from geoSystemType type initializeOnly field named "geoSystem" */
	std::string* getGeoSystem ();

	/** Return number of primitive values in "geoSystem" array */
	int getNumGeoSystem ();

	/** Assign String array [] to geoSystemType type initializeOnly field named "geoSystem" */
	void setGeoSystem (std::string* values, int size);

	/** Return GeoOrigin result (deprecated node, optional) from SFNode initializeOnly field named "geoOrigin" */
	void getGeoOrigin (X3DNode result);

	/** Assign GeoOrigin value (deprecated node, optional) to SFNode initializeOnly field named "geoOrigin" */
	void setGeoOrigin (GeoOrigin node);

	/** Assign GeoOrigin value (deprecated protoInstance) */
	void setGeoOrigin (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool outputOnly field named "isOver" */
	//bool getIsOver ();

	///** Return String result [] from SFString inputOutput field named "description" */
	//std::string getDescription ();

	///** Assign String value [] to SFString inputOutput field named "description" */
	//void setDescription (std::string value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return double result in seconds from SFTime outputOnly field named "touchTime" */
	//double getTouchTime ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.85 GeoTransform 
/** GeoTransform defines a concrete node interface that extends interface X3DGroupingNode. */

class X3D_API GeoTransform : public X3DGroupingNode
{

public:
	GeoTransform();
	virtual ~GeoTransform();

	/** Return array of 3-tuple double results array [] from SFVec3d inputOutput field named "geoCenter" */
	double* getGeoCenter ();

	/** Assign 3-tuple double array [] to SFVec3d inputOutput field named "geoCenter" */
	void setGeoCenter (double* value);

	/** Return array of String results array [] from geoSystemType type initializeOnly field named "geoSystem" */
	std::string* getGeoSystem ();

	/** Return number of primitive values in "geoSystem" array */
	int getNumGeoSystem ();

	/** Assign String array [] to geoSystemType type initializeOnly field named "geoSystem" */
	void setGeoSystem (std::string* values, int size);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "rotation" */
	float* getRotation ();

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "rotation" */
	void setRotation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "scale" */
	float* getScale ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "scale" */
	void setScale (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "scaleOrientation" */
	float* getScaleOrientation ();

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "scaleOrientation" */
	void setScaleOrientation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "translation" */
	float* getTranslation ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "translation" */
	void setTranslation (float* value);

	/** Return GeoOrigin result (deprecated node, optional) from SFNode initializeOnly field named "geoOrigin" */
	void getGeoOrigin (X3DNode result);

	/** Assign GeoOrigin value (deprecated node, optional) to SFNode initializeOnly field named "geoOrigin" */
	void setGeoOrigin (GeoOrigin node);

	/** Assign GeoOrigin value (deprecated protoInstance) */
	void setGeoOrigin (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.86 GeoViewpoint 
/** GeoViewpoint defines a concrete node interface that extends interface X3DViewpointNode. */

class X3D_API GeoViewpoint : public X3DViewpointNode
{

public:
	GeoViewpoint();
	virtual ~GeoViewpoint();

	/** Return array of 3-tuple double results array in radians from SFVec3d inputOutput field named "centerOfRotation" */
	double* getCenterOfRotation ();

	/** Assign 3-tuple double array in radians to SFVec3d inputOutput field named "centerOfRotation" */
	void setCenterOfRotation (double* value);

	/** Return array of String results array [] from geoSystemType type initializeOnly field named "geoSystem" */
	std::string* getGeoSystem ();

	/** Return number of primitive values in "geoSystem" array */
	int getNumGeoSystem ();

	/** Assign String array [] to geoSystemType type initializeOnly field named "geoSystem" */
	void setGeoSystem (std::string* values, int size);

	/** Return float result [] from SFFloat inputOutput field named "fieldOfView" */
	float getFieldOfView ();

	/** Assign float value [] to SFFloat inputOutput field named "fieldOfView" */
	void setFieldOfView (float value);

	/** Return array of 3-tuple double results array [] from SFVec3d inputOutput field named "position" */
	double*  getPosition ();

	/** Assign 3-tuple double array [] to SFVec3d inputOutput field named "position" */
	void setPosition (double*  value);

	/** Return float result [] from SFFloat initializeOnly field named "speedFactor" */
	float getSpeedFactor ();

	/** Assign float value [] to SFFloat initializeOnly field named "speedFactor" */
	void setSpeedFactor (float value);

	/** Return GeoOrigin result (deprecated node, optional) from SFNode initializeOnly field named "geoOrigin" */
	void getGeoOrigin (X3DNode result);

	/** Assign GeoOrigin value (deprecated node, optional) to SFNode initializeOnly field named "geoOrigin" */
	void setGeoOrigin (GeoOrigin node);

	/** Assign GeoOrigin value (deprecated protoInstance) */
	void setGeoOrigin (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign boolean value to SFBool inputOnly field named "set_bind" */
	//void setBind (bool value);

	///** Return double result in seconds from SFTime outputOnly field named "bindTime" */
	//double getBindTime ();

	///** Return boolean result from SFBool outputOnly field named "isBound" */
	//bool getIsBound ();

	///** Return String result [] from SFString inputOutput field named "description" */
	//std::string getDescription ();

	///** Assign String value [] to SFString inputOutput field named "description" */
	//void setDescription (std::string value);

	///** Return boolean result from SFBool inputOutput field named "jump" */
	//bool getJump ();

	///** Assign boolean value to SFBool inputOutput field named "jump" */
	//void setJump (bool value);

	///** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "orientation" */
	//float* getOrientation ();

	///** Assign 4-tuple float array in radians to SFRotation inputOutput field named "orientation" */
	//void setOrientation (float* value);

	///** Return boolean result from SFBool inputOutput field named "retainUserOffsets" */
	//bool getRetainUserOffsets ();

	///** Assign boolean value to SFBool inputOutput field named "retainUserOffsets" */
	//void setRetainUserOffsets (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.87 Group 
/** Group defines a concrete node interface that extends interface X3DGroupingNode. */

class X3D_API Group : public X3DGroupingNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	Group();
	virtual ~Group();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

};
 
//C.3.88 HAnimDisplacer 
/** HAnimDisplacer defines a concrete node interface that extends interface X3DGeometricPropertyNode. */

class X3D_API HAnimDisplacer : public X3DGeometricPropertyNode
{

public:
	HAnimDisplacer();
	virtual ~HAnimDisplacer();

	/** Return String result from featurePointNames type inputOutput field named "name" */
	std::string getName ();

	/** Assign String value to featurePointNames type inputOutput field named "name" */
	void setName (std::string value);

	/** Return MFInt32 result [] from MFInt32 inputOutput field named "coordIndex" */
	int32_t* getCoordIndex ();

	/** Return number of primitive values in "coordIndex" array */
	int getNumCoordIndex ();

	/** Assign MFInt32 value [] to MFInt32 inputOutput field named "coordIndex" */
	void setCoordIndex (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOutput field named "coordIndex" */
	void setCoordIndex (int32_t value);

	/** Return array of 3-tuple float results array [] from MFVec3f inputOutput field named "displacements" */
	void getDisplacements (float* result);

	/** Return number of 3-tuple primitive values in "displacements" array */
	int getNumDisplacements ();

	/** Assign 3-tuple float array [] to MFVec3f inputOutput field named "displacements" */
	void setDisplacements (float* values, int size);

	/** Return float result [] from SFFloat inputOutput field named "weight" */
	float getWeight ();

	/** Assign float value [] to SFFloat inputOutput field named "weight" */
	void setWeight (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 

//C.3.90 HAnimJoint 
/** HAnimJoint defines a concrete node interface that extends interfaces X3DChildNodeX3DBoundedObject. */

class X3D_API HAnimJoint : public X3DChildNode, public X3DBoundedObject
{

public:
	HAnimJoint();
	virtual ~HAnimJoint();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return String result from jointNames type inputOutput field named "name" */
	std::string getName ();

	/** Assign String value to jointNames type inputOutput field named "name" */
	void setName (std::string value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "center" */
	void getCenter (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "center" */
	void setCenter (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "rotation" */
	void getRotation (float* value);

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "rotation" */
	void setRotation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "scale" */
	void getScale (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "scale" */
	void setScale (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "scaleOrientation" */
	void getScaleOrientation (float* value);

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "scaleOrientation" */
	void setScaleOrientation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "translation" */
	void getTranslation (float*);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "translation" */
	void setTranslation (float* value);

	/** Return MFInt32 result [] from MFInt32 inputOutput field named "skinCoordIndex" */
	int32_t* getSkinCoordIndex ();

	/** Return number of primitive values in "skinCoordIndex" array */
	int getNumSkinCoordIndex ();

	/** Assign MFInt32 value [] to MFInt32 inputOutput field named "skinCoordIndex" */
	void setSkinCoordIndex (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOutput field named "skinCoordIndex" */
	void setSkinCoordIndex (SFInt32 value);

	/** Return array of float results array [] from MFFloat inputOutput field named "skinCoordWeight" */
	void getSkinCoordWeight (float* value);

	/** Return number of primitive values in "skinCoordWeight" array */
	int getNumSkinCoordWeight ();

	/** Assign float array [] to MFFloat inputOutput field named "skinCoordWeight" */
	void setSkinCoordWeight (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "skinCoordWeight" */
	void setSkinCoordWeight (float value);

	/** Return array of float results array [] from MFFloat inputOutput field named "llimit" */
	void getLlimit (float* value);

	/** Return number of primitive values in "llimit" array */
	int getNumLlimit ();

	/** Assign float array [] to MFFloat inputOutput field named "llimit" */
	void setLlimit (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "llimit" */
	void setLlimit (float value);

	/** Return array of float results array [] from MFFloat inputOutput field named "ulimit" */
	void getUlimit (float* value);

	/** Return number of primitive values in "ulimit" array */
	int getNumUlimit ();

	/** Assign float array [] to MFFloat inputOutput field named "ulimit" */
	void setUlimit (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "ulimit" */
	void setUlimit (float value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "limitOrientation" */
	void getLimitOrientation (float* value);

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "limitOrientation" */
	void setLimitOrientation (float* value);

	/** Return array of float results array [] from MFFloat inputOutput field named "stiffness" */
	void getStiffness (float* value);

	/** Return number of primitive values in "stiffness" array */
	int getNumStiffness ();

	/** Assign float array [] to MFFloat inputOutput field named "stiffness" */
	void setStiffness (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "stiffness" */
	void setStiffness (float value);

	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	/** Assign HAnimJoint|HAnimSegment array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (X3DNode* nodes);

	/** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	virtual void addChildren (X3DNode node);

	/** Assign HAnimJoint|HAnimSegment array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (X3DPrototypeInstance node);

	/** Assign HAnimJoint|HAnimSegment array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DNode* nodes);

	/** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	void removeChildren (X3DNode node);

	/** Assign HAnimJoint|HAnimSegment array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DPrototypeInstance node);

	/** Return array of HAnimJoint|HAnimSegment results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	void getChildren (X3DNode* result);

	/** Return number of nodes in "children" array */
	int getNumChildren ();

	/** Assign HAnimJoint|HAnimSegment array (using a properly typed node array) to MFNode inputOutput field named "children" */
	void setChildren (X3DNode* nodes);

	/** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	void setChildren (X3DNode node);

	/** Assign HAnimJoint|HAnimSegment array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	void setChildren (X3DPrototypeInstance node);

	/** Return array of HAnimDisplacer results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "displacers" */
	void getDisplacers (X3DNode* result);

	/** Return number of nodes in "displacers" array */
	int getNumDisplacers ();

	/** Assign HAnimDisplacer array (using a properly typed node array) to MFNode inputOutput field named "displacers" */
	void setDisplacers (HAnimDisplacer* nodes);

	/** Assign single HAnimDisplacer value (using a properly typed node) as the MFNode array for inputOutput field named "displacers" */
	void setDisplacers (HAnimDisplacer node);

	/** Assign HAnimDisplacer array (using a properly typed protoInstance array) to MFNode inputOutput field named "displacers" */
	void setDisplacers (X3DPrototypeInstance node);

	/** Assign HAnimDisplacer array (using a properly typed node array) to MFNode inputOutput field named "displacers" */
	void setDisplacers (X3DNode* nodes);

	// ===== methods for fields inherited from parent interfaces =====

	/** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	void setCenter(SFVec3f val);
	void setRotation(SFVec4f val);
	void setScale(SFVec3f val);
	void setScaleOrientation(SFVec4f val);
	void setTranslation(SFVec3f val);

	//SFVec3f getCenter();
	//SFRotation getRotation();
	//SFVec3f getScale();
	//SFRotation getScaleOrientation();
	//SFVec3f getTranslation();

//Attributes
public:
	std::string		name;
	//SFVec3f		center;
	float		center[3];
	//SFRotation	rotation;
	float		rotation[4];
	//SFVec3f		scale;
	float		scale[3];
	//SFRotation	scaleOrientation;
	float		scaleOrientation[4];
	//SFVec3f		translation;
	float		translation[3];

	std::vector<X3DBaseNode*>	children;
};
 

//C.3.91 HAnimSegment 
/** HAnimSegment defines a concrete node interface that extends interface X3DGroupingNode. */

class X3D_API HAnimSegment : public X3DGroupingNode
{

public:
	HAnimSegment();
	virtual ~HAnimSegment();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return String result from segmentNames type inputOutput field named "name" */
	std::string getName ();

	/** Assign String value to segmentNames type inputOutput field named "name" */
	void setName (std::string value);

	/** Return float result [] from SFFloat inputOutput field named "mass" */
	float getMass ();

	/** Assign float value [] to SFFloat inputOutput field named "mass" */
	void setMass (float value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "centerOfMass" */
	float* getCenterOfMass ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "centerOfMass" */
	void setCenterOfMass (SFVec3f value);

	/** Return array of float results array [] from MFFloat inputOutput field named "momentsOfInertia" */
	float* getMomentsOfInertia ();

	/** Return number of primitive values in "momentsOfInertia" array */
	int getNumMomentsOfInertia ();

	/** Assign float array [] to MFFloat inputOutput field named "momentsOfInertia" */
	void setMomentsOfInertia (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "momentsOfInertia" */
	void setMomentsOfInertia (float value);

	/** Return array of HAnimDisplacer results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "displacers" */
	void getDisplacers (X3DNode* result);

	/** Return number of nodes in "displacers" array */
	int getNumDisplacers ();

	/** Assign HAnimDisplacer array (using a properly typed node array) to MFNode inputOutput field named "displacers" */
	void setDisplacers (HAnimDisplacer* nodes);

	/** Assign single HAnimDisplacer value (using a properly typed node) as the MFNode array for inputOutput field named "displacers" */
	void setDisplacers (HAnimDisplacer node);

	/** Assign HAnimDisplacer array (using a properly typed protoInstance array) to MFNode inputOutput field named "displacers" */
	void setDisplacers (X3DPrototypeInstance node);

	/** Assign HAnimDisplacer array (using a properly typed node array) to MFNode inputOutput field named "displacers" */
	void setDisplacers (X3DNode* nodes);

	/** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
	void getCoord (X3DNode result);

	/** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
	void setCoord (X3DCoordinateNode node);

	/** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	void setCoord (X3DPrototypeInstance protoInstance);

	// ===== methods for fields inherited from parent interfaces =====

	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

//Attributes
public:
	std::string		name;
};
 

//C.3.92 HAnimSite 
/** HAnimSite defines a concrete node interface that extends interface X3DGroupingNode. */

class X3D_API HAnimSite : public X3DGroupingNode
{

public:
	HAnimSite();
	virtual ~HAnimSite();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return xs:NMTOKEN result [] from xs:NMTOKEN type inputOutput field named "name" */
	//xs:NMTOKEN getName ();
	std::string getName ();

	/** Assign xs:NMTOKEN value [] to xs:NMTOKEN type inputOutput field named "name" */
	//void setName (xs:NMTOKEN value);
	void setName (std::string value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "center" */
	void getCenter (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "center" */
	void setCenter (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "rotation" */
	void getRotation (float* value);

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "rotation" */
	void setRotation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "scale" */
	void getScale (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "scale" */
	void setScale (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "scaleOrientation" */
	void getScaleOrientation (float* value);

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "scaleOrientation" */
	void setScaleOrientation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "translation" */
	void getTranslation (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "translation" */
	void setTranslation (float* value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	void setCenter(SFVec3f val);
	void setRotation(SFVec4f val);
	void setScale(SFVec3f val);
	void setScaleOrientation(SFVec4f val);
	void setTranslation(SFVec3f val);

	//SFVec3f getCenter();
	//SFRotation getRotation();
	//SFVec3f getScale();
	//SFRotation getScaleOrientation();
	//SFVec3f getTranslation();
//Attributes
public:
	std::string		name;
	//SFVec3f		center;
	float		center[3];
	//SFRotation	rotation;
	float		rotation[4];
	//SFVec3f		scale;
	float		scale[3];
	//SFRotation	scaleOrientation;
	float		scaleOrientation[4];
	//SFVec3f		translation;
	float		translation[3];
};
 
//C.3.89 HAnimHumanoid 
/** HAnimHumanoid defines a concrete node interface that extends interfaces X3DChildNodeX3DBoundedObject. */

class X3D_API HAnimHumanoid : public X3DChildNode, public X3DBoundedObject
{

public:
	HAnimHumanoid();
	virtual ~HAnimHumanoid();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return String result [] from SFString inputOutput field named "name" */
	std::string getName ();

	/** Assign String value [] to SFString inputOutput field named "name" */
	void setName (std::string value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "center" */
	void getCenter (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "center" */
	void setCenter (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "rotation" */
	void getRotation (float* value);

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "rotation" */
	void setRotation (float*  value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "scale" */
	void getScale (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "scale" */
	void setScale (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "scaleOrientation" */
	void getScaleOrientation (float* value);

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "scaleOrientation" */
	void setScaleOrientation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "translation" */
	void getTranslation (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "translation" */
	void setTranslation (float* value);

	/** Return array of String results array [] from MFString inputOutput field named "info" */
	std::string* getInfo ();

	/** Return number of primitive values in "info" array */
	int getNumInfo ();

	/** Assign String array [] to MFString inputOutput field named "info" */
	void setInfo (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "info" */
	void setInfo (std::string value);

	/** Return String result [] from hanimVersionValues type inputOutput field named "version" */
	std::string getVersion ();

	/** Assign String value [] to hanimVersionValues type inputOutput field named "version" */
	void setVersion (std::string value);

	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	/** Return array of HAnimJoint results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "joints" */
	void getJoints (X3DNode* result);

	/** Return number of nodes in "joints" array */
	int getNumJoints ();

	/** Assign HAnimJoint array (using a properly typed node array) to MFNode inputOutput field named "joints" */
	void setJoints (HAnimJoint* nodes);

	/** Assign single HAnimJoint value (using a properly typed node) as the MFNode array for inputOutput field named "joints" */
	void setJoints (HAnimJoint node);

	/** Assign HAnimJoint array (using a properly typed protoInstance array) to MFNode inputOutput field named "joints" */
	void setJoints (X3DPrototypeInstance node);

	/** Assign HAnimJoint array (using a properly typed node array) to MFNode inputOutput field named "joints" */
	void setJoints (X3DNode* nodes);

	/** Return array of HAnimSegment results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "segments" */
	void getSegments (X3DNode* result);

	/** Return number of nodes in "segments" array */
	int getNumSegments ();

	/** Assign HAnimSegment array (using a properly typed node array) to MFNode inputOutput field named "segments" */
	void setSegments (HAnimSegment* nodes);

	/** Assign single HAnimSegment value (using a properly typed node) as the MFNode array for inputOutput field named "segments" */
	void setSegments (HAnimSegment node);

	/** Assign HAnimSegment array (using a properly typed protoInstance array) to MFNode inputOutput field named "segments" */
	void setSegments (X3DPrototypeInstance node);

	/** Assign HAnimSegment array (using a properly typed node array) to MFNode inputOutput field named "segments" */
	void setSegments (X3DNode* nodes);

	/** Return array of HAnimSite results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "sites" */
	void getSites (X3DNode* result);

	/** Return number of nodes in "sites" array */
	int getNumSites ();

	/** Assign HAnimSite array (using a properly typed node array) to MFNode inputOutput field named "sites" */
	void setSites (HAnimSite* nodes);

	/** Assign single HAnimSite value (using a properly typed node) as the MFNode array for inputOutput field named "sites" */
	void setSites (HAnimSite node);

	/** Assign HAnimSite array (using a properly typed protoInstance array) to MFNode inputOutput field named "sites" */
	void setSites (X3DPrototypeInstance node);

	/** Assign HAnimSite array (using a properly typed node array) to MFNode inputOutput field named "sites" */
	void setSites (X3DNode* nodes);

	/** Return array of HAnimJoint|HAnimSite results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "skeleton" */
	void getSkeleton (X3DNode* result);

	/** Return number of nodes in "skeleton" array */
	int getNumSkeleton ();

	/** Assign HAnimJoint|HAnimSite array (using a properly typed node array) to MFNode inputOutput field named "skeleton" */
	void setSkeleton (X3DNode* nodes);

	/** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOutput field named "skeleton" */
	void setSkeleton (X3DNode node);

	/** Assign HAnimJoint|HAnimSite array (using a properly typed protoInstance array) to MFNode inputOutput field named "skeleton" */
	void setSkeleton (X3DPrototypeInstance node);

	/** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "skin" */
	void getSkin (X3DNode* result);

	/** Return number of nodes in "skin" array */
	int getNumSkin ();

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "skin" */
	void setSkin (X3DChildNode* nodes);

	/** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "skin" */
	void setSkin (X3DChildNode node);

	/** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "skin" */
	void setSkin (X3DPrototypeInstance node);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "skin" */
	void setSkin (X3DNode* nodes);

	/** Return array of X3DCoordinateNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "skinCoord" */
	void getSkinCoord (X3DNode* result);

	/** Return number of nodes in "skinCoord" array */
	int getNumSkinCoord ();

	/** Assign X3DCoordinateNode array (using a properly typed node array) to MFNode inputOutput field named "skinCoord" */
	void setSkinCoord (X3DCoordinateNode* nodes);

	/** Assign single X3DCoordinateNode value (using a properly typed node) as the MFNode array for inputOutput field named "skinCoord" */
	void setSkinCoord (X3DCoordinateNode node);

	/** Assign X3DCoordinateNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "skinCoord" */
	void setSkinCoord (X3DPrototypeInstance node);

	/** Assign X3DCoordinateNode array (using a properly typed node array) to MFNode inputOutput field named "skinCoord" */
	void setSkinCoord (X3DNode* nodes);

	/** Return array of X3DNormalNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "skinNormal" */
	void getSkinNormal (X3DNode* result);

	/** Return number of nodes in "skinNormal" array */
	int getNumSkinNormal ();

	/** Assign X3DNormalNode array (using a properly typed node array) to MFNode inputOutput field named "skinNormal" */
	void setSkinNormal (X3DNormalNode* nodes);

	/** Assign single X3DNormalNode value (using a properly typed node) as the MFNode array for inputOutput field named "skinNormal" */
	void setSkinNormal (X3DNormalNode node);

	/** Assign X3DNormalNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "skinNormal" */
	void setSkinNormal (X3DPrototypeInstance node);

	/** Assign X3DNormalNode array (using a properly typed node array) to MFNode inputOutput field named "skinNormal" */
	void setSkinNormal (X3DNode* nodes);

	/** Return array of HAnimSite results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "viewpoints" */
	void getViewpoints (X3DNode* result);

	/** Return number of nodes in "viewpoints" array */
	int getNumViewpoints ();

	/** Assign HAnimSite array (using a properly typed node array) to MFNode inputOutput field named "viewpoints" */
	void setViewpoints (HAnimSite* nodes);

	/** Assign single HAnimSite value (using a properly typed node) as the MFNode array for inputOutput field named "viewpoints" */
	void setViewpoints (HAnimSite node);

	/** Assign HAnimSite array (using a properly typed protoInstance array) to MFNode inputOutput field named "viewpoints" */
	void setViewpoints (X3DPrototypeInstance node);

	/** Assign HAnimSite array (using a properly typed node array) to MFNode inputOutput field named "viewpoints" */
	void setViewpoints (X3DNode* nodes);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	void setCenter(SFVec3f val);
	void setRotation(SFVec4f val);
	void setScale(SFVec3f val);
	void setScaleOrientation(SFVec4f val);
	void setTranslation(SFVec3f val);

	//SFVec3f getCenter();
	//SFRotation getRotation();
	//SFVec3f getScale();
	//SFRotation getScaleOrientation();
	//SFVec3f getTranslation();

//Attributes
public:
	std::string		name;
	//SFVec3f		center;
	float		center[3];
	//SFRotation	rotation;
	float		rotation[4];
	//SFVec3f		scale;
	float		scale[3];
	//SFRotation	scaleOrientation;
	float		scaleOrientation[4];
	//SFVec3f		translation;
	float		translation[3];

	std::vector<std::string>	info;
	std::vector<std::string>	version;

	std::vector<X3DBaseNode*>	children;
};
 

//C.3.124 meta 
/** meta defines a concrete node interface that extends interface SceneGraphStructureStatement. */

class X3D_API meta : public SceneGraphStructureStatement
{

public:
	meta();
	virtual ~meta();
	virtual std::string getXMLString();

	/** Return String result http://www.dublincore.org/documents/dcmi-terms/#terms-description from SFString inputOutput field named "name" */
	std::string getName();

	/** Assign String value http://www.dublincore.org/documents/dcmi-terms/#terms-description to SFString inputOutput field named "name" */
	void setName(std::string value);

	/** Return String result http://www.w3.org/TR/html4/struct/global.html#adef-content from SFString inputOutput field named "content" */
	std::string getContent();

	/** Assign String value http://www.w3.org/TR/html4/struct/global.html#adef-content to SFString inputOutput field named "content" */
	void setContent(std::string value);

	/** Return String result [] from metaDirectionValues type inputOutput field named "dir" */
	std::string getDir();

	/** Assign String value [] to metaDirectionValues type inputOutput field named "dir" */
	void setDir(std::string value);

	/** Return String result http://www.w3.org/TR/html4/struct/global.html#adef-http-equiv from SFString inputOutput field named "http-equiv" */
	std::string getHttp_equiv();

	/** Assign String value http://www.w3.org/TR/html4/struct/global.html#adef-http-equiv to SFString inputOutput field named "http-equiv" */
	void setHttp_equiv(std::string value);

	/** Return String result http://www.w3.org/TR/html4/struct/dirlang.html#h-8.1.1 from SFString inputOutput field named "lang" */
	std::string getLang();

	/** Assign String value http://www.w3.org/TR/html4/struct/dirlang.html#h-8.1.1 to SFString inputOutput field named "lang" */
	void setLang(std::string value);

	/** Return String result http://www.w3.org/TR/html4/struct/global.html#idx-scheme from SFString inputOutput field named "scheme" */
	std::string getScheme();

	/** Assign String value http://www.w3.org/TR/html4/struct/global.html#idx-scheme to SFString inputOutput field named "scheme" */
	void setScheme(std::string value);

	void setData(std::string strName, std::string strContent);

	void getData(std::string& strName, std::string& strContent);

protected:
	std::string		name;
	std::string		content;

};

//C.3.93 head 
/** head defines a concrete node interface that extends interface SceneGraphStructureStatement. */

class X3D_API head : public SceneGraphStructureStatement
{

public:
	head();
	virtual ~head();
	//virtual std::string getXMLString();

	void addMeta(std::string name, std::string content);
	void addMeta(meta* node);
};
 
//C.3.94 ImageCubeMapTexture 
/** ImageCubeMapTexture defines a concrete node interface that extends interfaces X3DEnvironmentTextureNodeX3DUrlObject. */

class X3D_API ImageCubeMapTexture : public X3DEnvironmentTextureNode, public X3DUrlObject
{

public:
	ImageCubeMapTexture();
	virtual ~ImageCubeMapTexture();

	/** Return array of String results array [] from MFString inputOutput field named "url" */
	std::string* getUrl ();

	/** Return number of primitive values in "url" array */
	int getNumUrl ();

	/** Assign String array [] to MFString inputOutput field named "url" */
	void setUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "url" */
	void setUrl (std::string value);

	/** Return TextureProperties result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "textureProperties" */
	void getTextureProperties (X3DNode result);

	/** Assign TextureProperties value (using a properly typed node) to SFNode initializeOnly field named "textureProperties" */
	void setTextureProperties (TextureProperties node);

	/** Assign TextureProperties value (using a properly typed protoInstance) */
	void setTextureProperties (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.96 ImageTexture3D 
/** ImageTexture3D defines a concrete node interface that extends interfaces X3DTexture3DNodeX3DUrlObject. */

class X3D_API ImageTexture3D : public X3DTexture3DNode, public X3DUrlObject
{

public:
	ImageTexture3D();
	virtual ~ImageTexture3D();

	/** Return array of String results array [] from MFString inputOutput field named "url" */
	std::string* getUrl ();

	/** Return number of primitive values in "url" array */
	int getNumUrl ();

	/** Assign String array [] to MFString inputOutput field named "url" */
	void setUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "url" */
	void setUrl (std::string value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool initializeOnly field named "repeatS" */
	//bool getRepeatS ();

	///** Assign boolean value to SFBool initializeOnly field named "repeatS" */
	//void setRepeatS (bool value);

	///** Return boolean result from SFBool initializeOnly field named "repeatT" */
	//bool getRepeatT ();

	///** Assign boolean value to SFBool initializeOnly field named "repeatT" */
	//void setRepeatT (bool value);

	///** Return boolean result from SFBool initializeOnly field named "repeatR" */
	//bool getRepeatR ();

	///** Assign boolean value to SFBool initializeOnly field named "repeatR" */
	//void setRepeatR (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return TextureProperties result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "textureProperties" */
	//void getTextureProperties (X3DNode result);

	///** Assign TextureProperties value (using a properly typed node) to SFNode initializeOnly field named "textureProperties" */
	//void setTextureProperties (TextureProperties node);

	///** Assign TextureProperties value (using a properly typed protoInstance) */
	//void setTextureProperties (X3DPrototypeInstance protoInstance);
};
 
//C.3.97 IMPORT 
/** IMPORT defines a concrete node interface that extends interface SceneGraphStructureStatement. */

class X3D_API IMPORT : public SceneGraphStructureStatement
{

public:
	IMPORT();
	virtual ~IMPORT();

	/** Return xs:IDREF result [] from xs:IDREF type inputOutput field named "inlineDEF" */
	//xs:IDREF getInlineDEF ();
	std::string* getInlineDEF ();

	/** Assign xs:IDREF value [] to xs:IDREF type inputOutput field named "inlineDEF" */
	//void setInlineDEF (xs:IDREF value);
	void setInlineDEF (std::string* value);

	/** Return xs:NMTOKEN result [] from xs:NMTOKEN type inputOutput field named "importedDEF" */
	//xs:NMTOKEN getImportedDEF ();
	std::string* getImportedDEF ();

	/** Assign xs:NMTOKEN value [] to xs:NMTOKEN type inputOutput field named "importedDEF" */
	//void setImportedDEF (xs:NMTOKEN value);
	void setImportedDEF (std::string* value);

	/** Return xs:ID result [] from xs:ID type inputOutput field named "AS" */
	//xs:ID getAS ();
	std::string* getAS ();

	/** Assign xs:ID value [] to xs:ID type inputOutput field named "AS" */
	//void setAS (xs:ID value);
	void setAS (std::string* value);
};
 
//C.3.98 IndexedFaceSet 
/** IndexedFaceSet defines a concrete node interface that extends interface X3DComposedGeometryNode. */

class X3D_API IndexedFaceSet : public X3DComposedGeometryNode
{

public:
	IndexedFaceSet();
	virtual ~IndexedFaceSet();
	virtual void Draw();
	virtual std::string getXMLString();

//Implimentation
public:
	/** Assign MFInt32 value using RGB values [0..1] to MFInt32 inputOnly field named "set_colorIndex" */
	void setColorIndex (MFInt32 colors);

	/** Assign single SFInt32 value using RGB values [0..1] as the MFInt32 array for inputOnly field named "set_colorIndex" */
	void setColorIndex (SFInt32 color);

	/** Assign MFInt32 value [] to MFInt32 inputOnly field named "set_coordIndex" */
	void setCoordIndex (MFInt32* values);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOnly field named "set_coordIndex" */
	void setCoordIndex (SFInt32 value);

	/** Assign MFInt32 value [] to MFInt32 inputOnly field named "set_normalIndex" */
	void setNormalIndex (MFInt32 values);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOnly field named "set_normalIndex" */
	void setNormalIndex (SFInt32 value);

	/** Assign MFInt32 value [] to MFInt32 inputOnly field named "set_texCoordIndex" */
	void setTexCoordIndex (MFInt32 values);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOnly field named "set_texCoordIndex" */
	void setTexCoordIndex (SFInt32 value);

	///** Return boolean result from SFBool initializeOnly field named "convex" */
	//bool getConvex ();

	///** Assign boolean value to SFBool initializeOnly field named "convex" */
	//void setConvex (bool value);

	/** Return float result in radians from  type initializeOnly field named "creaseAngle" */
	float getCreaseAngle ();

	/** Assign float value in radians to  type initializeOnly field named "creaseAngle" */
	void setCreaseAngle (float angle);

	/** Return MFInt32 result using RGB values [0..1] from MFInt32 initializeOnly field named "colorIndex" */
	MFInt32* getColorIndex();

	/** Return number of primitive values in "colorIndex" array */
	int getNumColorIndex ();

	///** Assign MFInt32 value using RGB values [0..1] to MFInt32 initializeOnly field named "colorIndex" */
	//void setColorIndex (int32_t* colors, int size);

	///** Assign single SFInt32 value using RGB values [0..1] as the MFInt32 array for initializeOnly field named "colorIndex" */
	//void setColorIndex (SFInt32 color);

	/** Return MFInt32 result [] from MFInt32 initializeOnly field named "coordIndex" */
	MFInt32* getCoordIndex ();

	/** Return number of primitive values in "coordIndex" array */
	int getNumCoordIndex ();

	///** Assign MFInt32 value [] to MFInt32 initializeOnly field named "coordIndex" */
	//void setCoordIndex (int32_t* values, int size);

	///** Assign single SFInt32 value [] as the MFInt32 array for initializeOnly field named "coordIndex" */
	//void setCoordIndex (int32_t value);

	/** Return MFInt32 result [] from MFInt32 initializeOnly field named "normalIndex" */
	MFInt32* getNormalIndex ();

	/** Return number of primitive values in "normalIndex" array */
	int getNumNormalIndex ();

	///** Assign MFInt32 value [] to MFInt32 initializeOnly field named "normalIndex" */
	//void setNormalIndex (int32_t* values, int size);

	///** Assign single SFInt32 value [] as the MFInt32 array for initializeOnly field named "normalIndex" */
	//void setNormalIndex (int32_t value);

	/** Return MFInt32 result [] from MFInt32 initializeOnly field named "texCoordIndex" */
	MFInt32* getTexCoordIndex ();

	/** Return number of primitive values in "texCoordIndex" array */
	int getNumTexCoordIndex ();

	///** Assign MFInt32 value [] to MFInt32 initializeOnly field named "texCoordIndex" */
	//void setTexCoordIndex (int32_t* values, int size);

	///** Assign single SFInt32 value [] as the MFInt32 array for initializeOnly field named "texCoordIndex" */
	//void setTexCoordIndex (int32_t value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool initializeOnly field named "ccw" */
	//bool getCcw ();

	///** Assign boolean value to SFBool initializeOnly field named "ccw" */
	//void setCcw (bool value);

	///** Return boolean result from SFBool initializeOnly field named "colorPerVertex" */
	//bool getColorPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "colorPerVertex" */
	//void setColorPerVertex (bool color);

	///** Return boolean result from SFBool initializeOnly field named "normalPerVertex" */
	//bool getNormalPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "normalPerVertex" */
	//void setNormalPerVertex (bool value);

	///** Return boolean result from SFBool initializeOnly field named "solid" */
	//bool getSolid ();

	///** Assign boolean value to SFBool initializeOnly field named "solid" */
	//void setSolid (bool value);

	///** Return array of X3DVertexAttributeNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "attrib" */
	//void getAttrib (X3DNode* result);

	///** Return number of nodes in "attrib" array */
	//int getNumAttrib ();

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode* nodes);

	///** Assign single X3DVertexAttributeNode value (using a properly typed node) as the MFNode array for inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode node);

	///** Assign X3DVertexAttributeNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DPrototypeInstance node);

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DNode* nodes);

	///** Return X3DColorNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "color" */
	//void getColor (X3DNode result);

	///** Assign X3DColorNode value (using a properly typed node) to SFNode inputOutput field named "color" */
	void setColor (X3DColorNode color);

	///** Assign X3DColorNode value (using a properly typed protoInstance) */
	void setColor (X3DPrototypeInstance protoInstance);

	///** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
	//void getCoord (X3DNode result);

	///** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
	//void setCoord (X3DCoordinateNode node);

	///** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	//void setCoord (X3DPrototypeInstance protoInstance);

	///** Return FogCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fogCoord" */
	//void getFogCoord (X3DNode result);

	///** Assign FogCoordinate value (using a properly typed node) to SFNode inputOutput field named "fogCoord" */
	//void setFogCoord (FogCoordinate node);

	///** Assign FogCoordinate value (using a properly typed protoInstance) */
	//void setFogCoord (X3DPrototypeInstance protoInstance);

	///** Return X3DNormalNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "normal" */
	//void getNormal (X3DNode result);

	///** Assign X3DNormalNode value (using a properly typed node) to SFNode inputOutput field named "normal" */
	//void setNormal (X3DNormalNode node);

	///** Assign X3DNormalNode value (using a properly typed protoInstance) */
	//void setNormal (X3DPrototypeInstance protoInstance);

	///** Return X3DTextureCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texCoord" */
	//void getTexCoord (X3DNode result);

	///** Assign X3DTextureCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "texCoord" */
	//void setTexCoord (X3DTextureCoordinateNode node);

	///** Assign X3DTextureCoordinateNode value (using a properly typed protoInstance) */
	//void setTexCoord (X3DPrototypeInstance protoInstance);

	/** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	void setColorIndex(int* values, int size);

	void setCoordIndex(int* values, int size);

	void setNormalIndex(int* values, int size);

	void setTexCoordIndex(int* values, int size);

	void setCoordIndex(int32_t value);


	void set_colorIndex(std::string strIndex);
	void set_coordIndex(std::string strIndex);
	void set_normalIndex(std::string strIndex);
	void set_texCoordIndex(std::string strIndex);
	void setIndex(std::string strIndex, int nType);

	//Coordinate* getCoord();
	//CColor*		getColor();
	//Normal*	getNormal();
	//TextureCoordinate* getTexCoord();

//Attributes
protected:
	MFInt32* colorIndex;
	MFInt32* coordIndex;
	MFInt32* normalIndex;
	MFInt32* texCoordIndex;

	float	creaseAngle;
};
 
//C.3.99 IndexedLineSet 
/** IndexedLineSet defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API IndexedLineSet : public X3DComposedGeometryNode
{

public:
	IndexedLineSet();
	virtual ~IndexedLineSet();
	virtual void Draw();
	virtual std::string getXMLString();

	//Implimentation
public:
	/** Assign MFInt32 value using RGB values [0..1] to MFInt32 inputOnly field named "set_colorIndex" */
	void setColorIndex (MFInt32 colors);

	/** Assign single SFInt32 value using RGB values [0..1] as the MFInt32 array for inputOnly field named "set_colorIndex" */
	void setColorIndex (SFInt32 color);

	/** Assign MFInt32 value [] to MFInt32 inputOnly field named "set_coordIndex" */
	void setCoordIndex (MFInt32* values);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOnly field named "set_coordIndex" */
	void setCoordIndex (SFInt32 value);

	/** Return boolean result from SFBool initializeOnly field named "colorPerVertex" */
	//bool getColorPerVertex ();

	/** Assign boolean value to SFBool initializeOnly field named "colorPerVertex" */
	//void setColorPerVertex (bool color);

	/** Return MFInt32 result using RGB values [0..1] from MFInt32 initializeOnly field named "colorIndex" */
	MFInt32* getColorIndex ();

	/** Return number of primitive values in "colorIndex" array */
	int getNumColorIndex ();

	///** Assign MFInt32 value using RGB values [0..1] to MFInt32 initializeOnly field named "colorIndex" */
	//void setColorIndex (int32_t* colors, int size);

	///** Assign single SFInt32 value using RGB values [0..1] as the MFInt32 array for initializeOnly field named "colorIndex" */
	//void setColorIndex (int32_t color);

	/** Return MFInt32 result [] from MFInt32 initializeOnly field named "coordIndex" */
	MFInt32* getCoordIndex ();

	/** Return number of primitive values in "coordIndex" array */
	int getNumCoordIndex ();

	/** Assign MFInt32 value [] to MFInt32 initializeOnly field named "coordIndex" */
	//void setCoordIndex (int32_t* values, int size);

	///** Assign single SFInt32 value [] as the MFInt32 array for initializeOnly field named "coordIndex" */
	//void setCoordIndex (int32_t value);

	///** Return array of X3DVertexAttributeNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "attrib" */
	//void getAttrib (X3DNode* result);

	///** Return number of nodes in "attrib" array */
	//int getNumAttrib ();

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode* nodes);

	///** Assign single X3DVertexAttributeNode value (using a properly typed node) as the MFNode array for inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode node);

	///** Assign X3DVertexAttributeNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DPrototypeInstance node);

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DNode* nodes);

	///** Return X3DColorNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "color" */
	//void getColor (X3DNode result);

	///** Assign X3DColorNode value (using a properly typed node) to SFNode inputOutput field named "color" */
	//void setColor (X3DColorNode color);

	///** Assign X3DColorNode value (using a properly typed protoInstance) */
	//void setColor (X3DPrototypeInstance protoInstance);

	///** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
	//void getCoord (X3DNode result);

	///** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
	//void setCoord (X3DCoordinateNode node);

	///** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	//void setCoord (X3DPrototypeInstance protoInstance);

	///** Return FogCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fogCoord" */
	//void getFogCoord (X3DNode result);

	///** Assign FogCoordinate value (using a properly typed node) to SFNode inputOutput field named "fogCoord" */
	//void setFogCoord (FogCoordinate node);

	///** Assign FogCoordinate value (using a properly typed protoInstance) */
	//void setFogCoord (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	void setColorIndex(int* values, int size);

	void setCoordIndex(int* values, int size);

	void setCoordIndex(int32_t value);

	//Attributes
protected:
	MFInt32* colorIndex;
	MFInt32* coordIndex;
};
 
//C.3.100 IndexedQuadSet 
/** IndexedQuadSet defines a concrete node interface that extends interface X3DComposedGeometryNode.
* IndexedQuadSetQuadSet is a geometry node that defines quadrilaterals. */

class X3D_API IndexedQuadSet : public X3DComposedGeometryNode
{

public:
	IndexedQuadSet();
	virtual ~IndexedQuadSet();
	virtual void Draw();
	virtual std::string getXMLString();

	//Implimentation
public:

	/** Assign MFInt32 value [] to MFInt32 inputOnly field named "set_index" */
	void setIndex (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOnly field named "set_index" */
	void setIndex (int32_t value);

	/** Return MFInt32 result [] from MFInt32 initializeOnly field named "index" */
	int32_t* getIndex ();

	/** Return number of primitive values in "index" array */
	int getNumIndex ();

	///** Assign MFInt32 value [] to MFInt32 initializeOnly field named "index" */
	//void setIndex (int32_t values, int size);

	///** Assign single SFInt32 value [] as the MFInt32 array for initializeOnly field named "index" */
	//void setIndex (int32_t value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool initializeOnly field named "ccw" */
	//bool getCcw ();

	///** Assign boolean value to SFBool initializeOnly field named "ccw" */
	//void setCcw (bool value);

	///** Return boolean result from SFBool initializeOnly field named "colorPerVertex" */
	//bool getColorPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "colorPerVertex" */
	//void setColorPerVertex (bool color);

	///** Return boolean result from SFBool initializeOnly field named "normalPerVertex" */
	//bool getNormalPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "normalPerVertex" */
	//void setNormalPerVertex (bool value);

	///** Return boolean result from SFBool initializeOnly field named "solid" */
	//bool getSolid ();

	///** Assign boolean value to SFBool initializeOnly field named "solid" */
	//void setSolid (bool value);

	///** Return array of X3DVertexAttributeNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "attrib" */
	//void getAttrib (X3DNode* result);

	///** Return number of nodes in "attrib" array */
	//int getNumAttrib ();

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode* nodes);

	///** Assign single X3DVertexAttributeNode value (using a properly typed node) as the MFNode array for inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode node);

	///** Assign X3DVertexAttributeNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DPrototypeInstance node);

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DNode* nodes);

	///** Return X3DColorNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "color" */
	//void getColor (X3DNode result);

	///** Assign X3DColorNode value (using a properly typed node) to SFNode inputOutput field named "color" */
	//void setColor (X3DColorNode color);

	///** Assign X3DColorNode value (using a properly typed protoInstance) */
	//void setColor (X3DPrototypeInstance protoInstance);

	///** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
	//void getCoord (X3DNode result);

	///** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
	//void setCoord (X3DCoordinateNode node);

	///** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	//void setCoord (X3DPrototypeInstance protoInstance);

	///** Return FogCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fogCoord" */
	//void getFogCoord (X3DNode result);

	///** Assign FogCoordinate value (using a properly typed node) to SFNode inputOutput field named "fogCoord" */
	//void setFogCoord (FogCoordinate node);

	///** Assign FogCoordinate value (using a properly typed protoInstance) */
	//void setFogCoord (X3DPrototypeInstance protoInstance);

	///** Return X3DNormalNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "normal" */
	//void getNormal (X3DNode result);

	///** Assign X3DNormalNode value (using a properly typed node) to SFNode inputOutput field named "normal" */
	//void setNormal (X3DNormalNode node);

	///** Assign X3DNormalNode value (using a properly typed protoInstance) */
	//void setNormal (X3DPrototypeInstance protoInstance);

	///** Return X3DTextureCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texCoord" */
	//void getTexCoord (X3DNode result);

	///** Assign X3DTextureCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "texCoord" */
	//void setTexCoord (X3DTextureCoordinateNode node);

	///** Assign X3DTextureCoordinateNode value (using a properly typed protoInstance) */
	//void setTexCoord (X3DPrototypeInstance protoInstance);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
protected:
	MFInt32* index;
};
 
//C.3.101 IndexedTriangleFanSet 
/** IndexedTriangleFanSet defines a concrete node interface that extends interface X3DComposedGeometryNode. */

class X3D_API IndexedTriangleFanSet : public X3DComposedGeometryNode
{

public:
	IndexedTriangleFanSet();
	virtual ~IndexedTriangleFanSet();
	virtual void Draw();
	virtual std::string getXMLString();

	//Implimentation
public:

	/** Assign MFInt32 value [] to MFInt32 inputOnly field named "set_index" */
	void setIndex (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOnly field named "set_index" */
	void setIndex (int32_t value);

	/** Return MFInt32 result [] from MFInt32 initializeOnly field named "index" */
	int32_t* getIndex ();

	/** Return number of primitive values in "index" array */
	int getNumIndex ();

	///** Assign MFInt32 value [] to MFInt32 initializeOnly field named "index" */
	//void setIndex (int32_t* values, int size);

	///** Assign single SFInt32 value [] as the MFInt32 array for initializeOnly field named "index" */
	//void setIndex (int32_t value);

	// ===== methods for fields inherited from parent interfaces =====

//	/** Return boolean result from SFBool initializeOnly field named "ccw" */
//	bool getCcw ();
//
//	/** Assign boolean value to SFBool initializeOnly field named "ccw" */
//	void setCcw (bool value);
//
//	/** Return boolean result from SFBool initializeOnly field named "colorPerVertex" */
//	bool getColorPerVertex ();
//
//	/** Assign boolean value to SFBool initializeOnly field named "colorPerVertex" */
//	void setColorPerVertex (bool color);
//
//	/** Return boolean result from SFBool initializeOnly field named "normalPerVertex" */
//	bool getNormalPerVertex ();
//
//	/** Assign boolean value to SFBool initializeOnly field named "normalPerVertex" */
//	void setNormalPerVertex (bool value);
//
//	/** Return boolean result from SFBool initializeOnly field named "solid" */
//	bool getSolid ();
//
//	/** Assign boolean value to SFBool initializeOnly field named "solid" */
//	void setSolid (bool value);
//
//	/** Return array of X3DVertexAttributeNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "attrib" */
//	void getAttrib (X3DNode* result);
//
//	/** Return number of nodes in "attrib" array */
//	int getNumAttrib ();
//
//	/** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
//	void setAttrib (X3DVertexAttributeNode* nodes);
//
//	/** Assign single X3DVertexAttributeNode value (using a properly typed node) as the MFNode array for inputOutput field named "attrib" */
//	void setAttrib (X3DVertexAttributeNode node);
//
//	/** Assign X3DVertexAttributeNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "attrib" */
//	void setAttrib (X3DPrototypeInstance node);
//
//	/** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
//	void setAttrib (X3DNode* nodes);
//
//	/** Return X3DColorNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "color" */
//	void getColor (X3DNode result);
//
//	/** Assign X3DColorNode value (using a properly typed node) to SFNode inputOutput field named "color" */
//	void setColor (X3DColorNode color);
//
//	/** Assign X3DColorNode value (using a properly typed protoInstance) */
//	void setColor (X3DPrototypeInstance protoInstance);
//
//	/** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
//	void getCoord (X3DNode result);
//
//	/** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
//	void setCoord (X3DCoordinateNode node);
//
//	/** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
//	void setCoord (X3DPrototypeInstance protoInstance);
//
//	/** Return FogCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fogCoord" */
//	void getFogCoord (X3DNode result);
//
//	/** Assign FogCoordinate value (using a properly typed node) to SFNode inputOutput field named "fogCoord" */
//	void setFogCoord (FogCoordinate node);
//
//	/** Assign FogCoordinate value (using a properly typed protoInstance) */
//	void setFogCoord (X3DPrototypeInstance protoInstance);
//
//	/** Return X3DNormalNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "normal" */
//	void getNormal (X3DNode result);
//
//	/** Assign X3DNormalNode value (using a properly typed node) to SFNode inputOutput field named "normal" */
//	void setNormal (X3DNormalNode node);
//
//	/** Assign X3DNormalNode value (using a properly typed protoInstance) */
//	void setNormal (X3DPrototypeInstance protoInstance);
//
//	/** Return X3DTextureCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texCoord" */
//	void getTexCoord (X3DNode result);
//
//	/** Assign X3DTextureCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "texCoord" */
//	void setTexCoord (X3DTextureCoordinateNode node);
//
//	/** Assign X3DTextureCoordinateNode value (using a properly typed protoInstance) */
//	void setTexCoord (X3DPrototypeInstance protoInstance);
//
//	/** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
//	X3DNode* getMetadata ();
//
//	/** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
//	void setMetadata (X3DMetadataObject node);
//
//	/** Assign X3DMetadataObject value (using a properly typed protoInstance) */
//	void setMetadata (X3DPrototypeInstance protoInstance);

protected:
	MFInt32* index;

};
 
//C.3.102 IndexedTriangleSet 
/** IndexedTriangleSet defines a concrete node interface that extends interface X3DComposedGeometryNode. */

class X3D_API IndexedTriangleSet : public X3DComposedGeometryNode
{

public:
	IndexedTriangleSet();
	virtual ~IndexedTriangleSet();
	virtual void Draw();
	virtual std::string getXMLString();

	//Implimentation
public:

	/** Assign MFInt32 value [] to MFInt32 inputOnly field named "set_index" */
	void setIndex (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOnly field named "set_index" */
	void setIndex (int32_t value);

	/** Return MFInt32 result [] from MFInt32 initializeOnly field named "index" */
	int32_t* getIndex ();

	/** Return number of primitive values in "index" array */
	int getNumIndex ();

	///** Assign MFInt32 value [] to MFInt32 initializeOnly field named "index" */
	//void setIndex (int32_t* values, int size);

	///** Assign single SFInt32 value [] as the MFInt32 array for initializeOnly field named "index" */
	//void setIndex (int32_t value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool initializeOnly field named "ccw" */
	//bool getCcw ();

	///** Assign boolean value to SFBool initializeOnly field named "ccw" */
	//void setCcw (bool value);

	///** Return boolean result from SFBool initializeOnly field named "colorPerVertex" */
	//bool getColorPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "colorPerVertex" */
	//void setColorPerVertex (bool color);

	///** Return boolean result from SFBool initializeOnly field named "normalPerVertex" */
	//bool getNormalPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "normalPerVertex" */
	//void setNormalPerVertex (bool value);

	///** Return boolean result from SFBool initializeOnly field named "solid" */
	//bool getSolid ();

	///** Assign boolean value to SFBool initializeOnly field named "solid" */
	//void setSolid (bool value);

	///** Return array of X3DVertexAttributeNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "attrib" */
	//void getAttrib (X3DNode* result);

	///** Return number of nodes in "attrib" array */
	//int getNumAttrib ();

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode* nodes);

	///** Assign single X3DVertexAttributeNode value (using a properly typed node) as the MFNode array for inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode node);

	///** Assign X3DVertexAttributeNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DPrototypeInstance node);

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DNode* nodes);

	///** Return X3DColorNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "color" */
	//void getColor (X3DNode result);

	///** Assign X3DColorNode value (using a properly typed node) to SFNode inputOutput field named "color" */
	//void setColor (X3DColorNode color);

	///** Assign X3DColorNode value (using a properly typed protoInstance) */
	//void setColor (X3DPrototypeInstance protoInstance);

	///** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
	//void getCoord (X3DNode result);

	///** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
	//void setCoord (X3DCoordinateNode node);

	///** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	//void setCoord (X3DPrototypeInstance protoInstance);

	///** Return FogCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fogCoord" */
	//void getFogCoord (X3DNode result);

	///** Assign FogCoordinate value (using a properly typed node) to SFNode inputOutput field named "fogCoord" */
	//void setFogCoord (FogCoordinate node);

	///** Assign FogCoordinate value (using a properly typed protoInstance) */
	//void setFogCoord (X3DPrototypeInstance protoInstance);

	///** Return X3DNormalNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "normal" */
	//void getNormal (X3DNode result);

	///** Assign X3DNormalNode value (using a properly typed node) to SFNode inputOutput field named "normal" */
	//void setNormal (X3DNormalNode node);

	///** Assign X3DNormalNode value (using a properly typed protoInstance) */
	//void setNormal (X3DPrototypeInstance protoInstance);

	///** Return X3DTextureCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texCoord" */
	//void getTexCoord (X3DNode result);

	///** Assign X3DTextureCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "texCoord" */
	//void setTexCoord (X3DTextureCoordinateNode node);

	///** Assign X3DTextureCoordinateNode value (using a properly typed protoInstance) */
	//void setTexCoord (X3DPrototypeInstance protoInstance);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
protected:
	MFInt32* index;


};
 
//C.3.103 IndexedTriangleStripSet 
/** IndexedTriangleStripSet defines a concrete node interface that extends interface X3DComposedGeometryNode. */

class X3D_API IndexedTriangleStripSet : public X3DComposedGeometryNode
{

public:
	IndexedTriangleStripSet();
	virtual ~IndexedTriangleStripSet();
	virtual void Draw();
	virtual std::string getXMLString();

	//Implimentation
public:

	/** Assign MFInt32 value [] to MFInt32 inputOnly field named "set_index" */
	void setIndex (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOnly field named "set_index" */
	void setIndex (int32_t values);

	/** Return MFInt32 result [] from MFInt32 initializeOnly field named "index" */
	int32_t* getIndex ();

	/** Return number of primitive values in "index" array */
	int getNumIndex ();

	///** Assign MFInt32 value [] to MFInt32 initializeOnly field named "index" */
	//void setIndex (int32_t* values, int size);

	///** Assign single SFInt32 value [] as the MFInt32 array for initializeOnly field named "index" */
	//void setIndex (int32_t values);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool initializeOnly field named "ccw" */
	//bool getCcw ();

	///** Assign boolean value to SFBool initializeOnly field named "ccw" */
	//void setCcw (bool value);

	///** Return boolean result from SFBool initializeOnly field named "colorPerVertex" */
	//bool getColorPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "colorPerVertex" */
	//void setColorPerVertex (bool color);

	///** Return boolean result from SFBool initializeOnly field named "normalPerVertex" */
	//bool getNormalPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "normalPerVertex" */
	//void setNormalPerVertex (bool value);

	///** Return boolean result from SFBool initializeOnly field named "solid" */
	//bool getSolid ();

	///** Assign boolean value to SFBool initializeOnly field named "solid" */
	//void setSolid (bool value);

	///** Return array of X3DVertexAttributeNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "attrib" */
	//void getAttrib (X3DNode* result);

	///** Return number of nodes in "attrib" array */
	//int getNumAttrib ();

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode* nodes);

	///** Assign single X3DVertexAttributeNode value (using a properly typed node) as the MFNode array for inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode node);

	///** Assign X3DVertexAttributeNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DPrototypeInstance node);

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DNode* nodes);

	///** Return X3DColorNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "color" */
	//void getColor (X3DNode result);

	///** Assign X3DColorNode value (using a properly typed node) to SFNode inputOutput field named "color" */
	//void setColor (X3DColorNode color);

	///** Assign X3DColorNode value (using a properly typed protoInstance) */
	//void setColor (X3DPrototypeInstance protoInstance);

	///** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
	//void getCoord (X3DNode result);

	///** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
	//void setCoord (X3DCoordinateNode node);

	///** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	//void setCoord (X3DPrototypeInstance protoInstance);

	///** Return FogCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fogCoord" */
	//void getFogCoord (X3DNode result);

	///** Assign FogCoordinate value (using a properly typed node) to SFNode inputOutput field named "fogCoord" */
	//void setFogCoord (FogCoordinate node);

	///** Assign FogCoordinate value (using a properly typed protoInstance) */
	//void setFogCoord (X3DPrototypeInstance protoInstance);

	///** Return X3DNormalNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "normal" */
	//void getNormal (X3DNode result);

	///** Assign X3DNormalNode value (using a properly typed node) to SFNode inputOutput field named "normal" */
	//void setNormal (X3DNormalNode node);

	///** Assign X3DNormalNode value (using a properly typed protoInstance) */
	//void setNormal (X3DPrototypeInstance protoInstance);

	///** Return X3DTextureCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texCoord" */
	//void getTexCoord (X3DNode result);

	///** Assign X3DTextureCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "texCoord" */
	//void setTexCoord (X3DTextureCoordinateNode node);

	///** Assign X3DTextureCoordinateNode value (using a properly typed protoInstance) */
	//void setTexCoord (X3DPrototypeInstance protoInstance);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

protected:
	MFInt32* index;

};
 
//C.3.104 Inline 
/** Inline defines a concrete node interface that extends interfaces X3DChildNodeX3DBoundedObject, X3DUrlObject. */

class X3D_API Inline : public X3DChildNode, public X3DBoundedObject, public X3DUrlObject
{

public:
	Inline();
	virtual ~Inline();

	virtual void Draw();
	virtual std::string getXMLString();

	/** Return boolean result from SFBool inputOutput field named "load" */
	bool getLoad ();

	/** Assign boolean value to SFBool inputOutput field named "load" */
	void setLoad (bool value);

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Return array of String results array [] from MFString inputOutput field named "url" */
	//std::string* getUrl ();

	///** Return number of primitive values in "url" array */
	//int getNumUrl ();

	///** Assign String array [] to MFString inputOutput field named "url" */
	//void setUrl (std::string* values, int size);

	///** Assign single String value [] as the MFString array for inputOutput field named "url" */
	//void setUrl (std::string value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	bool  load;
};
 
//C.3.105 IntegerSequencer 
/** IntegerSequencer defines a concrete node interface that extends interface X3DSequencerNode. */

class X3D_API IntegerSequencer : public X3DSequencerNode
{

public:
	IntegerSequencer();
	virtual ~IntegerSequencer();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return int result [] from SFInt32 outputOnly field named "value_changed" */
	int getValue ();

	/** Return MFInt32 result [] from MFInt32 inputOutput field named "keyValue" */
	MFInt32* getKeyValue ();

	/** Return number of primitive values in "keyValue" array */
	int getNumKeyValue ();

	/** Assign MFInt32 value [] to MFInt32 inputOutput field named "keyValue" */
	void setKeyValue (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOutput field named "keyValue" */
	void setKeyValue (int32_t value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign boolean value to SFBool inputOnly field named "next" */
	//void setNext (bool value);

	///** Assign boolean value to SFBool inputOnly field named "previous" */
	//void setPrevious (bool value);

	///** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	//void setFraction (float value);

	///** Return array of float results array [] from MFFloat inputOutput field named "key" */
	//float* getKey ();

	///** Return number of primitive values in "key" array */
	//int getNumKey ();

	///** Assign float array [] to MFFloat inputOutput field named "key" */
	//void setKey (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	//void setKey (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
public:
	MFInt32* keyValue;
};
 
//C.3.106 IntegerTrigger 
/** IntegerTrigger defines a concrete node interface that extends interface X3DTriggerNode. */

class X3D_API IntegerTrigger : public X3DTriggerNode
{

public:
	IntegerTrigger();
	virtual ~IntegerTrigger();

	/** Assign boolean value to SFBool inputOnly field named "set_boolean" */
	void setBoolean (bool value);

	/** Return int result [] from SFInt32 outputOnly field named "triggerValue" */
	int getTriggerValue ();

	/** Return int result [] from SFInt32 inputOutput field named "integerKey" */
	int getIntegerKey ();

	/** Assign int value [] to SFInt32 inputOutput field named "integerKey" */
	void setIntegerKey (int value);

};
 
//C.3.107 IS 
/** IS defines a concrete node interface that extends interface SceneGraphStructureStatement. */

class X3D_API IS : public SceneGraphStructureStatement
{

public:
	IS();
	virtual ~IS();


};
 
//C.3.108 IsoSurfaceVolumeData 
/** IsoSurfaceVolumeData defines a concrete node interface that extends interface X3DVolumeDataNode. */

class X3D_API IsoSurfaceVolumeData : public X3DVolumeDataNode
{

public:
	IsoSurfaceVolumeData();
	virtual ~IsoSurfaceVolumeData();

	/** Return float result [] from SFFloat inputOutput field named "contourStepSize" */
	float getContourStepSize ();

	/** Assign float value [] to SFFloat inputOutput field named "contourStepSize" */
	void setContourStepSize (float value);

	/** Return float result [] from  type inputOutput field named "surfaceTolerance" */
	float getSurfaceTolerance ();

	/** Assign float value [] to  type inputOutput field named "surfaceTolerance" */
	void setSurfaceTolerance (float value);

	/** Return array of float results array [] from MFFloat inputOutput field named "surfaceValues" */
	float* getSurfaceValues ();

	/** Return number of primitive values in "surfaceValues" array */
	int getNumSurfaceValues ();

	/** Assign float array [] to MFFloat inputOutput field named "surfaceValues" */
	void setSurfaceValues (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "surfaceValues" */
	void setSurfaceValues (float value);

	/** Return array of X3DVolumeRenderStyleNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "renderStyle" */
	void getRenderStyle (X3DNode* result);

	/** Return number of nodes in "renderStyle" array */
	int getNumRenderStyle ();

	/** Assign X3DVolumeRenderStyleNode array (using a properly typed node array) to MFNode inputOutput field named "renderStyle" */
	void setRenderStyle (X3DVolumeRenderStyleNode* nodes);

	/** Assign single X3DVolumeRenderStyleNode value (using a properly typed node) as the MFNode array for inputOutput field named "renderStyle" */
	void setRenderStyle (X3DVolumeRenderStyleNode node);

	/** Assign X3DVolumeRenderStyleNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "renderStyle" */
	void setRenderStyle (X3DPrototypeInstance node);

	/** Assign X3DVolumeRenderStyleNode array (using a properly typed node array) to MFNode inputOutput field named "renderStyle" */
	void setRenderStyle (X3DNode* nodes);

	/** Return X3DTexture3DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "gradients" */
	void getGradients (X3DNode result);

	/** Assign X3DTexture3DNode value (using a properly typed node) to SFNode inputOutput field named "gradients" */
	void setGradients (X3DTexture3DNode node);

	/** Assign X3DTexture3DNode value (using a properly typed protoInstance) */
	void setGradients (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture3DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "voxels" */
	void getVoxels (X3DNode result);

	/** Assign X3DTexture3DNode value (using a properly typed node) to SFNode inputOutput field named "voxels" */
	void setVoxels (X3DTexture3DNode node);

	/** Assign X3DTexture3DNode value (using a properly typed protoInstance) */
	void setVoxels (X3DPrototypeInstance protoInstance);

};
 
//C.3.109 KeySensor 
/** KeySensor defines a concrete node interface that extends interface X3DKeyDeviceSensorNode. */

class X3D_API KeySensor : public X3DKeyDeviceSensorNode
{

public:
	KeySensor();
	virtual ~KeySensor();

	/** Return int result [] from SFInt32 outputOnly field named "actionKeyPress" */
	int getActionKeyPress ();

	/** Return int result [] from SFInt32 outputOnly field named "actionKeyRelease" */
	int getActionKeyRelease ();

	/** Return boolean result from SFBool outputOnly field named "altKey" */
	bool getAltKey ();

	/** Return boolean result from SFBool outputOnly field named "controlKey" */
	bool getControlKey ();

	/** Return boolean result from SFBool outputOnly field named "shiftKey" */
	bool getShiftKey ();

	/** Return String result [] from SFString outputOnly field named "keyPress" */
	std::string getKeyPress ();

	/** Return String result [] from SFString outputOnly field named "keyRelease" */
	std::string getKeyRelease ();


};
 
//C.3.110 Layer 
/** Layer defines a concrete node interface that extends interface X3DLayerNode. */

class X3D_API Layer : public X3DLayerNode
{

public:
	Layer();
	virtual ~Layer();

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (X3DChildNode* nodes);

	/** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	virtual void addChildren (X3DChildNode node);

	/** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (X3DPrototypeInstance node);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (X3DNode* nodes);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DChildNode* nodes);

	/** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	void removeChildren (X3DChildNode node);

	/** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DPrototypeInstance node);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DNode* nodes);

	/** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	void getChildren (X3DNode* result);

	/** Return number of nodes in "children" array */
	int getNumChildren ();

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	void setChildren (X3DChildNode* nodes);

	/** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	void setChildren (X3DChildNode node);

	/** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	void setChildren (X3DPrototypeInstance node);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	void setChildren (X3DNode* nodes);

};
 
//C.3.111 LayerSet 
/** LayerSet defines a concrete node interface that extends interface X3DNode. */

class X3D_API LayerSet : public X3DNode
{

public:
	LayerSet();
	virtual ~LayerSet();

	/** Return int result [] from SFInt32 inputOutput field named "activeLayer" */
	int getActiveLayer ();

	/** Assign int value [] to SFInt32 inputOutput field named "activeLayer" */
	void setActiveLayer (int value);

	/** Return MFInt32 result [] from MFInt32 inputOutput field named "order" */
	int32_t* getOrder ();

	/** Return number of primitive values in "order" array */
	int getNumOrder ();

	/** Assign MFInt32 value [] to MFInt32 inputOutput field named "order" */
	void setOrder (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOutput field named "order" */
	void setOrder (int32_t value);

	/** Return array of X3DLayerNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "layers" */
	void getLayers (X3DNode* result);

	/** Return number of nodes in "layers" array */
	int getNumLayers ();

	/** Assign X3DLayerNode array (using a properly typed node array) to MFNode inputOutput field named "layers" */
	void setLayers (X3DLayerNode* nodes);

	/** Assign single X3DLayerNode value (using a properly typed node) as the MFNode array for inputOutput field named "layers" */
	void setLayers (X3DLayerNode node);

	/** Assign X3DLayerNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "layers" */
	void setLayers (X3DPrototypeInstance node);

	/** Assign X3DLayerNode array (using a properly typed node array) to MFNode inputOutput field named "layers" */
	void setLayers (X3DNode* nodes);
};
 
//C.3.112 Layout 
/** Layout defines a concrete node interface that extends interface X3DLayoutNode. */

class X3D_API Layout : public X3DLayoutNode
{

public:
	Layout();
	virtual ~Layout();

	/** Return array of String results array [] from MFString inputOutput field named "align" */
	std::string* getAlign ();

	/** Return number of primitive values in "align" array */
	int getNumAlign ();

	/** Assign String array [] to MFString inputOutput field named "align" */
	void setAlign (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "align" */
	void setAlign (std::string value);

	/** Return array of float results array [] from MFFloat inputOutput field named "offset" */
	float* getOffset ();

	/** Return number of primitive values in "offset" array */
	int getNumOffset ();

	/** Assign float array [] to MFFloat inputOutput field named "offset" */
	void setOffset (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "offset" */
	void setOffset (float value);

	/** Return array of String results array [] from MFString inputOutput field named "offsetUnits" */
	std::string* getOffsetUnits ();

	/** Return number of primitive values in "offsetUnits" array */
	int getNumOffsetUnits ();

	/** Assign String array [] to MFString inputOutput field named "offsetUnits" */
	void setOffsetUnits (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "offsetUnits" */
	void setOffsetUnits (std::string value);

	/** Return array of String results array [] from MFString inputOutput field named "scaleMode" */
	std::string* getScaleMode ();

	/** Return number of primitive values in "scaleMode" array */
	int getNumScaleMode ();

	/** Assign String array [] to MFString inputOutput field named "scaleMode" */
	void setScaleMode (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "scaleMode" */
	void setScaleMode (std::string value);

	/** Return array of float results array [] from MFFloat initializeOnly field named "size" */
	float* getSize ();

	/** Return number of primitive values in "size" array */
	int getNumSize ();

	/** Assign float array [] to MFFloat initializeOnly field named "size" */
	void setSize (float* values, int size);

	/** Assign single float value [] as the MFFloat array for initializeOnly field named "size" */
	void setSize (float value);

	/** Return array of String results array [] from MFString inputOutput field named "sizeUnits" */
	std::string* getSizeUnits ();

	/** Return number of primitive values in "sizeUnits" array */
	int getNumSizeUnits ();

	/** Assign String array [] to MFString inputOutput field named "sizeUnits" */
	void setSizeUnits (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "sizeUnits" */
	void setSizeUnits (std::string value);

};
 
//C.3.113 LayoutGroup 
/** LayoutGroup defines a concrete node interface that extends interfaces X3DNodeX3DGroupingNode. */

class X3D_API LayoutGroup : public X3DGroupingNode
{

public:
	LayoutGroup();
	virtual ~LayoutGroup();

	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	float* getBboxCenter ();

	/** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	void setBboxCenter (float* value);

	/** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	float* getBboxSize ();

	/** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	void setBboxSize (float* value);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (X3DChildNode* nodes);

	/** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	virtual void addChildren (X3DChildNode node);

	/** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (X3DPrototypeInstance node);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (X3DNode* nodes);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DChildNode* nodes);

	/** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	void removeChildren (X3DChildNode node);

	/** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DPrototypeInstance node);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DNode* nodes);

	/** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	void getChildren (X3DNode* result);

	/** Return number of nodes in "children" array */
	int getNumChildren ();

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	void setChildren (X3DChildNode* nodes);

	/** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	void setChildren (X3DChildNode node);

	/** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	void setChildren (X3DPrototypeInstance node);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	void setChildren (X3DNode* nodes);

	/** Return X3DLayoutNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "layout" */
	void getLayout (X3DNode result);

	/** Assign X3DLayoutNode value (using a properly typed node) to SFNode inputOutput field named "layout" */
	void setLayout (X3DLayoutNode node);

	/** Assign X3DLayoutNode value (using a properly typed protoInstance) */
	void setLayout (X3DPrototypeInstance protoInstance);

	/** Return X3DViewportNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "viewport" */
	void getViewport (X3DNode result);

	/** Assign X3DViewportNode value (using a properly typed node) to SFNode inputOutput field named "viewport" */
	void setViewport (X3DViewportNode node);

	/** Assign X3DViewportNode value (using a properly typed protoInstance) */
	void setViewport (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.114 LayoutLayer 
/** LayoutLayer defines a concrete node interface that extends interface X3DLayerNode. */

class X3D_API LayoutLayer : public X3DLayerNode
{

public:
	LayoutLayer();
	virtual ~LayoutLayer();

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (X3DChildNode* nodes);

	/** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	virtual void addChildren (X3DChildNode node);

	/** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (X3DPrototypeInstance node);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	virtual void addChildren (X3DNode* nodes);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DChildNode* nodes);

	/** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	void removeChildren (X3DChildNode node);

	/** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DPrototypeInstance node);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DNode* nodes);

	/** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	void getChildren (X3DNode* result);

	/** Return number of nodes in "children" array */
	int getNumChildren ();

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	void setChildren (X3DChildNode* nodes);

	/** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	void setChildren (X3DChildNode node);

	/** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	void setChildren (X3DPrototypeInstance node);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	void setChildren (X3DNode* nodes);

	/** Return X3DLayoutNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "layout" */
	void getLayout (X3DNode result);

	/** Assign X3DLayoutNode value (using a properly typed node) to SFNode inputOutput field named "layout" */
	void setLayout (X3DLayoutNode node);

	/** Assign X3DLayoutNode value (using a properly typed protoInstance) */
	void setLayout (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool inputOutput field named "isPickable" */
	//bool getIsPickable ();

	///** Assign boolean value to SFBool inputOutput field named "isPickable" */
	//void setIsPickable (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return X3DViewportNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "viewport" */
	//void getViewport (X3DNode result);

	///** Assign X3DViewportNode value (using a properly typed node) to SFNode inputOutput field named "viewport" */
	//void setViewport (X3DViewportNode node);

	///** Assign X3DViewportNode value (using a properly typed protoInstance) */
	//void setViewport (X3DPrototypeInstance protoInstance);
};
 
//C.3.115 LinePickSensor 
/** LinePickSensor defines a concrete node interface that extends interface X3DPickSensorNode. */

class X3D_API LinePickSensor : public X3DPickSensorNode
{

public:
	LinePickSensor();
	virtual ~LinePickSensor();

	/** Return array of 3-tuple float results array [] from MFVec3f outputOnly field named "pickedNormal" */
	float* getPickedNormal ();

	/** Return number of 3-tuple primitive values in "pickedNormal" array */
	int getNumPickedNormal ();

	/** Return array of 3-tuple float results array [] from MFVec3f outputOnly field named "pickedPoint" */
	void getPickedPoint (float* result, int size);

	/** Return number of 3-tuple primitive values in "pickedPoint" array */
	int getNumPickedPoint ();

	/** Return array of 3-tuple float results array [] from MFVec3f outputOnly field named "pickedTextureCoordinate" */
	void getPickedTextureCoordinate (float* result, int size);

	/** Return number of 3-tuple primitive values in "pickedTextureCoordinate" array */
	int getNumPickedTextureCoordinate ();

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return array of String results array ["ALL","NONE","TERRAIN",...] from MFString inputOutput field named "objectType" */
	//std::string* getObjectType ();

	///** Return number of primitive values in "objectType" array */
	//int getNumObjectType ();

	///** Assign String array ["ALL","NONE","TERRAIN",...] to MFString inputOutput field named "objectType" */
	//void setObjectType (std::string* values, int size);

	///** Assign single String value ["ALL","NONE","TERRAIN",...] as the MFString array for inputOutput field named "objectType" */
	//void setObjectType (std::string value);

	///** Return String result (enumeration values "GEOMETRY"|"BOUNDS"|...) from SFString initializeOnly field named "intersectionType" */
	//std::string getIntersectionType ();

	///** Assign String value (enumeration values "GEOMETRY"|"BOUNDS"|...) to SFString initializeOnly field named "intersectionType" */
	//void setIntersectionType (std::string value);

	///** Return String result ["ANY"|"CLOSEST"|"ALL"|"ALL_SORTED"] from  type initializeOnly field named "sortOrder" */
	//std::string getSortOrder ();

	///** Assign String value ["ANY"|"CLOSEST"|"ALL"|"ALL_SORTED"] to  type initializeOnly field named "sortOrder" */
	//void setSortOrder (std::string value);

	///** Return array of X3DGroupingNode|X3DShapeNode|Inline results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "pickTarget" */
	//void getPickTarget (X3DNode* result);

	///** Return number of nodes in "pickTarget" array */
	//int getNumPickTarget ();

	///** Assign X3DGroupingNode|X3DShapeNode|Inline array (using a properly typed node array) to MFNode inputOutput field named "pickTarget" */
	//void setPickTarget (X3DNode* nodes);

	///** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOutput field named "pickTarget" */
	//void setPickTarget (X3DNode node);

	///** Assign X3DGroupingNode|X3DShapeNode|Inline array (using a properly typed protoInstance array) to MFNode inputOutput field named "pickTarget" */
	//void setPickTarget (X3DPrototypeInstance node);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode outputOnly field named "pickedGeometry" */
	//void getPickedGeometry (X3DNode* result);

	///** Return number of nodes in "pickedGeometry" array */
	//int getNumPickedGeometry ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return X3DGeometryNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "pickingGeometry" */
	//void getPickingGeometry (X3DNode result);

	///** Assign X3DGeometryNode value (using a properly typed node) to SFNode inputOutput field named "pickingGeometry" */
	//void setPickingGeometry (X3DGeometryNode node);

	///** Assign X3DGeometryNode value (using a properly typed protoInstance) */
	//void setPickingGeometry (X3DPrototypeInstance protoInstance);
};
 
 
//C.3.117 LineSet 
/** LineSet defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API LineSet : public X3DGeometryNode
{

public:
	LineSet();
	virtual ~LineSet();

	virtual void Draw();
	virtual std::string getXMLString();

	/** Return MFInt32 result [] from MFInt32 inputOutput field named "vertexCount" */
	int32_t* getVertexCount ();

	/** Return number of primitive values in "vertexCount" array */
	int getNumVertexCount ();

	/** Assign MFInt32 value [] to MFInt32 inputOutput field named "vertexCount" */
	void setVertexCount (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOutput field named "vertexCount" */
	void setVertexCount (int32_t value);

	/** Return array of X3DVertexAttributeNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "attrib" */
	void getAttrib (X3DNode* result);

	/** Return number of nodes in "attrib" array */
	int getNumAttrib ();

	/** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	void setAttrib (X3DVertexAttributeNode* nodes);

	/** Assign single X3DVertexAttributeNode value (using a properly typed node) as the MFNode array for inputOutput field named "attrib" */
	void setAttrib (X3DVertexAttributeNode node);

	/** Assign X3DVertexAttributeNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "attrib" */
	void setAttrib (X3DPrototypeInstance node);

	/** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	void setAttrib (X3DNode* nodes);

	/** Return X3DColorNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "color" */
	void getColor (X3DNode result);

	/** Assign X3DColorNode value (using a properly typed node) to SFNode inputOutput field named "color" */
	void setColor (X3DColorNode color);

	/** Assign X3DColorNode value (using a properly typed protoInstance) */
	void setColor (X3DPrototypeInstance protoInstance);

	/** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
	void getCoord (X3DNode result);

	/** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
	void setCoord (X3DCoordinateNode node);

	/** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	void setCoord (X3DPrototypeInstance protoInstance);

	/** Return FogCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fogCoord" */
	void getFogCoord (X3DNode result);

	/** Assign FogCoordinate value (using a properly typed node) to SFNode inputOutput field named "fogCoord" */
	void setFogCoord (FogCoordinate node);

	/** Assign FogCoordinate value (using a properly typed protoInstance) */
	void setFogCoord (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

protected:
	MFInt32* vertexCount;
};
 
//C.3.118 LoadSensor 
/** LoadSensor defines a concrete node interface that extends interface X3DNetworkSensorNode. */

class X3D_API LoadSensor : public X3DNetworkSensorNode
{

public:
	LoadSensor();
	virtual ~LoadSensor();

	/** Return boolean result from SFBool outputOnly field named "isLoaded" */
	bool getIsLoaded ();

	/** Return double result in seconds from SFTime outputOnly field named "loadTime" */
	double getLoadTime ();

	/** Return float result [] from SFFloat outputOnly field named "progress" */
	float getProgress ();

	/** Return double result in seconds from  type inputOutput field named "timeOut" */
	double getTimeOut ();

	/** Assign double value in seconds to  type inputOutput field named "timeOut" */
	void setTimeOut (double timestamp);

	/** Return array of X3DUrlObject results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "watchList" */
	void getWatchList (X3DNode* result);

	/** Return number of nodes in "watchList" array */
	int getNumWatchList ();

	/** Assign X3DUrlObject array (using a properly typed node array) to MFNode inputOutput field named "watchList" */
	void setWatchList (X3DUrlObject* nodes);

	/** Assign single X3DUrlObject value (using a properly typed node) as the MFNode array for inputOutput field named "watchList" */
	void setWatchList (X3DUrlObject node);

	/** Assign X3DUrlObject array (using a properly typed protoInstance array) to MFNode inputOutput field named "watchList" */
	void setWatchList (X3DPrototypeInstance node);

	/** Assign X3DUrlObject array (using a properly typed node array) to MFNode inputOutput field named "watchList" */
	void setWatchList (X3DNode* nodes);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.119 LocalFog 
/** LocalFog defines a concrete node interface that extends interfaces X3DChildNodeX3DFogObject. */

class X3D_API LocalFog : public X3DChildNode, public X3DFogObject
{

public:
	LocalFog();
	virtual ~LocalFog();

	/** Return boolean result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign boolean value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "color" */
	float* getColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "color" */
	void setColor (float* color);

	/** Return String enumeration result ("LINEAR"|"EXPONENTIAL") from fogTypeValues type inputOutput field named "fogType" */
	std::string getFogType ();

	/** Assign String enumeration value ("LINEAR"|"EXPONENTIAL") to fogTypeValues type inputOutput field named "fogType" */
	void setFogType (std::string value);

	/** Return float result [] from  type inputOutput field named "visibilityRange" */
	float getVisibilityRange ();

	/** Assign float value [] to  type inputOutput field named "visibilityRange" */
	void setVisibilityRange (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.120 LOD 
/** LOD defines a concrete node interface that extends interface X3DGroupingNode. */

class X3D_API LOD : public X3DGroupingNode
{

public:
	LOD();
	virtual ~LOD();

	//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return int result [] from  type outputOnly field named "level_changed" */
	int getLevel ();

	/** Return boolean result from SFBool initializeOnly field named "forceTransitions" */
	bool getForceTransitions ();

	/** Assign boolean value to SFBool initializeOnly field named "forceTransitions" */
	void setForceTransitions (bool value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "center" */
	float* getCenter ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "center" */
	void setCenter (float* value);

	/** Return array of float results array [] from MFFloat initializeOnly field named "range" */
	MFFloat* getRange ();

	/** Return number of primitive values in "range" array */
	int getNumRange ();

	/** Assign float array [] to MFFloat initializeOnly field named "range" */
	void setRange (float* values, int size);

	/** Assign single float value [] as the MFFloat array for initializeOnly field named "range" */
	void setRange (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	BOOL forceTransitions;
	MFFloat     range;
	float		center[3];
};

//C.3.122 Matrix3VertexAttribute 
/** Matrix3VertexAttribute defines a concrete node interface that extends interface X3DVertexAttributeNode. */

class X3D_API Matrix3VertexAttribute : public X3DVertexAttributeNode
{

public:
	Matrix3VertexAttribute();
	virtual ~Matrix3VertexAttribute();

	/** Return array of float results array [] from MFMatrix3f inputOutput field named "value" */
	float* getValue ();

	/** Return number of primitive values in "value" array */
	int getNumValue ();

	/** Assign float array [] to MFMatrix3f inputOutput field named "value" */
	void setValue (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return String result [] from SFString inputOutput field named "name" */
	//std::string getName ();

	///** Assign String value [] to SFString inputOutput field named "name" */
	//void setName (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.123 Matrix4VertexAttribute 
/** Matrix4VertexAttribute defines a concrete node interface that extends interface X3DVertexAttributeNode. */

class X3D_API Matrix4VertexAttribute : public X3DVertexAttributeNode
{

public:
	Matrix4VertexAttribute();
	virtual ~Matrix4VertexAttribute();

	/** Return array of float results array [] from MFMatrix4f inputOutput field named "value" */
	float* getValue ();

	/** Return number of primitive values in "value" array */
	int getNumValue ();

	/** Assign float array [] to MFMatrix4f inputOutput field named "value" */
	void setValue (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return String result [] from SFString inputOutput field named "name" */
	//std::string getName ();

	///** Assign String value [] to SFString inputOutput field named "name" */
	//void setName (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};

 
//C.3.125 MetadataBoolean 
/** MetadataBoolean defines a concrete node interface that extends interface X3DMetadataObject. */

class X3D_API MetadataBoolean : public X3DNode, public X3DMetadataObject
{

public:
	MetadataBoolean();
	virtual ~MetadataBoolean();

	/** Return array of boolean results array from MFBool inputOutput field named "value" */
	bool* getValue ();

	/** Return number of primitive values in "value" array */
	int getNumValue ();

	/** Assign boolean array to MFBool inputOutput field named "value" */
	void setValue (bool* values, int size);

	/** Assign single boolean value as the MFBool array for inputOutput field named "value" */
	void setValue (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return String result [] from SFString inputOutput field named "name" */
	//std::string getName ();

	///** Assign String value [] to SFString inputOutput field named "name" */
	//void setName (std::string value);

	///** Return String result [] from SFString inputOutput field named "reference" */
	//std::string getReference ();

	///** Assign String value [] to SFString inputOutput field named "reference" */
	//void setReference (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	std::string getXMLString();

private:
	MFBool m_Values;

};
 
//C.3.126 MetadataDouble 
/** MetadataDouble defines a concrete node interface that extends interface X3DMetadataObject. */

class X3D_API MetadataDouble : public X3DNode, public X3DMetadataObject
{

public:
	MetadataDouble();
	virtual ~MetadataDouble();

	/** Return array of double results array [] from MFDouble inputOutput field named "value" */
	double* getValue ();

	/** Return number of primitive values in "value" array */
	int getNumValue ();

	/** Assign double array [] to MFDouble inputOutput field named "value" */
	void setValue (double* values, int size);

	/** Assign single double value [] as the MFDouble array for inputOutput field named "value" */
	void setValue (double value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return String result [] from SFString inputOutput field named "name" */
	//std::string getName ();

	///** Assign String value [] to SFString inputOutput field named "name" */
	//void setName (std::string value);

	///** Return String result [] from SFString inputOutput field named "reference" */
	//std::string getReference ();

	///** Assign String value [] to SFString inputOutput field named "reference" */
	//void setReference (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	std::string getXMLString();
private:
	MFDouble m_Values;

};
 
//C.3.127 MetadataFloat 
/** MetadataFloat defines a concrete node interface that extends interface X3DMetadataObject. */

class X3D_API MetadataFloat : public X3DNode, public X3DMetadataObject
{

public:
	MetadataFloat();
	virtual ~MetadataFloat();

	/** Return array of float results array [] from MFFloat inputOutput field named "value" */
	float* getValue ();

	/** Return number of primitive values in "value" array */
	int getNumValue ();

	/** Assign float array [] to MFFloat inputOutput field named "value" */
	void setValue (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "value" */
	void setValue (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return String result [] from SFString inputOutput field named "name" */
	//std::string getName ();

	///** Assign String value [] to SFString inputOutput field named "name" */
	//void setName (std::string value);

	///** Return String result [] from SFString inputOutput field named "reference" */
	//std::string getReference ();

	///** Assign String value [] to SFString inputOutput field named "reference" */
	//void setReference (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	std::string getXMLString();

private:
	MFFloat m_Values;
};
 
//C.3.128 MetadataInteger 
/** MetadataInteger defines a concrete node interface that extends interface X3DMetadataObject. */

class X3D_API MetadataInteger : public X3DNode, public X3DMetadataObject
{

public:
	MetadataInteger();
	virtual ~MetadataInteger();

	/** Return array of float results array [] from MFFloat inputOutput field named "value" */
	int32_t* getValue();

	/** Return number of primitive values in "value" array */
	int getNumValue();

	/** Assign float array [] to MFFloat inputOutput field named "value" */
	void setValue(int32_t* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "value" */
	void setValue(int32_t value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return String result [] from SFString inputOutput field named "name" */
	//std::string getName ();

	///** Assign String value [] to SFString inputOutput field named "name" */
	//void setName (std::string value);

	///** Return String result [] from SFString inputOutput field named "reference" */
	//std::string getReference ();

	///** Assign String value [] to SFString inputOutput field named "reference" */
	//void setReference (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	std::string getXMLString();

private:
	MFInt32 m_Values;
};

//C.3.129 MetadataSet 
/** MetadataSet defines a concrete node interface that extends interfaces X3DMetadataObject. */

class X3D_API MetadataSet : public X3DNode, public X3DMetadataObject
{

public:
	MetadataSet();
	virtual ~MetadataSet();

	/** Return array of X3DMetadataObject results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "value" */
	void getValue (X3DNode* result);

	/** Return number of nodes in "value" array */
	int getNumValue ();

	/** Assign X3DMetadataObject array (using a properly typed node array) to MFNode inputOutput field named "value" */
	void setValue (X3DMetadataObject* nodes);

	/** Assign single X3DMetadataObject value (using a properly typed node) as the MFNode array for inputOutput field named "value" */
	void setValue (X3DMetadataObject node);

	/** Assign X3DMetadataObject array (using a properly typed protoInstance array) to MFNode inputOutput field named "value" */
	void setValue (X3DPrototypeInstance node);

	/** Assign X3DMetadataObject array (using a properly typed node array) to MFNode inputOutput field named "value" */
	void setValue (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	std::string getXMLString();

private:
};
 
//C.3.130 MetadataString 
/** MetadataString defines a concrete node interface that extends interface X3DMetadataObject. */

class X3D_API MetadataString : public X3DNode, public X3DMetadataObject
{

public:
	MetadataString();
	virtual ~MetadataString();

	/** Return array of String results array [] from MFString inputOutput field named "value" */
	std::string* getValue ();

	/** Return number of primitive values in "value" array */
	int getNumValue ();

	/** Assign String array [] to MFString inputOutput field named "value" */
	void setValue (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "value" */
	void setValue (std::string value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return String result [] from SFString inputOutput field named "name" */
	//std::string getName ();

	///** Assign String value [] to SFString inputOutput field named "name" */
	//void setName (std::string value);

	///** Return String result [] from SFString inputOutput field named "reference" */
	//std::string getReference ();

	///** Assign String value [] to SFString inputOutput field named "reference" */
	//void setReference (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	std::string getXMLString();

private:
	MFString m_Values;
};
 
//C.3.131 MotorJoint 
/** MotorJoint defines a concrete node interface that extends interface X3DRigidJointNode. */

class X3D_API MotorJoint : public X3DRigidJointNode
{

public:
	MotorJoint();
	virtual ~MotorJoint();

	/** Return float result in radians from SFFloat outputOnly field named "motor1Angle" */
	float getMotor1Angle ();

	/** Return float result in radians from SFFloat outputOnly field named "motor1AngleRate" */
	float getMotor1AngleRate ();

	/** Return float result in radians from SFFloat outputOnly field named "motor2Angle" */
	float getMotor2Angle ();

	/** Return float result in radians from SFFloat outputOnly field named "motor2AngleRate" */
	float getMotor2AngleRate ();

	/** Return float result in radians from SFFloat outputOnly field named "motor3Angle" */
	float getMotor3Angle ();

	/** Return float result in radians from SFFloat outputOnly field named "motor3AngleRate" */
	float getMotor3AngleRate ();

	/** Return boolean result from SFBool initializeOnly field named "autoCalc" */
	bool getAutoCalc ();

	/** Assign boolean value to SFBool initializeOnly field named "autoCalc" */
	void setAutoCalc (bool value);

	/** Return float result in radians from SFFloat inputOutput field named "axis1Angle" */
	float getAxis1Angle ();

	/** Assign float value in radians to SFFloat inputOutput field named "axis1Angle" */
	void setAxis1Angle (float angle);

	/** Return float result [] from SFFloat inputOutput field named "axis1Torque" */
	float getAxis1Torque ();

	/** Assign float value [] to SFFloat inputOutput field named "axis1Torque" */
	void setAxis1Torque (float value);

	/** Return float result in radians from SFFloat inputOutput field named "axis2Angle" */
	float getAxis2Angle ();

	/** Assign float value in radians to SFFloat inputOutput field named "axis2Angle" */
	void setAxis2Angle (float angle);

	/** Return float result [] from SFFloat inputOutput field named "axis2Torque" */
	float getAxis2Torque ();

	/** Assign float value [] to SFFloat inputOutput field named "axis2Torque" */
	void setAxis2Torque (float value);

	/** Return float result in radians from SFFloat inputOutput field named "axis3Angle" */
	float getAxis3Angle ();

	/** Assign float value in radians to SFFloat inputOutput field named "axis3Angle" */
	void setAxis3Angle (float angle);

	/** Return float result [] from SFFloat inputOutput field named "axis3Torque" */
	float getAxis3Torque ();

	/** Assign float value [] to SFFloat inputOutput field named "axis3Torque" */
	void setAxis3Torque (float value);

	/** Return int result [] from  type inputOutput field named "enabledAxes" */
	int getEnabledAxes ();

	/** Assign int value [] to  type inputOutput field named "enabledAxes" */
	void setEnabledAxes (int value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "motor1Axis" */
	float* getMotor1Axis ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "motor1Axis" */
	void setMotor1Axis (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "motor2Axis" */
	float* getMotor2Axis ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "motor2Axis" */
	void setMotor2Axis (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "motor3Axis" */
	float* getMotor3Axis ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "motor3Axis" */
	void setMotor3Axis (float* value);

	/** Return float result [] from SFFloat inputOutput field named "stop1Bounce" */
	float getStop1Bounce ();

	/** Assign float value [] to SFFloat inputOutput field named "stop1Bounce" */
	void setStop1Bounce (float value);

	/** Return float result [] from SFFloat inputOutput field named "stop1ErrorCorrection" */
	float getStop1ErrorCorrection ();

	/** Assign float value [] to SFFloat inputOutput field named "stop1ErrorCorrection" */
	void setStop1ErrorCorrection (float value);

	/** Return float result [] from SFFloat inputOutput field named "stop2Bounce" */
	float getStop2Bounce ();

	/** Assign float value [] to SFFloat inputOutput field named "stop2Bounce" */
	void setStop2Bounce (float value);

	/** Return float result [] from SFFloat inputOutput field named "stop2ErrorCorrection" */
	float getStop2ErrorCorrection ();

	/** Assign float value [] to SFFloat inputOutput field named "stop2ErrorCorrection" */
	void setStop2ErrorCorrection (float value);

	/** Return float result [] from SFFloat inputOutput field named "stop3Bounce" */
	float getStop3Bounce ();

	/** Assign float value [] to SFFloat inputOutput field named "stop3Bounce" */
	void setStop3Bounce (float value);

	/** Return float result [] from SFFloat inputOutput field named "stop3ErrorCorrection" */
	float getStop3ErrorCorrection ();

	/** Assign float value [] to SFFloat inputOutput field named "stop3ErrorCorrection" */
	void setStop3ErrorCorrection (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of String results array [] from MFString inputOutput field named "forceOutput" */
	//std::string* getForceOutput ();

	///** Return number of primitive values in "forceOutput" array */
	//int getNumForceOutput ();

	///** Assign String array [] to MFString inputOutput field named "forceOutput" */
	//void setForceOutput (std::string* values, int size);

	///** Assign single String value [] as the MFString array for inputOutput field named "forceOutput" */
	//void setForceOutput (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body1" */
	//void getBody1 (X3DNode result);

	///** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body1" */
	//void setBody1 (RigidBody node);

	///** Assign RigidBody value (using a properly typed protoInstance) */
	//void setBody1 (X3DPrototypeInstance protoInstance);

	///** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body2" */
	//void getBody2 (X3DNode result);

	///** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body2" */
	//void setBody2 (RigidBody node);

	///** Assign RigidBody value (using a properly typed protoInstance) */
	//void setBody2 (X3DPrototypeInstance protoInstance);
};
 
//C.3.132 MovieTexture 
/** MovieTexture defines a concrete node interface that extends interfaces X3DSoundSourceNode, X3DTexture2DNode, X3DUrlObject. */

class X3D_API MovieTexture : /*public X3DTexture2DNode, */public X3DSoundSourceNode, public X3DUrlObject
{

public:
	MovieTexture();
	virtual ~MovieTexture();

	//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return array of String results array [] from MFString inputOutput field named "url" */
	//std::string* getUrl ();

	///** Return number of primitive values in "url" array */
	//int getNumUrl ();

	///** Assign String array [] to MFString inputOutput field named "url" */
	//void setUrl (std::string* values, int size);

	///** Assign single String value [] as the MFString array for inputOutput field named "url" */
	//void setUrl (std::string value);

	/** Return boolean result from SFBool initializeOnly field named "repeatS" */
	bool getRepeatS ();

	/** Assign boolean value to SFBool initializeOnly field named "repeatS" */
	void setRepeatS (bool value);

	/** Return boolean result from SFBool initializeOnly field named "repeatT" */
	bool getRepeatT ();

	/** Assign boolean value to SFBool initializeOnly field named "repeatT" */
	void setRepeatT (bool value);

	/** Return float result [] from SFFloat inputOutput field named "speed" */
	float getSpeed ();

	/** Assign float value [] to SFFloat inputOutput field named "speed" */
	void setSpeed (float value);

	/** Return TextureProperties result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "textureProperties" */
	void getTextureProperties (X3DNode result);

	/** Assign TextureProperties value (using a properly typed node) to SFNode initializeOnly field named "textureProperties" */
	void setTextureProperties (TextureProperties node);

	/** Assign TextureProperties value (using a properly typed protoInstance) */
	void setTextureProperties (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from SFTime outputOnly field named "duration_changed" */
	//double getDuration ();

	///** Return String result [] from SFString inputOutput field named "description" */
	//std::string getDescription ();

	///** Assign String value [] to SFString inputOutput field named "description" */
	//void setDescription (std::string value);

	///** Return float result [] from  type inputOutput field named "pitch" */
	//float getPitch ();

	///** Assign float value [] to  type inputOutput field named "pitch" */
	//void setPitch (float value);

	///** Return double result in seconds from SFTime outputOnly field named "elapsedTime" */
	//double getElapsedTime ();

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool outputOnly field named "isPaused" */
	//bool getIsPaused ();

	///** Return boolean result from SFBool inputOutput field named "loop" */
	//bool getLoop ();

	///** Assign boolean value to SFBool inputOutput field named "loop" */
	//void setLoop (bool value);

	///** Return double result in seconds from SFTime inputOutput field named "pauseTime" */
	//double getPauseTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "pauseTime" */
	//void setPauseTime (double timestamp);

	///** Return double result in seconds from SFTime inputOutput field named "resumeTime" */
	//double getResumeTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "resumeTime" */
	//void setResumeTime (double timestamp);

	///** Return double result in seconds from SFTime inputOutput field named "startTime" */
	//double getStartTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "startTime" */
	//void setStartTime (double timestamp);

	///** Return double result in seconds from SFTime inputOutput field named "stopTime" */
	//double getStopTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "stopTime" */
	//void setStopTime (double timestamp);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
//Attributes
public:
	bool	repeatS;
	bool	repeatT;
	float	speed;
};
 
//C.3.133 MultiTexture 
/** MultiTexture defines a concrete node interface that extends interface X3DTextureNode. */

class X3D_API MultiTexture : public X3DTextureNode
{

public:
	MultiTexture();
	virtual ~MultiTexture();

	/** Return float result [] from SFFloat inputOutput field named "alpha" */
	float getAlpha ();

	/** Assign float value [] to SFFloat inputOutput field named "alpha" */
	void setAlpha (float value);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "color" */
	float* getColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "color" */
	void setColor (float* color);

	/** Return array of String results array [] from MFString inputOutput field named "function" */
	std::string* getFunction ();

	/** Return number of primitive values in "function" array */
	int getNumFunction ();

	/** Assign String array [] to MFString inputOutput field named "function" */
	void setFunction (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "function" */
	void setFunction (std::string value);

	/** Return array of String results array [] from MFString inputOutput field named "mode" */
	std::string* getMode ();

	/** Return number of primitive values in "mode" array */
	int getNumMode ();

	/** Assign String array [] to MFString inputOutput field named "mode" */
	void setMode (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "mode" */
	void setMode (std::string value);

	/** Return array of String results array [] from MFString inputOutput field named "source" */
	std::string* getSource ();

	/** Return number of primitive values in "source" array */
	int getNumSource ();

	/** Assign String array [] to MFString inputOutput field named "source" */
	void setSource (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "source" */
	void setSource (std::string value);

	/** Return array of X3DTextureNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "texture" */
	void getTexture (X3DNode* result);

	/** Return number of nodes in "texture" array */
	int getNumTexture ();

	/** Assign X3DTextureNode array (using a properly typed node array) to MFNode inputOutput field named "texture" */
	void setTexture (X3DTextureNode* nodes);

	/** Assign single X3DTextureNode value (using a properly typed node) as the MFNode array for inputOutput field named "texture" */
	void setTexture (X3DTextureNode node);

	/** Assign X3DTextureNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "texture" */
	void setTexture (X3DPrototypeInstance node);

	/** Assign X3DTextureNode array (using a properly typed node array) to MFNode inputOutput field named "texture" */
	void setTexture (X3DNode* nodes);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.134 MultiTextureCoordinate 
/** MultiTextureCoordinate defines a concrete node interface that extends interface X3DTextureCoordinateNode. */

class X3D_API MultiTextureCoordinate : public X3DTextureCoordinateNode
{

public:
	MultiTextureCoordinate();
	virtual ~MultiTextureCoordinate();

	/** Return array of X3DTextureCoordinateNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "texCoord" */
	void getTexCoord (X3DNode* result);

	/** Return number of nodes in "texCoord" array */
	int getNumTexCoord ();

	/** Assign X3DTextureCoordinateNode array (using a properly typed node array) to MFNode inputOutput field named "texCoord" */
	void setTexCoord (X3DTextureCoordinateNode* nodes);

	/** Assign single X3DTextureCoordinateNode value (using a properly typed node) as the MFNode array for inputOutput field named "texCoord" */
	void setTexCoord (X3DTextureCoordinateNode node);

	/** Assign X3DTextureCoordinateNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "texCoord" */
	void setTexCoord (X3DPrototypeInstance node);

	/** Assign X3DTextureCoordinateNode array (using a properly typed node array) to MFNode inputOutput field named "texCoord" */
	void setTexCoord (X3DNode* nodes);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.135 MultiTextureTransform 
/** MultiTextureTransform defines a concrete node interface that extends interface X3DTextureTransformNode. */

class X3D_API MultiTextureTransform : public X3DTextureTransformNode
{

public:
	MultiTextureTransform();
	virtual ~MultiTextureTransform();

	/** Return array of X3DTextureTransformNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "textureTransform" */
	void getTextureTransform (X3DNode* result);

	/** Return number of nodes in "textureTransform" array */
	int getNumTextureTransform ();

	/** Assign X3DTextureTransformNode array (using a properly typed node array) to MFNode inputOutput field named "textureTransform" */
	void setTextureTransform (X3DTextureTransformNode* nodes);

	/** Assign single X3DTextureTransformNode value (using a properly typed node) as the MFNode array for inputOutput field named "textureTransform" */
	void setTextureTransform (X3DTextureTransformNode node);

	/** Assign X3DTextureTransformNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "textureTransform" */
	void setTextureTransform (X3DPrototypeInstance node);

	/** Assign X3DTextureTransformNode array (using a properly typed node array) to MFNode inputOutput field named "textureTransform" */
	void setTextureTransform (X3DNode* nodes);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.136 NavigationInfo 
/** NavigationInfo defines a concrete node interface that extends interface X3DBindableNode. */

class X3D_API NavigationInfo : public X3DBindableNode
{

public:
	NavigationInfo();
	virtual ~NavigationInfo();
	virtual std::string getXMLString();

	/** Return boolean result from SFBool outputOnly field named "transitionComplete" */
	bool getTransitionComplete ();

	/** Return array of float results array [] from MFFloat inputOutput field named "avatarSize" */
	MFFloat& getAvatarSize ();

	/** Return number of primitive values in "avatarSize" array */
	int getNumAvatarSize ();

	/** Assign float array [] to MFFloat inputOutput field named "avatarSize" */
	void setAvatarSize (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "avatarSize" */
	void setAvatarSize (float value);

	/** Return boolean result from SFBool inputOutput field named "headlight" */
	bool getHeadlight ();

	/** Assign boolean value to SFBool inputOutput field named "headlight" */
	void setHeadlight (bool value);

	/** Return float result [] from  type inputOutput field named "speed" */
	float getSpeed ();

	/** Assign float value [] to  type inputOutput field named "speed" */
	void setSpeed (float value);

	/** Return array of String results array ["ANY","WALK","EXAMINE","FLY","LOOKAT","NONE","EXPLORE",...] from MFString inputOutput field named "type" */
	MFString& getType ();

	/** Return number of primitive values in "type" array */
	int getNumType ();

	/** Assign String array ["ANY","WALK","EXAMINE","FLY","LOOKAT","NONE","EXPLORE",...] to MFString inputOutput field named "type" */
	void setType (std::string* values, int size);

	/** Assign single String value ["ANY","WALK","EXAMINE","FLY","LOOKAT","NONE","EXPLORE",...] as the MFString array for inputOutput field named "type" */
	void setType (std::string value);

	/** Return array of String results array ["TELEPORT","LINEAR","ANIMATE",...] from MFString inputOutput field named "transitionType" */
	MFString& getTransitionType ();

	/** Return number of primitive values in "transitionType" array */
	int getNumTransitionType ();

	/** Assign String array ["TELEPORT","LINEAR","ANIMATE",...] to MFString inputOutput field named "transitionType" */
	void setTransitionType (std::string* values, int size);

	/** Assign single String value ["TELEPORT","LINEAR","ANIMATE",...] as the MFString array for inputOutput field named "transitionType" */
	void setTransitionType (std::string value);

	/** Return double result in seconds from  type inputOutput field named "transitionTime" */
	double getTransitionTime ();

	/** Assign double value in seconds to  type inputOutput field named "transitionTime" */
	void setTransitionTime (double timestamp);

	/** Return float result [] from  type inputOutput field named "visibilityLimit" */
	float getVisibilityLimit ();

	/** Assign float value [] to  type inputOutput field named "visibilityLimit" */
	void setVisibilityLimit (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign boolean value to SFBool inputOnly field named "set_bind" */
	//void setBind (bool value);

	///** Return double result in seconds from SFTime outputOnly field named "bindTime" */
	//double getBindTime ();

	///** Return boolean result from SFBool outputOnly field named "isBound" */
	//bool getIsBound ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
protected:
	MFFloat avatarSize;
	bool	headlight;
	float	speed;
	float	transitionTime;
	MFString transitionType;
	MFString type;
	float visibilityLimit;
};
 
 
//C.3.138 NormalInterpolator 
/** NormalInterpolator defines a concrete node interface that extends interface X3DInterpolatorNode. */

class X3D_API NormalInterpolator : public X3DInterpolatorNode
{

public:
	NormalInterpolator();
	virtual ~NormalInterpolator();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "value_changed" */
	float* getValue ();

	/** Return array of 3-tuple float results array [] from MFVec3f inputOutput field named "keyValue" */
	float* getKeyValue ();

	/** Return number of 3-tuple primitive values in "keyValue" array */
	int getNumKeyValue ();

	/** Assign 3-tuple float array [] to MFVec3f inputOutput field named "keyValue" */
	void setKeyValue (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	//void setFraction (float value);

	///** Return array of float results array [] from MFFloat inputOutput field named "key" */
	//float* getKey ();

	///** Return number of primitive values in "key" array */
	//int getNumKey ();

	///** Assign float array [] to MFFloat inputOutput field named "key" */
	//void setKey (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	//void setKey (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.139 NurbsCurve 
/** NurbsCurve defines a concrete node interface that extends interface X3DParametricGeometryNode. */

class X3D_API NurbsCurve : public X3DParametricGeometryNode
{

public:
	NurbsCurve();
	virtual ~NurbsCurve();

	/** Return boolean result from SFBool initializeOnly field named "closed" */
	bool getClosed ();

	/** Assign boolean value to SFBool initializeOnly field named "closed" */
	void setClosed (bool value);

	/** Return array of double results array [] from MFDouble initializeOnly field named "knot" */
	double* getKnot ();

	/** Return number of primitive values in "knot" array */
	int getNumKnot ();

	/** Assign double array [] to MFDouble initializeOnly field named "knot" */
	void setKnot (double* values, int size);

	/** Assign single double value [] as the MFDouble array for initializeOnly field named "knot" */
	void setKnot (double value);

	/** Return int result [] from SFInt32 initializeOnly field named "order" */
	int getOrder ();

	/** Assign int value [] to SFInt32 initializeOnly field named "order" */
	void setOrder (int value);

	/** Return int result [] from SFInt32 inputOutput field named "tessellation" */
	int getTessellation ();

	/** Assign int value [] to SFInt32 inputOutput field named "tessellation" */
	void setTessellation (int value);

	/** Return array of double results array [] from MFDouble inputOutput field named "weight" */
	double* getWeight ();

	/** Return number of primitive values in "weight" array */
	int getNumWeight ();

	/** Assign double array [] to MFDouble inputOutput field named "weight" */
	void setWeight (double* values, int size);

	/** Assign single double value [] as the MFDouble array for inputOutput field named "weight" */
	void setWeight (double value);

	/** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "controlPoint" */
	void getControlPoint (X3DNode result);

	/** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "controlPoint" */
	void setControlPoint (X3DCoordinateNode node);

	/** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	void setControlPoint (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.140 NurbsCurve2D 
/** NurbsCurve2D defines a concrete node interface that extends interface X3DNurbsControlCurveNode. */

class X3D_API NurbsCurve2D : public X3DNurbsControlCurveNode
{

public:
	NurbsCurve2D();
	virtual ~NurbsCurve2D();

	/** Return boolean result from SFBool initializeOnly field named "closed" */
	bool getClosed ();

	/** Assign boolean value to SFBool initializeOnly field named "closed" */
	void setClosed (bool value);

	/** Return array of double results array [] from MFDouble initializeOnly field named "knot" */
	double* getKnot ();

	/** Return number of primitive values in "knot" array */
	int getNumKnot ();

	/** Assign double array [] to MFDouble initializeOnly field named "knot" */
	void setKnot (double* values, int size);

	/** Assign single double value [] as the MFDouble array for initializeOnly field named "knot" */
	void setKnot (double value);

	/** Return int result [] from SFInt32 initializeOnly field named "order" */
	int getOrder ();

	/** Assign int value [] to SFInt32 initializeOnly field named "order" */
	void setOrder (int value);

	/** Return int result [] from SFInt32 inputOutput field named "tessellation" */
	int getTessellation ();

	/** Assign int value [] to SFInt32 inputOutput field named "tessellation" */
	void setTessellation (int value);

	/** Return array of double results array [] from MFDouble inputOutput field named "weight" */
	double* getWeight ();

	/** Return number of primitive values in "weight" array */
	int getNumWeight ();

	/** Assign double array [] to MFDouble inputOutput field named "weight" */
	void setWeight (double* values, int size);

	/** Assign single double value [] as the MFDouble array for inputOutput field named "weight" */
	void setWeight (double value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 2-tuple double results array [] from MFVec2d inputOutput field named "controlPoint" */
	//double* getControlPoint ();

	///** Return number of 2-tuple primitive values in "controlPoint" array */
	//int getNumControlPoint ();

	///** Assign 2-tuple double array [] to MFVec2d inputOutput field named "controlPoint" */
	//void setControlPoint (double* values, int size);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.141 NurbsOrientationInterpolator 
/** NurbsOrientationInterpolator defines a concrete node interface that extends interface X3DChildNode. */

class X3D_API NurbsOrientationInterpolator : public X3DChildNode
{

public:
	NurbsOrientationInterpolator();
	virtual ~NurbsOrientationInterpolator();

	/** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	void setFraction (float value);

	/** Return array of 4-tuple float results array in radians from SFRotation outputOnly field named "value_changed" */
	float* getValue ();

	/** Return array of double results array [] from MFDouble initializeOnly field named "knot" */
	double* getKnot ();

	/** Return number of primitive values in "knot" array */
	int getNumKnot ();

	/** Assign double array [] to MFDouble initializeOnly field named "knot" */
	void setKnot (double* values, int size);

	/** Assign single double value [] as the MFDouble array for initializeOnly field named "knot" */
	void setKnot (double value);

	/** Return int result [] from SFInt32 initializeOnly field named "order" */
	int getOrder ();

	/** Assign int value [] to SFInt32 initializeOnly field named "order" */
	void setOrder (int value);

	/** Return array of double results array [] from MFDouble inputOutput field named "weight" */
	double* getWeight ();

	/** Return number of primitive values in "weight" array */
	int getNumWeight ();

	/** Assign double array [] to MFDouble inputOutput field named "weight" */
	void setWeight (double* values, int size);

	/** Assign single double value [] as the MFDouble array for inputOutput field named "weight" */
	void setWeight (double value);

	/** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "controlPoint" */
	void getControlPoint (X3DNode result);

	/** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "controlPoint" */
	void setControlPoint (X3DCoordinateNode node);

	/** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	void setControlPoint (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.142 NurbsPatchSurface 
/** NurbsPatchSurface defines a concrete node interface that extends interface X3DNurbsSurfaceGeometryNode. */

class X3D_API NurbsPatchSurface : public X3DNurbsSurfaceGeometryNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	NurbsPatchSurface();
	virtual ~NurbsPatchSurface();


	/** Return boolean result from SFBool initializeOnly field named "uClosed" */
	bool getUClosed ();

	/** Assign boolean value to SFBool initializeOnly field named "uClosed" */
	void setUClosed (bool value);

	/** Return boolean result from SFBool initializeOnly field named "vClosed" */
	bool getVClosed ();

	/** Assign boolean value to SFBool initializeOnly field named "vClosed" */
	void setVClosed (bool value);

	/** Return int result [] from SFInt32 initializeOnly field named "uDimension" */
	int getUDimension ();

	/** Assign int value [] to SFInt32 initializeOnly field named "uDimension" */
	void setUDimension (int value);

	/** Return int result [] from SFInt32 initializeOnly field named "vDimension" */
	int getVDimension ();

	/** Assign int value [] to SFInt32 initializeOnly field named "vDimension" */
	void setVDimension (int value);

	/** Return array of double results array [] from MFDouble initializeOnly field named "uKnot" */
	double* getUKnot ();

	/** Return number of primitive values in "uKnot" array */
	int getNumUKnot ();

	/** Assign double array [] to MFDouble initializeOnly field named "uKnot" */
	void setUKnot (double* values, int size);

	/** Assign single double value [] as the MFDouble array for initializeOnly field named "uKnot" */
	void setUKnot (double value);

	/** Return array of double results array [] from MFDouble initializeOnly field named "vKnot" */
	double* getVKnot ();

	/** Return number of primitive values in "vKnot" array */
	int getNumVKnot ();

	/** Assign double array [] to MFDouble initializeOnly field named "vKnot" */
	void setVKnot (double* values, int size);

	/** Assign single double value [] as the MFDouble array for initializeOnly field named "vKnot" */
	void setVKnot (double value);

	/** Return int result [] from SFInt32 initializeOnly field named "uOrder" */
	int getUOrder ();

	/** Assign int value [] to SFInt32 initializeOnly field named "uOrder" */
	void setUOrder (int value);

	/** Return int result [] from SFInt32 initializeOnly field named "vOrder" */
	int getVOrder ();

	/** Assign int value [] to SFInt32 initializeOnly field named "vOrder" */
	void setVOrder (int value);

	/** Return int result [] from SFInt32 inputOutput field named "uTessellation" */
	int getUTessellation ();

	/** Assign int value [] to SFInt32 inputOutput field named "uTessellation" */
	void setUTessellation (int value);

	/** Return int result [] from SFInt32 inputOutput field named "vTessellation" */
	int getVTessellation ();

	/** Assign int value [] to SFInt32 inputOutput field named "vTessellation" */
	void setVTessellation (int value);

	/** Return array of double results array [] from MFDouble inputOutput field named "weight" */
	double* getWeight ();

	/** Return number of primitive values in "weight" array */
	int getNumWeight ();

	/** Assign double array [] to MFDouble inputOutput field named "weight" */
	void setWeight (double* values, int size);

	/** Assign single double value [] as the MFDouble array for inputOutput field named "weight" */
	void setWeight (double value);

	/** Return boolean result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign boolean value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	/** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	X3DNode* getMetadata ();

	/** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	void setMetadata (X3DMetadataObject node);

	/** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	void setMetadata (X3DPrototypeInstance protoInstance);

	/** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "controlPoint" */
	void getControlPoint (X3DNode result);

	/** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "controlPoint" */
	void setControlPoint (X3DCoordinateNode node);

	/** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	void setControlPoint (X3DPrototypeInstance protoInstance);

	/** Return X3DTextureCoordinateNode|NurbsTextureCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texCoord" */
	void getTexCoord (X3DNode result);

	/** Assign X3DTextureCoordinateNode|NurbsTextureCoordinate value (using a properly typed node) to SFNode inputOutput field named "texCoord" */
	void setTexCoord (X3DNode node);

	/** Assign X3DTextureCoordinateNode|NurbsTextureCoordinate value (using a properly typed protoInstance) */
	void setTexCoord (X3DPrototypeInstance protoInstance);
};
 
//C.3.143 NurbsPositionInterpolator 
/** NurbsPositionInterpolator defines a concrete node interface that extends interface X3DChildNode. */

class X3D_API NurbsPositionInterpolator : public X3DChildNode
{

public:
	NurbsPositionInterpolator();
	virtual ~NurbsPositionInterpolator();

	/** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	void setFraction (float value);

	/** Return SFVec3f result [] from SFVec3f outputOnly field named "value_changed" */
	SFVec3f getValue ();

	/** Return array of double results array [] from MFDouble initializeOnly field named "knot" */
	double* getKnot ();

	/** Return number of primitive values in "knot" array */
	int getNumKnot ();

	/** Assign double array [] to MFDouble initializeOnly field named "knot" */
	void setKnot (double* values, int size);

	/** Assign single double value [] as the MFDouble array for initializeOnly field named "knot" */
	void setKnot (double value);

	/** Return int result [] from SFInt32 inputOutput field named "order" */
	int getOrder ();

	/** Assign int value [] to SFInt32 inputOutput field named "order" */
	void setOrder (int value);

	/** Return array of double results array [] from MFDouble inputOutput field named "weight" */
	double* getWeight ();

	/** Return number of primitive values in "weight" array */
	int getNumWeight ();

	/** Assign double array [] to MFDouble inputOutput field named "weight" */
	void setWeight (double* values, int size);

	/** Assign single double value [] as the MFDouble array for inputOutput field named "weight" */
	void setWeight (double value);

	/** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "controlPoint" */
	void getControlPoint (X3DNode result);

	/** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "controlPoint" */
	void setControlPoint (X3DCoordinateNode node);

	/** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	void setControlPoint (X3DPrototypeInstance protoInstance);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
public:
	SFVec3f value_changed;

};
 
//C.3.144 NurbsSet 
/** NurbsSet defines a concrete node interface that extends interfaces X3DChildNodeX3DBoundedObject. */

class X3D_API NurbsSet : public X3DChildNode, public X3DBoundedObject
{

public:
	NurbsSet();
	virtual ~NurbsSet();

	/** Return float result [] from SFFloat inputOutput field named "tessellationScale" */
	float getTessellationScale ();

	/** Assign float value [] to SFFloat inputOutput field named "tessellationScale" */
	void setTessellationScale (float value);

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	/** Assign X3DNurbsSurfaceGeometryNode array (using a properly typed node array) to MFNode inputOnly field named "addGeometry" */
	void setAddGeometry (X3DNurbsSurfaceGeometryNode* nodes);

	/** Assign single X3DNurbsSurfaceGeometryNode value (using a properly typed node) as the MFNode array for inputOnly field named "addGeometry" */
	void setAddGeometry (X3DNurbsSurfaceGeometryNode node);

	/** Assign X3DNurbsSurfaceGeometryNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addGeometry" */
	void setAddGeometry (X3DPrototypeInstance node);

	/** Assign X3DNurbsSurfaceGeometryNode array (using a properly typed node array) to MFNode inputOnly field named "addGeometry" */
	void setAddGeometry (X3DNode* nodes);

	/** Assign X3DNurbsSurfaceGeometryNode array (using a properly typed node array) to MFNode inputOnly field named "removeGeometry" */
	void setRemoveGeometry (X3DNurbsSurfaceGeometryNode* nodes);

	/** Assign single X3DNurbsSurfaceGeometryNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeGeometry" */
	void setRemoveGeometry (X3DNurbsSurfaceGeometryNode node);

	/** Assign X3DNurbsSurfaceGeometryNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeGeometry" */
	void setRemoveGeometry (X3DPrototypeInstance node);

	/** Assign X3DNurbsSurfaceGeometryNode array (using a properly typed node array) to MFNode inputOnly field named "removeGeometry" */
	void setRemoveGeometry (X3DNode* nodes);

	/** Return array of X3DNurbsSurfaceGeometryNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "geometry" */
	void getGeometry (X3DNode* result);

	/** Return number of nodes in "geometry" array */
	int getNumGeometry ();

	/** Assign X3DNurbsSurfaceGeometryNode array (using a properly typed node array) to MFNode inputOutput field named "geometry" */
	void setGeometry (X3DNurbsSurfaceGeometryNode* nodes);

	/** Assign single X3DNurbsSurfaceGeometryNode value (using a properly typed node) as the MFNode array for inputOutput field named "geometry" */
	void setGeometry (X3DNurbsSurfaceGeometryNode node);

	/** Assign X3DNurbsSurfaceGeometryNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "geometry" */
	void setGeometry (X3DPrototypeInstance node);

	/** Assign X3DNurbsSurfaceGeometryNode array (using a properly typed node array) to MFNode inputOutput field named "geometry" */
	void setGeometry (X3DNode* nodes);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.145 NurbsSurfaceInterpolator 
/** NurbsSurfaceInterpolator defines a concrete node interface that extends interface X3DChildNode. */

class X3D_API NurbsSurfaceInterpolator : public X3DChildNode
{

public:
	NurbsSurfaceInterpolator();
	virtual ~NurbsSurfaceInterpolator();

	/** Assign 2-tuple float array [] to SFVec2f inputOnly field named "set_fraction" */
	void setFraction (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "position_changed" */
	float* getPosition ();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "normal_changed" */
	void getNormal (float* result);

	/** Return int result [] from SFInt32 initializeOnly field named "uDimension" */
	int getUDimension ();

	/** Assign int value [] to SFInt32 initializeOnly field named "uDimension" */
	void setUDimension (int value);

	/** Return int result [] from SFInt32 initializeOnly field named "vDimension" */
	int getVDimension ();

	/** Assign int value [] to SFInt32 initializeOnly field named "vDimension" */
	void setVDimension (int value);

	/** Return array of double results array [] from MFDouble initializeOnly field named "uKnot" */
	double* getUKnot ();

	/** Return number of primitive values in "uKnot" array */
	int getNumUKnot ();

	/** Assign double array [] to MFDouble initializeOnly field named "uKnot" */
	void setUKnot (double* values, int size);

	/** Assign single double value [] as the MFDouble array for initializeOnly field named "uKnot" */
	void setUKnot (double value);

	/** Return array of double results array [] from MFDouble initializeOnly field named "vKnot" */
	double* getVKnot ();

	/** Return number of primitive values in "vKnot" array */
	int getNumVKnot ();

	/** Assign double array [] to MFDouble initializeOnly field named "vKnot" */
	void setVKnot (double* values, int size);

	/** Assign single double value [] as the MFDouble array for initializeOnly field named "vKnot" */
	void setVKnot (double value);

	/** Return int result [] from SFInt32 initializeOnly field named "uOrder" */
	int getUOrder ();

	/** Assign int value [] to SFInt32 initializeOnly field named "uOrder" */
	void setUOrder (int value);

	/** Return int result [] from SFInt32 initializeOnly field named "vOrder" */
	int getVOrder ();

	/** Assign int value [] to SFInt32 initializeOnly field named "vOrder" */
	void setVOrder (int value);

	/** Return array of double results array [] from MFDouble inputOutput field named "weight" */
	double* getWeight ();

	/** Return number of primitive values in "weight" array */
	int getNumWeight ();

	/** Assign double array [] to MFDouble inputOutput field named "weight" */
	void setWeight (double* values, int size);

	/** Assign single double value [] as the MFDouble array for inputOutput field named "weight" */
	void setWeight (double value);

	/** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "controlPoint" */
	void getControlPoint (X3DNode result);

	/** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "controlPoint" */
	void setControlPoint (X3DCoordinateNode node);

	/** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	void setControlPoint (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.146 NurbsSweptSurface 
/** NurbsSweptSurface defines a concrete node interface that extends interface X3DParametricGeometryNode. */

class X3D_API NurbsSweptSurface : public X3DParametricGeometryNode
{

public:
	NurbsSweptSurface();
	virtual ~NurbsSweptSurface();

	/** Return boolean result from SFBool initializeOnly field named "ccw" */
	bool getCcw ();

	/** Assign boolean value to SFBool initializeOnly field named "ccw" */
	void setCcw (bool value);

	/** Return boolean result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign boolean value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	/** Return X3DNurbsControlCurveNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "crossSectionCurve" */
	void getCrossSectionCurve (X3DNode result);

	/** Assign X3DNurbsControlCurveNode value (using a properly typed node) to SFNode inputOutput field named "crossSectionCurve" */
	void setCrossSectionCurve (X3DNurbsControlCurveNode node);

	/** Assign X3DNurbsControlCurveNode value (using a properly typed protoInstance) */
	void setCrossSectionCurve (X3DPrototypeInstance protoInstance);

	/** Return NurbsCurve result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "trajectoryCurve" */
	void getTrajectoryCurve (X3DNode result);

	/** Assign NurbsCurve value (using a properly typed node) to SFNode inputOutput field named "trajectoryCurve" */
	void setTrajectoryCurve (NurbsCurve node);

	/** Assign NurbsCurve value (using a properly typed protoInstance) */
	void setTrajectoryCurve (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.147 NurbsSwungSurface 
/** NurbsSwungSurface defines a concrete node interface that extends interface X3DParametricGeometryNode. */

class X3D_API NurbsSwungSurface : public X3DParametricGeometryNode
{

public:
	NurbsSwungSurface();
	virtual ~NurbsSwungSurface();

	/** Return boolean result from SFBool initializeOnly field named "ccw" */
	bool getCcw ();

	/** Assign boolean value to SFBool initializeOnly field named "ccw" */
	void setCcw (bool value);

	/** Return boolean result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign boolean value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	/** Return X3DNurbsControlCurveNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "profileCurve" */
	void getProfileCurve (X3DNode result);

	/** Assign X3DNurbsControlCurveNode value (using a properly typed node) to SFNode inputOutput field named "profileCurve" */
	void setProfileCurve (X3DNurbsControlCurveNode node);

	/** Assign X3DNurbsControlCurveNode value (using a properly typed protoInstance) */
	void setProfileCurve (X3DPrototypeInstance protoInstance);

	/** Return X3DNurbsControlCurveNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "trajectoryCurve" */
	void getTrajectoryCurve (X3DNode result);

	/** Assign X3DNurbsControlCurveNode value (using a properly typed node) to SFNode inputOutput field named "trajectoryCurve" */
	void setTrajectoryCurve (X3DNurbsControlCurveNode node);

	/** Assign X3DNurbsControlCurveNode value (using a properly typed protoInstance) */
	void setTrajectoryCurve (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.148 NurbsTextureCoordinate 
/** NurbsTextureCoordinate defines a concrete node interface that extends interface X3DNode. */

class X3D_API NurbsTextureCoordinate : public X3DNode
{

public:
	NurbsTextureCoordinate();
	virtual ~NurbsTextureCoordinate();

	/** Return array of 2-tuple float results array [] from MFVec2f inputOutput field named "controlPoint" */
	void getControlPoint (float* result);

	/** Return number of 2-tuple primitive values in "controlPoint" array */
	int getNumControlPoint ();

	/** Assign 2-tuple float array [] to MFVec2f inputOutput field named "controlPoint" */
	void setControlPoint (float* values, int size);

	/** Return int result [] from SFInt32 initializeOnly field named "uDimension" */
	int getUDimension ();

	/** Assign int value [] to SFInt32 initializeOnly field named "uDimension" */
	void setUDimension (int value);

	/** Return int result [] from SFInt32 initializeOnly field named "vDimension" */
	int getVDimension ();

	/** Assign int value [] to SFInt32 initializeOnly field named "vDimension" */
	void setVDimension (int value);

	/** Return array of double results array [] from MFDouble initializeOnly field named "uKnot" */
	double* getUKnot ();

	/** Return number of primitive values in "uKnot" array */
	int getNumUKnot ();

	/** Assign double array [] to MFDouble initializeOnly field named "uKnot" */
	void setUKnot (double* values);

	/** Assign single double value [] as the MFDouble array for initializeOnly field named "uKnot" */
	void setUKnot (double value);

	/** Return array of double results array [] from MFDouble initializeOnly field named "vKnot" */
	double* getVKnot ();

	/** Return number of primitive values in "vKnot" array */
	int getNumVKnot ();

	/** Assign double array [] to MFDouble initializeOnly field named "vKnot" */
	void setVKnot (double* values, int size);

	/** Assign single double value [] as the MFDouble array for initializeOnly field named "vKnot" */
	void setVKnot (double value);

	/** Return int result [] from SFInt32 initializeOnly field named "uOrder" */
	int getUOrder ();

	/** Assign int value [] to SFInt32 initializeOnly field named "uOrder" */
	void setUOrder (int value);

	/** Return int result [] from SFInt32 initializeOnly field named "vOrder" */
	int getVOrder ();

	/** Assign int value [] to SFInt32 initializeOnly field named "vOrder" */
	void setVOrder (int value);

	/** Return array of float results array [] from MFFloat inputOutput field named "weight" */
	float* getWeight ();

	/** Return number of primitive values in "weight" array */
	int getNumWeight ();

	/** Assign float array [] to MFFloat inputOutput field named "weight" */
	void setWeight (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "weight" */
	void setWeight (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.149 NurbsTrimmedSurface 
/** NurbsTrimmedSurface defines a concrete node interface that extends interface X3DNurbsSurfaceGeometryNode. */

class X3D_API NurbsTrimmedSurface : public X3DNurbsSurfaceGeometryNode
{

public:
	NurbsTrimmedSurface();
	virtual ~NurbsTrimmedSurface();

	/** Assign Contour2D array (using a properly typed node array) to MFNode inputOnly field named "addTrimmingContour" */
	void setAddTrimmingContour (Contour2D* nodes);

	/** Assign single Contour2D value (using a properly typed node) as the MFNode array for inputOnly field named "addTrimmingContour" */
	void setAddTrimmingContour (Contour2D node);

	/** Assign Contour2D array (using a properly typed protoInstance array) to MFNode inputOnly field named "addTrimmingContour" */
	void setAddTrimmingContour (X3DPrototypeInstance node);

	/** Assign Contour2D array (using a properly typed node array) to MFNode inputOnly field named "addTrimmingContour" */
	void setAddTrimmingContour (X3DNode* nodes);

	/** Assign Contour2D array (using a properly typed node array) to MFNode inputOnly field named "removeTrimmingContour" */
	void setRemoveTrimmingContour (Contour2D* nodes);

	/** Assign single Contour2D value (using a properly typed node) as the MFNode array for inputOnly field named "removeTrimmingContour" */
	void setRemoveTrimmingContour (Contour2D node);

	/** Assign Contour2D array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeTrimmingContour" */
	void setRemoveTrimmingContour (X3DPrototypeInstance node);

	/** Assign Contour2D array (using a properly typed node array) to MFNode inputOnly field named "removeTrimmingContour" */
	void setRemoveTrimmingContour (X3DNode* nodes);

	/** Return array of Contour2D results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "trimmingContour" */
	void getTrimmingContour (X3DNode* result);

	/** Return number of nodes in "trimmingContour" array */
	int getNumTrimmingContour ();

	/** Assign Contour2D array (using a properly typed node array) to MFNode inputOutput field named "trimmingContour" */
	void setTrimmingContour (Contour2D* nodes);

	/** Assign single Contour2D value (using a properly typed node) as the MFNode array for inputOutput field named "trimmingContour" */
	void setTrimmingContour (Contour2D node);

	/** Assign Contour2D array (using a properly typed protoInstance array) to MFNode inputOutput field named "trimmingContour" */
	void setTrimmingContour (X3DPrototypeInstance node);

	/** Assign Contour2D array (using a properly typed node array) to MFNode inputOutput field named "trimmingContour" */
	void setTrimmingContour (X3DNode* nodes);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool initializeOnly field named "uClosed" */
	//bool getUClosed ();

	///** Assign boolean value to SFBool initializeOnly field named "uClosed" */
	//void setUClosed (bool value);

	///** Return boolean result from SFBool initializeOnly field named "vClosed" */
	//bool getVClosed ();

	///** Assign boolean value to SFBool initializeOnly field named "vClosed" */
	//void setVClosed (bool value);

	///** Return int result [] from SFInt32 initializeOnly field named "uDimension" */
	//int getUDimension ();

	///** Assign int value [] to SFInt32 initializeOnly field named "uDimension" */
	//void setUDimension (int value);

	///** Return int result [] from SFInt32 initializeOnly field named "vDimension" */
	//int getVDimension ();

	///** Assign int value [] to SFInt32 initializeOnly field named "vDimension" */
	//void setVDimension (int value);

	///** Return array of double results array [] from MFDouble initializeOnly field named "uKnot" */
	//double* getUKnot ();

	///** Return number of primitive values in "uKnot" array */
	//int getNumUKnot ();

	///** Assign double array [] to MFDouble initializeOnly field named "uKnot" */
	//void setUKnot (double* values, int size);

	///** Assign single double value [] as the MFDouble array for initializeOnly field named "uKnot" */
	//void setUKnot (double value);

	///** Return array of double results array [] from MFDouble initializeOnly field named "vKnot" */
	//double* getVKnot ();

	///** Return number of primitive values in "vKnot" array */
	//int getNumVKnot ();

	///** Assign double array [] to MFDouble initializeOnly field named "vKnot" */
	//void setVKnot (double* values, int size);

	///** Assign single double value [] as the MFDouble array for initializeOnly field named "vKnot" */
	//void setVKnot (double value);

	///** Return int result [] from SFInt32 initializeOnly field named "uOrder" */
	//int getUOrder ();

	///** Assign int value [] to SFInt32 initializeOnly field named "uOrder" */
	//void setUOrder (int value);

	///** Return int result [] from SFInt32 initializeOnly field named "vOrder" */
	//int getVOrder ();

	///** Assign int value [] to SFInt32 initializeOnly field named "vOrder" */
	//void setVOrder (int value);

	///** Return int result [] from SFInt32 inputOutput field named "uTessellation" */
	//int getUTessellation ();

	///** Assign int value [] to SFInt32 inputOutput field named "uTessellation" */
	//void setUTessellation (int value);

	///** Return int result [] from SFInt32 inputOutput field named "vTessellation" */
	//int getVTessellation ();

	///** Assign int value [] to SFInt32 inputOutput field named "vTessellation" */
	//void setVTessellation (int value);

	///** Return array of double results array [] from MFDouble inputOutput field named "weight" */
	//double* getWeight ();

	///** Return number of primitive values in "weight" array */
	//int getNumWeight ();

	///** Assign double array [] to MFDouble inputOutput field named "weight" */
	//void setWeight (double* values, int size);

	///** Assign single double value [] as the MFDouble array for inputOutput field named "weight" */
	//void setWeight (double value);

	///** Return boolean result from SFBool initializeOnly field named "solid" */
	//bool getSolid ();

	///** Assign boolean value to SFBool initializeOnly field named "solid" */
	//void setSolid (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "controlPoint" */
	//void getControlPoint (X3DNode result);

	///** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "controlPoint" */
	//void setControlPoint (X3DCoordinateNode node);

	///** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	//void setControlPoint (X3DPrototypeInstance protoInstance);

	///** Return X3DTextureCoordinateNode|NurbsTextureCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texCoord" */
	//void getTexCoord (X3DNode result);

	///** Assign X3DTextureCoordinateNode|NurbsTextureCoordinate value (using a properly typed node) to SFNode inputOutput field named "texCoord" */
	//void setTexCoord (X3DNode node);

	///** Assign X3DTextureCoordinateNode|NurbsTextureCoordinate value (using a properly typed protoInstance) */
	//void setTexCoord (X3DPrototypeInstance protoInstance);
};
 
//C.3.150 OpacityMapVolumeStyle 
/** OpacityMapVolumeStyle defines a concrete node interface that extends interface X3DComposableVolumeRenderStyleNode. */

class X3D_API OpacityMapVolumeStyle : public X3DComposableVolumeRenderStyleNode
{

public:
	OpacityMapVolumeStyle();
	virtual ~OpacityMapVolumeStyle();

	/** Return X3DTexture2DNode|X3DTexture3DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "transferFunction" */
	void getTransferFunction (X3DNode result);

	/** Assign X3DTexture2DNode|X3DTexture3DNode value (using a properly typed node) to SFNode inputOutput field named "transferFunction" */
	void setTransferFunction (X3DNode node);

	/** Assign X3DTexture2DNode|X3DTexture3DNode value (using a properly typed protoInstance) */
	void setTransferFunction (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.151 OrientationChaser 
/** OrientationChaser defines a concrete node interface that extends interface X3DChaserNode. */

class X3D_API OrientationChaser : public X3DChaserNode
{

public:
	OrientationChaser();
	virtual ~OrientationChaser();

	/** Assign 4-tuple float array in radians to SFRotation inputOnly field named "set_destination" */
	void setDestination (float* value);

	/** Assign 4-tuple float array in radians to SFRotation inputOnly field named "set_value" */
	void setValue (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation outputOnly field named "value_changed" */
	float* getValue ();

	/** Return array of 4-tuple float results array in radians from SFRotation initializeOnly field named "initialDestination" */
	float* getInitialDestination ();

	/** Assign 4-tuple float array in radians to SFRotation initializeOnly field named "initialDestination" */
	void setInitialDestination (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation initializeOnly field named "initialValue" */
	float* getInitialValue ();

	/** Assign 4-tuple float array in radians to SFRotation initializeOnly field named "initialValue" */
	void setInitialValue (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from  type initializeOnly field named "duration" */
	//double getDuration ();

	///** Assign double value in seconds to  type initializeOnly field named "duration" */
	//void setDuration (double timestamp);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.152 OrientationDamper 
/** OrientationDamper defines a concrete node interface that extends interface X3DDamperNode. */

class X3D_API OrientationDamper : public X3DDamperNode
{

public:
	OrientationDamper();
	virtual ~OrientationDamper();

	/** Assign 4-tuple float array in radians to SFRotation inputOnly field named "set_destination" */
	void setDestination (float* value);

	/** Assign 4-tuple float array in radians to SFRotation inputOnly field named "set_value" */
	void setValue (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation outputOnly field named "value_changed" */
	float* getValue ();

	/** Return array of 4-tuple float results array in radians from SFRotation initializeOnly field named "initialDestination" */
	float* getInitialDestination ();

	/** Assign 4-tuple float array in radians to SFRotation initializeOnly field named "initialDestination" */
	void setInitialDestination (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation initializeOnly field named "initialValue" */
	float* getInitialValue ();

	/** Assign 4-tuple float array in radians to SFRotation initializeOnly field named "initialValue" */
	void setInitialValue (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from  type inputOutput field named "tau" */
	//double getTau ();

	///** Assign double value in seconds to  type inputOutput field named "tau" */
	//void setTau (double timestamp);

	///** Return float result [] from SFFloat inputOutput field named "tolerance" */
	//float getTolerance ();

	///** Assign float value [] to SFFloat inputOutput field named "tolerance" */
	//void setTolerance (float value);

	///** Return int result [] from  type initializeOnly field named "order" */
	//int getOrder ();

	///** Assign int value [] to  type initializeOnly field named "order" */
	//void setOrder (int value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.153 OrientationInterpolator 
/** OrientationInterpolator defines a concrete node interface that extends interface X3DInterpolatorNode. */

class X3D_API OrientationInterpolator : public X3DInterpolatorNode
{

public:
	OrientationInterpolator();
	virtual ~OrientationInterpolator();
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return array of 4-tuple float results array in radians from SFRotation outputOnly field named "value_changed" */
	//float* getValue ();

	/** Return array of 4-tuple float results array in radians from MFRotation inputOutput field named "keyValue" */
	//float* getKeyValue ();

	/** Return number of 4-tuple primitive values in "keyValue" array */
	//int getNumKeyValue ();

	/** Assign 4-tuple float array in radians to MFRotation inputOutput field named "keyValue" */
	//void setKeyValue (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	//void setFraction (float value);

	///** Return array of float results array [] from MFFloat inputOutput field named "key" */
	//float* getKey ();

	///** Return number of primitive values in "key" array */
	//int getNumKey ();

	///** Assign float array [] to MFFloat inputOutput field named "key" */
	//void setKey (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	//void setKey (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.154 OrthoViewpoint 
/** OrthoViewpoint defines a concrete node interface that extends interface X3DViewpointNode. */

class X3D_API OrthoViewpoint : public X3DViewpointNode
{

public:
	OrthoViewpoint();
	virtual ~OrthoViewpoint();

	/** Return array of 3-tuple float results array in radians from SFVec3f inputOutput field named "centerOfRotation" */
	float* getCenterOfRotation ();

	/** Assign 3-tuple float array in radians to SFVec3f inputOutput field named "centerOfRotation" */
	void setCenterOfRotation (float* value);

	/** Return array of float results array [] from MFFloat inputOutput field named "fieldOfView" */
	float* getFieldOfView ();

	/** Return number of primitive values in "fieldOfView" array */
	int getNumFieldOfView ();

	/** Assign float array [] to MFFloat inputOutput field named "fieldOfView" */
	void setFieldOfView (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "fieldOfView" */
	void setFieldOfView (float value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "position" */
	float* getPosition ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "position" */
	void setPosition (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign boolean value to SFBool inputOnly field named "set_bind" */
	//void setBind (bool value);

	///** Return double result in seconds from SFTime outputOnly field named "bindTime" */
	//double getBindTime ();

	///** Return boolean result from SFBool outputOnly field named "isBound" */
	//bool getIsBound ();

	///** Return String result [] from SFString inputOutput field named "description" */
	//std::string getDescription ();

	///** Assign String value [] to SFString inputOutput field named "description" */
	//void setDescription (std::string value);

	///** Return boolean result from SFBool inputOutput field named "jump" */
	//bool getJump ();

	///** Assign boolean value to SFBool inputOutput field named "jump" */
	//void setJump (bool value);

	///** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "orientation" */
	//float* getOrientation ();

	///** Assign 4-tuple float array in radians to SFRotation inputOutput field named "orientation" */
	//void setOrientation (float* value);

	///** Return boolean result from SFBool inputOutput field named "retainUserOffsets" */
	//bool getRetainUserOffsets ();

	///** Assign boolean value to SFBool inputOutput field named "retainUserOffsets" */
	//void setRetainUserOffsets (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.155 PackagedShader 
/** PackagedShader defines a concrete node interface that extends interfaces X3DShaderNodeX3DUrlObject, X3DProgrammableShaderObject.
* PackagedShader can contain field declarations, but no CDATA section of plain-text source code. */

class X3D_API PackagedShader : public X3DShaderNode, X3DUrlObject, X3DProgrammableShaderObject
{

public:
	PackagedShader();
	virtual ~PackagedShader();

	/** Return array of String results array [] from MFString inputOutput field named "url" */
	std::string* getUrl ();

	/** Return number of primitive values in "url" array */
	int getNumUrl ();

	/** Assign String array [] to MFString inputOutput field named "url" */
	void setUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "url" */
	void setUrl (std::string value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign boolean value to SFBool inputOnly field named "activate" */
	//void setActivate (bool value);

	///** Return boolean result from SFBool outputOnly field named "isSelected" */
	//bool getIsSelected ();

	///** Return boolean result from SFBool outputOnly field named "isValid" */
	//bool getIsValid ();

	///** Return String result (enumeration values = "Cg"|"GLSL"|"HLSL"|...) from SFString initializeOnly field named "language" */
	//std::string getLanguage ();

	///** Assign String value (enumeration values = "Cg"|"GLSL"|"HLSL"|...) to SFString initializeOnly field named "language" */
	//void setLanguage (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.156 ParticleSystem 
/** ParticleSystem defines a concrete node interface that extends interface X3DShapeNode. */

class X3D_API ParticleSystem : public X3DShapeNode
{

public:
	ParticleSystem();
	virtual ~ParticleSystem();

	/** Return boolean result from SFBool outputOnly field named "isActive" */
	bool getIsActive ();

	/** Return boolean result from SFBool inputOutput field named "createParticles" */
	bool getCreateParticles ();

	/** Assign boolean value to SFBool inputOutput field named "createParticles" */
	void setCreateParticles (bool value);

	/** Return boolean result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign boolean value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	/** Return float result [] from SFFloat inputOutput field named "lifetimeVariation" */
	float getLifetimeVariation ();

	/** Assign float value [] to SFFloat inputOutput field named "lifetimeVariation" */
	void setLifetimeVariation (float value);

	/** Return int result [] from SFInt32 inputOutput field named "maxParticles" */
	int getMaxParticles ();

	/** Assign int value [] to SFInt32 inputOutput field named "maxParticles" */
	void setMaxParticles (int value);

	/** Return float result [] from SFFloat inputOutput field named "particleLifetime" */
	float getParticleLifetime ();

	/** Assign float value [] to SFFloat inputOutput field named "particleLifetime" */
	void setParticleLifetime (float value);

	/** Return array of 2-tuple float results array [] from SFVec2f inputOutput field named "particleSize" */
	void getParticleSize (float* result);

	/** Assign 2-tuple float array [] to SFVec2f inputOutput field named "particleSize" */
	void setParticleSize (float* value);

	/** Return array of float results array using RGB values [0..1] from MFFloat initializeOnly field named "colorKey" */
	float* getColorKey ();

	/** Return number of primitive values in "colorKey" array */
	int getNumColorKey ();

	/** Assign float array using RGB values [0..1] to MFFloat initializeOnly field named "colorKey" */
	void setColorKey (float* colors, int size);

	/** Assign single float value using RGB values [0..1] as the MFFloat array for initializeOnly field named "colorKey" */
	void setColorKey (float color);

	/** Return String result [] from SFString initializeOnly field named "geometryType" */
	std::string getGeometryType ();

	/** Assign String value [] to SFString initializeOnly field named "geometryType" */
	void setGeometryType (std::string value);

	/** Return array of float results array [] from MFFloat initializeOnly field named "texCoordKey" */
	float* getTexCoordKey ();

	/** Return number of primitive values in "texCoordKey" array */
	int getNumTexCoordKey ();

	/** Assign float array [] to MFFloat initializeOnly field named "texCoordKey" */
	void setTexCoordKey (float* values, int size);

	/** Assign single float value [] as the MFFloat array for initializeOnly field named "texCoordKey" */
	void setTexCoordKey (float value);

	/** Return array of X3DParticlePhysicsModelNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode initializeOnly field named "physics" */
	void getPhysics (X3DNode* result);

	/** Return number of nodes in "physics" array */
	int getNumPhysics ();

	/** Assign X3DParticlePhysicsModelNode array (using a properly typed node array) to MFNode initializeOnly field named "physics" */
	void setPhysics (X3DParticlePhysicsModelNode* nodes);

	/** Assign single X3DParticlePhysicsModelNode value (using a properly typed node) as the MFNode array for initializeOnly field named "physics" */
	void setPhysics (X3DParticlePhysicsModelNode node);

	/** Assign X3DParticlePhysicsModelNode array (using a properly typed protoInstance array) to MFNode initializeOnly field named "physics" */
	void setPhysics (X3DPrototypeInstance node);

	/** Assign X3DParticlePhysicsModelNode array (using a properly typed node array) to MFNode initializeOnly field named "physics" */
	void setPhysics (X3DNode* nodes);

	/** Return X3DAppearanceNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "appearance" */
	void getAppearance (X3DNode result);

	/** Assign X3DAppearanceNode value (using a properly typed node) to SFNode inputOutput field named "appearance" */
	void setAppearance (X3DAppearanceNode node);

	/** Assign X3DAppearanceNode value (using a properly typed protoInstance) */
	void setAppearance (X3DPrototypeInstance protoInstance);

	/** Return X3DGeometryNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "geometry" */
	void getGeometry (X3DNode result);

	/** Assign X3DGeometryNode value (using a properly typed node) to SFNode inputOutput field named "geometry" */
	void setGeometry (X3DGeometryNode node);

	/** Assign X3DGeometryNode value (using a properly typed protoInstance) */
	void setGeometry (X3DPrototypeInstance protoInstance);

	/** Return X3DColorNode result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "colorRamp" */
	void getColorRamp (X3DNode result);

	/** Assign X3DColorNode value (using a properly typed node) to SFNode initializeOnly field named "colorRamp" */
	void setColorRamp (X3DColorNode color);

	/** Assign X3DColorNode value (using a properly typed protoInstance) */
	void setColorRamp (X3DPrototypeInstance protoInstance);

	/** Return X3DParticleEmitterNode result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "emitter" */
	void getEmitter (X3DNode result);

	/** Assign X3DParticleEmitterNode value (using a properly typed node) to SFNode initializeOnly field named "emitter" */
	void setEmitter (X3DParticleEmitterNode node);

	/** Assign X3DParticleEmitterNode value (using a properly typed protoInstance) */
	void setEmitter (X3DPrototypeInstance protoInstance);

	/** Return TextureCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "texCoordRamp" */
	void getTexCoordRamp (X3DNode result);

	/** Assign TextureCoordinate value (using a properly typed node) to SFNode initializeOnly field named "texCoordRamp" */
	void setTexCoordRamp (TextureCoordinate node);

	/** Assign TextureCoordinate value (using a properly typed protoInstance) */
	void setTexCoordRamp (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.157 PickableGroup 
/** PickableGroup defines a concrete node interface that extends interfaces X3DGroupingNodeX3DPickableObject. */

class X3D_API PickableGroup : public X3DGroupingNode, public X3DPickableObject
{

public:
	PickableGroup();
	virtual ~PickableGroup();

	/** Return array of String results array ["ALL","NONE","TERRAIN",...] from MFString inputOutput field named "objectType" */
	std::string* getObjectType ();

	/** Return number of primitive values in "objectType" array */
	int getNumObjectType ();

	/** Assign String array ["ALL","NONE","TERRAIN",...] to MFString inputOutput field named "objectType" */
	void setObjectType (std::string* values, int size);

	/** Assign single String value ["ALL","NONE","TERRAIN",...] as the MFString array for inputOutput field named "objectType" */
	void setObjectType (std::string value);

	/** Return boolean result from SFBool inputOutput field named "pickable" */
	bool getPickable ();

	/** Assign boolean value to SFBool inputOutput field named "pickable" */
	void setPickable (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.158 PixelTexture 
/** PixelTexture defines a concrete node interface that extends interface X3DTexture2DNode. */

class X3D_API PixelTexture : public X3DTexture2DNode
{

public:
	PixelTexture();
	virtual ~PixelTexture();

	virtual void Draw();
	virtual std::string getXMLString();

	/** Return SFImage result [] from SFImage inputOutput field named "image" */
	std::string getImage ();

	/** Assign SFImage value [] to SFImage inputOutput field named "image" */
	void setImage (std::string value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool initializeOnly field named "repeatS" */
	//bool getRepeatS ();

	///** Assign boolean value to SFBool initializeOnly field named "repeatS" */
	//void setRepeatS (bool value);

	///** Return boolean result from SFBool initializeOnly field named "repeatT" */
	//bool getRepeatT ();

	///** Assign boolean value to SFBool initializeOnly field named "repeatT" */
	//void setRepeatT (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return TextureProperties result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "textureProperties" */
	//void getTextureProperties (X3DNode result);

	///** Assign TextureProperties value (using a properly typed node) to SFNode initializeOnly field named "textureProperties" */
	//void setTextureProperties (TextureProperties node);

	///** Assign TextureProperties value (using a properly typed protoInstance) */
	//void setTextureProperties (X3DPrototypeInstance protoInstance);

public:
	std::string image;
};
 
//C.3.159 PixelTexture3D 
/** PixelTexture3D defines a concrete node interface that extends interface X3DTexture3DNode. */

class X3D_API PixelTexture3D : public X3DTexture3DNode
{

public:
	PixelTexture3D();
	virtual ~PixelTexture3D();

	/** Return MFInt32 result [] from MFInt32 inputOutput field named "image" */
	int32_t* getImage ();

	/** Return number of primitive values in "image" array */
	int getNumImage ();

	/** Assign MFInt32 value [] to MFInt32 inputOutput field named "image" */
	void setImage (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOutput field named "image" */
	void setImage (int32_t value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool initializeOnly field named "repeatS" */
	//bool getRepeatS ();

	///** Assign boolean value to SFBool initializeOnly field named "repeatS" */
	//void setRepeatS (bool value);

	///** Return boolean result from SFBool initializeOnly field named "repeatT" */
	//bool getRepeatT ();

	///** Assign boolean value to SFBool initializeOnly field named "repeatT" */
	//void setRepeatT (bool value);

	///** Return boolean result from SFBool initializeOnly field named "repeatR" */
	//bool getRepeatR ();

	///** Assign boolean value to SFBool initializeOnly field named "repeatR" */
	//void setRepeatR (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return TextureProperties result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "textureProperties" */
	//void getTextureProperties (X3DNode result);

	///** Assign TextureProperties value (using a properly typed node) to SFNode initializeOnly field named "textureProperties" */
	//void setTextureProperties (TextureProperties node);

	///** Assign TextureProperties value (using a properly typed protoInstance) */
	//void setTextureProperties (X3DPrototypeInstance protoInstance);
};
 
//C.3.160 PlaneSensor 
/** PlaneSensor defines a concrete node interface that extends interface X3DDragSensorNode. */

class X3D_API PlaneSensor : public X3DDragSensorNode
{

public:
	PlaneSensor();
	virtual ~PlaneSensor();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "translation_changed" */
	float* getTranslation ();

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "axisRotation" */
	float* getAxisRotation ();

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "axisRotation" */
	void setAxisRotation (float* value);

	/** Return array of 2-tuple float results array [] from SFVec2f inputOutput field named "maxPosition" */
	float* getMaxPosition ();

	/** Assign 2-tuple float array [] to SFVec2f inputOutput field named "maxPosition" */
	void setMaxPosition (float* value);

	/** Return array of 2-tuple float results array [] from SFVec2f inputOutput field named "minPosition" */
	float* getMinPosition ();

	/** Assign 2-tuple float array [] to SFVec2f inputOutput field named "minPosition" */
	void setMinPosition (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "offset" */
	float* getOffset ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "offset" */
	void setOffset (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "trackPoint_changed" */
	//void getTrackPoint (float* result);

	///** Return boolean result from SFBool inputOutput field named "autoOffset" */
	//bool getAutoOffset ();

	///** Assign boolean value to SFBool inputOutput field named "autoOffset" */
	//void setAutoOffset (bool value);

	///** Return boolean result from SFBool outputOnly field named "isOver" */
	//bool getIsOver ();

	///** Return String result [] from SFString inputOutput field named "description" */
	//std::string getDescription ();

	///** Assign String value [] to SFString inputOutput field named "description" */
	//void setDescription (std::string value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.161 PointEmitter 
/** PointEmitter defines a concrete node interface that extends interface X3DParticleEmitterNode. */

class X3D_API PointEmitter : public X3DParticleEmitterNode
{

public:
	PointEmitter();
	virtual ~PointEmitter();

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "direction" */
	float* getDirection ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "direction" */
	void setDirection (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "position" */
	float* getPosition ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "position" */
	void setPosition (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return float result [] from SFFloat inputOutput field named "speed" */
	//float getSpeed ();

	///** Assign float value [] to SFFloat inputOutput field named "speed" */
	//void setSpeed (float value);

	///** Return float result [] from SFFloat inputOutput field named "variation" */
	//float getVariation ();

	///** Assign float value [] to SFFloat inputOutput field named "variation" */
	//void setVariation (float value);

	///** Return float result [] from SFFloat inputOutput field named "mass" */
	//float getMass ();

	///** Assign float value [] to SFFloat inputOutput field named "mass" */
	//void setMass (float value);

	///** Return float result [] from SFFloat initializeOnly field named "surfaceArea" */
	//float getSurfaceArea ();

	///** Assign float value [] to SFFloat initializeOnly field named "surfaceArea" */
	//void setSurfaceArea (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.162 PointLight 
/** PointLight defines a concrete node interface that extends interface X3DLightNode. */

class X3D_API PointLight : public X3DLightNode
{

public:
	PointLight();
	virtual ~PointLight();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "attenuation" */
	void getAttenuation (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "attenuation" */
	void setAttenuation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "location" */
	void getLocation (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "location" */
	void setLocation (float* value);

	/** Return float result [] from  type inputOutput field named "radius" */
	float getRadius ();

	/** Assign float value [] to  type inputOutput field named "radius" */
	void setRadius (float value);

	/** Return boolean result from SFBool inputOutput field named "global" */
	bool getGlobal ();

	/** Assign boolean value to SFBool inputOutput field named "global" */
	void setGlobal (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return float result [] from intensityType type inputOutput field named "ambientIntensity" */
	//float getAmbientIntensity ();

	///** Assign float value [] to intensityType type inputOutput field named "ambientIntensity" */
	//void setAmbientIntensity (float value);

	///** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "color" */
	//float* getColor ();

	///** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "color" */
	//void setColor (float* color);

	///** Return float result [] from intensityType type inputOutput field named "intensity" */
	//float getIntensity ();

	///** Assign float value [] to intensityType type inputOutput field named "intensity" */
	//void setIntensity (float value);

	///** Return boolean result from SFBool inputOutput field named "on" */
	//bool getOn ();

	///** Assign boolean value to SFBool inputOutput field named "on" */
	//void setOn (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	void	setLocation(SFVec3f Location);
	void	setAttenuation(SFVec3f Attenuation);
//Attributes
public:
	float	attenuation[3];
	float	location[3];
	float	radius;
};
 
//C.3.163 PointPickSensor 
/** PointPickSensor defines a concrete node interface that extends interface X3DPickSensorNode. */

class X3D_API PointPickSensor : public X3DPickSensorNode
{

public:
	PointPickSensor();
	virtual ~PointPickSensor();

	/** Return 3-tuple MFVec3F result [] from MFVec3F outputOnly field named "pickedPoint" */
	float* getPickedPoint ();

	/** Return number of 3-tuple primitive values in "pickedPoint" array */
	int getNumPickedPoint ();

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return array of String results array ["ALL","NONE","TERRAIN",...] from MFString inputOutput field named "objectType" */
	//std::string* getObjectType ();

	///** Return number of primitive values in "objectType" array */
	//int getNumObjectType ();

	///** Assign String array ["ALL","NONE","TERRAIN",...] to MFString inputOutput field named "objectType" */
	//void setObjectType (std::string* values);

	///** Assign single String value ["ALL","NONE","TERRAIN",...] as the MFString array for inputOutput field named "objectType" */
	//void setObjectType (std::string value);

	///** Return String result (enumeration values "GEOMETRY"|"BOUNDS"|...) from SFString initializeOnly field named "intersectionType" */
	//std::string getIntersectionType ();

	///** Assign String value (enumeration values "GEOMETRY"|"BOUNDS"|...) to SFString initializeOnly field named "intersectionType" */
	//void setIntersectionType (std::string value);

	///** Return String result ["ANY"|"CLOSEST"|"ALL"|"ALL_SORTED"] from  type initializeOnly field named "sortOrder" */
	//std::string getSortOrder ();

	///** Assign String value ["ANY"|"CLOSEST"|"ALL"|"ALL_SORTED"] to  type initializeOnly field named "sortOrder" */
	//void setSortOrder (std::string value);

	///** Return array of X3DGroupingNode|X3DShapeNode|Inline results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "pickTarget" */
	//void getPickTarget (X3DNode* result);

	///** Return number of nodes in "pickTarget" array */
	//int getNumPickTarget ();

	///** Assign X3DGroupingNode|X3DShapeNode|Inline array (using a properly typed node array) to MFNode inputOutput field named "pickTarget" */
	//void setPickTarget (X3DNode* nodes);

	///** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOutput field named "pickTarget" */
	//void setPickTarget (X3DNode node);

	///** Assign X3DGroupingNode|X3DShapeNode|Inline array (using a properly typed protoInstance array) to MFNode inputOutput field named "pickTarget" */
	//void setPickTarget (X3DPrototypeInstance node);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode outputOnly field named "pickedGeometry" */
	//void getPickedGeometry (X3DNode* result);

	///** Return number of nodes in "pickedGeometry" array */
	//int getNumPickedGeometry ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return X3DGeometryNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "pickingGeometry" */
	//void getPickingGeometry (X3DNode result);

	///** Assign X3DGeometryNode value (using a properly typed node) to SFNode inputOutput field named "pickingGeometry" */
	//void setPickingGeometry (X3DGeometryNode node);

	///** Assign X3DGeometryNode value (using a properly typed protoInstance) */
	//void setPickingGeometry (X3DPrototypeInstance protoInstance);
};
 
//C.3.164 PointSet 
/** PointSet defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API PointSet : public X3DGeometryNode
{

public:
	PointSet();
	virtual ~PointSet();

	virtual void Draw();
	virtual std::string getXMLString();

	/** Return array of X3DVertexAttributeNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "attrib" */
	void getAttrib (X3DNode* result);

	/** Return number of nodes in "attrib" array */
	int getNumAttrib ();

	/** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	void setAttrib (X3DVertexAttributeNode* nodes);

	/** Assign single X3DVertexAttributeNode value (using a properly typed node) as the MFNode array for inputOutput field named "attrib" */
	void setAttrib (X3DVertexAttributeNode node);

	/** Assign X3DVertexAttributeNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "attrib" */
	void setAttrib (X3DPrototypeInstance node);

	/** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	void setAttrib (X3DNode* nodes);

	/** Return X3DColorNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "color" */
	void getColor (X3DNode result);

	/** Assign X3DColorNode value (using a properly typed node) to SFNode inputOutput field named "color" */
	void setColor (X3DColorNode color);

	/** Assign X3DColorNode value (using a properly typed protoInstance) */
	void setColor (X3DPrototypeInstance protoInstance);

	/** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
	void getCoord (X3DNode result);

	/** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
	void setCoord (X3DCoordinateNode node);

	/** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	void setCoord (X3DPrototypeInstance protoInstance);

	/** Return FogCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fogCoord" */
	void getFogCoord (X3DNode result);

	/** Assign FogCoordinate value (using a properly typed node) to SFNode inputOutput field named "fogCoord" */
	void setFogCoord (FogCoordinate node);

	/** Assign FogCoordinate value (using a properly typed protoInstance) */
	void setFogCoord (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	//Attributes

};
 
//C.3.165 Polyline2D 
/** Polyline2D defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API Polyline2D : public X3DGeometryNode
{

public:
	Polyline2D();
	virtual ~Polyline2D();

	/** Return array of 2-tuple float results array [] from MFVec2f initializeOnly field named "lineSegments" */
	float* getLineSegments ();

	/** Return number of 2-tuple primitive values in "lineSegments" array */
	int getNumLineSegments ();

	/** Assign 2-tuple float array [] to MFVec2f initializeOnly field named "lineSegments" */
	void setLineSegments (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.166 PolylineEmitter 
/** PolylineEmitter defines a concrete node interface that extends interface X3DParticleEmitterNode. */

class X3D_API PolylineEmitter : public X3DParticleEmitterNode
{

public:
	PolylineEmitter();
	virtual ~PolylineEmitter();

	/** Assign MFInt32 value [] to MFInt32 inputOnly field named "set_coordIndex" */
	void setCoordIndex (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOnly field named "set_coordIndex" */
	void setCoordIndex (int32_t value);

	/** Return MFInt32 result [] from MFInt32 initializeOnly field named "coordIndex" */
	int32_t* getCoordIndex ();

	/** Return number of primitive values in "coordIndex" array */
	int getNumCoordIndex ();

	///** Assign MFInt32 value [] to MFInt32 initializeOnly field named "coordIndex" */
	//void setCoordIndex (int32_t* values, int size);

	///** Assign single SFInt32 value [] as the MFInt32 array for initializeOnly field named "coordIndex" */
	//void setCoordIndex (int32_t value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "direction" */
	float* getDirection ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "direction" */
	void setDirection (float* value);

	/** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
	void getCoord (X3DNode result);

	/** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
	void setCoord (X3DCoordinateNode node);

	/** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	void setCoord (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return float result [] from SFFloat inputOutput field named "speed" */
	//float getSpeed ();

	///** Assign float value [] to SFFloat inputOutput field named "speed" */
	//void setSpeed (float value);

	///** Return float result [] from SFFloat inputOutput field named "variation" */
	//float getVariation ();

	///** Assign float value [] to SFFloat inputOutput field named "variation" */
	//void setVariation (float value);

	///** Return float result [] from SFFloat inputOutput field named "mass" */
	//float getMass ();

	///** Assign float value [] to SFFloat inputOutput field named "mass" */
	//void setMass (float value);

	///** Return float result [] from SFFloat initializeOnly field named "surfaceArea" */
	//float getSurfaceArea ();

	///** Assign float value [] to SFFloat initializeOnly field named "surfaceArea" */
	//void setSurfaceArea (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.167 Polypoint2D 
/** Polypoint2D defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API Polypoint2D : public X3DGeometryNode
{

public:
	Polypoint2D();
	virtual ~Polypoint2D();

	/** Return array of 2-tuple float results array [] from MFVec2f inputOutput field named "point" */
	void getPoint (float* result);

	/** Return number of 2-tuple primitive values in "point" array */
	int getNumPoint ();

	/** Assign 2-tuple float array [] to MFVec2f inputOutput field named "point" */
	void setPoint (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.168 PositionChaser 
/** PositionChaser defines a concrete node interface that extends interface X3DChaserNode. */

class X3D_API PositionChaser : public X3DChaserNode
{

public:
	PositionChaser();
	virtual ~PositionChaser();

	/** Assign 3-tuple float array [] to SFVec3f inputOnly field named "set_destination" */
	void setDestination (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOnly field named "set_value" */
	void setValue (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "value_changed" */
	float* getValue ();

	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "initialDestination" */
	float* getInitialDestination ();

	/** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "initialDestination" */
	void setInitialDestination (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "initialValue" */
	float* getInitialValue ();

	/** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "initialValue" */
	void setInitialValue (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from  type initializeOnly field named "duration" */
	//double getDuration ();

	///** Assign double value in seconds to  type initializeOnly field named "duration" */
	//void setDuration (double timestamp);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.169 PositionChaser2D 
/** PositionChaser2D defines a concrete node interface that extends interface X3DChaserNode. */

class X3D_API PositionChaser2D : public X3DChaserNode
{

public:
	PositionChaser2D();
	virtual ~PositionChaser2D();

	/** Assign 2-tuple float array [] to SFVec2f inputOnly field named "set_destination" */
	void setDestination (float* value);

	/** Assign 2-tuple float array [] to SFVec2f inputOnly field named "set_value" */
	void setValue (float* value);

	/** Return array of 2-tuple float results array [] from SFVec2f outputOnly field named "value_changed" */
	float* getValue ();

	/** Return array of 2-tuple float results array [] from SFVec2f initializeOnly field named "initialDestination" */
	float* getInitialDestination ();

	/** Assign 2-tuple float array [] to SFVec2f initializeOnly field named "initialDestination" */
	void setInitialDestination (float* value);

	/** Return array of 2-tuple float results array [] from SFVec2f initializeOnly field named "initialValue" */
	float* getInitialValue ();

	/** Assign 2-tuple float array [] to SFVec2f initializeOnly field named "initialValue" */
	void setInitialValue (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from  type initializeOnly field named "duration" */
	//double getDuration ();

	///** Assign double value in seconds to  type initializeOnly field named "duration" */
	//void setDuration (double timestamp);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.170 PositionDamper 
/** PositionDamper defines a concrete node interface that extends interface X3DDamperNode. */

class X3D_API PositionDamper : public X3DDamperNode
{

public:
	PositionDamper();
	virtual ~PositionDamper();

	/** Assign 3-tuple float array [] to SFVec3f inputOnly field named "set_destination" */
	void setDestination (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOnly field named "set_value" */
	void setValue (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "value_changed" */
	float* getValue ();

	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "initialDestination" */
	float* getInitialDestination ();

	/** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "initialDestination" */
	void setInitialDestination (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "initialValue" */
	float* getInitialValue ();

	/** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "initialValue" */
	void setInitialValue (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from  type inputOutput field named "tau" */
	//double getTau ();

	///** Assign double value in seconds to  type inputOutput field named "tau" */
	//void setTau (double timestamp);

	///** Return float result [] from SFFloat inputOutput field named "tolerance" */
	//float getTolerance ();

	///** Assign float value [] to SFFloat inputOutput field named "tolerance" */
	//void setTolerance (float value);

	///** Return int result [] from  type initializeOnly field named "order" */
	//int getOrder ();

	///** Assign int value [] to  type initializeOnly field named "order" */
	//void setOrder (int value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.171 PositionDamper2D 
/** PositionDamper2D defines a concrete node interface that extends interface X3DDamperNode. */

class X3D_API PositionDamper2D : public X3DDamperNode
{

public:
	PositionDamper2D();
	virtual ~PositionDamper2D();

	/** Assign 2-tuple float array [] to SFVec2f inputOnly field named "set_destination" */
	void setDestination (float* value);

	/** Assign 2-tuple float array [] to SFVec2f inputOnly field named "set_value" */
	void setValue (float* value);

	/** Return array of 2-tuple float results array [] from SFVec2f outputOnly field named "value_changed" */
	float* getValue ();

	/** Return array of 2-tuple float results array [] from SFVec2f initializeOnly field named "initialDestination" */
	float* getInitialDestination ();

	/** Assign 2-tuple float array [] to SFVec2f initializeOnly field named "initialDestination" */
	void setInitialDestination (float* value);

	/** Return array of 2-tuple float results array [] from SFVec2f initializeOnly field named "initialValue" */
	float* getInitialValue ();

	/** Assign 2-tuple float array [] to SFVec2f initializeOnly field named "initialValue" */
	void setInitialValue (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from  type inputOutput field named "tau" */
	//double getTau ();

	///** Assign double value in seconds to  type inputOutput field named "tau" */
	//void setTau (double timestamp);

	///** Return float result [] from SFFloat inputOutput field named "tolerance" */
	//float getTolerance ();

	///** Assign float value [] to SFFloat inputOutput field named "tolerance" */
	//void setTolerance (float value);

	///** Return int result [] from  type initializeOnly field named "order" */
	//int getOrder ();

	///** Assign int value [] to  type initializeOnly field named "order" */
	//void setOrder (int value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.172 PositionInterpolator 
/** PositionInterpolator defines a concrete node interface that extends interface X3DInterpolatorNode. */

class X3D_API PositionInterpolator : public X3DInterpolatorNode
{

public:
	PositionInterpolator();
	virtual ~PositionInterpolator();
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "value_changed" */
	//float* getValue ();

	/** Return array of 3-tuple float results array [] from MFVec3f inputOutput field named "keyValue" */
	//float* getKeyValue ();

	/** Return number of 3-tuple primitive values in "keyValue" array */
	//int getNumKeyValue ();

	/** Assign 3-tuple float array [] to MFVec3f inputOutput field named "keyValue" */
	//void setKeyValue (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	//void setFraction (float value);

	///** Return array of float results array [] from MFFloat inputOutput field named "key" */
	//float* getKey ();

	///** Return number of primitive values in "key" array */
	//int getNumKey ();

	///** Assign float array [] to MFFloat inputOutput field named "key" */
	//void setKey (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	//void setKey (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.173 PositionInterpolator2D 
/** PositionInterpolator2D defines a concrete node interface that extends interface X3DInterpolatorNode. */

class X3D_API PositionInterpolator2D : public X3DInterpolatorNode
{

public:
	PositionInterpolator2D();
	virtual ~PositionInterpolator2D();

	/** Return array of 2-tuple float results array [] from SFVec2f outputOnly field named "value_changed" */
	float* getValue ();

	/** Return array of 2-tuple float results array [] from MFVec2f inputOutput field named "keyValue" */
	float* getKeyValue ();

	/** Return number of 2-tuple primitive values in "keyValue" array */
	int getNumKeyValue ();

	/** Assign 2-tuple float array [] to MFVec2f inputOutput field named "keyValue" */
	void setKeyValue (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	//void setFraction (float value);

	///** Return array of float results array [] from MFFloat inputOutput field named "key" */
	//float* getKey ();

	///** Return number of primitive values in "key" array */
	//int getNumKey ();

	///** Assign float array [] to MFFloat inputOutput field named "key" */
	//void setKey (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	//void setKey (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.174 PrimitivePickSensor 
/** PrimitivePickSensor defines a concrete node interface that extends interface X3DPickSensorNode. */

class X3D_API PrimitivePickSensor : public X3DPickSensorNode
{

public:
	PrimitivePickSensor();
	virtual ~PrimitivePickSensor();

	// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return array of String results array ["ALL","NONE","TERRAIN",...] from MFString inputOutput field named "objectType" */
	//std::string* getObjectType ();

	///** Return number of primitive values in "objectType" array */
	//int getNumObjectType ();

	///** Assign String array ["ALL","NONE","TERRAIN",...] to MFString inputOutput field named "objectType" */
	//void setObjectType (std::string* values);

	///** Assign single String value ["ALL","NONE","TERRAIN",...] as the MFString array for inputOutput field named "objectType" */
	//void setObjectType (std::string value);

	///** Return String result (enumeration values "GEOMETRY"|"BOUNDS"|...) from SFString initializeOnly field named "intersectionType" */
	//std::string getIntersectionType ();

	///** Assign String value (enumeration values "GEOMETRY"|"BOUNDS"|...) to SFString initializeOnly field named "intersectionType" */
	//void setIntersectionType (std::string value);

	///** Return String result ["ANY"|"CLOSEST"|"ALL"|"ALL_SORTED"] from  type initializeOnly field named "sortOrder" */
	//std::string getSortOrder ();

	///** Assign String value ["ANY"|"CLOSEST"|"ALL"|"ALL_SORTED"] to  type initializeOnly field named "sortOrder" */
	//void setSortOrder (std::string value);

	///** Return array of X3DGroupingNode|X3DShapeNode|Inline results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "pickTarget" */
	//void getPickTarget (X3DNode* result);

	///** Return number of nodes in "pickTarget" array */
	//int getNumPickTarget ();

	///** Assign X3DGroupingNode|X3DShapeNode|Inline array (using a properly typed node array) to MFNode inputOutput field named "pickTarget" */
	//void setPickTarget (X3DNode* nodes);

	///** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOutput field named "pickTarget" */
	//void setPickTarget (X3DNode node);

	///** Assign X3DGroupingNode|X3DShapeNode|Inline array (using a properly typed protoInstance array) to MFNode inputOutput field named "pickTarget" */
	//void setPickTarget (X3DPrototypeInstance node);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode outputOnly field named "pickedGeometry" */
	//void getPickedGeometry (X3DNode* result);

	///** Return number of nodes in "pickedGeometry" array */
	//int getNumPickedGeometry ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return X3DGeometryNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "pickingGeometry" */
	//void getPickingGeometry (X3DNode result);

	///** Assign X3DGeometryNode value (using a properly typed node) to SFNode inputOutput field named "pickingGeometry" */
	//void setPickingGeometry (X3DGeometryNode node);

	///** Assign X3DGeometryNode value (using a properly typed protoInstance) */
	//void setPickingGeometry (X3DPrototypeInstance protoInstance);
};
 

//C.3.198 ShaderProgram 
/** ShaderProgram defines a concrete node interface that extends interfaces X3DNodeMixedContentX3DProgrammableShaderObject, X3DUrlObject.
* ShaderProgram can contain field declarations and a CDATA section of plain-text source code. */

class X3D_API ShaderProgram : public X3DNodeMixedContent, public X3DProgrammableShaderObject, public X3DUrlObject
{

public:
	ShaderProgram();
	virtual ~ShaderProgram();

	/** Return array of String results array [] from MFString inputOutput field named "url" */
	std::string* getUrl ();

	/** Return number of primitive values in "url" array */
	int getNumUrl ();

	/** Assign String array [] to MFString inputOutput field named "url" */
	void setUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "url" */
	void setUrl (std::string value);

	/** Return String enumeration result ("VERTEX"|"FRAGMENT") from shaderPartTypeValues type initializeOnly field named "type" */
	std::string getType ();

	/** Assign String enumeration value ("VERTEX"|"FRAGMENT") to shaderPartTypeValues type initializeOnly field named "type" */
	void setType (std::string value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.175 ProgramShader 
/** ProgramShader defines a concrete node interface that extends interface X3DShaderNode.
* ProgramShader contains no field declarations and no plain-text source code. */

class X3D_API ProgramShader : public X3DShaderNode
{

public:
	ProgramShader();
	virtual ~ProgramShader();

	/** Return array of ShaderProgram results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "programs" */
	void getPrograms (X3DNode* result);

	/** Return number of nodes in "programs" array */
	int getNumPrograms ();

	/** Assign ShaderProgram array (using a properly typed node array) to MFNode inputOutput field named "programs" */
	void setPrograms (ShaderProgram* nodes);

	/** Assign single ShaderProgram value (using a properly typed node) as the MFNode array for inputOutput field named "programs" */
	void setPrograms (ShaderProgram node);

	/** Assign ShaderProgram array (using a properly typed protoInstance array) to MFNode inputOutput field named "programs" */
	void setPrograms (X3DPrototypeInstance node);

	/** Assign ShaderProgram array (using a properly typed node array) to MFNode inputOutput field named "programs" */
	void setPrograms (X3DNode* nodes);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign boolean value to SFBool inputOnly field named "activate" */
	//void setActivate (bool value);

	///** Return boolean result from SFBool outputOnly field named "isSelected" */
	//bool getIsSelected ();

	///** Return boolean result from SFBool outputOnly field named "isValid" */
	//bool getIsValid ();

	///** Return String result (enumeration values = "Cg"|"GLSL"|"HLSL"|...) from SFString initializeOnly field named "language" */
	//std::string getLanguage ();

	///** Assign String value (enumeration values = "Cg"|"GLSL"|"HLSL"|...) to SFString initializeOnly field named "language" */
	//void setLanguage (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.176 ProjectionVolumeStyle 
/** ProjectionVolumeStyle defines a concrete node interface that extends interface X3DVolumeRenderStyleNode. */

class X3D_API ProjectionVolumeStyle : public X3DVolumeRenderStyleNode
{

public:
	ProjectionVolumeStyle();
	virtual ~ProjectionVolumeStyle();

	/** Return float result [] from  type inputOutput field named "intensityThreshold" */
	float getIntensityThreshold ();

	/** Assign float value [] to  type inputOutput field named "intensityThreshold" */
	void setIntensityThreshold (float value);

	/** Return String result ["MAX"|"MIN"|"AVERAGE"] from  type inputOutput field named "type" */
	std::string getType ();

	/** Assign String value ["MAX"|"MIN"|"AVERAGE"] to  type inputOutput field named "type" */
	void setType (std::string value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.177 ProtoBody 
/** ProtoBody defines a concrete node interface that extends interface SceneGraphStructureStatement.
* ProtoBody contains the definition nodes for new Prototype nodes. */

class X3D_API ProtoBody : public SceneGraphStructureStatement
{

public:
	ProtoBody();
	virtual ~ProtoBody();


};
 
//C.3.178 ProtoDeclare 
/** ProtoDeclare defines a concrete node interface that extends interface SceneGraphStructureStatement.
* ProtoDeclare defines new Prototype nodes. Nested ProtoDeclares, ProtoInstances are allowed by specification. */

class X3D_API ProtoDeclare : public SceneGraphStructureStatement
{

public:
	ProtoDeclare();
	virtual ~ProtoDeclare();
	virtual std::string getXMLString();

	/** Return xs:NMTOKEN result [] from xs:NMTOKEN type inputOutput field named "name" */
	//xs:NMTOKEN getName ();
	std::string getName ();

	/** Assign xs:NMTOKEN value [] to xs:NMTOKEN type inputOutput field named "name" */
	//void setName (xs:NMTOKEN value);
	void setName (std::string value);

	/** Return String result [] from SFString inputOutput field named "appinfo" */
	std::string getAppinfo ();

	/** Assign String value [] to SFString inputOutput field named "appinfo" */
	void setAppinfo (std::string value);

	/** Return String result [] from SFString inputOutput field named "documentation" */
	std::string getDocumentation ();

	/** Assign String value [] to SFString inputOutput field named "documentation" */
	void setDocumentation (std::string value);

	std::string name;
	std::string appinfo;
	std::string documentation;
};
 
//C.3.179 ProtoInstance 
/** ProtoInstance defines a concrete node interface that extends interfaces X3DPrototypeInstanceX3DNode.
* Nested ProtoDeclares, ProtoInstances are allowed by specification. ProtoInstance contained content normally captured via fieldValue initializations. */

class X3D_API ProtoInstance : public X3DPrototypeInstance
{

public:
	ProtoInstance();
	virtual ~ProtoInstance();
	virtual std::string getXMLString();

	/** Return xs:NMTOKEN result [] from xs:NMTOKEN type inputOutput field named "name" */
	//xs:NMTOKEN getName ();
	std::string getName ();

	/** Assign xs:NMTOKEN value [] to xs:NMTOKEN type inputOutput field named "name" */
	//void setName (xs:NMTOKEN value);
	void setName (std::string value);

	std::string name;
};
 
//C.3.180 ProtoInterface 
/** ProtoInterface defines a concrete node interface that extends interface SceneGraphStructureStatement.
* ProtoInterface defines fields for new Prototype nodes. */

class X3D_API ProtoInterface : public SceneGraphStructureStatement
{

public:
	ProtoInterface();
	virtual ~ProtoInterface();


};
 
//C.3.181 ProximitySensor 
/** ProximitySensor defines a concrete node interface that extends interface X3DEnvironmentalSensorNode. */

class X3D_API ProximitySensor : public X3DEnvironmentalSensorNode
{

public:
	ProximitySensor();
	virtual ~ProximitySensor();

	/** Return double result in seconds from SFTime outputOnly field named "enterTime" */
	double getEnterTime ();

	/** Return double result in seconds from SFTime outputOnly field named "exitTime" */
	double getExitTime ();

	/** Return array of 3-tuple float results array in radians from SFVec3f outputOnly field named "centerOfRotation_changed" */
	float* getCenterOfRotation ();

	/** Return array of 4-tuple float results array in radians from SFRotation outputOnly field named "orientation_changed" */
	float* getOrientation ();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "position_changed" */
	float* getPosition ();

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "center" */
	//float* getCenter ();

	///** Assign 3-tuple float array [] to SFVec3f inputOutput field named "center" */
	//void setCenter (float* value);

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "size" */
	//float* getSize ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "size" */
	//void setSize (float* value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.182 QuadSet 
/** QuadSet defines a concrete node interface that extends interface X3DComposedGeometryNode.
* QuadSet is a geometry node that defines quadrilaterals. */

class X3D_API QuadSet : public X3DComposedGeometryNode
{

public:
	QuadSet();
	virtual ~QuadSet();

	// ===== methods for fields inherited from parent interfaces =====
	///** Return boolean result from SFBool initializeOnly field named "ccw" */
	//bool getCcw ();

	///** Assign boolean value to SFBool initializeOnly field named "ccw" */
	//void setCcw (bool value);

	///** Return boolean result from SFBool initializeOnly field named "colorPerVertex" */
	//bool getColorPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "colorPerVertex" */
	//void setColorPerVertex (bool color);

	///** Return boolean result from SFBool initializeOnly field named "normalPerVertex" */
	//bool getNormalPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "normalPerVertex" */
	//void setNormalPerVertex (bool value);

	///** Return boolean result from SFBool initializeOnly field named "solid" */
	//bool getSolid ();

	///** Assign boolean value to SFBool initializeOnly field named "solid" */
	//void setSolid (bool value);

	///** Return array of X3DVertexAttributeNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "attrib" */
	//void getAttrib (X3DNode* result);

	///** Return number of nodes in "attrib" array */
	//int getNumAttrib ();

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode* nodes);

	///** Assign single X3DVertexAttributeNode value (using a properly typed node) as the MFNode array for inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode node);

	///** Assign X3DVertexAttributeNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DPrototypeInstance node);

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DNode* nodes);

	///** Return X3DColorNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "color" */
	//void getColor (X3DNode result);

	///** Assign X3DColorNode value (using a properly typed node) to SFNode inputOutput field named "color" */
	//void setColor (X3DColorNode color);

	///** Assign X3DColorNode value (using a properly typed protoInstance) */
	//void setColor (X3DPrototypeInstance protoInstance);

	///** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
	//void getCoord (X3DNode result);

	///** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
	//void setCoord (X3DCoordinateNode node);

	///** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	//void setCoord (X3DPrototypeInstance protoInstance);

	///** Return FogCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fogCoord" */
	//void getFogCoord (X3DNode result);

	///** Assign FogCoordinate value (using a properly typed node) to SFNode inputOutput field named "fogCoord" */
	//void setFogCoord (FogCoordinate node);

	///** Assign FogCoordinate value (using a properly typed protoInstance) */
	//void setFogCoord (X3DPrototypeInstance protoInstance);

	///** Return X3DNormalNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "normal" */
	//void getNormal (X3DNode result);

	///** Assign X3DNormalNode value (using a properly typed node) to SFNode inputOutput field named "normal" */
	//void setNormal (X3DNormalNode node);

	///** Assign X3DNormalNode value (using a properly typed protoInstance) */
	//void setNormal (X3DPrototypeInstance protoInstance);

	///** Return X3DTextureCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texCoord" */
	//void getTexCoord (X3DNode result);

	///** Assign X3DTextureCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "texCoord" */
	//void setTexCoord (X3DTextureCoordinateNode node);

	///** Assign X3DTextureCoordinateNode value (using a properly typed protoInstance) */
	//void setTexCoord (X3DPrototypeInstance protoInstance);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.183 ReceiverPdu 
/** ReceiverPdu defines a concrete node interface that extends interfaces X3DNetworkSensorNodeX3DBoundedObject. */

class X3D_API ReceiverPdu : public X3DNetworkSensorNode, public X3DBoundedObject
{

public:
	ReceiverPdu();
	virtual ~ReceiverPdu();

	/** Return boolean result from SFBool outputOnly field named "isNetworkReader" */
	bool getIsNetworkReader ();

	/** Return boolean result from SFBool outputOnly field named "isNetworkWriter" */
	bool getIsNetworkWriter ();

	/** Return boolean result from SFBool outputOnly field named "isRtpHeaderHeard" */
	bool getIsRtpHeaderHeard ();

	/** Return boolean result from SFBool outputOnly field named "isStandAlone" */
	bool getIsStandAlone ();

	/** Return double result in seconds from SFTime outputOnly field named "timestamp" */
	double getTimestamp ();

	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	float* getBboxCenter ();

	/** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	void setBboxCenter (float* value);

	/** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	float* getBboxSize ();

	/** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	void setBboxSize (float* value);

	/** Return int result [] from SFInt32 inputOutput field named "whichGeometry" */
	int getWhichGeometry ();

	/** Assign int value [] to SFInt32 inputOutput field named "whichGeometry" */
	void setWhichGeometry (int value);

	/** Return double result in seconds from SFTime inputOutput field named "readInterval" */
	double getReadInterval ();

	/** Assign double value in seconds to SFTime inputOutput field named "readInterval" */
	void setReadInterval (double timestamp);

	/** Return double result in seconds from SFTime inputOutput field named "writeInterval" */
	double getWriteInterval ();

	/** Assign double value in seconds to SFTime inputOutput field named "writeInterval" */
	void setWriteInterval (double timestamp);

	/** Return String enumeration result ("standAlone"|"networkReader"|"networkWriter") from networkModeValues type inputOutput field named "networkMode" */
	std::string getNetworkMode ();

	/** Assign String enumeration value ("standAlone"|"networkReader"|"networkWriter") to networkModeValues type inputOutput field named "networkMode" */
	void setNetworkMode (std::string value);

	/** Return int result [] from SFInt32 inputOutput field named "siteID" */
	int getSiteID ();

	/** Assign int value [] to SFInt32 inputOutput field named "siteID" */
	void setSiteID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "applicationID" */
	int getApplicationID ();

	/** Assign int value [] to SFInt32 inputOutput field named "applicationID" */
	void setApplicationID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "entityID" */
	int getEntityID ();

	/** Assign int value [] to SFInt32 inputOutput field named "entityID" */
	void setEntityID (int value);

	/** Return String result [] from SFString inputOutput field named "address" */
	std::string getAddress ();

	/** Assign String value [] to SFString inputOutput field named "address" */
	void setAddress (std::string value);

	/** Return int result [] from SFInt32 inputOutput field named "port" */
	int getPort ();

	/** Assign int value [] to SFInt32 inputOutput field named "port" */
	void setPort (int value);

	/** Return String result [] from SFString inputOutput field named "multicastRelayHost" */
	std::string getMulticastRelayHost ();

	/** Assign String value [] to SFString inputOutput field named "multicastRelayHost" */
	void setMulticastRelayHost (std::string value);

	/** Return int result [] from SFInt32 inputOutput field named "multicastRelayPort" */
	int getMulticastRelayPort ();

	/** Assign int value [] to SFInt32 inputOutput field named "multicastRelayPort" */
	void setMulticastRelayPort (int value);

	/** Return boolean result from SFBool initializeOnly field named "rtpHeaderExpected" */
	bool getRtpHeaderExpected ();

	/** Assign boolean value to SFBool initializeOnly field named "rtpHeaderExpected" */
	void setRtpHeaderExpected (bool value);

	/** Return int result [] from SFInt32 inputOutput field named "radioID" */
	int getRadioID ();

	/** Assign int value [] to SFInt32 inputOutput field named "radioID" */
	void setRadioID (int value);

	/** Return float result [] from SFFloat inputOutput field named "receivedPower" */
	float getReceivedPower ();

	/** Assign float value [] to SFFloat inputOutput field named "receivedPower" */
	void setReceivedPower (float value);

	/** Return int result [] from SFInt32 inputOutput field named "receiverState" */
	int getReceiverState ();

	/** Assign int value [] to SFInt32 inputOutput field named "receiverState" */
	void setReceiverState (int value);

	/** Return int result [] from SFInt32 inputOutput field named "transmitterSiteID" */
	int getTransmitterSiteID ();

	/** Assign int value [] to SFInt32 inputOutput field named "transmitterSiteID" */
	void setTransmitterSiteID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "transmitterApplicationID" */
	int getTransmitterApplicationID ();

	/** Assign int value [] to SFInt32 inputOutput field named "transmitterApplicationID" */
	void setTransmitterApplicationID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "transmitterEntityID" */
	int getTransmitterEntityID ();

	/** Assign int value [] to SFInt32 inputOutput field named "transmitterEntityID" */
	void setTransmitterEntityID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "transmitterRadioID" */
	int getTransmitterRadioID ();

	/** Assign int value [] to SFInt32 inputOutput field named "transmitterRadioID" */
	void setTransmitterRadioID (int value);

	/** Return array of String results array [] from geoSystemType type initializeOnly field named "geoSystem" */
	std::string* getGeoSystem ();

	/** Return number of primitive values in "geoSystem" array */
	int getNumGeoSystem ();

	/** Assign String array [] to geoSystemType type initializeOnly field named "geoSystem" */
	void setGeoSystem (std::string* values, int size);

	/** Return array of 3-tuple double results array [] from SFVec3d inputOutput field named "geoCoords" */
	void getGeoCoords (double* result);

	/** Assign 3-tuple double array [] to SFVec3d inputOutput field named "geoCoords" */
	void setGeoCoords (double* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.184 Rectangle2D 
/** Rectangle2D defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API Rectangle2D : public X3DGeometryNode
{

public:
	Rectangle2D();
	virtual ~Rectangle2D();

	/** Return array of 2-tuple float results array [] from SFVec2f initializeOnly field named "size" */
	float* getSize ();

	/** Assign 2-tuple float array [] to SFVec2f initializeOnly field named "size" */
	void setSize (float* value);

	/** Return boolean result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign boolean value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.185 RigidBody 
/** RigidBody defines a concrete node interface that extends interface X3DNode. */

class X3D_API RigidBody : public X3DNode
{

public:
	RigidBody();
	virtual ~RigidBody();

	/** Return float result [] from SFFloat inputOutput field named "angularDampingFactor" */
	float getAngularDampingFactor ();

	/** Assign float value [] to SFFloat inputOutput field named "angularDampingFactor" */
	void setAngularDampingFactor (float value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "angularVelocity" */
	void getAngularVelocity (float* result);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "angularVelocity" */
	void setAngularVelocity (float* value);

	/** Return boolean result from SFBool inputOutput field named "autoDamp" */
	bool getAutoDamp ();

	/** Assign boolean value to SFBool inputOutput field named "autoDamp" */
	void setAutoDamp (bool value);

	/** Return boolean result from SFBool inputOutput field named "autoDisable" */
	bool getAutoDisable ();

	/** Assign boolean value to SFBool inputOutput field named "autoDisable" */
	void setAutoDisable (bool value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "centerOfMass" */
	float* getCenterOfMass ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "centerOfMass" */
	void setCenterOfMass (float* value);

	/** Return float result [] from SFFloat inputOutput field named "disableAngularSpeed" */
	float getDisableAngularSpeed ();

	/** Assign float value [] to SFFloat inputOutput field named "disableAngularSpeed" */
	void setDisableAngularSpeed (float value);

	/** Return float result [] from SFFloat inputOutput field named "disableLinearSpeed" */
	float getDisableLinearSpeed ();

	/** Assign float value [] to SFFloat inputOutput field named "disableLinearSpeed" */
	void setDisableLinearSpeed (float value);

	/** Return double result in seconds from SFTime inputOutput field named "disableTime" */
	double getDisableTime ();

	/** Assign double value in seconds to SFTime inputOutput field named "disableTime" */
	void setDisableTime (double timestamp);

	/** Return boolean result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign boolean value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	/** Return array of 3-tuple float results array in radians from SFVec3f inputOutput field named "finiteRotationAxis" */
	float* getFiniteRotationAxis ();

	/** Assign 3-tuple float array in radians to SFVec3f inputOutput field named "finiteRotationAxis" */
	void setFiniteRotationAxis (float* value);

	/** Return boolean result from SFBool inputOutput field named "fixed" */
	bool getFixed ();

	/** Assign boolean value to SFBool inputOutput field named "fixed" */
	void setFixed (bool value);

	/** Return array of 3-tuple float results array [] from MFVec3f inputOutput field named "forces" */
	float* getForces ();

	/** Return number of 3-tuple primitive values in "forces" array */
	int getNumForces ();

	/** Assign 3-tuple float array [] to MFVec3f inputOutput field named "forces" */
	void setForces (float* values);

	/** Return array of float results array [] from SFMatrix3f inputOutput field named "inertia" */
	float* getInertia ();

	/** Assign float array [] to SFMatrix3f inputOutput field named "inertia" */
	void setInertia (float* value);

	/** Return float result [] from SFFloat inputOutput field named "linearDampingFactor" */
	float getLinearDampingFactor ();

	/** Assign float value [] to SFFloat inputOutput field named "linearDampingFactor" */
	void setLinearDampingFactor (float value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "linearVelocity" */
	float* getLinearVelocity ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "linearVelocity" */
	void setLinearVelocity (float* value);

	/** Return float result [] from SFFloat inputOutput field named "mass" */
	float getMass ();

	/** Assign float value [] to SFFloat inputOutput field named "mass" */
	void setMass (float value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "position" */
	float* getPosition ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "position" */
	void setPosition (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "orientation" */
	float* getOrientation ();

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "orientation" */
	void setOrientation (float* value);

	/** Return array of 3-tuple float results array [] from MFVec3f inputOutput field named "torques" */
	float* getTorques ();

	/** Return number of 3-tuple primitive values in "torques" array */
	int getNumTorques ();

	/** Assign 3-tuple float array [] to MFVec3f inputOutput field named "torques" */
	void setTorques (float* values);

	/** Return boolean result in radians from SFBool inputOutput field named "useFiniteRotation" */
	bool getUseFiniteRotation ();

	/** Assign boolean value in radians to SFBool inputOutput field named "useFiniteRotation" */
	void setUseFiniteRotation (bool value);

	/** Return boolean result from SFBool inputOutput field named "useGlobalGravity" */
	bool getUseGlobalGravity ();

	/** Assign boolean value to SFBool inputOutput field named "useGlobalGravity" */
	void setUseGlobalGravity (bool value);

	/** Return array of X3DNBodyCollidableNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "geometry" */
	void getGeometry (X3DNode* result);

	/** Return number of nodes in "geometry" array */
	int getNumGeometry ();

	/** Assign X3DNBodyCollidableNode array (using a properly typed node array) to MFNode inputOutput field named "geometry" */
	void setGeometry (X3DNBodyCollidableNode* nodes);

	/** Assign single X3DNBodyCollidableNode value (using a properly typed node) as the MFNode array for inputOutput field named "geometry" */
	void setGeometry (X3DNBodyCollidableNode node);

	/** Assign X3DNBodyCollidableNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "geometry" */
	void setGeometry (X3DPrototypeInstance node);

	/** Assign X3DNBodyCollidableNode array (using a properly typed node array) to MFNode inputOutput field named "geometry" */
	void setGeometry (X3DNode* nodes);

	/** Return Sphere|Box|Cone result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "massDensityModel" */
	void getMassDensityModel (X3DNode result);

	/** Assign Sphere|Box|Cone value (using a properly typed node) to SFNode inputOutput field named "massDensityModel" */
	void setMassDensityModel (X3DNode node);

	/** Assign Sphere|Box|Cone value (using a properly typed protoInstance) */
	void setMassDensityModel (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.186 RigidBodyCollection 
/** RigidBodyCollection defines a concrete node interface that extends interface X3DChildNode. */

class X3D_API RigidBodyCollection : public X3DChildNode
{

public:
	RigidBodyCollection();
	virtual ~RigidBodyCollection();

	/** Return boolean result from SFBool inputOutput field named "autoDisable" */
	bool getAutoDisable ();

	/** Assign boolean value to SFBool inputOutput field named "autoDisable" */
	void setAutoDisable (bool value);

	/** Return float result [] from SFFloat inputOutput field named "constantForceMix" */
	float getConstantForceMix ();

	/** Assign float value [] to SFFloat inputOutput field named "constantForceMix" */
	void setConstantForceMix (float value);

	/** Return float result [] from SFFloat inputOutput field named "contactSurfaceThickness" */
	float getContactSurfaceThickness ();

	/** Assign float value [] to SFFloat inputOutput field named "contactSurfaceThickness" */
	void setContactSurfaceThickness (float value);

	/** Return float result [] from SFFloat inputOutput field named "disableAngularSpeed" */
	float getDisableAngularSpeed ();

	/** Assign float value [] to SFFloat inputOutput field named "disableAngularSpeed" */
	void setDisableAngularSpeed (float value);

	/** Return float result [] from SFFloat inputOutput field named "disableLinearSpeed" */
	float getDisableLinearSpeed ();

	/** Assign float value [] to SFFloat inputOutput field named "disableLinearSpeed" */
	void setDisableLinearSpeed (float value);

	/** Return double result in seconds from SFTime inputOutput field named "disableTime" */
	double getDisableTime ();

	/** Assign double value in seconds to SFTime inputOutput field named "disableTime" */
	void setDisableTime (double timestamp);

	/** Return boolean result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign boolean value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	/** Return float result [] from SFFloat inputOutput field named "errorCorrection" */
	float getErrorCorrection ();

	/** Assign float value [] to SFFloat inputOutput field named "errorCorrection" */
	void setErrorCorrection (float value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "gravity" */
	float* getGravity ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "gravity" */
	void setGravity (float* value);

	/** Return int result [] from SFInt32 inputOutput field named "iterations" */
	int getIterations ();

	/** Assign int value [] to SFInt32 inputOutput field named "iterations" */
	void setIterations (int value);

	/** Return float result [] from SFFloat inputOutput field named "maxCorrectionSpeed" */
	float getMaxCorrectionSpeed ();

	/** Assign float value [] to SFFloat inputOutput field named "maxCorrectionSpeed" */
	void setMaxCorrectionSpeed (float value);

	/** Return boolean result from SFBool inputOutput field named "preferAccuracy" */
	bool getPreferAccuracy ();

	/** Assign boolean value to SFBool inputOutput field named "preferAccuracy" */
	void setPreferAccuracy (bool value);

	/** Assign Contact array (using a properly typed node array) to MFNode inputOnly field named "set_contacts" */
	void setContacts (Contact* nodes);

	/** Assign single Contact value (using a properly typed node) as the MFNode array for inputOnly field named "set_contacts" */
	void setContacts (Contact node);

	/** Assign Contact array (using a properly typed protoInstance array) to MFNode inputOnly field named "set_contacts" */
	void setContacts (X3DPrototypeInstance node);

	/** Assign Contact array (using a properly typed node array) to MFNode inputOnly field named "set_contacts" */
	void setContacts (X3DNode* nodes);

	/** Return array of RigidBody results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "bodies" */
	void getBodies (X3DNode* result);

	/** Return number of nodes in "bodies" array */
	int getNumBodies ();

	/** Assign RigidBody array (using a properly typed node array) to MFNode inputOutput field named "bodies" */
	void setBodies (RigidBody* nodes);

	/** Assign single RigidBody value (using a properly typed node) as the MFNode array for inputOutput field named "bodies" */
	void setBodies (RigidBody node);

	/** Assign RigidBody array (using a properly typed protoInstance array) to MFNode inputOutput field named "bodies" */
	void setBodies (X3DPrototypeInstance node);

	/** Assign RigidBody array (using a properly typed node array) to MFNode inputOutput field named "bodies" */
	void setBodies (X3DNode* nodes);

	/** Return array of X3DRigidJointNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "joints" */
	void getJoints (X3DNode* result);

	/** Return number of nodes in "joints" array */
	int getNumJoints ();

	/** Assign X3DRigidJointNode array (using a properly typed node array) to MFNode inputOutput field named "joints" */
	void setJoints (X3DRigidJointNode* nodes);

	/** Assign single X3DRigidJointNode value (using a properly typed node) as the MFNode array for inputOutput field named "joints" */
	void setJoints (X3DRigidJointNode node);

	/** Assign X3DRigidJointNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "joints" */
	void setJoints (X3DPrototypeInstance node);

	/** Assign X3DRigidJointNode array (using a properly typed node array) to MFNode inputOutput field named "joints" */
	void setJoints (X3DNode* nodes);

	/** Return CollisionCollection result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "collider" */
	void getCollider (X3DNode result);

	/** Assign CollisionCollection value (using a properly typed node) to SFNode initializeOnly field named "collider" */
	void setCollider (CollisionCollection node);

	/** Assign CollisionCollection value (using a properly typed protoInstance) */
	void setCollider (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.187 ROUTE 
/** ROUTE defines a concrete node interface that extends interfaces SceneGraphStructureStatementX3DChildNode.
* ROUTE connects output fields of event-producing nodes to input fields of event-consuming nodes. */

class X3D_API ROUTE : public SceneGraphStructureStatement//, public X3DChildNode
{

public:
	ROUTE();
	virtual ~ROUTE();

	virtual std::string getXMLString();


	/** Return xs:IDREF result [] from xs:IDREF type inputOutput field named "fromNode" */
	//xs:IDREF getFromNode ();
	std::string getFromNode ();

	/** Assign xs:IDREF value [] to xs:IDREF type inputOutput field named "fromNode" */
	//void setFromNode (xs:IDREF value);
	void setFromNode (std::string value);

	/** Return xs:NMTOKEN result [] from xs:NMTOKEN type inputOutput field named "fromField" */
	//xs:NMTOKEN getFromField ();
	std::string getFromField ();

	/** Assign xs:NMTOKEN value [] to xs:NMTOKEN type inputOutput field named "fromField" */
	//void setFromField (xs:NMTOKEN value);
	void setFromField (std::string value);

	/** Return xs:IDREF result [] from xs:IDREF type inputOutput field named "toNode" */
	//xs:IDREF getToNode ();
	std::string getToNode ();

	/** Assign xs:IDREF value [] to xs:IDREF type inputOutput field named "toNode" */
	//void setToNode (xs:IDREF value);
	void setToNode (std::string value);

	/** Return xs:NMTOKEN result [] from xs:NMTOKEN type inputOutput field named "toField" */
	//xs:NMTOKEN getToField ();
	std::string getToField ();

	/** Assign xs:NMTOKEN value [] to xs:NMTOKEN type inputOutput field named "toField" */
	//void setToField (xs:NMTOKEN value);
	void setToField (std::string value);

	X3DBaseNode* getSourceNode();
	void setSourceNode(X3DBaseNode* pNode);
	std::string getSourceField();

	X3DBaseNode* getDestinationNode();
	void setDestinationNode(X3DBaseNode* pNode);
	std::string getDestinationField();

	std::string fromField;
	std::string fromNode;
	std::string toField;
	std::string toNode;

	X3DBaseNode* m_pSourceNode;
	X3DBaseNode* m_pDestinationNode;
};
 
//C.3.188 ScalarChaser 
/** ScalarChaser defines a concrete node interface that extends interface X3DChaserNode. */

class X3D_API ScalarChaser : public X3DChaserNode
{

public:
	ScalarChaser();
	virtual ~ScalarChaser();

	/** Assign float value [] to SFFloat inputOnly field named "set_destination" */
	void setDestination (float value);

	/** Assign float value [] to SFFloat inputOnly field named "set_value" */
	void setValue (float value);

	/** Return float result [] from SFFloat outputOnly field named "value_changed" */
	float getValue ();

	/** Return float result [] from SFFloat initializeOnly field named "initialDestination" */
	float getInitialDestination ();

	/** Assign float value [] to SFFloat initializeOnly field named "initialDestination" */
	void setInitialDestination (float value);

	/** Return float result [] from SFFloat initializeOnly field named "initialValue" */
	float getInitialValue ();

	/** Assign float value [] to SFFloat initializeOnly field named "initialValue" */
	void setInitialValue (float value);

//	// ===== methods for fields inherited from parent interfaces =====
//
//	/** Return double result in seconds from  type initializeOnly field named "duration" */
//	double getDuration ();
//
//	/** Assign double value in seconds to  type initializeOnly field named "duration" */
//	void setDuration (double timestamp);
//
//	/** Return boolean result from SFBool outputOnly field named "isActive" */
//	bool getIsActive ();
//
//	/** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
//	X3DNode* getMetadata ();
//
//	/** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
//	void setMetadata (X3DMetadataObject node);
//
//	/** Assign X3DMetadataObject value (using a properly typed protoInstance) */
//	void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.189 ScalarDamper 
/** ScalarDamper defines a concrete node interface that extends interface X3DDamperNode. */

class X3D_API ScalarDamper : public X3DDamperNode
{

public:
	ScalarDamper();
	virtual ~ScalarDamper();

	/** Assign float value [] to SFFloat inputOnly field named "set_destination" */
	void setDestination (float value);

	/** Assign float value [] to SFFloat inputOnly field named "set_value" */
	void setValue (float value);

	/** Return float result [] from SFFloat outputOnly field named "value_changed" */
	float getValue ();

	/** Return float result [] from SFFloat initializeOnly field named "initialDestination" */
	float getInitialDestination ();

	/** Assign float value [] to SFFloat initializeOnly field named "initialDestination" */
	void setInitialDestination (float value);

	/** Return float result [] from SFFloat initializeOnly field named "initialValue" */
	float getInitialValue ();

	/** Assign float value [] to SFFloat initializeOnly field named "initialValue" */
	void setInitialValue (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from  type inputOutput field named "tau" */
	//double getTau ();

	///** Assign double value in seconds to  type inputOutput field named "tau" */
	//void setTau (double timestamp);

	///** Return float result [] from SFFloat inputOutput field named "tolerance" */
	//float getTolerance ();

	///** Assign float value [] to SFFloat inputOutput field named "tolerance" */
	//void setTolerance (float value);

	///** Return int result [] from  type initializeOnly field named "order" */
	//int getOrder ();

	///** Assign int value [] to  type initializeOnly field named "order" */
	//void setOrder (int value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.190 ScalarInterpolator 
/** ScalarInterpolator defines a concrete node interface that extends interface X3DInterpolatorNode. */

class X3D_API ScalarInterpolator : public X3DInterpolatorNode
{

public:
	ScalarInterpolator();
	virtual ~ScalarInterpolator();

public:
	virtual void Draw();
	virtual std::string getXMLString();

	///** Return float result [] from SFFloat outputOnly field named "value_changed" */
	//float getValue ();

	///** Return array of float results array [] from MFFloat inputOutput field named "keyValue" */
	//float* getKeyValue ();

	///** Return number of primitive values in "keyValue" array */
	//int getNumKeyValue ();

	///** Assign float array [] to MFFloat inputOutput field named "keyValue" */
	//void setKeyValue (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "keyValue" */
	//void setKeyValue (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	//void setFraction (float value);

	///** Return array of float results array [] from MFFloat inputOutput field named "key" */
	//float* getKey ();

	///** Return number of primitive values in "key" array */
	//int getNumKey ();

	///** Assign float array [] to MFFloat inputOutput field named "key" */
	//void setKey (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	//void setKey (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.191 Scene 
/** Scene defines a concrete node interface that extends interface SceneGraphStructureStatement. */

class X3D_API Scene : public SceneGraphStructureStatement
{

public:
	Scene();
	virtual ~Scene();

	//std::string getXMLString();

};
 
//C.3.192 ScreenFontStyle 
/** ScreenFontStyle defines a concrete node interface that extends interface X3DFontStyleNode. */

class X3D_API ScreenFontStyle : public X3DFontStyleNode
{

public:
	ScreenFontStyle();
	virtual ~ScreenFontStyle();

	/** Return array of String results array [] from MFString initializeOnly field named "family" */
	std::string* getFamily ();

	/** Return number of primitive values in "family" array */
	int getNumFamily ();

	/** Assign String array [] to MFString initializeOnly field named "family" */
	void setFamily (std::string* values, int size);

	/** Assign single String value [] as the MFString array for initializeOnly field named "family" */
	void setFamily (std::string value);

	/** Return boolean result from SFBool initializeOnly field named "horizontal" */
	bool getHorizontal ();

	/** Assign boolean value to SFBool initializeOnly field named "horizontal" */
	void setHorizontal (bool value);

	/** Return array of String results array [] from MFString initializeOnly field named "justify" */
	std::string* getJustify ();

	/** Return number of primitive values in "justify" array */
	int getNumJustify ();

	/** Assign String array [] to MFString initializeOnly field named "justify" */
	void setJustify (std::string* values);

	/** Assign single String value [] as the MFString array for initializeOnly field named "justify" */
	void setJustify (std::string value);

	/** Return String result [] from SFString initializeOnly field named "language" */
	std::string getLanguage ();

	/** Assign String value [] to SFString initializeOnly field named "language" */
	void setLanguage (std::string value);

	/** Return boolean result from SFBool initializeOnly field named "leftToRight" */
	bool getLeftToRight ();

	/** Assign boolean value to SFBool initializeOnly field named "leftToRight" */
	void setLeftToRight (bool value);

	/** Return float result [] from SFFloat initializeOnly field named "pointSize" */
	float getPointSize ();

	/** Assign float value [] to SFFloat initializeOnly field named "pointSize" */
	void setPointSize (float value);

	/** Return float result [] from SFFloat initializeOnly field named "spacing" */
	float getSpacing ();

	/** Assign float value [] to SFFloat initializeOnly field named "spacing" */
	void setSpacing (float value);

	/** Return String enumeration result ("PLAIN"|"BOLD"|"ITALIC"|"BOLDITALIC") from fontStyleValues type initializeOnly field named "style" */
	std::string getStyle ();

	/** Assign String enumeration value ("PLAIN"|"BOLD"|"ITALIC"|"BOLDITALIC") to fontStyleValues type initializeOnly field named "style" */
	void setStyle (std::string value);

	/** Return boolean result from SFBool initializeOnly field named "topToBottom" */
	bool getTopToBottom ();

	/** Assign boolean value to SFBool initializeOnly field named "topToBottom" */
	void setTopToBottom (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.193 ScreenGroup 
/** ScreenGroup defines a concrete node interface that extends interface X3DGroupingNode. */

class X3D_API ScreenGroup : public X3DGroupingNode
{

public:
	ScreenGroup();
	virtual ~ScreenGroup();


	//// ===== methods for fields inherited from parent interfaces =====
	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.194 Script 
/** Script defines a concrete node interface that extends interface X3DScriptNode. */

class X3D_API Script : public X3DScriptNode
{

public:
	Script();
	virtual ~Script();

	virtual std::string getXMLString();

	/** Return boolean result from SFBool initializeOnly field named "directOutput" */
	bool getDirectOutput ();

	/** Assign boolean value to SFBool initializeOnly field named "directOutput" */
	void setDirectOutput (bool value);

	/** Return boolean result from SFBool initializeOnly field named "mustEvaluate" */
	bool getMustEvaluate ();

	/** Assign boolean value to SFBool initializeOnly field named "mustEvaluate" */
	void setMustEvaluate (bool value);

	void setSourceCode(std::string code);

	std::string getSourceCode();
	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	bool directOutput;
	bool mustEvaluate;
	//std::string url;

	std::vector<field> field;

	std::string sourcecode;
};
 
//C.3.195 SegmentedVolumeData 
/** SegmentedVolumeData defines a concrete node interface that extends interface X3DVolumeDataNode. */

class X3D_API SegmentedVolumeData : public X3DVolumeDataNode
{

public:
	SegmentedVolumeData();
	virtual ~SegmentedVolumeData();

	/** Return array of boolean results array from MFBool inputOutput field named "segmentEnabled" */
	bool* getSegmentEnabled ();

	/** Return number of primitive values in "segmentEnabled" array */
	int getNumSegmentEnabled ();

	/** Assign boolean array to MFBool inputOutput field named "segmentEnabled" */
	void setSegmentEnabled (bool* values, int size);

	/** Assign single boolean value as the MFBool array for inputOutput field named "segmentEnabled" */
	void setSegmentEnabled (bool value);

	/** Return array of X3DVolumeRenderStyleNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "renderStyle" */
	void getRenderStyle (X3DNode* result);

	/** Return number of nodes in "renderStyle" array */
	int getNumRenderStyle ();

	/** Assign X3DVolumeRenderStyleNode array (using a properly typed node array) to MFNode inputOutput field named "renderStyle" */
	void setRenderStyle (X3DVolumeRenderStyleNode* nodes);

	/** Assign single X3DVolumeRenderStyleNode value (using a properly typed node) as the MFNode array for inputOutput field named "renderStyle" */
	void setRenderStyle (X3DVolumeRenderStyleNode node);

	/** Assign X3DVolumeRenderStyleNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "renderStyle" */
	void setRenderStyle (X3DPrototypeInstance node);

	/** Assign X3DVolumeRenderStyleNode array (using a properly typed node array) to MFNode inputOutput field named "renderStyle" */
	void setRenderStyle (X3DNode* nodes);

	/** Return X3DTexture3DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "segmentIdentifiers" */
	void getSegmentIdentifiers (X3DNode result);

	/** Assign X3DTexture3DNode value (using a properly typed node) to SFNode inputOutput field named "segmentIdentifiers" */
	void setSegmentIdentifiers (X3DTexture3DNode node);

	/** Assign X3DTexture3DNode value (using a properly typed protoInstance) */
	void setSegmentIdentifiers (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture3DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "voxels" */
	void getVoxels (X3DNode result);

	/** Assign X3DTexture3DNode value (using a properly typed node) to SFNode inputOutput field named "voxels" */
	void setVoxels (X3DTexture3DNode node);

	/** Assign X3DTexture3DNode value (using a properly typed protoInstance) */
	void setVoxels (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "dimensions" */
	//float* getDimensions ();

	///** Assign 3-tuple float array [] to SFVec3f inputOutput field named "dimensions" */
	//void setDimensions (float* value);

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.196 ShadedVolumeStyle 
/** ShadedVolumeStyle defines a concrete node interface that extends interface X3DComposableVolumeRenderStyleNode. */

class X3D_API ShadedVolumeStyle : public X3DComposableVolumeRenderStyleNode
{

public:
	ShadedVolumeStyle();
	virtual ~ShadedVolumeStyle();

	/** Return boolean result from SFBool inputOutput field named "lighting" */
	bool getLighting ();

	/** Assign boolean value to SFBool inputOutput field named "lighting" */
	void setLighting (bool value);

	/** Return boolean result from SFBool inputOutput field named "shadows" */
	bool getShadows ();

	/** Assign boolean value to SFBool inputOutput field named "shadows" */
	void setShadows (bool value);

	/** Return String result ["Henyey-Greenstein"|"NONE"] from  type initializeOnly field named "phaseFunction" */
	std::string getPhaseFunction ();

	/** Assign String value ["Henyey-Greenstein"|"NONE"] to  type initializeOnly field named "phaseFunction" */
	void setPhaseFunction (std::string value);

	/** Return X3DMaterialNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "material" */
	void getMaterial (X3DNode result);

	/** Assign X3DMaterialNode value (using a properly typed node) to SFNode inputOutput field named "material" */
	void setMaterial (X3DMaterialNode node);

	/** Assign X3DMaterialNode value (using a properly typed protoInstance) */
	void setMaterial (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture3DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "surfaceNormals" */
	void getSurfaceNormals (X3DNode result);

	/** Assign X3DTexture3DNode value (using a properly typed node) to SFNode inputOutput field named "surfaceNormals" */
	void setSurfaceNormals (X3DTexture3DNode node);

	/** Assign X3DTexture3DNode value (using a properly typed protoInstance) */
	void setSurfaceNormals (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.200 SignalPdu 
/** SignalPdu defines a concrete node interface that extends interfaces X3DNetworkSensorNodeX3DBoundedObject. */

class X3D_API SignalPdu : public X3DNetworkSensorNode, public X3DBoundedObject
{

public:
	SignalPdu();
	virtual ~SignalPdu();

	/** Return boolean result from SFBool outputOnly field named "isNetworkReader" */
	bool getIsNetworkReader ();

	/** Return boolean result from SFBool outputOnly field named "isNetworkWriter" */
	bool getIsNetworkWriter ();

	/** Return boolean result from SFBool outputOnly field named "isRtpHeaderHeard" */
	bool getIsRtpHeaderHeard ();

	/** Return boolean result from SFBool outputOnly field named "isStandAlone" */
	bool getIsStandAlone ();

	/** Return double result in seconds from SFTime outputOnly field named "timestamp" */
	double getTimestamp ();

	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	float* getBboxCenter ();

	/** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	void setBboxCenter (float* value);

	/** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	float* getBboxSize ();

	/** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	void setBboxSize (float* value);

	/** Return int result [] from SFInt32 inputOutput field named "whichGeometry" */
	int getWhichGeometry ();

	/** Assign int value [] to SFInt32 inputOutput field named "whichGeometry" */
	void setWhichGeometry (int value);

	/** Return double result in seconds from SFTime inputOutput field named "readInterval" */
	double getReadInterval ();

	/** Assign double value in seconds to SFTime inputOutput field named "readInterval" */
	void setReadInterval (double timestamp);

	/** Return double result in seconds from SFTime inputOutput field named "writeInterval" */
	double getWriteInterval ();

	/** Assign double value in seconds to SFTime inputOutput field named "writeInterval" */
	void setWriteInterval (double timestamp);

	/** Return String enumeration result ("standAlone"|"networkReader"|"networkWriter") from networkModeValues type inputOutput field named "networkMode" */
	std::string getNetworkMode ();

	/** Assign String enumeration value ("standAlone"|"networkReader"|"networkWriter") to networkModeValues type inputOutput field named "networkMode" */
	void setNetworkMode (std::string value);

	/** Return int result [] from SFInt32 inputOutput field named "siteID" */
	int getSiteID ();

	/** Assign int value [] to SFInt32 inputOutput field named "siteID" */
	void setSiteID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "applicationID" */
	int getApplicationID ();

	/** Assign int value [] to SFInt32 inputOutput field named "applicationID" */
	void setApplicationID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "entityID" */
	int getEntityID ();

	/** Assign int value [] to SFInt32 inputOutput field named "entityID" */
	void setEntityID (int value);

	/** Return String result [] from SFString inputOutput field named "address" */
	std::string getAddress ();

	/** Assign String value [] to SFString inputOutput field named "address" */
	void setAddress (std::string value);

	/** Return int result [] from SFInt32 inputOutput field named "port" */
	int getPort ();

	/** Assign int value [] to SFInt32 inputOutput field named "port" */
	void setPort (int value);

	/** Return String result [] from SFString inputOutput field named "multicastRelayHost" */
	std::string getMulticastRelayHost ();

	/** Assign String value [] to SFString inputOutput field named "multicastRelayHost" */
	void setMulticastRelayHost (std::string value);

	/** Return int result [] from SFInt32 inputOutput field named "multicastRelayPort" */
	int getMulticastRelayPort ();

	/** Assign int value [] to SFInt32 inputOutput field named "multicastRelayPort" */
	void setMulticastRelayPort (int value);

	/** Return boolean result from SFBool initializeOnly field named "rtpHeaderExpected" */
	bool getRtpHeaderExpected ();

	/** Assign boolean value to SFBool initializeOnly field named "rtpHeaderExpected" */
	void setRtpHeaderExpected (bool value);

	/** Return int result [] from SFInt32 inputOutput field named "radioID" */
	int getRadioID ();

	/** Assign int value [] to SFInt32 inputOutput field named "radioID" */
	void setRadioID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "encodingScheme" */
	int getEncodingScheme ();

	/** Assign int value [] to SFInt32 inputOutput field named "encodingScheme" */
	void setEncodingScheme (int value);

	/** Return int result [] from SFInt32 inputOutput field named "tdlType" */
	int getTdlType ();

	/** Assign int value [] to SFInt32 inputOutput field named "tdlType" */
	void setTdlType (int value);

	/** Return int result [] from SFInt32 inputOutput field named "sampleRate" */
	int getSampleRate ();

	/** Assign int value [] to SFInt32 inputOutput field named "sampleRate" */
	void setSampleRate (int value);

	/** Return int result [] from SFInt32 inputOutput field named "samples" */
	int getSamples ();

	/** Assign int value [] to SFInt32 inputOutput field named "samples" */
	void setSamples (int value);

	/** Return int result [] from SFInt32 inputOutput field named "dataLength" */
	int getDataLength ();

	/** Assign int value [] to SFInt32 inputOutput field named "dataLength" */
	void setDataLength (int value);

	/** Return MFInt32 result [] from MFInt32 inputOutput field named "data" */
	int32_t* getData ();

	/** Return number of primitive values in "data" array */
	int getNumData ();

	/** Assign MFInt32 value [] to MFInt32 inputOutput field named "data" */
	void setData (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOutput field named "data" */
	void setData (int32_t value);

	/** Return array of String results array [] from geoSystemType type initializeOnly field named "geoSystem" */
	std::string* getGeoSystem ();

	/** Return number of primitive values in "geoSystem" array */
	int getNumGeoSystem ();

	/** Assign String array [] to geoSystemType type initializeOnly field named "geoSystem" */
	void setGeoSystem (std::string* values, int size);

	/** Return array of 3-tuple double results array [] from SFVec3d inputOutput field named "geoCoords" */
	double* getGeoCoords ();

	/** Assign 3-tuple double array [] to SFVec3d inputOutput field named "geoCoords" */
	void setGeoCoords (double* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.201 SilhouetteEnhancementVolumeStyle 
/** SilhouetteEnhancementVolumeStyle defines a concrete node interface that extends interface X3DComposableVolumeRenderStyleNode. */

class X3D_API SilhouetteEnhancementVolumeStyle : public X3DComposableVolumeRenderStyleNode
{

public:
	SilhouetteEnhancementVolumeStyle();
	virtual ~SilhouetteEnhancementVolumeStyle();

	/** Return float result [] from  type inputOutput field named "silhouetteBoundaryOpacity" */
	float getSilhouetteBoundaryOpacity ();

	/** Assign float value [] to  type inputOutput field named "silhouetteBoundaryOpacity" */
	void setSilhouetteBoundaryOpacity (float value);

	/** Return float result [] from  type inputOutput field named "silhouetteRetainedOpacity" */
	float getSilhouetteRetainedOpacity ();

	/** Assign float value [] to  type inputOutput field named "silhouetteRetainedOpacity" */
	void setSilhouetteRetainedOpacity (float value);

	/** Return float result [] from  type inputOutput field named "silhouetteSharpness" */
	float getSilhouetteSharpness ();

	/** Assign float value [] to  type inputOutput field named "silhouetteSharpness" */
	void setSilhouetteSharpness (float value);

	/** Return X3DTexture3DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "surfaceNormals" */
	void getSurfaceNormals (X3DNode result);

	/** Assign X3DTexture3DNode value (using a properly typed node) to SFNode inputOutput field named "surfaceNormals" */
	void setSurfaceNormals (X3DTexture3DNode node);

	/** Assign X3DTexture3DNode value (using a properly typed protoInstance) */
	void setSurfaceNormals (X3DPrototypeInstance protoInstance);

//	// ===== methods for fields inherited from parent interfaces =====
//
//	/** Return boolean result from SFBool inputOutput field named "enabled" */
//	bool getEnabled ();
//
//	/** Assign boolean value to SFBool inputOutput field named "enabled" */
//	void setEnabled (bool value);
//
//	/** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
//	X3DNode* getMetadata ();
//
//	/** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
//	void setMetadata (X3DMetadataObject node);
//
//	/** Assign X3DMetadataObject value (using a properly typed protoInstance) */
//	void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.202 SingleAxisHingeJoint 
/** SingleAxisHingeJoint defines a concrete node interface that extends interface X3DRigidJointNode.
* SingleAxisHingeJoint has single axis about which to rotate, similar to a traditional door hinge. Contains two RigidBody nodes (containerField values body1, body2). */

class X3D_API SingleAxisHingeJoint : public X3DRigidJointNode
{

public:
	SingleAxisHingeJoint();
	virtual ~SingleAxisHingeJoint();

	/** Return float result in radians from SFFloat outputOnly field named "angle" */
	float getAngle ();

	/** Return float result in radians from SFFloat outputOnly field named "angleRate" */
	float getAngleRate ();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "body1AnchorPoint" */
	float* getBody1AnchorPoint ();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "body2AnchorPoint" */
	float* getBody2AnchorPoint ();

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "anchorPoint" */
	float* getAnchorPoint ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "anchorPoint" */
	void setAnchorPoint (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "axis" */
	float* getAxis ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "axis" */
	void setAxis (float* value);

	/** Return float result in radians from SFFloat inputOutput field named "maxAngle" */
	float getMaxAngle ();

	/** Assign float value in radians to SFFloat inputOutput field named "maxAngle" */
	void setMaxAngle (float angle);

	/** Return float result in radians from SFFloat inputOutput field named "minAngle" */
	float getMinAngle ();

	/** Assign float value in radians to SFFloat inputOutput field named "minAngle" */
	void setMinAngle (float angle);

	/** Return float result [] from SFFloat inputOutput field named "stopBounce" */
	float getStopBounce ();

	/** Assign float value [] to SFFloat inputOutput field named "stopBounce" */
	void setStopBounce (float value);

	/** Return float result [] from SFFloat inputOutput field named "stopErrorCorrection" */
	float getStopErrorCorrection ();

	/** Assign float value [] to SFFloat inputOutput field named "stopErrorCorrection" */
	void setStopErrorCorrection (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of String results array [] from MFString inputOutput field named "forceOutput" */
	//std::string* getForceOutput ();

	///** Return number of primitive values in "forceOutput" array */
	//int getNumForceOutput ();

	///** Assign String array [] to MFString inputOutput field named "forceOutput" */
	//void setForceOutput (std::string* values);

	///** Assign single String value [] as the MFString array for inputOutput field named "forceOutput" */
	//void setForceOutput (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body1" */
	//void getBody1 (X3DNode result);

	///** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body1" */
	//void setBody1 (RigidBody node);

	///** Assign RigidBody value (using a properly typed protoInstance) */
	//void setBody1 (X3DPrototypeInstance protoInstance);

	///** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body2" */
	//void getBody2 (X3DNode result);

	///** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body2" */
	//void setBody2 (RigidBody node);

	///** Assign RigidBody value (using a properly typed protoInstance) */
	//void setBody2 (X3DPrototypeInstance protoInstance);
};
 
//C.3.203 SliderJoint 
/** SliderJoint defines a concrete node interface that extends interface X3DRigidJointNode.
* SliderJoint constrains all movement between body1 and body2 along a single axis. Contains two RigidBody nodes (containerField values body1, body2). */

class X3D_API SliderJoint : public X3DRigidJointNode
{

public:
	SliderJoint();
	virtual ~SliderJoint();

	/** Return float result [] from SFFloat outputOnly field named "separation" */
	float getSeparation ();

	/** Return float result [] from SFFloat outputOnly field named "separationRate" */
	float getSeparationRate ();

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "axis" */
	float* getAxis ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "axis" */
	void setAxis (float* value);

	/** Return float result [] from SFFloat inputOutput field named "maxSeparation" */
	float getMaxSeparation ();

	/** Assign float value [] to SFFloat inputOutput field named "maxSeparation" */
	void setMaxSeparation (float value);

	/** Return float result [] from SFFloat inputOutput field named "minSeparation" */
	float getMinSeparation ();

	/** Assign float value [] to SFFloat inputOutput field named "minSeparation" */
	void setMinSeparation (float value);

	/** Return float result [] from SFFloat inputOutput field named "sliderForce" */
	float getSliderForce ();

	/** Assign float value [] to SFFloat inputOutput field named "sliderForce" */
	void setSliderForce (float value);

	/** Return float result [] from SFFloat inputOutput field named "stopBounce" */
	float getStopBounce ();

	/** Assign float value [] to SFFloat inputOutput field named "stopBounce" */
	void setStopBounce (float value);

	/** Return float result [] from SFFloat inputOutput field named "stopErrorCorrection" */
	float getStopErrorCorrection ();

	/** Assign float value [] to SFFloat inputOutput field named "stopErrorCorrection" */
	void setStopErrorCorrection (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of String results array [] from MFString inputOutput field named "forceOutput" */
	//std::string* getForceOutput ();

	///** Return number of primitive values in "forceOutput" array */
	//int getNumForceOutput ();

	///** Assign String array [] to MFString inputOutput field named "forceOutput" */
	//void setForceOutput (std::string* values, int size);

	///** Assign single String value [] as the MFString array for inputOutput field named "forceOutput" */
	//void setForceOutput (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body1" */
	//void getBody1 (X3DNode result);

	///** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body1" */
	//void setBody1 (RigidBody node);

	///** Assign RigidBody value (using a properly typed protoInstance) */
	//void setBody1 (X3DPrototypeInstance protoInstance);

	///** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body2" */
	//void getBody2 (X3DNode result);

	///** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body2" */
	//void setBody2 (RigidBody node);

	///** Assign RigidBody value (using a properly typed protoInstance) */
	//void setBody2 (X3DPrototypeInstance protoInstance);
};
 
//C.3.204 Sound 
/** Sound defines a concrete node interface that extends interface X3DSoundNode. */

class X3D_API Sound : public X3DSoundNode
{

public:
	Sound();
	virtual ~Sound();
	virtual std::string getXMLString();

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "direction" */
	float* getDirection ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "direction" */
	void setDirection (float* value);

	/** Return float result [] from intensityType type inputOutput field named "intensity" */
	float getIntensity ();

	/** Assign float value [] to intensityType type inputOutput field named "intensity" */
	void setIntensity (float value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "location" */
	float* getLocation ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "location" */
	void setLocation (float* value);

	/** Return float result [] from SFFloat inputOutput field named "maxBack" */
	float getMaxBack ();

	/** Assign float value [] to SFFloat inputOutput field named "maxBack" */
	void setMaxBack (float value);

	/** Return float result [] from SFFloat inputOutput field named "maxFront" */
	float getMaxFront ();

	/** Assign float value [] to SFFloat inputOutput field named "maxFront" */
	void setMaxFront (float value);

	/** Return float result [] from SFFloat inputOutput field named "minBack" */
	float getMinBack ();

	/** Assign float value [] to SFFloat inputOutput field named "minBack" */
	void setMinBack (float value);

	/** Return float result [] from SFFloat inputOutput field named "minFront" */
	float getMinFront ();

	/** Assign float value [] to SFFloat inputOutput field named "minFront" */
	void setMinFront (float value);

	/** Return float result [] from intensityType type inputOutput field named "priority" */
	float getPriority ();

	/** Assign float value [] to intensityType type inputOutput field named "priority" */
	void setPriority (float value);

	/** Return boolean result from SFBool initializeOnly field named "spatialize" */
	bool getSpatialize ();

	/** Assign boolean value to SFBool initializeOnly field named "spatialize" */
	void setSpatialize (bool value);

	/** Return X3DSoundSourceNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "source" */
	void getSource (X3DNode result);

	/** Assign X3DSoundSourceNode value (using a properly typed node) to SFNode inputOutput field named "source" */
	void setSource (X3DSoundSourceNode node);

	/** Assign X3DSoundSourceNode value (using a properly typed protoInstance) */
	void setSource (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	float   direction[3];
	float	intensity;
	float   location[3];
	float	maxBack;
	float	maxFront;
	float	minBack;
	float	minFront;
	float	priority;
	BOOL	spatialize;
};
 
//C.3.205 Sphere 
/** Sphere defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API Sphere : public X3DGeometryNode
{

public:
	Sphere();
	virtual ~Sphere();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return float result [] from  type initializeOnly field named "radius" */
	float getRadius ();

	/** Assign float value [] to  type initializeOnly field named "radius" */
	void setRadius (float value);

	/** Return boolean result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign boolean value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	/** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

//Attributes
protected:
	float		radius;
	bool		solid;
};
 
//C.3.206 SphereSensor 
/** SphereSensor defines a concrete node interface that extends interface X3DDragSensorNode. */

class X3D_API SphereSensor : public X3DDragSensorNode
{

public:
	SphereSensor();
	virtual ~SphereSensor();

	/** Return array of 4-tuple float results array in radians from SFRotation outputOnly field named "rotation_changed" */
	float* getRotation ();

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "offset" */
	float* getOffset ();

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "offset" */
	void setOffset (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "trackPoint_changed" */
	//void getTrackPoint (float* result);

	///** Return boolean result from SFBool inputOutput field named "autoOffset" */
	//bool getAutoOffset ();

	///** Assign boolean value to SFBool inputOutput field named "autoOffset" */
	//void setAutoOffset (bool value);

	///** Return boolean result from SFBool outputOnly field named "isOver" */
	//bool getIsOver ();

	///** Return String result [] from SFString inputOutput field named "description" */
	//std::string getDescription ();

	///** Assign String value [] to SFString inputOutput field named "description" */
	//void setDescription (std::string value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.207 SplinePositionInterpolator 
/** SplinePositionInterpolator defines a concrete node interface that extends interface X3DInterpolatorNode. */

class X3D_API SplinePositionInterpolator : public X3DInterpolatorNode
{

public:
	SplinePositionInterpolator();
	virtual ~SplinePositionInterpolator();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "value_changed" */
	float* getValue ();

	/** Return boolean result from SFBool initializeOnly field named "closed" */
	bool getClosed ();

	/** Assign boolean value to SFBool initializeOnly field named "closed" */
	void setClosed (bool value);

	/** Return array of 3-tuple float results array [] from MFVec3f inputOutput field named "keyValue" */
	float* getKeyValue ();

	/** Return number of 3-tuple primitive values in "keyValue" array */
	int getNumKeyValue ();

	/** Assign 3-tuple float array [] to MFVec3f inputOutput field named "keyValue" */
	void setKeyValue (float* values, int size);

	/** Return array of 3-tuple float results array [] from MFVec3f inputOutput field named "keyVelocity" */
	void getKeyVelocity (float* result);

	/** Return number of 3-tuple primitive values in "keyVelocity" array */
	int getNumKeyVelocity ();

	/** Assign 3-tuple float array [] to MFVec3f inputOutput field named "keyVelocity" */
	void setKeyVelocity (float* values);

	/** Return boolean result from SFBool inputOutput field named "normalizeVelocity" */
	bool getNormalizeVelocity ();

	/** Assign boolean value to SFBool inputOutput field named "normalizeVelocity" */
	void setNormalizeVelocity (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	//void setFraction (float value);

	///** Return array of float results array [] from MFFloat inputOutput field named "key" */
	//float* getKey ();

	///** Return number of primitive values in "key" array */
	//int getNumKey ();

	///** Assign float array [] to MFFloat inputOutput field named "key" */
	//void setKey (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	//void setKey (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.208 SplinePositionInterpolator2D 
/** SplinePositionInterpolator2D defines a concrete node interface that extends interface X3DInterpolatorNode. */

class X3D_API SplinePositionInterpolator2D : public X3DInterpolatorNode
{

public:
	SplinePositionInterpolator2D();
	virtual ~SplinePositionInterpolator2D();

	/** Return array of 2-tuple float results array [] from SFVec2f outputOnly field named "value_changed" */
	float* getValue ();

	/** Return boolean result from SFBool initializeOnly field named "closed" */
	bool getClosed ();

	/** Assign boolean value to SFBool initializeOnly field named "closed" */
	void setClosed (bool value);

	/** Return array of 2-tuple float results array [] from MFVec2f inputOutput field named "keyValue" */
	float* getKeyValue ();

	/** Return number of 2-tuple primitive values in "keyValue" array */
	int getNumKeyValue ();

	/** Assign 2-tuple float array [] to MFVec2f inputOutput field named "keyValue" */
	void setKeyValue (float* values, int size);

	/** Return array of 2-tuple float results array [] from MFVec2f inputOutput field named "keyVelocity" */
	void getKeyVelocity (float* result);

	/** Return number of 2-tuple primitive values in "keyVelocity" array */
	int getNumKeyVelocity ();

	/** Assign 2-tuple float array [] to MFVec2f inputOutput field named "keyVelocity" */
	void setKeyVelocity (float* values);

	/** Return boolean result from SFBool inputOutput field named "normalizeVelocity" */
	bool getNormalizeVelocity ();

	/** Assign boolean value to SFBool inputOutput field named "normalizeVelocity" */
	void setNormalizeVelocity (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	//void setFraction (float value);

	///** Return array of float results array [] from MFFloat inputOutput field named "key" */
	//float* getKey ();

	///** Return number of primitive values in "key" array */
	//int getNumKey ();

	///** Assign float array [] to MFFloat inputOutput field named "key" */
	//void setKey (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	//void setKey (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.209 SplineScalarInterpolator 
/** SplineScalarInterpolator defines a concrete node interface that extends interface X3DInterpolatorNode. */

class X3D_API SplineScalarInterpolator : public X3DInterpolatorNode
{

public:
	SplineScalarInterpolator();
	virtual ~SplineScalarInterpolator();

	/** Return float result [] from SFFloat outputOnly field named "value_changed" */
	float getValue ();

	/** Return boolean result from SFBool initializeOnly field named "closed" */
	bool getClosed ();

	/** Assign boolean value to SFBool initializeOnly field named "closed" */
	void setClosed (bool value);

	/** Return array of float results array [] from MFFloat inputOutput field named "keyValue" */
	float* getKeyValue ();

	/** Return number of primitive values in "keyValue" array */
	int getNumKeyValue ();

	/** Assign float array [] to MFFloat inputOutput field named "keyValue" */
	void setKeyValue (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "keyValue" */
	void setKeyValue (float value);

	/** Return array of float results array [] from MFFloat inputOutput field named "keyVelocity" */
	float* getKeyVelocity ();

	/** Return number of primitive values in "keyVelocity" array */
	int getNumKeyVelocity ();

	/** Assign float array [] to MFFloat inputOutput field named "keyVelocity" */
	void setKeyVelocity (float* values);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "keyVelocity" */
	void setKeyVelocity (float value);

	/** Return boolean result from SFBool inputOutput field named "normalizeVelocity" */
	bool getNormalizeVelocity ();

	/** Assign boolean value to SFBool inputOutput field named "normalizeVelocity" */
	void setNormalizeVelocity (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	//void setFraction (float value);

	///** Return array of float results array [] from MFFloat inputOutput field named "key" */
	//float* getKey ();

	///** Return number of primitive values in "key" array */
	//int getNumKey ();

	///** Assign float array [] to MFFloat inputOutput field named "key" */
	//void setKey (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	//void setKey (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.210 SpotLight 
/** SpotLight defines a concrete node interface that extends interface X3DLightNode. */

class X3D_API SpotLight : public X3DLightNode
{

public:
	SpotLight();
	virtual ~SpotLight();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "attenuation" */
	float* getAttenuation ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "attenuation" */
	void setAttenuation (float* value);

	/** Return float result [] from  type inputOutput field named "beamWidth" */
	float getBeamWidth ();

	/** Assign float value [] to  type inputOutput field named "beamWidth" */
	void setBeamWidth (float value);

	/** Return float result in radians from  type inputOutput field named "cutOffAngle" */
	float getCutOffAngle ();

	/** Assign float value in radians to  type inputOutput field named "cutOffAngle" */
	void setCutOffAngle (float angle);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "direction" */
	float* getDirection ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "direction" */
	void setDirection (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "location" */
	float* getLocation ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "location" */
	void setLocation (float* value);

	/** Return float result [] from  type inputOutput field named "radius" */
	float getRadius ();

	/** Assign float value [] to  type inputOutput field named "radius" */
	void setRadius (float value);

	/** Return boolean result from SFBool inputOutput field named "global" */
	bool getGlobal ();

	/** Assign boolean value to SFBool inputOutput field named "global" */
	void setGlobal (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return float result [] from intensityType type inputOutput field named "ambientIntensity" */
	//float getAmbientIntensity ();

	///** Assign float value [] to intensityType type inputOutput field named "ambientIntensity" */
	//void setAmbientIntensity (float value);

	///** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "color" */
	//float* getColor ();

	///** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "color" */
	//void setColor (float* color);

	///** Return float result [] from intensityType type inputOutput field named "intensity" */
	//float getIntensity ();

	///** Assign float value [] to intensityType type inputOutput field named "intensity" */
	//void setIntensity (float value);

	///** Return boolean result from SFBool inputOutput field named "on" */
	//bool getOn ();

	///** Assign boolean value to SFBool inputOutput field named "on" */
	//void setOn (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	void	setAttenuation(SFVec3f Attenuation);
	void	setDirection(SFVec3f Direction);
	void	setLocation(SFVec3f Location);

//Attributes
public:
	//SFVec3f	attenuation;
	float	attenuation[3];
	float	beamWidth;
	float	cutOffAngle;
	//SFVec3f	direction;
	float	direction[3];
	//SFVec3f	location;
	float	location[3];
	float	radius;
};
 
//C.3.211 SquadOrientationInterpolator 
/** SquadOrientationInterpolator defines a concrete node interface that extends interface X3DInterpolatorNode. */

class X3D_API SquadOrientationInterpolator : public X3DInterpolatorNode
{

public:
	SquadOrientationInterpolator();
	virtual ~SquadOrientationInterpolator();

	/** Return array of 4-tuple float results array in radians from SFRotation outputOnly field named "value_changed" */
	float* getValue ();

	/** Return array of 4-tuple float results array in radians from MFRotation inputOutput field named "keyValue" */
	float* getKeyValue ();

	/** Return number of 4-tuple primitive values in "keyValue" array */
	int getNumKeyValue ();

	/** Assign 4-tuple float array in radians to MFRotation inputOutput field named "keyValue" */
	void setKeyValue (float* values, int size);

	/** Return boolean result from SFBool inputOutput field named "normalizeVelocity" */
	bool getNormalizeVelocity ();

	/** Assign boolean value to SFBool inputOutput field named "normalizeVelocity" */
	void setNormalizeVelocity (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	//void setFraction (float value);

	///** Return array of float results array [] from MFFloat inputOutput field named "key" */
	//float* getKey ();

	///** Return number of primitive values in "key" array */
	//int getNumKey ();

	///** Assign float array [] to MFFloat inputOutput field named "key" */
	//void setKey (float* values, int size);

	///** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	//void setKey (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.212 StaticGroup 
/** StaticGroup defines a concrete node interface that extends interfaces X3DChildNodeX3DBoundedObject.
* StaticGroup is similar to Group node but does not allow access to children after creation time. */

class X3D_API StaticGroup : public X3DChildNode, public X3DBoundedObject
{

public:
	StaticGroup();
	virtual ~StaticGroup();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode initializeOnly field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode initializeOnly field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for initializeOnly field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode initializeOnly field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode initializeOnly field named "children" */
	//void setChildren (X3DNode* nodes);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.213 StringSensor 
/** StringSensor defines a concrete node interface that extends interface X3DKeyDeviceSensorNode. */

class X3D_API StringSensor : public X3DKeyDeviceSensorNode
{

public:
	StringSensor();
	virtual ~StringSensor();

	/** Return String result [] from SFString outputOnly field named "enteredText" */
	std::string getEnteredText ();

	/** Return String result [] from SFString outputOnly field named "finalText" */
	std::string getFinalText ();

	/** Return boolean result from SFBool inputOutput field named "deletionAllowed" */
	bool getDeletionAllowed ();

	/** Assign boolean value to SFBool inputOutput field named "deletionAllowed" */
	void setDeletionAllowed (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.214 SurfaceEmitter 
/** SurfaceEmitter defines a concrete node interface that extends interface X3DParticleEmitterNode. */

class X3D_API SurfaceEmitter : public X3DParticleEmitterNode
{

public:
	SurfaceEmitter();
	virtual ~SurfaceEmitter();

	/** Assign MFInt32 value [] to MFInt32 inputOnly field named "set_coordIndex" */
	void setCoordIndex (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOnly field named "set_coordIndex" */
	void setCoordIndex (int32_t value);

	/** Return MFInt32 result [] from MFInt32 initializeOnly field named "coordIndex" */
	int32_t* getCoordIndex ();

	/** Return number of primitive values in "coordIndex" array */
	int getNumCoordIndex ();

	///** Assign MFInt32 value [] to MFInt32 initializeOnly field named "coordIndex" */
	//void setCoordIndex (int32_t* values, int size);

	///** Assign single SFInt32 value [] as the MFInt32 array for initializeOnly field named "coordIndex" */
	//void setCoordIndex (int32_t value);

	/** Return X3DGeometryNode result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "surface" */
	void getSurface (X3DNode result);

	/** Assign X3DGeometryNode value (using a properly typed node) to SFNode initializeOnly field named "surface" */
	void setSurface (X3DGeometryNode node);

	/** Assign X3DGeometryNode value (using a properly typed protoInstance) */
	void setSurface (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return float result [] from SFFloat inputOutput field named "speed" */
	//float getSpeed ();

	///** Assign float value [] to SFFloat inputOutput field named "speed" */
	//void setSpeed (float value);

	///** Return float result [] from SFFloat inputOutput field named "variation" */
	//float getVariation ();

	///** Assign float value [] to SFFloat inputOutput field named "variation" */
	//void setVariation (float value);

	///** Return float result [] from SFFloat inputOutput field named "mass" */
	//float getMass ();

	///** Assign float value [] to SFFloat inputOutput field named "mass" */
	//void setMass (float value);

	///** Return float result [] from SFFloat initializeOnly field named "surfaceArea" */
	//float getSurfaceArea ();

	///** Assign float value [] to SFFloat initializeOnly field named "surfaceArea" */
	//void setSurfaceArea (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.215 Switch 
/** Switch defines a concrete node interface that extends interface X3DGroupingNode. */

class X3D_API Switch : public X3DGroupingNode
{

public:
	Switch();
	virtual ~Switch();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return int result [] from SFInt32 inputOutput field named "whichChoice" */
	int getWhichChoice ();

	/** Assign int value [] to SFInt32 inputOutput field named "whichChoice" */
	void setWhichChoice (int value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	int whichChoice;
};
 
//C.3.216 TexCoordChaser2D 
/** TexCoordChaser2D defines a concrete node interface that extends interface X3DChaserNode. */

class X3D_API TexCoordChaser2D : public X3DChaserNode
{

public:
	TexCoordChaser2D();
	virtual ~TexCoordChaser2D();

	/** Assign 2-tuple float array [] to MFVec2f inputOnly field named "set_destination" */
	void setDestination (float* values);

	/** Assign 2-tuple float array [] to MFVec2f inputOnly field named "set_value" */
	void setValue (float* values);

	/** Return array of 2-tuple float results array [] from MFVec2f outputOnly field named "value_changed" */
	float* getValue ();

	/** Return number of 2-tuple primitive values in "value_changed" array */
	int getNumValue ();

	/** Return array of 2-tuple float results array [] from MFVec2f initializeOnly field named "initialDestination" */
	float* getInitialDestination ();

	/** Return number of 2-tuple primitive values in "initialDestination" array */
	int getNumInitialDestination ();

	/** Assign 2-tuple float array [] to MFVec2f initializeOnly field named "initialDestination" */
	void setInitialDestination (float* values);

	/** Return array of 2-tuple float results array [] from MFVec2f initializeOnly field named "initialValue" */
	float* getInitialValue ();

	/** Return number of 2-tuple primitive values in "initialValue" array */
	int getNumInitialValue ();

	/** Assign 2-tuple float array [] to MFVec2f initializeOnly field named "initialValue" */
	void setInitialValue (float* values);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from  type initializeOnly field named "duration" */
	//double getDuration ();

	///** Assign double value in seconds to  type initializeOnly field named "duration" */
	//void setDuration (double timestamp);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.217 TexCoordDamper2D 
/** TexCoordDamper2D defines a concrete node interface that extends interface X3DDamperNode. */

class X3D_API TexCoordDamper2D : public X3DDamperNode
{

public:
	TexCoordDamper2D();
	virtual ~TexCoordDamper2D();

	/** Assign 2-tuple float array [] to MFVec2f inputOnly field named "set_destination" */
	void setDestination (float* values, int size);

	/** Assign 2-tuple float array [] to MFVec2f inputOnly field named "set_value" */
	void setValue (float* values, int size);

	/** Return array of 2-tuple float results array [] from MFVec2f outputOnly field named "value_changed" */
	float* getValue ();

	/** Return number of 2-tuple primitive values in "value_changed" array */
	int getNumValue ();

	/** Return array of 2-tuple float results array [] from MFVec2f initializeOnly field named "initialDestination" */
	float* getInitialDestination ();

	/** Return number of 2-tuple primitive values in "initialDestination" array */
	int getNumInitialDestination ();

	/** Assign 2-tuple float array [] to MFVec2f initializeOnly field named "initialDestination" */
	void setInitialDestination (float* values, int size);

	/** Return array of 2-tuple float results array [] from MFVec2f initializeOnly field named "initialValue" */
	float* getInitialValue ();

	/** Return number of 2-tuple primitive values in "initialValue" array */
	int getNumInitialValue ();

	/** Assign 2-tuple float array [] to MFVec2f initializeOnly field named "initialValue" */
	void setInitialValue (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from  type inputOutput field named "tau" */
	//double getTau ();

	///** Assign double value in seconds to  type inputOutput field named "tau" */
	//void setTau (double timestamp);

	///** Return float result [] from SFFloat inputOutput field named "tolerance" */
	//float getTolerance ();

	///** Assign float value [] to SFFloat inputOutput field named "tolerance" */
	//void setTolerance (float value);

	///** Return int result [] from  type initializeOnly field named "order" */
	//int getOrder ();

	///** Assign int value [] to  type initializeOnly field named "order" */
	//void setOrder (int value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.218 Text 
/** Text defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API Text : public X3DGeometryNode
{

public:
	Text();
	virtual ~Text();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of 2-tuple float results array [] from MFVec2f outputOnly field named "lineBounds" */
	float* getLineBounds ();

	/** Return number of 2-tuple primitive values in "lineBounds" array */
	int getNumLineBounds ();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "origin" */
	float* getOrigin ();

	/** Return array of 2-tuple float results array [] from SFVec2f outputOnly field named "textBounds" */
	float* getTextBounds ();

	/** Return array of String results array [] from MFString inputOutput field named "string" */
	MFString& getString ();

	/** Return number of primitive values in "string" array */
	int getNumString ();

	/** Assign String array [] to MFString inputOutput field named "string" */
	void setString (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "string" */
	void setString (std::string value);

	/** Return array of float results array [] from MFFloat inputOutput field named "length" */
	float* getLength ();

	/** Return number of primitive values in "length" array */
	int getNumLength ();

	/** Assign float array [] to MFFloat inputOutput field named "length" */
	void setLength (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "length" */
	void setLength (float value);

	/** Return float result [] from  type inputOutput field named "maxExtent" */
	float getMaxExtent ();

	/** Assign float value [] to  type inputOutput field named "maxExtent" */
	void setMaxExtent (float value);

	/** Return boolean result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign boolean value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	/** Return X3DFontStyleNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fontStyle" */
	void getFontStyle (X3DNode result);

	/** Assign X3DFontStyleNode value (using a properly typed node) to SFNode inputOutput field named "fontStyle" */
	void setFontStyle (X3DFontStyleNode node);

	/** Assign X3DFontStyleNode value (using a properly typed protoInstance) */
	void setFontStyle (X3DPrototypeInstance protoInstance);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	void setFontStyle(CFontStyle* style);
	CFontStyle* getFontStyle();

//Attributes
protected:

	CFontStyle* fontstyle;
	MFFloat		length;
	float		maxExtent;
	MFString	string;
	
	MFVec2f		lineBounds;
	SFVec3f		origin;
	SFVec2f		textBounds;
	bool		solid;
};
 
//C.3.219 TextureBackground 
/** TextureBackground defines a concrete node interface that extends interface X3DBackgroundNode. */

class X3D_API TextureBackground : public X3DBackgroundNode
{

public:
	TextureBackground();
	virtual ~TextureBackground();

	/** Return X3DTexture2DNode|MultiTexture result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "backTexture" */
	void getBackTexture (X3DNode result);

	/** Assign X3DTexture2DNode|MultiTexture value (using a properly typed node) to SFNode inputOutput field named "backTexture" */
	void setBackTexture (X3DNode node);

	/** Assign X3DTexture2DNode|MultiTexture value (using a properly typed protoInstance) */
	void setBackTexture (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture2DNode|MultiTexture result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "bottomTexture" */
	void getBottomTexture (X3DNode result);

	/** Assign X3DTexture2DNode|MultiTexture value (using a properly typed node) to SFNode inputOutput field named "bottomTexture" */
	void setBottomTexture (X3DNode node);

	/** Assign X3DTexture2DNode|MultiTexture value (using a properly typed protoInstance) */
	void setBottomTexture (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture2DNode|MultiTexture result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "frontTexture" */
	void getFrontTexture (X3DNode result);

	/** Assign X3DTexture2DNode|MultiTexture value (using a properly typed node) to SFNode inputOutput field named "frontTexture" */
	void setFrontTexture (X3DNode node);

	/** Assign X3DTexture2DNode|MultiTexture value (using a properly typed protoInstance) */
	void setFrontTexture (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture2DNode|MultiTexture result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "leftTexture" */
	void getLeftTexture (X3DNode result);

	/** Assign X3DTexture2DNode|MultiTexture value (using a properly typed node) to SFNode inputOutput field named "leftTexture" */
	void setLeftTexture (X3DNode node);

	/** Assign X3DTexture2DNode|MultiTexture value (using a properly typed protoInstance) */
	void setLeftTexture (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture2DNode|MultiTexture result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "rightTexture" */
	void getRightTexture (X3DNode result);

	/** Assign X3DTexture2DNode|MultiTexture value (using a properly typed node) to SFNode inputOutput field named "rightTexture" */
	void setRightTexture (X3DNode node);

	/** Assign X3DTexture2DNode|MultiTexture value (using a properly typed protoInstance) */
	void setRightTexture (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture2DNode|MultiTexture result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "topTexture" */
	void getTopTexture (X3DNode result);

	/** Assign X3DTexture2DNode|MultiTexture value (using a properly typed node) to SFNode inputOutput field named "topTexture" */
	void setTopTexture (X3DNode node);

	/** Assign X3DTexture2DNode|MultiTexture value (using a properly typed protoInstance) */
	void setTopTexture (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of float results array in radians from MFFloat inputOutput field named "groundAngle" */
	//float* getGroundAngle ();

	///** Return number of primitive values in "groundAngle" array */
	//int getNumGroundAngle ();

	///** Assign float array in radians to MFFloat inputOutput field named "groundAngle" */
	//void setGroundAngle (float* angles, int size);

	///** Assign single float value in radians as the MFFloat array for inputOutput field named "groundAngle" */
	//void setGroundAngle (float angle);

	///** Return array of 3-tuple float results array using RGB values [0..1] from MFColor inputOutput field named "groundColor" */
	//float* getGroundColor ();

	///** Return number of 3-tuple primitive values in "groundColor" array */
	//int getNumGroundColor ();

	///** Assign 3-tuple float array using RGB values [0..1] to MFColor inputOutput field named "groundColor" */
	//void setGroundColor (float* colors, int size);

	///** Return array of float results array in radians from MFFloat inputOutput field named "skyAngle" */
	//float* getSkyAngle ();

	///** Return number of primitive values in "skyAngle" array */
	//int getNumSkyAngle ();

	///** Assign float array in radians to MFFloat inputOutput field named "skyAngle" */
	//void setSkyAngle (float* angles, int size);

	///** Assign single float value in radians as the MFFloat array for inputOutput field named "skyAngle" */
	//void setSkyAngle (float angle);

	///** Return array of 3-tuple float results array using RGB values [0..1] from MFColor inputOutput field named "skyColor" */
	//float* getSkyColor ();

	///** Return number of 3-tuple primitive values in "skyColor" array */
	//int getNumSkyColor ();

	///** Assign 3-tuple float array using RGB values [0..1] to MFColor inputOutput field named "skyColor" */
	//void setSkyColor (float* colors, int size);

	///** Return float result [] from intensityType type inputOutput field named "transparency" */
	//float getTransparency ();

	///** Assign float value [] to intensityType type inputOutput field named "transparency" */
	//void setTransparency (float value);

	///** Assign boolean value to SFBool inputOnly field named "set_bind" */
	//void setBind (bool value);

	///** Return double result in seconds from SFTime outputOnly field named "bindTime" */
	//double getBindTime ();

	///** Return boolean result from SFBool outputOnly field named "isBound" */
	//bool getIsBound ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};

//C.3.221 TextureCoordinate3D 
/** TextureCoordinate3D defines a concrete node interface that extends interface X3DTextureCoordinateNode. */

class X3D_API TextureCoordinate3D : public X3DTextureCoordinateNode
{

public:
	TextureCoordinate3D();
	virtual ~TextureCoordinate3D();

	/** Return array of 3-tuple float results array [] from MFVec3f inputOutput field named "point" */
	float* getPoint ();

	/** Return number of 3-tuple primitive values in "point" array */
	int getNumPoint ();

	/** Assign 3-tuple float array [] to MFVec3f inputOutput field named "point" */
	void setPoint (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.222 TextureCoordinate4D 
/** TextureCoordinate4D defines a concrete node interface that extends interface X3DTextureCoordinateNode. */

class X3D_API TextureCoordinate4D : public X3DTextureCoordinateNode
{

public:
	TextureCoordinate4D();
	virtual ~TextureCoordinate4D();

	/** Return array of 4-tuple float results array [] from MFVec4f inputOutput field named "point" */
	float* getPoint ();

	/** Return number of 4-tuple primitive values in "point" array */
	int getNumPoint ();

	/** Assign 4-tuple float array [] to MFVec4f inputOutput field named "point" */
	void setPoint (float* values, int size);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.223 TextureCoordinateGenerator 
/** TextureCoordinateGenerator defines a concrete node interface that extends interface X3DTextureCoordinateNode. */

class X3D_API TextureCoordinateGenerator : public X3DTextureCoordinateNode
{

public:
	TextureCoordinateGenerator();
	virtual ~TextureCoordinateGenerator();

	/** Return String enumeration result ("SPHERE"|"CAMERASPACENORMAL"|"CAMERASPACEPOSITION"|"CAMERASPACEREFLECTIONVECTOR"|"SPHERE-LOCAL"|"COORD"|"COORD-EYE"|"NOISE"|"NOISE-EYE"|"SPHERE-REFLECT"|"SPHERE-REFLECT-LOCAL") from textureCoordinateGeneratorModeValues type inputOutput field named "mode" */
	std::string getMode ();

	/** Assign String enumeration value ("SPHERE"|"CAMERASPACENORMAL"|"CAMERASPACEPOSITION"|"CAMERASPACEREFLECTIONVECTOR"|"SPHERE-LOCAL"|"COORD"|"COORD-EYE"|"NOISE"|"NOISE-EYE"|"SPHERE-REFLECT"|"SPHERE-REFLECT-LOCAL") to textureCoordinateGeneratorModeValues type inputOutput field named "mode" */
	void setMode (std::string value);

	/** Return array of float results array [] from MFFloat inputOutput field named "parameter" */
	float* getParameter ();

	/** Return number of primitive values in "parameter" array */
	int getNumParameter ();

	/** Assign float array [] to MFFloat inputOutput field named "parameter" */
	void setParameter (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "parameter" */
	void setParameter (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.224 TextureProperties 
/** TextureProperties defines a concrete node interface that extends interface X3DNode. */

class X3D_API TextureProperties : public X3DNode
{

public:
	TextureProperties();
	virtual ~TextureProperties();

	/** Return float result [] from SFFloat inputOutput field named "anisotropicDegree" */
	float getAnisotropicDegree ();

	/** Assign float value [] to SFFloat inputOutput field named "anisotropicDegree" */
	void setAnisotropicDegree (float value);

	/** Return array of 4-tuple float results array using RGBA values [0..1] from SFColorRGBA inputOutput field named "borderColor" */
	float* getBorderColor ();

	/** Assign 4-tuple float array using RGBA values [0..1] to SFColorRGBA inputOutput field named "borderColor" */
	void setBorderColor (float* color);

	/** Return int result [] from SFInt32 inputOutput field named "borderWidth" */
	int getBorderWidth ();

	/** Assign int value [] to SFInt32 inputOutput field named "borderWidth" */
	void setBorderWidth (int value);

	/** Return String enumeration result ("CLAMP"|"CLAMP_TO_EDGE"|"CLAMP_TO_BOUNDARY"|"MIRRORED_REPEAT"|"REPEAT") from textureBoundaryModeValues type inputOutput field named "boundaryModeS" */
	std::string getBoundaryModeS ();

	/** Assign String enumeration value ("CLAMP"|"CLAMP_TO_EDGE"|"CLAMP_TO_BOUNDARY"|"MIRRORED_REPEAT"|"REPEAT") to textureBoundaryModeValues type inputOutput field named "boundaryModeS" */
	void setBoundaryModeS (std::string value);

	/** Return String enumeration result ("CLAMP"|"CLAMP_TO_EDGE"|"CLAMP_TO_BOUNDARY"|"MIRRORED_REPEAT"|"REPEAT") from textureBoundaryModeValues type inputOutput field named "boundaryModeT" */
	std::string getBoundaryModeT ();

	/** Assign String enumeration value ("CLAMP"|"CLAMP_TO_EDGE"|"CLAMP_TO_BOUNDARY"|"MIRRORED_REPEAT"|"REPEAT") to textureBoundaryModeValues type inputOutput field named "boundaryModeT" */
	void setBoundaryModeT (std::string value);

	/** Return String enumeration result ("CLAMP"|"CLAMP_TO_EDGE"|"CLAMP_TO_BOUNDARY"|"MIRRORED_REPEAT"|"REPEAT") from textureBoundaryModeValues type inputOutput field named "boundaryModeR" */
	std::string getBoundaryModeR ();

	/** Assign String enumeration value ("CLAMP"|"CLAMP_TO_EDGE"|"CLAMP_TO_BOUNDARY"|"MIRRORED_REPEAT"|"REPEAT") to textureBoundaryModeValues type inputOutput field named "boundaryModeR" */
	void setBoundaryModeR (std::string value);

	/** Return String enumeration result ("AVG_PIXEL"|"DEFAULT"|"FASTEST"|"NEAREST_PIXEL"|"NICEST") from textureMagnificationModeValues type inputOutput field named "magnificationFilter" */
	std::string getMagnificationFilter ();

	/** Assign String enumeration value ("AVG_PIXEL"|"DEFAULT"|"FASTEST"|"NEAREST_PIXEL"|"NICEST") to textureMagnificationModeValues type inputOutput field named "magnificationFilter" */
	void setMagnificationFilter (std::string value);

	/** Return String enumeration result ("AVG_PIXEL"|"AVG_PIXEL_AVG_MIPMAP"|"AVG_PIXEL_NEAREST_MIPMAP"|"DEFAULT"|"FASTEST"|"NEAREST_PIXEL"|"NEAREST_PIXEL_AVG_MIPMAP"|"NEAREST_PIXEL_NEAREST_MIPMAP"|"NICEST") from textureMinificationModeValues type inputOutput field named "minificationFilter" */
	std::string getMinificationFilter ();

	/** Assign String enumeration value ("AVG_PIXEL"|"AVG_PIXEL_AVG_MIPMAP"|"AVG_PIXEL_NEAREST_MIPMAP"|"DEFAULT"|"FASTEST"|"NEAREST_PIXEL"|"NEAREST_PIXEL_AVG_MIPMAP"|"NEAREST_PIXEL_NEAREST_MIPMAP"|"NICEST") to textureMinificationModeValues type inputOutput field named "minificationFilter" */
	void setMinificationFilter (std::string value);

	/** Return String enumeration result ("DEFAULT"|"FASTEST"|"HIGH"|"LOW"|"MEDIUM"|"NICEST") from textureCompressionModeValues type inputOutput field named "textureCompression" */
	std::string getTextureCompression ();

	/** Assign String enumeration value ("DEFAULT"|"FASTEST"|"HIGH"|"LOW"|"MEDIUM"|"NICEST") to textureCompressionModeValues type inputOutput field named "textureCompression" */
	void setTextureCompression (std::string value);

	/** Return float result [] from SFFloat inputOutput field named "texturePriority" */
	float getTexturePriority ();

	/** Assign float value [] to SFFloat inputOutput field named "texturePriority" */
	void setTexturePriority (float value);

	/** Return boolean result from SFBool initializeOnly field named "generateMipMaps" */
	bool getGenerateMipMaps ();

	/** Assign boolean value to SFBool initializeOnly field named "generateMipMaps" */
	void setGenerateMipMaps (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.225 TextureTransform 
/** TextureTransform defines a concrete node interface that extends interface X3DTextureTransformNode. */

class X3D_API TextureTransform : public X3DTextureTransformNode
{

public:
	TextureTransform();
	virtual ~TextureTransform();

	virtual void Draw();
	virtual std::string getXMLString();

	/** Return array of 2-tuple float results array [] from SFVec2f inputOutput field named "center" */
	void getCenter(float* value);

	/** Assign 2-tuple float array [] to SFVec2f inputOutput field named "center" */
	void setCenter(float* value);

	/** Return float result in radians from SFFloat inputOutput field named "rotation" */
	float getRotation();

	/** Assign float value in radians to SFFloat inputOutput field named "rotation" */
	void setRotation (float value);

	/** Return array of 2-tuple float results array [] from SFVec2f inputOutput field named "scale" */
	void getScale(float* value);

	/** Assign 2-tuple float array [] to SFVec2f inputOutput field named "scale" */
	void setScale (float* value);

	/** Return array of 2-tuple float results array [] from SFVec2f inputOutput field named "translation" */
	void getTranslation(float* value);

	/** Assign 2-tuple float array [] to SFVec2f inputOutput field named "translation" */
	void setTranslation (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
public:
	float		center[2];
	float		rotation;
	float		scale[2];
	float		translation[2];
};
 
//C.3.226 TextureTransform3D 
/** TextureTransform3D defines a concrete node interface that extends interface X3DTextureTransformNode. */

class X3D_API TextureTransform3D : public X3DTextureTransformNode
{

public:
	TextureTransform3D();
	virtual ~TextureTransform3D();

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "center" */
	float* getCenter ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "center" */
	void setCenter (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "rotation" */
	float* getRotation ();

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "rotation" */
	void setRotation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "scale" */
	float* getScale ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "scale" */
	void setScale (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "translation" */
	float* getTranslation ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "translation" */
	void setTranslation (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.227 TextureTransformMatrix3D 
/** TextureTransformMatrix3D defines a concrete node interface that extends interface X3DTextureTransformNode. */

class X3D_API TextureTransformMatrix3D : public X3DTextureTransformNode
{

public:
	TextureTransformMatrix3D();
	virtual ~TextureTransformMatrix3D();

	/** Return array of float results array [] from SFMatrix4f inputOutput field named "matrix" */
	float* getMatrix ();

	/** Assign float array [] to SFMatrix4f inputOutput field named "matrix" */
	void setMatrix (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.228 TimeSensor 
/** TimeSensor defines a concrete node interface that extends interfaces X3DTimeDependentNodeX3DSensorNode. */

class X3D_API TimeSensor : public X3DTimeDependentNode//, public X3DSensorNode
{

public:
	TimeSensor();
	virtual ~TimeSensor();

	//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	//void setDEF(std::string strDef);

	/** Return double result in seconds from SFTime outputOnly field named "cycleTime" */
	double getCycleTime ();

	/** Return float result [] from SFFloat outputOnly field named "fraction_changed" */
	float getFraction ();

	/** Return double result in seconds from SFTime outputOnly field named "time" */
	double getTime ();

	/** Return double result in seconds from  type inputOutput field named "cycleInterval" */
	double getCycleInterval ();

	/** Assign double value in seconds to  type inputOutput field named "cycleInterval" */
	void setCycleInterval (double timestamp);

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from SFTime outputOnly field named "elapsedTime" */
	//double getElapsedTime ();

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool outputOnly field named "isPaused" */
	//bool getIsPaused ();

	///** Return boolean result from SFBool inputOutput field named "loop" */
	//bool getLoop ();

	///** Assign boolean value to SFBool inputOutput field named "loop" */
	//void setLoop (bool value);

	///** Return double result in seconds from SFTime inputOutput field named "pauseTime" */
	//double getPauseTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "pauseTime" */
	//void setPauseTime (double timestamp);

	///** Return double result in seconds from SFTime inputOutput field named "resumeTime" */
	//double getResumeTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "resumeTime" */
	//void setResumeTime (double timestamp);

	///** Return double result in seconds from SFTime inputOutput field named "startTime" */
	//double getStartTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "startTime" */
	//void setStartTime (double timestamp);

	///** Return double result in seconds from SFTime inputOutput field named "stopTime" */
	//double getStopTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "stopTime" */
	//void setStopTime (double timestamp);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	SFTime cycleInterval;
	bool enabled;

};
 
//C.3.229 TimeTrigger 
/** TimeTrigger defines a concrete node interface that extends interface X3DTriggerNode. */

class X3D_API TimeTrigger : public X3DTriggerNode
{

public:
	TimeTrigger();
	virtual ~TimeTrigger();

	/** Assign boolean value to SFBool inputOnly field named "set_boolean" */
	void setBoolean (bool value);

	/** Return int result [] from SFInt32 outputOnly field named "triggerTime" */
	int getTriggerTime ();

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.230 ToneMappedVolumeStyle 
/** ToneMappedVolumeStyle defines a concrete node interface that extends interface X3DComposableVolumeRenderStyleNode. */

class X3D_API ToneMappedVolumeStyle : public X3DComposableVolumeRenderStyleNode
{

public:
	ToneMappedVolumeStyle();
	virtual ~ToneMappedVolumeStyle();

	/** Return array of 4-tuple float results array using RGBA values [0..1] from SFColorRGBA inputOutput field named "coolColor" */
	float* getCoolColor ();

	/** Assign 4-tuple float array using RGBA values [0..1] to SFColorRGBA inputOutput field named "coolColor" */
	void setCoolColor (float* color);

	/** Return array of 4-tuple float results array using RGBA values [0..1] from SFColorRGBA inputOutput field named "warmColor" */
	float* getWarmColor ();

	/** Assign 4-tuple float array using RGBA values [0..1] to SFColorRGBA inputOutput field named "warmColor" */
	void setWarmColor (float* color);

	/** Return X3DTexture3DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "surfaceNormals" */
	void getSurfaceNormals (X3DNode result);

	/** Assign X3DTexture3DNode value (using a properly typed node) to SFNode inputOutput field named "surfaceNormals" */
	void setSurfaceNormals (X3DTexture3DNode node);

	/** Assign X3DTexture3DNode value (using a properly typed protoInstance) */
	void setSurfaceNormals (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.231 TouchSensor 
/** TouchSensor defines a concrete node interface that extends interface X3DTouchSensorNode. */

class X3D_API TouchSensor : public X3DTouchSensorNode
{

public:
	TouchSensor();
	virtual ~TouchSensor();
	virtual std::string getXMLString();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "hitNormal_changed" */
	float* getHitNormal ();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "hitPoint_changed" */
	float* getHitPoint ();

	/** Return array of 2-tuple float results array [] from SFVec2f outputOnly field named "hitTexCoord_changed" */
	float* getHitTexCoord ();

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool outputOnly field named "isOver" */
	//bool getIsOver ();

	///** Return String result [] from SFString inputOutput field named "description" */
	//std::string getDescription ();

	///** Assign String value [] to SFString inputOutput field named "description" */
	//void setDescription (std::string value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return double result in seconds from SFTime outputOnly field named "touchTime" */
	//double getTouchTime ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.232 Transform 
/** Transform defines a concrete node interface that extends interface X3DGroupingNode. */

class X3D_API Transform : public X3DGroupingNode
{

public:
	Transform();
	virtual ~Transform();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "center" */
	void getCenter (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "center" */
	void setCenter (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "rotation" */
	void getRotation (float* value);

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "rotation" */
	void setRotation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "scale" */
	void getScale (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "scale" */
	void setScale (float* value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "scaleOrientation" */
	void getScaleOrientation (float* value);

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "scaleOrientation" */
	void setScaleOrientation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "translation" */
	void getTranslation (float* value);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "translation" */
	void setTranslation (float* value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	void setCenter(SFVec3f val);
	void setRotation(SFVec4f val);
	void setScale(SFVec3f val);
	void setScaleOrientation(SFVec4f val);
	void setTranslation(SFVec3f val);

	//SFVec3f getCenter();
	//SFRotation getRotation();
	//SFVec3f getScale();
	//SFRotation getScaleOrientation();
	//SFVec3f getTranslation();
//
//Attributes
public:
	//SFVec3f		center;
	//SFRotation	rotation;
	//SFVec3f		scale;
	//SFRotation	scaleOrientation;
	//SFVec3f		translation;
	float		center[3];
	float		rotation[4];
	float		scale[3];
	float		scaleOrientation[4];
	float		translation[3];
};
 
//C.3.233 TransformSensor 
/** TransformSensor defines a concrete node interface that extends interface X3DEnvironmentalSensorNode. */

class X3D_API TransformSensor : public X3DEnvironmentalSensorNode
{

public:
	TransformSensor();
	virtual ~TransformSensor();

	/** Return double result in seconds from SFTime outputOnly field named "enterTime" */
	double getEnterTime ();

	/** Return double result in seconds from SFTime outputOnly field named "exitTime" */
	double getExitTime ();

	/** Return array of 4-tuple float results array in radians from SFRotation outputOnly field named "orientation_changed" */
	float* getOrientation ();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "position_changed" */
	SFVec3f getPosition ();

	/** Return X3DGroupingNode|X3DShapeNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "targetObject" */
	void getTargetObject (X3DNode result);

	/** Assign X3DGroupingNode|X3DShapeNode value (using a properly typed node) to SFNode inputOutput field named "targetObject" */
	void setTargetObject (X3DNode node);

	/** Assign X3DGroupingNode|X3DShapeNode value (using a properly typed protoInstance) */
	void setTargetObject (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "center" */
	//float* getCenter ();

	///** Assign 3-tuple float array [] to SFVec3f inputOutput field named "center" */
	//void setCenter (float* value);

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "size" */
	//float* getSize ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "size" */
	//void setSize (float* value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
public:
	SFVec3f position_changed;

};
 
//C.3.234 TransmitterPdu 
/** TransmitterPdu defines a concrete node interface that extends interfaces X3DNetworkSensorNodeX3DBoundedObject. */

class X3D_API TransmitterPdu : public X3DNetworkSensorNode, public X3DBoundedObject
{

public:
	TransmitterPdu();
	virtual ~TransmitterPdu();

	/** Return boolean result from SFBool outputOnly field named "isNetworkReader" */
	bool getIsNetworkReader ();

	/** Return boolean result from SFBool outputOnly field named "isNetworkWriter" */
	bool getIsNetworkWriter ();

	/** Return boolean result from SFBool outputOnly field named "isRtpHeaderHeard" */
	bool getIsRtpHeaderHeard ();

	/** Return boolean result from SFBool outputOnly field named "isStandAlone" */
	bool getIsStandAlone ();

	/** Return double result in seconds from SFTime outputOnly field named "timestamp" */
	double getTimestamp ();

	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	float* getBboxCenter ();

	/** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	void setBboxCenter (float* value);

	/** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	float* getBboxSize ();

	/** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	void setBboxSize (float* value);

	/** Return int result [] from SFInt32 inputOutput field named "whichGeometry" */
	int getWhichGeometry ();

	/** Assign int value [] to SFInt32 inputOutput field named "whichGeometry" */
	void setWhichGeometry (int value);

	/** Return double result in seconds from SFTime inputOutput field named "readInterval" */
	double getReadInterval ();

	/** Assign double value in seconds to SFTime inputOutput field named "readInterval" */
	void setReadInterval (double timestamp);

	/** Return double result in seconds from SFTime inputOutput field named "writeInterval" */
	double getWriteInterval ();

	/** Assign double value in seconds to SFTime inputOutput field named "writeInterval" */
	void setWriteInterval (double timestamp);

	/** Return String enumeration result ("standAlone"|"networkReader"|"networkWriter") from networkModeValues type inputOutput field named "networkMode" */
	std::string getNetworkMode ();

	/** Assign String enumeration value ("standAlone"|"networkReader"|"networkWriter") to networkModeValues type inputOutput field named "networkMode" */
	void setNetworkMode (std::string value);

	/** Return int result [] from SFInt32 inputOutput field named "siteID" */
	int getSiteID ();

	/** Assign int value [] to SFInt32 inputOutput field named "siteID" */
	void setSiteID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "applicationID" */
	int getApplicationID ();

	/** Assign int value [] to SFInt32 inputOutput field named "applicationID" */
	void setApplicationID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "entityID" */
	int getEntityID ();

	/** Assign int value [] to SFInt32 inputOutput field named "entityID" */
	void setEntityID (int value);

	/** Return String result [] from SFString inputOutput field named "address" */
	std::string getAddress ();

	/** Assign String value [] to SFString inputOutput field named "address" */
	void setAddress (std::string value);

	/** Return int result [] from SFInt32 inputOutput field named "port" */
	int getPort ();

	/** Assign int value [] to SFInt32 inputOutput field named "port" */
	void setPort (int value);

	/** Return String result [] from SFString inputOutput field named "multicastRelayHost" */
	std::string getMulticastRelayHost ();

	/** Assign String value [] to SFString inputOutput field named "multicastRelayHost" */
	void setMulticastRelayHost (std::string value);

	/** Return int result [] from SFInt32 inputOutput field named "multicastRelayPort" */
	int getMulticastRelayPort ();

	/** Assign int value [] to SFInt32 inputOutput field named "multicastRelayPort" */
	void setMulticastRelayPort (int value);

	/** Return boolean result from SFBool initializeOnly field named "rtpHeaderExpected" */
	bool getRtpHeaderExpected ();

	/** Assign boolean value to SFBool initializeOnly field named "rtpHeaderExpected" */
	void setRtpHeaderExpected (bool value);

	/** Return int result [] from SFInt32 inputOutput field named "radioID" */
	int getRadioID ();

	/** Assign int value [] to SFInt32 inputOutput field named "radioID" */
	void setRadioID (int value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "antennaLocation" */
	void getAntennaLocation (float* result);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "antennaLocation" */
	void setAntennaLocation (float* value);

	/** Return int result [] from SFInt32 inputOutput field named "antennaPatternLength" */
	int getAntennaPatternLength ();

	/** Assign int value [] to SFInt32 inputOutput field named "antennaPatternLength" */
	void setAntennaPatternLength (int value);

	/** Return int result [] from SFInt32 inputOutput field named "antennaPatternType" */
	int getAntennaPatternType ();

	/** Assign int value [] to SFInt32 inputOutput field named "antennaPatternType" */
	void setAntennaPatternType (int value);

	/** Return int result [] from SFInt32 inputOutput field named "cryptoKeyID" */
	int getCryptoKeyID ();

	/** Assign int value [] to SFInt32 inputOutput field named "cryptoKeyID" */
	void setCryptoKeyID (int value);

	/** Return int result [] from SFInt32 inputOutput field named "cryptoSystem" */
	int getCryptoSystem ();

	/** Assign int value [] to SFInt32 inputOutput field named "cryptoSystem" */
	void setCryptoSystem (int value);

	/** Return int result [] from SFInt32 inputOutput field named "frequency" */
	int getFrequency ();

	/** Assign int value [] to SFInt32 inputOutput field named "frequency" */
	void setFrequency (int value);

	/** Return int result [] from SFInt32 inputOutput field named "inputSource" */
	int getInputSource ();

	/** Assign int value [] to SFInt32 inputOutput field named "inputSource" */
	void setInputSource (int value);

	/** Return int result [] from SFInt32 inputOutput field named "lengthOfModulationParameters" */
	int getLengthOfModulationParameters ();

	/** Assign int value [] to SFInt32 inputOutput field named "lengthOfModulationParameters" */
	void setLengthOfModulationParameters (int value);

	/** Return int result [] from SFInt32 inputOutput field named "modulationTypeDetail" */
	int getModulationTypeDetail ();

	/** Assign int value [] to SFInt32 inputOutput field named "modulationTypeDetail" */
	void setModulationTypeDetail (int value);

	/** Return int result [] from SFInt32 inputOutput field named "modulationTypeMajor" */
	int getModulationTypeMajor ();

	/** Assign int value [] to SFInt32 inputOutput field named "modulationTypeMajor" */
	void setModulationTypeMajor (int value);

	/** Return int result [] from SFInt32 inputOutput field named "modulationTypeSpreadSpectrum" */
	int getModulationTypeSpreadSpectrum ();

	/** Assign int value [] to SFInt32 inputOutput field named "modulationTypeSpreadSpectrum" */
	void setModulationTypeSpreadSpectrum (int value);

	/** Return int result [] from SFInt32 inputOutput field named "modulationTypeSystem" */
	int getModulationTypeSystem ();

	/** Assign int value [] to SFInt32 inputOutput field named "modulationTypeSystem" */
	void setModulationTypeSystem (int value);

	/** Return float result [] from SFFloat inputOutput field named "power" */
	float getPower ();

	/** Assign float value [] to SFFloat inputOutput field named "power" */
	void setPower (float value);

	/** Return int result [] from SFInt32 inputOutput field named "radioEntityTypeCategory" */
	int getRadioEntityTypeCategory ();

	/** Assign int value [] to SFInt32 inputOutput field named "radioEntityTypeCategory" */
	void setRadioEntityTypeCategory (int value);

	/** Return int result [] from SFInt32 inputOutput field named "radioEntityTypeCountry" */
	int getRadioEntityTypeCountry ();

	/** Assign int value [] to SFInt32 inputOutput field named "radioEntityTypeCountry" */
	void setRadioEntityTypeCountry (int value);

	/** Return int result [] from SFInt32 inputOutput field named "radioEntityTypeDomain" */
	int getRadioEntityTypeDomain ();

	/** Assign int value [] to SFInt32 inputOutput field named "radioEntityTypeDomain" */
	void setRadioEntityTypeDomain (int value);

	/** Return int result [] from SFInt32 inputOutput field named "radioEntityTypeKind" */
	int getRadioEntityTypeKind ();

	/** Assign int value [] to SFInt32 inputOutput field named "radioEntityTypeKind" */
	void setRadioEntityTypeKind (int value);

	/** Return int result [] from SFInt32 inputOutput field named "radioEntityTypeNomenclature" */
	int getRadioEntityTypeNomenclature ();

	/** Assign int value [] to SFInt32 inputOutput field named "radioEntityTypeNomenclature" */
	void setRadioEntityTypeNomenclature (int value);

	/** Return int result [] from SFInt32 inputOutput field named "radioEntityTypeNomenclatureVersion" */
	int getRadioEntityTypeNomenclatureVersion ();

	/** Assign int value [] to SFInt32 inputOutput field named "radioEntityTypeNomenclatureVersion" */
	void setRadioEntityTypeNomenclatureVersion (int value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "relativeAntennaLocation" */
	void getRelativeAntennaLocation (float* result);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "relativeAntennaLocation" */
	void setRelativeAntennaLocation (float* value);

	/** Return float result [] from SFFloat inputOutput field named "transmitFrequencyBandwidth" */
	float getTransmitFrequencyBandwidth ();

	/** Assign float value [] to SFFloat inputOutput field named "transmitFrequencyBandwidth" */
	void setTransmitFrequencyBandwidth (float value);

	/** Return int result [] from SFInt32 inputOutput field named "transmitState" */
	int getTransmitState ();

	/** Assign int value [] to SFInt32 inputOutput field named "transmitState" */
	void setTransmitState (int value);

	/** Return array of String results array [] from geoSystemType type initializeOnly field named "geoSystem" */
	std::string* getGeoSystem ();

	/** Return number of primitive values in "geoSystem" array */
	int getNumGeoSystem ();

	/** Assign String array [] to geoSystemType type initializeOnly field named "geoSystem" */
	void setGeoSystem (std::string* values, int size);

	/** Return array of 3-tuple double results array [] from SFVec3d inputOutput field named "geoCoords" */
	double* getGeoCoords ();

	/** Assign 3-tuple double array [] to SFVec3d inputOutput field named "geoCoords" */
	void setGeoCoords (double* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.235 TriangleFanSet 
/** TriangleFanSet defines a concrete node interface that extends interface X3DComposedGeometryNode. */

class X3D_API TriangleFanSet : public X3DComposedGeometryNode
{

public:
	TriangleFanSet();
	virtual ~TriangleFanSet();

	/** Return MFInt32 result [] from MFInt32 inputOutput field named "fanCount" */
	int32_t* getFanCount ();

	/** Return number of primitive values in "fanCount" array */
	int getNumFanCount ();

	/** Assign MFInt32 value [] to MFInt32 inputOutput field named "fanCount" */
	void setFanCount (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOutput field named "fanCount" */
	void setFanCount (int32_t value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool initializeOnly field named "ccw" */
	//bool getCcw ();

	///** Assign boolean value to SFBool initializeOnly field named "ccw" */
	//void setCcw (bool value);

	///** Return boolean result from SFBool initializeOnly field named "colorPerVertex" */
	//bool getColorPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "colorPerVertex" */
	//void setColorPerVertex (bool color);

	///** Return boolean result from SFBool initializeOnly field named "normalPerVertex" */
	//bool getNormalPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "normalPerVertex" */
	//void setNormalPerVertex (bool value);

	///** Return boolean result from SFBool initializeOnly field named "solid" */
	//bool getSolid ();

	///** Assign boolean value to SFBool initializeOnly field named "solid" */
	//void setSolid (bool value);

	///** Return array of X3DVertexAttributeNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "attrib" */
	//void getAttrib (X3DNode* result);

	///** Return number of nodes in "attrib" array */
	//int getNumAttrib ();

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode* nodes);

	///** Assign single X3DVertexAttributeNode value (using a properly typed node) as the MFNode array for inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode node);

	///** Assign X3DVertexAttributeNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DPrototypeInstance node);

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DNode* nodes);

	///** Return X3DColorNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "color" */
	//void getColor (X3DNode result);

	///** Assign X3DColorNode value (using a properly typed node) to SFNode inputOutput field named "color" */
	//void setColor (X3DColorNode color);

	///** Assign X3DColorNode value (using a properly typed protoInstance) */
	//void setColor (X3DPrototypeInstance protoInstance);

	///** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
	//void getCoord (X3DNode result);

	///** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
	//void setCoord (X3DCoordinateNode node);

	///** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	//void setCoord (X3DPrototypeInstance protoInstance);

	///** Return FogCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fogCoord" */
	//void getFogCoord (X3DNode result);

	///** Assign FogCoordinate value (using a properly typed node) to SFNode inputOutput field named "fogCoord" */
	//void setFogCoord (FogCoordinate node);

	///** Assign FogCoordinate value (using a properly typed protoInstance) */
	//void setFogCoord (X3DPrototypeInstance protoInstance);

	///** Return X3DNormalNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "normal" */
	//void getNormal (X3DNode result);

	///** Assign X3DNormalNode value (using a properly typed node) to SFNode inputOutput field named "normal" */
	//void setNormal (X3DNormalNode node);

	///** Assign X3DNormalNode value (using a properly typed protoInstance) */
	//void setNormal (X3DPrototypeInstance protoInstance);

	///** Return X3DTextureCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texCoord" */
	//void getTexCoord (X3DNode result);

	///** Assign X3DTextureCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "texCoord" */
	//void setTexCoord (X3DTextureCoordinateNode node);

	///** Assign X3DTextureCoordinateNode value (using a properly typed protoInstance) */
	//void setTexCoord (X3DPrototypeInstance protoInstance);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.236 TriangleSet 
/** TriangleSet defines a concrete node interface that extends interface X3DComposedGeometryNode. */

class X3D_API TriangleSet : public X3DComposedGeometryNode
{

public:
	TriangleSet();
	virtual ~TriangleSet();

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool initializeOnly field named "ccw" */
	//bool getCcw ();

	///** Assign boolean value to SFBool initializeOnly field named "ccw" */
	//void setCcw (bool value);

	///** Return boolean result from SFBool initializeOnly field named "colorPerVertex" */
	//bool getColorPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "colorPerVertex" */
	//void setColorPerVertex (bool color);

	///** Return boolean result from SFBool initializeOnly field named "normalPerVertex" */
	//bool getNormalPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "normalPerVertex" */
	//void setNormalPerVertex (bool value);

	///** Return boolean result from SFBool initializeOnly field named "solid" */
	//bool getSolid ();

	///** Assign boolean value to SFBool initializeOnly field named "solid" */
	//void setSolid (bool value);

	///** Return array of X3DVertexAttributeNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "attrib" */
	//void getAttrib (X3DNode* result);

	///** Return number of nodes in "attrib" array */
	//int getNumAttrib ();

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode* nodes);

	///** Assign single X3DVertexAttributeNode value (using a properly typed node) as the MFNode array for inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode node);

	///** Assign X3DVertexAttributeNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DPrototypeInstance node);

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DNode* nodes);

	///** Return X3DColorNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "color" */
	//void getColor (X3DNode result);

	///** Assign X3DColorNode value (using a properly typed node) to SFNode inputOutput field named "color" */
	//void setColor (X3DColorNode color);

	///** Assign X3DColorNode value (using a properly typed protoInstance) */
	//void setColor (X3DPrototypeInstance protoInstance);

	///** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
	//void getCoord (X3DNode result);

	///** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
	//void setCoord (X3DCoordinateNode node);

	///** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	//void setCoord (X3DPrototypeInstance protoInstance);

	///** Return FogCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fogCoord" */
	//void getFogCoord (X3DNode result);

	///** Assign FogCoordinate value (using a properly typed node) to SFNode inputOutput field named "fogCoord" */
	//void setFogCoord (FogCoordinate node);

	///** Assign FogCoordinate value (using a properly typed protoInstance) */
	//void setFogCoord (X3DPrototypeInstance protoInstance);

	///** Return X3DNormalNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "normal" */
	//void getNormal (X3DNode result);

	///** Assign X3DNormalNode value (using a properly typed node) to SFNode inputOutput field named "normal" */
	//void setNormal (X3DNormalNode node);

	///** Assign X3DNormalNode value (using a properly typed protoInstance) */
	//void setNormal (X3DPrototypeInstance protoInstance);

	///** Return X3DTextureCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texCoord" */
	//void getTexCoord (X3DNode result);

	///** Assign X3DTextureCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "texCoord" */
	//void setTexCoord (X3DTextureCoordinateNode node);

	///** Assign X3DTextureCoordinateNode value (using a properly typed protoInstance) */
	//void setTexCoord (X3DPrototypeInstance protoInstance);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.237 TriangleSet2D 
/** TriangleSet2D defines a concrete node interface that extends interface X3DGeometryNode. */

class X3D_API TriangleSet2D : public X3DGeometryNode
{

public:
	TriangleSet2D();
	virtual ~TriangleSet2D();

	/** Return array of 2-tuple float results array [] from MFVec2f inputOutput field named "vertices" */
	float* getVertices ();

	/** Return number of 2-tuple primitive values in "vertices" array */
	int getNumVertices ();

	/** Assign 2-tuple float array [] to MFVec2f inputOutput field named "vertices" */
	void setVertices (float* values, int size);

	/** Return boolean result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign boolean value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.238 TriangleStripSet 
/** TriangleStripSet defines a concrete node interface that extends interface X3DComposedGeometryNode. */

class X3D_API TriangleStripSet : public X3DComposedGeometryNode
{

public:
	TriangleStripSet();
	virtual ~TriangleStripSet();

	/** Return MFInt32 result [] from MFInt32 inputOutput field named "stripCount" */
	int32_t* getStripCount ();

	/** Return number of primitive values in "stripCount" array */
	int getNumStripCount ();

	/** Assign MFInt32 value [] to MFInt32 inputOutput field named "stripCount" */
	void setStripCount (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOutput field named "stripCount" */
	void setStripCount (int32_t value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool initializeOnly field named "ccw" */
	//bool getCcw ();

	///** Assign boolean value to SFBool initializeOnly field named "ccw" */
	//void setCcw (bool value);

	///** Return boolean result from SFBool initializeOnly field named "colorPerVertex" */
	//bool getColorPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "colorPerVertex" */
	//void setColorPerVertex (bool color);

	///** Return boolean result from SFBool initializeOnly field named "normalPerVertex" */
	//bool getNormalPerVertex ();

	///** Assign boolean value to SFBool initializeOnly field named "normalPerVertex" */
	//void setNormalPerVertex (bool value);

	///** Return boolean result from SFBool initializeOnly field named "solid" */
	//bool getSolid ();

	///** Assign boolean value to SFBool initializeOnly field named "solid" */
	//void setSolid (bool value);

	///** Return array of X3DVertexAttributeNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "attrib" */
	//void getAttrib (X3DNode* result);

	///** Return number of nodes in "attrib" array */
	//int getNumAttrib ();

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode* nodes);

	///** Assign single X3DVertexAttributeNode value (using a properly typed node) as the MFNode array for inputOutput field named "attrib" */
	//void setAttrib (X3DVertexAttributeNode node);

	///** Assign X3DVertexAttributeNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DPrototypeInstance node);

	///** Assign X3DVertexAttributeNode array (using a properly typed node array) to MFNode inputOutput field named "attrib" */
	//void setAttrib (X3DNode* nodes);

	///** Return X3DColorNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "color" */
	//void getColor (X3DNode result);

	///** Assign X3DColorNode value (using a properly typed node) to SFNode inputOutput field named "color" */
	//void setColor (X3DColorNode color);

	///** Assign X3DColorNode value (using a properly typed protoInstance) */
	//void setColor (X3DPrototypeInstance protoInstance);

	///** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
	//void getCoord (X3DNode result);

	///** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
	//void setCoord (X3DCoordinateNode node);

	///** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	//void setCoord (X3DPrototypeInstance protoInstance);

	///** Return FogCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fogCoord" */
	//void getFogCoord (X3DNode result);

	///** Assign FogCoordinate value (using a properly typed node) to SFNode inputOutput field named "fogCoord" */
	//void setFogCoord (FogCoordinate node);

	///** Assign FogCoordinate value (using a properly typed protoInstance) */
	//void setFogCoord (X3DPrototypeInstance protoInstance);

	///** Return X3DNormalNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "normal" */
	//void getNormal (X3DNode result);

	///** Assign X3DNormalNode value (using a properly typed node) to SFNode inputOutput field named "normal" */
	//void setNormal (X3DNormalNode node);

	///** Assign X3DNormalNode value (using a properly typed protoInstance) */
	//void setNormal (X3DPrototypeInstance protoInstance);

	///** Return X3DTextureCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texCoord" */
	//void getTexCoord (X3DNode result);

	///** Assign X3DTextureCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "texCoord" */
	//void setTexCoord (X3DTextureCoordinateNode node);

	///** Assign X3DTextureCoordinateNode value (using a properly typed protoInstance) */
	//void setTexCoord (X3DPrototypeInstance protoInstance);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.239 TwoSidedMaterial 
/** TwoSidedMaterial defines a concrete node interface that extends interface X3DMaterialNode. */

class X3D_API TwoSidedMaterial : public X3DMaterialNode
{

public:
	TwoSidedMaterial();
	virtual ~TwoSidedMaterial();

	//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return float result [] from intensityType type inputOutput field named "ambientIntensity" */
	float getAmbientIntensity ();

	/** Assign float value [] to intensityType type inputOutput field named "ambientIntensity" */
	void setAmbientIntensity (float value);

	/** Return float result [] from intensityType type inputOutput field named "backAmbientIntensity" */
	float getBackAmbientIntensity ();

	/** Assign float value [] to intensityType type inputOutput field named "backAmbientIntensity" */
	void setBackAmbientIntensity (float value);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "diffuseColor" */
	float* getDiffuseColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "diffuseColor" */
	void setDiffuseColor (float* color);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "backDiffuseColor" */
	float* getBackDiffuseColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "backDiffuseColor" */
	void setBackDiffuseColor (float* color);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "emissiveColor" */
	float* getEmissiveColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "emissiveColor" */
	void setEmissiveColor (float* color);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "backEmissiveColor" */
	float* getBackEmissiveColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "backEmissiveColor" */
	void setBackEmissiveColor (float* color);

	/** Return float result [] from intensityType type inputOutput field named "shininess" */
	float getShininess ();

	/** Assign float value [] to intensityType type inputOutput field named "shininess" */
	void setShininess (float value);

	/** Return float result [] from intensityType type inputOutput field named "backShininess" */
	float getBackShininess ();

	/** Assign float value [] to intensityType type inputOutput field named "backShininess" */
	void setBackShininess (float value);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "specularColor" */
	float* getSpecularColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "specularColor" */
	void setSpecularColor (float* color);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "backSpecularColor" */
	float* getBackSpecularColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "backSpecularColor" */
	void setBackSpecularColor (float* color);

	/** Return float result [] from intensityType type inputOutput field named "transparency" */
	float getTransparency ();

	/** Assign float value [] to intensityType type inputOutput field named "transparency" */
	void setTransparency (float value);

	/** Return float result [] from intensityType type inputOutput field named "backTransparency" */
	float getBackTransparency ();

	/** Assign float value [] to intensityType type inputOutput field named "backTransparency" */
	void setBackTransparency (float value);

	/** Return boolean result from SFBool inputOutput field named "separateBackColor" */
	bool getSeparateBackColor ();

	/** Assign boolean value to SFBool inputOutput field named "separateBackColor" */
	void setSeparateBackColor (bool color);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	//SFColor* getDiffuseColor();
	void setDiffuseColor(SFVec3f val);
	void setEmissiveColor(SFVec3f val);
	void setSpecularColor(SFVec3f val);

	//SFColor* getBackDiffuseColor();
	void setBackDiffuseColor(SFVec3f val);
	void setBackEmissiveColor(SFVec3f val);
	void setBackSpecularColor(SFVec3f val);

//Attributes
public:
	float	ambientIntensity;
	float	diffuseColor[3];
	//SFColor	diffuseColor;
	float	emissiveColor[3];
	float	shininess;
	float	specularColor[3];
	float	transparency;

	bool	separateBackColor;
	float	backAmbientIntensity;
	float	backDiffuseColor[3];
	//SFColor	backDiffuseColor;
	float	backEmissiveColor[3];
	float	backShininess;
	float	backSpecularColor[3];
	float	backTransparency;

};
 
 
//C.3.240 unit 
/** unit defines a concrete node interface that extends interface SceneGraphStructureStatement. */

class X3D_API unit : public SceneGraphStructureStatement
{

public:
	unit();
	virtual ~unit();

	/** Return String enumeration result ("angle"|"force"|"length"|"mass") from unitCategories type initializeOnly field named "category" */
	std::string getCategory ();

	/** Assign String enumeration value ("angle"|"force"|"length"|"mass") to unitCategories type initializeOnly field named "category" */
	void setCategory (std::string value);

	/** Return xs:NMTOKEN result [] from xs:NMTOKEN type inputOutput field named "name" */
	//xs:NMTOKEN getName ();
	std::string* getName ();

	/** Assign xs:NMTOKEN value [] to xs:NMTOKEN type inputOutput field named "name" */
	//void setName (xs:NMTOKEN value);
	void setName (std::string* value);

	/** Return double result [] from  type inputOutput field named "conversionFactor" */
	double getConversionFactor ();

	/** Assign double value [] to  type inputOutput field named "conversionFactor" */
	void setConversionFactor (double value);
};
 
//C.3.241 UniversalJoint 
/** UniversalJoint defines a concrete node interface that extends interface X3DRigidJointNode. */

class X3D_API UniversalJoint : public X3DRigidJointNode
{

public:
	UniversalJoint();
	virtual ~UniversalJoint();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "body1AnchorPoint" */
	float* getBody1AnchorPoint ();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "body1Axis" */
	float* getBody1Axis ();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "body2AnchorPoint" */
	float* getBody2AnchorPoint ();

	/** Return float result [] from SFFloat outputOnly field named "body2Axis" */
	float getBody2Axis ();

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "anchorPoint" */
	float* getAnchorPoint ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "anchorPoint" */
	void setAnchorPoint (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "axis1" */
	void getAxis1 (float* result);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "axis1" */
	void setAxis1 (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "axis2" */
	void getAxis2 (float* result);

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "axis2" */
	void setAxis2 (float* value);

	/** Return float result [] from SFFloat inputOutput field named "stop1Bounce" */
	float getStop1Bounce ();

	/** Assign float value [] to SFFloat inputOutput field named "stop1Bounce" */
	void setStop1Bounce (float value);

	/** Return float result [] from SFFloat inputOutput field named "stop1ErrorCorrection" */
	float getStop1ErrorCorrection ();

	/** Assign float value [] to SFFloat inputOutput field named "stop1ErrorCorrection" */
	void setStop1ErrorCorrection (float value);

	/** Return float result [] from SFFloat inputOutput field named "stop2Bounce" */
	float getStop2Bounce ();

	/** Assign float value [] to SFFloat inputOutput field named "stop2Bounce" */
	void setStop2Bounce (float value);

	/** Return float result [] from SFFloat inputOutput field named "stop2ErrorCorrection" */
	float getStop2ErrorCorrection ();

	/** Assign float value [] to SFFloat inputOutput field named "stop2ErrorCorrection" */
	void setStop2ErrorCorrection (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of String results array [] from MFString inputOutput field named "forceOutput" */
	//std::string* getForceOutput ();

	///** Return number of primitive values in "forceOutput" array */
	//int getNumForceOutput ();

	///** Assign String array [] to MFString inputOutput field named "forceOutput" */
	//void setForceOutput (std::string* values);

	///** Assign single String value [] as the MFString array for inputOutput field named "forceOutput" */
	//void setForceOutput (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body1" */
	//void getBody1 (X3DNode result);

	///** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body1" */
	//void setBody1 (RigidBody node);

	///** Assign RigidBody value (using a properly typed protoInstance) */
	//void setBody1 (X3DPrototypeInstance protoInstance);

	///** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body2" */
	//void getBody2 (X3DNode result);

	///** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body2" */
	//void setBody2 (RigidBody node);

	///** Assign RigidBody value (using a properly typed protoInstance) */
	//void setBody2 (X3DPrototypeInstance protoInstance);
};
 
//C.3.242 Viewpoint 
/** Viewpoint defines a concrete node interface that extends interface X3DViewpointNode. */

class X3D_API Viewpoint : public X3DViewpointNode
{

public:
	Viewpoint();
	virtual ~Viewpoint();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return array of 3-tuple float results array in radians from SFVec3f inputOutput field named "centerOfRotation" */
	//float* getCenterOfRotation ();

	/** Assign 3-tuple float array in radians to SFVec3f inputOutput field named "centerOfRotation" */
	//void setCenterOfRotation (float* value);

	/** Return float result [] from SFFloat inputOutput field named "fieldOfView" */
	float getFieldOfView ();

	/** Assign float value [] to SFFloat inputOutput field named "fieldOfView" */
	void setFieldOfView (float value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "position" */
	//float* getPosition ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "position" */
	//void setPosition (float* value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Assign boolean value to SFBool inputOnly field named "set_bind" */
	//void setBind (bool value);

	///** Return double result in seconds from SFTime outputOnly field named "bindTime" */
	//double getBindTime ();

	///** Return boolean result from SFBool outputOnly field named "isBound" */
	//bool getIsBound ();

	///** Return String result [] from SFString inputOutput field named "description" */
	//std::string getDescription ();

	///** Assign String value [] to SFString inputOutput field named "description" */
	//void setDescription (std::string value);

	///** Return boolean result from SFBool inputOutput field named "jump" */
	//bool getJump ();

	///** Assign boolean value to SFBool inputOutput field named "jump" */
	//void setJump (bool value);

	///** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "orientation" */
	//float* getOrientation ();

	///** Assign 4-tuple float array in radians to SFRotation inputOutput field named "orientation" */
	//void setOrientation (float* value);

	///** Return boolean result from SFBool inputOutput field named "retainUserOffsets" */
	//bool getRetainUserOffsets ();

	///** Assign boolean value to SFBool inputOutput field named "retainUserOffsets" */
	//void setRetainUserOffsets (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	//void setPosition(SFVec3f pos);
//Attributes
protected:
	float	fieldOfView;
	//float	position[3];
	//float	centerOfRotation[3];
};
 
//C.3.243 ViewpointGroup 
/** ViewpointGroup defines a concrete node interface that extends interface X3DChildNode. */

class X3D_API ViewpointGroup : public X3DChildNode
{

public:
	ViewpointGroup();
	virtual ~ViewpointGroup();

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "center" */
	float* getCenter ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "center" */
	void setCenter (float* value);

	/** Return String result [] from SFString inputOutput field named "description" */
	std::string getDescription ();

	/** Assign String value [] to SFString inputOutput field named "description" */
	void setDescription (std::string value);

	/** Return boolean result from SFBool inputOutput field named "displayed" */
	bool getDisplayed ();

	/** Assign boolean value to SFBool inputOutput field named "displayed" */
	void setDisplayed (bool value);

	/** Return boolean result from SFBool inputOutput field named "retainUserOffsets" */
	bool getRetainUserOffsets ();

	/** Assign boolean value to SFBool inputOutput field named "retainUserOffsets" */
	void setRetainUserOffsets (bool value);

	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "size" */
	float* getSize ();

	/** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "size" */
	void setSize (float* value);

	/** Return array of X3DViewpointNode|ViewpointGroup results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	void getChildren (X3DNode* result);

	/** Return number of nodes in "children" array */
	int getNumChildren ();

	/** Assign X3DViewpointNode|ViewpointGroup array (using a properly typed node array) to MFNode inputOutput field named "children" */
	void setChildren (X3DNode* nodes);

	/** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	void setChildren (X3DNode node);

	/** Assign X3DViewpointNode|ViewpointGroup array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	void setChildren (X3DPrototypeInstance node);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.244 Viewport 
/** Viewport defines a concrete node interface that extends interface X3DViewportNode. */

class X3D_API Viewport : public X3DViewportNode
{

public:
	Viewport();
	virtual ~Viewport();

	/** Return array of float results array [] from MFFloat inputOutput field named "clipBoundary" */
	float* getClipBoundary ();

	/** Return number of primitive values in "clipBoundary" array */
	int getNumClipBoundary ();

	/** Assign float array [] to MFFloat inputOutput field named "clipBoundary" */
	void setClipBoundary (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "clipBoundary" */
	void setClipBoundary (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//void getChildren (X3DNode* result);

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes);

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node);

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node);

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.245 VisibilitySensor 
/** VisibilitySensor defines a concrete node interface that extends interface X3DEnvironmentalSensorNode. */

class X3D_API VisibilitySensor : public X3DEnvironmentalSensorNode
{

public:
	VisibilitySensor();
	virtual ~VisibilitySensor();

	/** Return double result in seconds from SFTime outputOnly field named "enterTime" */
	double getEnterTime ();

	/** Return double result in seconds from SFTime outputOnly field named "exitTime" */
	double getExitTime ();

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "center" */
	//float* getCenter ();

	///** Assign 3-tuple float array [] to SFVec3f inputOutput field named "center" */
	//void setCenter (float* value);

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "size" */
	//float* getSize ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "size" */
	//void setSize (float* value);

	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};

//C.3.246 VolumeData 
/** VolumeData defines a concrete node interface that extends interface X3DVolumeDataNode. */

class X3D_API VolumeData : public X3DVolumeDataNode
{

public:
	VolumeData();
	virtual ~VolumeData();

	/** Return X3DVolumeRenderStyleNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "renderStyle" */
	void getRenderStyle (X3DNode result);

	/** Assign X3DVolumeRenderStyleNode value (using a properly typed node) to SFNode inputOutput field named "renderStyle" */
	void setRenderStyle (X3DVolumeRenderStyleNode node);

	/** Assign X3DVolumeRenderStyleNode value (using a properly typed protoInstance) */
	void setRenderStyle (X3DPrototypeInstance protoInstance);

	/** Return X3DTexture3DNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "voxels" */
	void getVoxels (X3DNode result);

	/** Assign X3DTexture3DNode value (using a properly typed node) to SFNode inputOutput field named "voxels" */
	void setVoxels (X3DTexture3DNode node);

	/** Assign X3DTexture3DNode value (using a properly typed protoInstance) */
	void setVoxels (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "dimensions" */
	//float* getDimensions ();

	///** Assign 3-tuple float array [] to SFVec3f inputOutput field named "dimensions" */
	//void setDimensions (float* value);

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.247 VolumeEmitter 
/** VolumeEmitter defines a concrete node interface that extends interface X3DParticleEmitterNode. */

class X3D_API VolumeEmitter : public X3DParticleEmitterNode
{

public:
	VolumeEmitter();
	virtual ~VolumeEmitter();

	/** Assign MFInt32 value [] to MFInt32 inputOnly field named "set_coordIndex" */
	void setCoordIndex (int32_t* values, int size);

	/** Assign single SFInt32 value [] as the MFInt32 array for inputOnly field named "set_coordIndex" */
	void setCoordIndex (int32_t value);

	/** Return MFInt32 result [] from MFInt32 initializeOnly field named "coordIndex" */
	int32_t* getCoordIndex ();

	/** Return number of primitive values in "coordIndex" array */
	int getNumCoordIndex ();

	///** Assign MFInt32 value [] to MFInt32 initializeOnly field named "coordIndex" */
	//void setCoordIndex (int32_t* values);

	///** Assign single SFInt32 value [] as the MFInt32 array for initializeOnly field named "coordIndex" */
	//void setCoordIndex (int32_t value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "direction" */
	float* getDirection ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "direction" */
	void setDirection (float* value);

	/** Return boolean result from SFBool initializeOnly field named "internal" */
	bool getInternal ();

	/** Assign boolean value to SFBool initializeOnly field named "internal" */
	void setInternal (bool value);

	/** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
	void getCoord (X3DNode result);

	/** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
	void setCoord (X3DCoordinateNode node);

	/** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	void setCoord (X3DPrototypeInstance protoInstance);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return float result [] from SFFloat inputOutput field named "speed" */
	//float getSpeed ();

	///** Assign float value [] to SFFloat inputOutput field named "speed" */
	//void setSpeed (float value);

	///** Return float result [] from SFFloat inputOutput field named "variation" */
	//float getVariation ();

	///** Assign float value [] to SFFloat inputOutput field named "variation" */
	//void setVariation (float value);

	///** Return float result [] from SFFloat inputOutput field named "mass" */
	//float getMass ();

	///** Assign float value [] to SFFloat inputOutput field named "mass" */
	//void setMass (float value);

	///** Return float result [] from SFFloat initializeOnly field named "surfaceArea" */
	//float getSurfaceArea ();

	///** Assign float value [] to SFFloat initializeOnly field named "surfaceArea" */
	//void setSurfaceArea (float value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.248 VolumePickSensor 
/** VolumePickSensor defines a concrete node interface that extends interface X3DPickSensorNode. */

class X3D_API VolumePickSensor : public X3DPickSensorNode
{

public:
	VolumePickSensor();
	virtual ~VolumePickSensor();

	//// ===== methods for fields inherited from parent interfaces =====
	///** Return boolean result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return array of String results array ["ALL","NONE","TERRAIN",...] from MFString inputOutput field named "objectType" */
	//std::string* getObjectType ();

	///** Return number of primitive values in "objectType" array */
	//int getNumObjectType ();

	///** Assign String array ["ALL","NONE","TERRAIN",...] to MFString inputOutput field named "objectType" */
	//void setObjectType (std::string* values, int size);

	///** Assign single String value ["ALL","NONE","TERRAIN",...] as the MFString array for inputOutput field named "objectType" */
	//void setObjectType (std::string value);

	///** Return String result (enumeration values "GEOMETRY"|"BOUNDS"|...) from SFString initializeOnly field named "intersectionType" */
	//std::string getIntersectionType ();

	///** Assign String value (enumeration values "GEOMETRY"|"BOUNDS"|...) to SFString initializeOnly field named "intersectionType" */
	//void setIntersectionType (std::string value);

	///** Return String result ["ANY"|"CLOSEST"|"ALL"|"ALL_SORTED"] from  type initializeOnly field named "sortOrder" */
	//std::string getSortOrder ();

	///** Assign String value ["ANY"|"CLOSEST"|"ALL"|"ALL_SORTED"] to  type initializeOnly field named "sortOrder" */
	//void setSortOrder (std::string value);

	///** Return array of X3DGroupingNode|X3DShapeNode|Inline results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "pickTarget" */
	//void getPickTarget (X3DNode* result);

	///** Return number of nodes in "pickTarget" array */
	//int getNumPickTarget ();

	///** Assign X3DGroupingNode|X3DShapeNode|Inline array (using a properly typed node array) to MFNode inputOutput field named "pickTarget" */
	//void setPickTarget (X3DNode* nodes);

	///** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOutput field named "pickTarget" */
	//void setPickTarget (X3DNode node);

	///** Assign X3DGroupingNode|X3DShapeNode|Inline array (using a properly typed protoInstance array) to MFNode inputOutput field named "pickTarget" */
	//void setPickTarget (X3DPrototypeInstance node);

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode outputOnly field named "pickedGeometry" */
	//void getPickedGeometry (X3DNode* result);

	///** Return number of nodes in "pickedGeometry" array */
	//int getNumPickedGeometry ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	///** Return X3DGeometryNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "pickingGeometry" */
	//void getPickingGeometry (X3DNode result);

	///** Assign X3DGeometryNode value (using a properly typed node) to SFNode inputOutput field named "pickingGeometry" */
	//void setPickingGeometry (X3DGeometryNode node);

	///** Assign X3DGeometryNode value (using a properly typed protoInstance) */
	//void setPickingGeometry (X3DPrototypeInstance protoInstance);
};
 
//C.3.249 WindPhysicsModel 
/** WindPhysicsModel defines a concrete node interface that extends interface X3DParticlePhysicsModelNode. */

class X3D_API WindPhysicsModel : public X3DParticlePhysicsModelNode
{

public:
	WindPhysicsModel();
	virtual ~WindPhysicsModel();

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "direction" */
	float* getDirection ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "direction" */
	void setDirection (float* value);

	/** Return float result [] from SFFloat inputOutput field named "gustiness" */
	float getGustiness ();

	/** Assign float value [] to SFFloat inputOutput field named "gustiness" */
	void setGustiness (float value);

	/** Return float result [] from SFFloat inputOutput field named "speed" */
	float getSpeed ();

	/** Assign float value [] to SFFloat inputOutput field named "speed" */
	void setSpeed (float value);

	/** Return float result [] from SFFloat inputOutput field named "turbulence" */
	float getTurbulence ();

	/** Assign float value [] to SFFloat inputOutput field named "turbulence" */
	void setTurbulence (float value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return boolean result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign boolean value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
};
 
//C.3.250 WorldInfo 
/** WorldInfo defines a concrete node interface that extends interface X3DInfoNode. */

class X3D_API WorldInfo : public X3DInfoNode
{

public:
	WorldInfo();
	virtual ~WorldInfo();
	virtual std::string getXMLString();

	/** Return array of String results array [] from MFString initializeOnly field named "info" */
	std::string* getInfo ();

	/** Return number of primitive values in "info" array */
	int getNumInfo ();

	/** Assign String array [] to MFString initializeOnly field named "info" */
	void setInfo (std::string* values, int size);

	/** Assign single String value [] as the MFString array for initializeOnly field named "info" */
	void setInfo (std::string value);

	/** Return String result [] from SFString initializeOnly field named "title" */
	std::string getTitle ();

	/** Assign String value [] to SFString initializeOnly field named "title" */
	void setTitle (std::string value);

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	MFString info;
	std::string title;
};
 
//C.3.251 X3D 
/** X3D defines a concrete node interface that extends interface SceneGraphStructureStatement. */

class X3D_API X3D : public SceneGraphStructureStatement
{

public:
	X3D();
	virtual ~X3D();
	virtual std::string getXMLString();

	/** Return String result [] from x3dVersion type inputOutput field named "version" */
	std::string getVersion ();

	/** Assign String value [] to x3dVersion type inputOutput field named "version" */
	void setVersion (std::string value);

	/** Return String result [] from profileNames type inputOutput field named "profile" */
	std::string getProfile ();

	/** Assign String value [] to profileNames type inputOutput field named "profile" */
	void setProfile (std::string value);

	void setHead(head* node);

	void setHead();

	void setScene(Scene* node);

	void setScene();


private:

	std::string version;
	std::string profile;

};
