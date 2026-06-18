#if !defined(XML_PARSER_H)
#define XML_PARSER_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


// -- CArray STL --
//
#include <afxtempl.h>

// -- Load MSXML library --
// 
#import <msxml6.dll>
using namespace MSXML2;

// typedef VOID (CALLBACK* TIMERPROC)(HWND, UINT, UINT, DWORD);

typedef void (* Element_Callback) ( LPCTSTR lpszFullNodename, LPCTSTR lpszNodeValue );
typedef void (* Attribute_Callback) ( LPCTSTR lpszFullNodename, LPCTSTR lpszAttributename, LPCTSTR lpszAttributeValue );


class XML_PARSER
{

public:
	// -- Constructor --
	//
	XML_PARSER();

	// -- Destructor --
	//
	virtual ~XML_PARSER();

	// -- Load // Save // Reset An XML document --
	//
	bool Load_XML_Document(LPCTSTR strFileName);					// Load an XML Document from File
	bool Save_XML_Document(LPCTSTR strFileName);					// Save the Current XML Document into a file
	void Load_XML_From_Buffer(LPCTSTR source);					// Load an XML Document from Buffer
	void Reset_XML_Document();							// Clear the XML Document 

	// -- **************************************** --	
	// -- DERIVED CLASS MUST IMPLEMENT this METHOD --
	// -- **************************************** --
	virtual void Parse_XML_Document();

	// -- *********************** --
	// -- *** READING METHODS *** --
	// -- *********************** --

	// -- Control Chaining Tags
	// --
	bool Is_Tag(LPCTSTR aTag);										// Return true if it's equal to the Current Tag
	bool Is_Child_of(LPCTSTR parent_chain);							// Test if a chain Tag is the parent of current Tag
	bool Is_Root();													// Test if a Tag is the Root
	bool Is_TextNode();												// Return true if it's a text node (ie; CurrentTag_is("<#TEXT#>"); )

	// -- Getting Current Tag
	// --
	std::string & Get_CurrentTag();										// Get the Current Tag value  (with "<>")
	std::string & Get_CurrentName();									// Get the Current Name value (without "<>")

	// -- Get Text field when node "<#TEXT#>" or when "Is_TextNode()"
	// --
	std::string & Get_TextValue();										// Get the Text Value when node "<#TEXT#>"

	// -- Attribute Methods Access
	// --
	bool Is_Having_Attribute(LPCTSTR Name);							// return true if the current node have the specified attribute defined
	std::string & Get_Attribute_Value();								// Return the value of the last attribute selected by the method "Is_Having_Attribute()"
	
	// -- ***************************** --
	// -- *** MODIFICATIONS METHODS *** --
	// -- ***************************** --
	
	// -- Creation
	//
	bool Add_LastChildNode(LPCTSTR Name);							// Add a new CHILD NODE at the End of Current Node
	bool Add_FirstChildNode(LPCTSTR Name);							// Add a new CHILD NODE at the Begining of Current Node
	bool Add_NodeBefore(LPCTSTR Name);								// Add a new NODE (same level) before the Current Node
	bool Add_NodeAfter(LPCTSTR Name);								// Add a new NOFR (same level) after the Current Node

	// -- Setting Attributes & Text
	//
	bool Set_Attribute(LPCTSTR AttribName,LPCTSTR AttribValue);		// Set an attribute to the Current Node
	bool Remove_Attribute(LPCTSTR AttribName);						// Remove an attribute the the Current Node
	bool Set_Text(LPCTSTR TextValue);								// Set a Text to the Current Node
	
	// -- Removing
	//
	bool Remove();													// Remove the Current Node (Move to the Parent Node)
	bool RemoveChild(LPCTSTR NodeName);								// Remove a Child Node (No Move);

	// -- *********************************** --
	// -- *** XML Document Moving by name *** --
	// -- *********************************** --
	void Go_to_Root();												// Go to the Root node
	bool Go_to_Child(LPCTSTR NodeName);								// Go to a Direct Child Node
	bool Go_to_Descendant(LPCTSTR NodeName);						// Go to a Descendant Node (Child, Little Child, Etc...)
	bool Go_to_Parent(LPCTSTR NodeName);							// Go to a Parent Node
	bool Go_to_Forward(LPCTSTR NodeName);							// Go to a Node attached at the same Node than the Current Node (Forward sens)
	bool Go_to_Back(LPCTSTR NodeName);								// Go to a Node attached at the same Node than the Current Node (Reverse sens)

	// -- ************************ --
	// -- *** Error Management *** --
	// -- ************************ --

	// -- Get the last error signification --
	//
	std::string & Get_LastError();

public:
	void EnumAllElement(MSXML2::IXMLDOMNodePtr pParent, std::string strCurrentNode, Element_Callback pElementCallbackProc = NULL, Attribute_Callback pAttributeCallbackProc = NULL);
	// Node Value
	//
	std::string Tag;			// The last Tag (the name with "<...>")
	std::string Name;			// The Name (without "<...>")
	std::string ChainTag;		// The Chain Tag
	std::string TextField;		// The Text Value

	// -- Init MSXML, for let this Class to Load and Parse an XML Document --
	// -- Parse_XML_document start the Parsing --
	//
	bool Init_MSXML();

	// XML document pointer
	//
	MSXML2::IXMLDOMDocumentPtr m_plDomDocument;

	// Root node of XML document
	//
	MSXML2::IXMLDOMElementPtr m_pDocRoot;

	// The current Node added
	//
	MSXML2::IXMLDOMElementPtr CurrentElementNode;

	// Error Status String
	//
	std::string lasterror,ok;

	// Attrib Values
	//
	std::vector<std::string> AttribNames;
	std::vector<std::string> AttribValues;
	int attrib_index;

	// Internal Methods, Parse the Tree nodes
	//
	void Parse_Objects(MSXML2::IXMLDOMNodePtr pObject);

	// Update "Node Values" & Test type
	//
	void Grab_Node_Informations(MSXML2::IXMLDOMNodePtr pChild);
	bool Is_MSXML_Node(MSXML2::IXMLDOMNodePtr pChild);

	// ChainTag methods management
	//
	void ChainTag_Add(std::string & val);
	void ChainTag_Remove(int number);
};

#endif
