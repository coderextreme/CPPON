#ifndef _Abstracts_H_
#define _Abstracts_H_

// Ported from MFC to portable C++17 stdlib
#include <string>
#include <vector>
#include <stdexcept>
#include <cstdint>
#include <cmath>

#if defined(__APPLE__)
  #include <OpenGL/gl.h>
  #include <OpenGL/glu.h>
#elif defined(_WIN32)
  #include <windows.h>
  #include <GL/gl.h>
  #include <GL/glu.h>
#else
  #include <GL/gl.h>
  #include <GL/glu.h>
#endif

class X3DMetadataObject;
class X3DPrototypeInstance;
class RigidBody;
class TextureProperties;
class SFVec3f;
class X3DField;
class X3DFieldDefinition;

//B.4  Field interfaces
//B.4.1 X3DFieldTypes 

enum X3DFieldTypes 
{
	INPUT_ONLY = 1,
	INITIALIZE_ONLY = 2,
	INPUT_OUTPUT = 3,
	OUTPUT_ONLY = 4,

	SFBOOL = 1, 
	MFBOOL = 2, 
	SFINT32 = 3, 
	MFINT32 = 4, 
	SFFLOAT = 5, 
	MFFLOAT = 6, 
	SFDOUBLE = 7, 
	MFDOUBLE = 8, 
	SFTIME = 9, 
	MFTIME = 10, 
	SFNODE = 11, 
	MFNODE= 12, 
	SFVEC2F = 13, 
	MFVEC2F = 14, 
	SFVEC3F = 15, 
	MFVEC3F = 16, 
	SFVEC3D = 17, 
	MFVEC3D = 18, 
	SFROTATION = 19, 
	MFROTATION = 20, 
	SFCOLOR = 21, 
	MFCOLOR = 22, 
	SFCOLORRGBA = 23, 
	MFCOLORRGBA = 24, 
	SFIMAGE = 25, 
	MFIMAGE = 26, 
	SFSTRING = 27, 
	MFSTRING = 28, 
	SFVEC2D = 29, 
	MFVEC2D = 30, 
	SFLONG = 31, 
	MFLONG = 32, 
	SFVEC4F = 33, 
	MFVEC4F = 34, 
	SFVEC4D = 35, 
	MFVEC4D = 36, 
	SFMATRIX3F = 37, 
	MFMATRIX3F = 38, 
	SFMATRIX4F = 39, 
	MFMATRIX4F = 40, 
	SFMATRIX3D = 41, 
	MFMATRIX3D = 42, 
	SFMATRIX4D = 43, 
	MFMATRIX4D = 44 
};

enum X3DNodeTypes {
	X3DBOUNDEDOBJECT			= 1,
	X3DMETADATAOBJECT			= 2,
	X3DURLOBJECT				= 3,
	X3DAPPEARANCENODE			= 10,
	X3DAPPEARANCECHILDNODE		= 11,
	X3DMATERIALNODE				= 12,
	X3DTEXTURENODE				= 13,
	X3DTEXTURE2DNODE			= 14,
	X3DTEXTURETRANSFORMNODE		= 16,
	X3DTEXTURETRANSFORM2DNODE	= 17,
	X3DGEOMETRYNODE				= 18,
	X3DGEOMETRICPROPERTYNODE	= 19,
	X3DPARAMETRICGEOMETRYNODE	= 20,
	X3DNURBSSURFACEGEOMETRYNODE = 21,
	X3DCOLORNODE				= 22,
	X3DCOORDINATENODE			= 23,
	X3DNORMALNODE				= 24,
	X3DTEXTURECOORDINATENODE	 = 25,
	X3DFONTSTYLENODE			 = 26,
	X3DPROTOINSTANCE			 = 27,
	X3DCHILDNODE				 = 28,
	X3DBINDABLENODE				 = 29,
	X3DBACKGROUNDNODE			 = 30,
	X3DGROUPINGNODE				 = 31,
	X3DSHAPENODE				 = 32,
	X3DINTERPOLATORNODE			 = 33,
	X3DLIGHTNODE				 = 34,
	X3DSCRIPTNODE				 = 35,
	X3DSENSORNODE				 = 36,
	X3DENVIRONMENTALSENSORNODE	 = 37,
	X3DKEYDEVICESENSORNODE		 = 38,
	X3DNETWORKSENSORNODE		 = 39,
	X3DPOINTINGDEVICESENSORNODE = 40,
	X3DDRAGSENSORNODE			= 41,
	X3DTOUCHSENSORNODE			= 42,
	X3DSEQUENCERNODE			= 43,
	X3DTIMEDEPENDENTNODE		= 44,
	X3DSOUNDSOURCENODE			= 45,
	X3DTRIGGERNODE				= 46,
	X3DINFONODE					= 47,
	X3DNURBSCONTROLCURVENODE	= 48

};

//typedef GLfloat		SFFloat;
//typedef GLdouble	SFDouble;
//typedef bool		SFBool;
//typedef int32_t		SFInt32;
//typedef double		SFTime;
//
//struct SFVec2f {
//     GLfloat x, y;
//     SFVec2f() {}
//     SFVec2f(GLfloat x0, GLfloat y0) { x = x0; y = y0; }
//};
//
//struct SFVec3f {
//     GLfloat x, y, z;
//     SFVec3f() {}
//     SFVec3f(GLfloat x0, GLfloat y0, GLfloat z0) { x = x0; y = y0; z = z0; }
//};
//
//struct SFVec4f {
//     GLfloat x, y, z, a;
//     SFVec4f() {}
//     SFVec4f(GLfloat x0, GLfloat y0, GLfloat z0, GLfloat a0) { x = x0; y = y0; z = z0; a = a0;}
//};
//
//struct SFColor {
//     GLfloat x, y, z;
//     SFColor() {}
//     SFColor(GLfloat x0, GLfloat y0, GLfloat z0) { x = x0; y = y0; z = z0; }
//};
//
//struct SFRotation {
//     GLfloat x, y, z, a;
//     SFRotation() {}
//     SFRotation(GLfloat x0, GLfloat y0, GLfloat z0, GLfloat a0) { x = x0; y = y0; z = z0; a = a0;}
//};

////B.4.2 X3DFieldEvent 
//class X3DFieldEvent
//{
//	// ===== methods for fields inherited from parent interfaces =====
////
//public:
//	X3DFieldEvent();
//	virtual ~X3DFieldEvent();
//
//	X3DFieldEvent(void src, double ts, void data);
//
//	double getTime();
//
//	void getData();
//};
// 

class EventObject
{

public:
	EventObject();
	virtual ~EventObject();
};

//B.5.3 X3DFieldEvent 
class X3DFieldEvent : public EventObject
{

public:
	X3DFieldEvent();
	virtual ~X3DFieldEvent();

	//X3DFieldEvent(void src, double ts, void data);
	double getTime();
	X3DField* getSource();
	//void getData();

//Attributes
public:
	X3DField* m_value;

};

//B.4.3 X3DFieldEventListener 
class X3DFieldEventListener
{

public:
	X3DFieldEventListener();
	virtual ~X3DFieldEventListener();

	void readableFieldChanged(X3DFieldEvent evt);
};
 
//B.4.4 X3DFieldDefinition 
class X3DFieldDefinition 
{

public:
	X3DFieldDefinition();
	virtual ~X3DFieldDefinition();

	std::string getName();

	int getAccessType();

	int getFieldType();

	std::string getFieldTypeString();

//Attributes
public:
	std::string		name;
	int			accessType;
	int			fieldType;
	std::string		fieldTypeString;
};
 
//B.4.5 X3DField 
class X3DField 
{

public:
	X3DField();
	virtual ~X3DField();

	X3DFieldDefinition getDefinition();

	bool isReadable();

	bool isWritable();

	void addX3DEventListener(X3DFieldEventListener l);

	void removeX3DEventListener(X3DFieldEventListener l);

	void setUserData(void* data);

	void** getUserData();

public:
	X3DFieldDefinition filedDefinition;
};
 
//B.4.6 MField 
class MField : public X3DField
{

public:
	MField();
	virtual ~MField();

	virtual int size();

	virtual void clear();

	virtual void remove(int index);
};


//B.4.7 SFBool 
/** SFBool defines an abstract node interface.
* SFBool is a logical type with possible values (true|false) to match the XML bool type. Hint: X3D SFBool values are lower case (true|false) in order to maintain compatibility with other XML documents. */

class SFBool : public X3DField
{

public:
	SFBool();
	virtual ~SFBool();

	/** Return bool result [] from type SFBool */
	bool getValue ();

	/** Assign bool value [] to type SFBool */
	void setValue (bool value);

	SFBool(bool bBool);

//Attributes
public:
	bool m_value;
};
 
//B.4.8 MFBool 
/** MFBool defines an abstract node interface.
* MFBool is an array of Bool values. Type MFBool was previously undefined in the VRML 97 Specification, but nevertheless needed for event utilities and scripting. Example use: MFBool is useful for defining a series of behavior states using a BooleanSequencer prototype. */

class MFBool : public MField
{

public:
	MFBool();
	virtual ~MFBool();

	/** Return array of bool results array [] from type MFBool */
	bool* getValue ();

	/** Utility method to return single value from MFBool array */
	bool get1Value (int index);

	/** Assign bool array [] to type MFBool */
	void setValue (int size, bool* values);

	/** Utility method to set a single value in MFBool array */
	void set1Value (int index, bool value);

	/** Utility method to append a single value to MFBool array */
	void append (bool value);

	/** Utility method to insert a single value in MFBool array */
	void insertValue (int index, bool value);

	int size();
	void clear();
	void remove(int index);

//Attributes
public:
	std::vector<bool> m_Values;
};
 
//B.4.9 SFColor 
/** SFColor defines an abstract node interface. */

class SFColor : public X3DField
{

public:
	SFColor();
	virtual ~SFColor();

	/** Return array of 3-tuple float results array using RGB values [0..1] from type SFColor */
	void getValue (float* result);

	/** Assign 3-tuple float array using RGB values [0..1] to type SFColor */
	void setValue (float* color) ;

	void setValue (float r, float g, float b) ;

	void getValue (float &r, float &g, float &b) ;

	float r();
	float g();
	float b();

private:
	float m_values[3];
};
 
//B.4.10 MFColor 
/** MFColor defines an abstract node interface.
* Array values are optionally separated by commas. */

class MFColor : public MField
{

public:
	MFColor();
	virtual ~MFColor();

	/** Return array of 3-tuple float results array using RGB values [0..1] from type MFColor */
	//void getValue (float* result);

	/** Return array of 3-tuple float results array using RGB values [0..1] from type MFColor */
	//void getValue (float** result); // overloaded method for convenience

	/** Utility method to return single 3-tuple value from MFColor array */
	void get1Value (int index, float* result);

	/** Assign 3-tuple float array using RGB values [0..1] to type MFColor */
	void setValue (int size, float* colors) ;

	/** Assign 3-tuple float array using RGB values [0..1] to type MFColor */
	//void setValue (float** colors) ; // overloaded method for convenience

	/** Utility method to set a single 3-tuple value in MFColor array */
	void set1Value (int index, float* color);

	/** Utility method to append a single 3-tuple value to MFColor array */
	void append (float* color);

	/** Utility method to insert a single 3-tuple value in MFColor array */
	void insertValue (int index, float* color);

	SFColor getValue(int index);

	int size();
	void clear();
	void remove(int index);

private:
	std::vector<SFColor> m_Values;
};
 
//B.4.11 SFColorRGBA 
/** SFColorRGBA defines an abstract node interface. */

class SFColorRGBA : public X3DField
{

public:
	SFColorRGBA();
	virtual ~SFColorRGBA();

	/** Return array of 4-tuple float results array using RGBA values [0..1] from type SFColorRGBA */
	void getValue (float* result);

	/** Assign 4-tuple float array using RGBA values [0..1] to type SFColorRGBA */
	void setValue (float* color) ;

	void setValue (float r, float g, float b, float a) ;

	void getValue (float &r, float &g, float &b, float &a) ;

	float r();
	float g();
	float b();
	float a();

private:
	float m_values[4];

};
 
//B.4.12 MFColorRGBA 
/** MFColorRGBA defines an abstract node interface. */

class MFColorRGBA : public MField
{

public:
	MFColorRGBA();
	virtual ~MFColorRGBA();

	/** Return array of 4-tuple float results array using RGBA values [0..1] from type MFColorRGBA */
	//void getValue (float* result);

	/** Return array of 4-tuple float results array using RGBA values [0..1] from type MFColorRGBA */
	//void getValue (float** result); // overloaded method for convenience

	/** Utility method to return single 4-tuple value from MFColorRGBA array */
	void get1Value (int index, float* result);

	/** Assign 4-tuple float array using RGBA values [0..1] to type MFColorRGBA */
	void setValue (int size, float* colors) ;

	/** Assign 4-tuple float array using RGBA values [0..1] to type MFColorRGBA */
	//void setValue (float** colors) ; // overloaded method for convenience

	/** Utility method to set a single 4-tuple value in MFColorRGBA array */
	void set1Value (int index, float* color);

	/** Utility method to append a single 4-tuple value to MFColorRGBA array */
	void append (float* color);

	/** Utility method to insert a single 4-tuple value in MFColorRGBA array */
	void insertValue (int index, float* color);

	int size();
	void clear();
	void remove(int index);

	SFColorRGBA getValue(int index);

private:
	std::vector<SFColorRGBA> m_Values;

};
 
//B.4.13 SFDouble 
/** SFDouble defines an abstract node interface.
* SFDouble is a double-precision floating-point type. Array values are optionally separated by commas. See GeoVRML 1.0 Recommended Practice, Section 2.3, Limitations of Single Precision for rationale. */

class SFDouble : public X3DField
{

public:
	SFDouble();
	virtual ~SFDouble();

	/** Return double result [] from type SFDouble */
	double getValue ();

	/** Assign double value [] to type SFDouble */
	void setValue (double value);

private: 
	double m_value;
};
 
//B.4.14 MFDouble 
/** MFDouble defines an abstract node interface.
* MFDouble is an array of Double values, i.e. a double-precision floating-point array type. See GeoVRML 1.0 Recommended Practice, Section 2.3, Limitations of Single Precision for rationale. SFDouble/MFDouble are analagous to SFDouble/MFDouble. Array values are optionally separated by commas. */

class MFDouble : public MField
{

public:
	MFDouble();
	virtual ~MFDouble();

	/** Return array of double results array [] from type MFDouble */
	double* getValue ();

	/** Utility method to return single value from MFDouble array */
	double get1Value (int index);

	/** Assign double array [] to type MFDouble */
	void setValue (int size, double* values) ;

	/** Utility method to set a single value in MFDouble array */
	void set1Value (int index, double value);

	/** Utility method to append a single value to MFDouble array */
	void append (double value);

	/** Utility method to insert a single value in MFDouble array */
	void insertValue (int index, double value);

	int size();
	void clear();
	void remove(int index);

private: 
	std::vector<double> m_Values;
};
 
//B.4.15 SFFloat 
/** SFFloat defines an abstract node interface.
* SFFloat is a single-precision floating-point type. */

class SFFloatle : public X3DField
{

public:
	SFFloatle();
	virtual ~SFFloatle();

	/** Return float result [] from type SFFloat */
	float getValue ();

	/** Assign float value [] to type SFFloat */
	void setValue (float value);

private: 
	float m_value; 

};
 
//B.4.16 MFFloat 
/** MFFloat defines an abstract node interface.
* MFFloat is an array of SFFloat values, i.e. a single-precision floating-point array type. Array values are optionally separated by commas. */

class MFFloat : public MField
{

public:
	MFFloat();
	virtual ~MFFloat();

	/** Return array of float results array [] from type MFFloat */
	float* getValue ();

	/** Utility method to return single value from MFFloat array */
	float get1Value (int index);

	/** Assign float array [] to type MFFloat */
	void setValue (int size, float* values) ;

	/** Utility method to set a single value in MFFloat array */
	void set1Value (int index, float value);

	/** Utility method to append a single value to MFFloat array */
	void append (float value);

	/** Utility method to insert a single value in MFFloat array */
	void insertValue (int index, float value);

	int size();
	void clear();
	void remove(int index);

private: 
	std::vector<float> m_Values;

};
 
//B.4.17 SFImage 
/** SFImage defines an abstract node interface.
* The SFImage field specifies a single uncompressed 2-dimensional pixel image. SFImage fields contain three integers representing the width, height and number of components in the image, followed by (width x height) hexadecimal or integer values representing the pixels in the image. */

class SFImage : public X3DField
{

public:
	SFImage();
	virtual ~SFImage();

	/** Get image width in pixels */
	int getWidth ();

	/** Get image height in pixels */
	int getHeight ();

	/** Get number of components in an image:
		* 1 (intensity), 2 (intensity alpha), 3 (red green blue), 4 (red green blue alpha-opacity).*/
	int getComponents();

	/** Get array of pixel values [0-255] */
	void getPixels(int* pixels);

	/** Get java.awt.image.WritableRenderedImage version of image */
	//java.awt.image.WritableRenderedImage getImage();

	/** Initialize image */
	void setValue (int width, int height, int components, int* pixels);

	/** Assign a new image as current image */
	//void setImage (java.awt.image.RenderedImage image);

	/** Assign a portion of a new image as part of current image */
	//void setSubImage (java.awt.image.RenderedImage image,
	//							int srcWidth,
	//							int srcHeight,
	//							int srcXOffset,
	//							int srcYOffset,
	//							int destXOffset,
	//							int destYOffset);
};
 
//B.4.18 MFImage 
/** MFImage defines an abstract node interface.
* MFImage is an array of SFImage values. */

class MFImage : public MField
{

public:
	MFImage();
	virtual ~MFImage();

	/** Get selected image width in pixels */
	int getWidth (int imageIndex);

	/** Get selected image height in pixels */
	int getHeight (int imageIndex);

	/** Get number of components in selected image:
		* 1 (intensity), 2 (intensity alpha), 3 (red green blue), 4 (red green blue alpha-opacity).*/
	int getComponents (int imageIndex);

	/** Get array of pixel values [0-255] in selected image */
	void getPixels (int imageIndex, int* pixels);

	/** Get <a href="http://docs.oracle.com/javase/8/docs/api/java/awt/image/WritableRenderedImage.html">java.awt.image.WritableRenderedImage</a> version of selected image */
	//WritableRenderedImage getImage(int imageIndex);

	/** Assign a new image as a replacement image within the current image array */
	//void setImage (int imageIndex, RenderedImage img);

	/** Assign a portion of a new image as part of current selected image in array */
	//void setSubImage (int imageIndex,
	//							RenderedImage img,
	//							int srcWidth,
	//							int srcHeight,
	//							int srcXOffset,
	//							int srcYOffset,
	//							int destXOffset,
	//							int destYOffset);

	/** Utility method to set all values for selected image in array */
	void set1Value (int imageIndex, int value);

	/** Initialize selected image */
	void set1Value (int imageIndex, int width,int height, int components, int* pixels);

	/** Utility method to set all values for all images in array */
	void setValue (int* value);

	/** Assign a new image array as current image array */
	//void setImage (RenderedImage[] img);

	/** Append a new image to current image array */
	//void append (RenderedImage value);

	/** Insert a new image in the current image array */
	//void insertValue (int imageIndex, RenderedImage value);
};
 
//B.4.19 SFInt32 
/** SFInt32 defines an abstract node interface.
* An SFInt32 field specifies one 32-bit signed integer. */

class SFInt32 : public X3DField
{

public:
	SFInt32();
	virtual ~SFInt32();

	/** Return int result [] from type SFInt32 */
	int32_t getValue ();

	/** Assign int value [] to type SFInt32 */
	void setValue (int32_t value);

private: 
	int32_t m_value; 

};
 
//B.4.20 MFInt32 
/** MFInt32 defines an abstract node interface.
* An MFInt32 field defines an array of 32-bit signed integers. Array values are optionally separated by commas. */

class MFInt32 : public MField
{

public:
	MFInt32();
	virtual ~MFInt32();

	/** Return MFInt32 result [] from type MFInt32 */
	//MFInt32* getValue ();
	int32_t* getValue();

	/** Utility method to return single value from MFInt32 array */
	int32_t get1Value (int index);

	/** Assign MFInt32 value [] to type MFInt32 */
	void setValue (int size, MFInt32 values) ;

	/** Utility method to set a single value in MFInt32 array */
	void set1Value (int index, int32_t value);

	void setValue(int size, int* values);

	/** Utility method to append a single value to MFInt32 array */
	void append (int32_t value);

	/** Utility method to insert a single value in MFInt32 array */
	void insertValue (int index, int32_t value);

	int size();
	void clear();
	void remove(int index);

private: 
	std::vector<int32_t> m_Values;
};
 
//B.4.21 SFRotation 
/** SFRotation defines an abstract node interface.
* SFRotation is an axis-angle 4-tuple, indicating X-Y-Z direction plus angle orientation about that axis. The first three values specify a normalized rotation axis vector about which the rotation takes place. (Thus the first three values shall be within the range [-1..+1] in order to represent a normalized unit vector. Problem: scientific notation allows leading digit.) The fourth value specifies the amount of right-handed rotation about that axis in radians. */

class SFRotation : public X3DField
{

public:
	SFRotation();
	virtual ~SFRotation();

	/** Return array of 4-tuple float results array in radians from type SFRotation */
	void getValue (float* value);

	/** Assign 4-tuple float array in radians to type SFRotation */
	void setValue (float* value) ;

	void setValue(float x, float y, float z, float rot);

	void getValue(float &x, float &y, float &z, float &rot);

	float x();
	float y();
	float z();
	float rot();

private: 
	float m_values[4]; 

};
 
//B.4.22 MFRotation 
/** MFRotation defines an abstract node interface.
* MFRotation is an array of SFRotation values. Array values are optionally separated by commas. */

class MFRotation : public MField
{

public:
	MFRotation();
	virtual ~MFRotation();

	/** Return array of 4-tuple float results array in radians from type MFRotation */
	//float* getValue ();

	/** Return array of 4-tuple float results array in radians from type MFRotation */
	//void getValue (float** result); // overloaded method for convenience

	/** Utility method to return single 4-tuple value from MFRotation array */
	void get1Value (int index, float* result);

	/** Assign 4-tuple float array in radians to type MFRotation */
	void setValue (int size, float* value) ;

	/** Assign 4-tuple float array in radians to type MFRotation */
	//void setValue (float** value) ; // overloaded method for convenience

	/** Utility method to set a single 4-tuple value in MFRotation array */
	void set1Value (int index, float* value);

	/** Utility method to append a single 4-tuple value to MFRotation array */
	void append (float* value);

	/** Utility method to insert a single 4-tuple value in MFRotation array */
	void insertValue (int index, float* value);

	int size();
	void clear();
	void remove(int index);

	SFRotation getValue(int index);

private:
	std::vector<SFRotation> m_Values;
};
 
//B.4.23 SFString 
/** SFString defines an abstract node interface.
* SFString defines a single string encoded with the UTF-8 universal character set. */

class SFString : public X3DField
{

public:
	SFString();
	virtual ~SFString();

	/** Return String result [] from type SFString */
	std::string getValue ();

	/** Assign String value [] to type SFString */
	void setValue (std::string value);

private:
	std::string m_value;
};
 
//B.4.24 MFString 
/** MFString defines an abstract node interface.
* MFString is an array of SFString values, each "quoted" and separated by whitespace. Array values are optionally separated by commas. */

class MFString : public MField
{

public:
	MFString();
	virtual ~MFString();

	/** Return array of String results array [] from type MFString */
	std::string* getValue ();

	/** Utility method to return single value from MFString array */
	std::string get1Value (int index);

	/** Assign String array [] to type MFString */
	void setValue (int size, std::string* values) ;

	/** Utility method to set a single value in MFString array */
	void set1Value (int index, std::string value);

	/** Utility method to append a single value to MFString array */
	void append (std::string value);

	/** Utility method to insert a single value in MFString array */
	void insertValue (int index, std::string value);

	int size();
	void clear();
	void remove(int index);

private:
	std::vector<std::string> m_Values;
};
 
//B.4.25 SFTime 
/** SFTime defines an abstract node interface.
* The SFTime field specifies a single time value. Time values are specified as a double-precision floating point number. Typically, SFTime fields represent the number of seconds since Jan 1, 1970, 00:00:00 GMT. */

class SFTime : public X3DField
{

public:
	SFTime();
	virtual ~SFTime();

	/** Return double result in seconds from type SFTime */
	double getValue ();

	/** Assign double value in seconds to type SFTime */
	void setValue (double value);

private:
	double m_value;
};
 
//B.4.26 MFTime 
/** MFTime defines an abstract node interface.
* MFTime is an array of SFTime values. Array values are optionally separated by commas. */

class MFTime : public MField
{

public:
	MFTime();
	virtual ~MFTime();

	/** Return array of double results array in seconds from type MFTime */
	double* getValue ();

	/** Utility method to return single value from MFTime array */
	double get1Value (int index);

	/** Assign double array in seconds to type MFTime */
	void setValue (int size, double* value) ;

	/** Utility method to set a single value in MFTime array */
	void set1Value (int index, double value);

	/** Utility method to append a single value to MFTime array */
	void append (double value);

	/** Utility method to insert a single value in MFTime array */
	void insertValue (int index, double value);

	int size();
	void clear();
	void remove(int index);

private:
	std::vector<double> m_Values;
};
 
//B.4.27 SFVec2f 
/** SFVec2f defines an abstract node interface.
* SFVec2f is a 2-tuple pair of SFFloat values. Hint: SFVec2f can be used to specify a 2D single-precision coordinate. */

class SFVec2f : public X3DField
{

public:
	SFVec2f();
	virtual ~SFVec2f();

	/** Return array of 2-tuple float results array [] from type SFVec2f */
	void getValue (float* value);

	/** Assign 2-tuple float array [] to type SFVec2f */
	void setValue (float* value);

	void setValue(float x, float y);

	void getValue(float &x, float &y);

	float x();
	
	float y();

private: 
	float m_values[2];

};
 
//B.4.28 MFVec2f 
/** MFVec2f defines an abstract node interface.
* MFVec2f is an array of SFVec2f values. Array values are optionally separated by commas. */

class MFVec2f : public MField
{

public:
	MFVec2f();
	virtual ~MFVec2f();

	/** Return array of 2-tuple float results array [] from type MFVec2f */
	//void getValue (float* result);

	/** Return array of 2-tuple float results array [] from type MFVec2f */
	//void getValue (float** result); // overloaded method for convenience

	/** Utility method to return single 2-tuple value from MFVec2f array */
	void get1Value (int index, float* result);

	/** Assign 2-tuple float array [] to type MFVec2f */
	void setValue (int size, float* values) ;

	/** Assign 2-tuple float array [] to type MFVec2f */
	//void setValue (float** values) ; // overloaded method for convenience

	/** Utility method to set a single 2-tuple value in MFVec2f array */
	void set1Value (int index, float* value);

	/** Utility method to append a single 2-tuple value to MFVec2f array */
	void append (float* value);

	/** Utility method to insert a single 2-tuple value in MFVec2f array */
	void insertValue (int index, float* value);

	int size();
	void clear();
	void remove(int index);
	SFVec2f getValue(int index);
private:
	std::vector<SFVec2f> m_Values;
};
 
//B.4.29 SFVec2d 
/** SFVec2d defines an abstract node interface.
* SFVec2d is a 2-tuple pair of SFDouble values. Array values are optionally separated by commas. Hint: SFVec2d can be used to specify a 2D double-precision coordinate. */

class SFVec2d : public X3DField
{

public:
	SFVec2d();
	virtual ~SFVec2d();

	/** Return array of 2-tuple double results array [] from type SFVec2d */
	void getValue (double* value);

	/** Assign 2-tuple double array [] to type SFVec2d */
	void setValue (double* value) ;

	void setValue(double x, double y);

	void getValue(double &x, double &y);

	double x();
	
	double y();

private: 
	double m_values[2];

};
 
//B.4.30 MFVec2d 
/** MFVec2d defines an abstract node interface.
* MFVec2d is an array of SFVec2d values. Array values are optionally separated by commas. */

class MFVec2d : public MField
{

public:
	MFVec2d();
	virtual ~MFVec2d();

	/** Return array of 2-tuple double results array [] from type MFVec2d */
	//void getValue (double* result);

	/** Return array of 2-tuple double results array [] from type MFVec2d */
	//void getValue (double** result); // overloaded method for convenience

	/** Utility method to return single 2-tuple value from MFVec2d array */
	void get1Value (int index, double* result);

	/** Assign 2-tuple double array [] to type MFVec2d */
	void setValue (int size, double* values) ;

	/** Assign 2-tuple double array [] to type MFVec2d */
	//void setValue (double** values) ; // overloaded method for convenience

	/** Utility method to set a single 2-tuple value in MFVec2d array */
	void set1Value (int index, double* value);

	/** Utility method to append a single 2-tuple value to MFVec2d array */
	void append (double* value);

	/** Utility method to insert a single 2-tuple value in MFVec2d array */
	void insertValue (int index, double* value);

	int size();
	void clear();
	void remove(int index);
	SFVec2d getValue(int index);

private:
	std::vector<SFVec2d> m_Values;
};
 
//B.4.31 SFVec3f 
/** SFVec3f defines an abstract node interface.
* SFVec3f is a 3-tuple triplet of SFFloat values. Hint: SFVec3f can be used to specify a 3D coordinate or a 3D scale value. */

class SFVec3f : public X3DField
{

public:
	SFVec3f();
	virtual ~SFVec3f();

	/** Return array of 3-tuple float results array [] from type SFVec3f */
	void getValue (float* value);

	/** Assign 3-tuple float array [] to type SFVec3f */
	void setValue (float* value) ;

	void setValue(float x, float y, float z);

	void getValue(float &x, float &y, float &z);

	float x();
	
	float y();

	float z();

private: 
	float m_values[3];
};
 
//B.4.32 MFVec3f 
/** MFVec3f defines an abstract node interface.
* MFVec3f is an array of SFVec3f values. Array values are optionally separated by commas. */

class MFVec3f : public MField
{

public:
	MFVec3f();
	virtual ~MFVec3f();

	/** Return array of 3-tuple float results array [] from type MFVec3f */
	//void getValue (float* result);

	/** Return array of 3-tuple float results array [] from type MFVec3f */
	//void getValue (float** result); // overloaded method for convenience

	/** Utility method to return single 3-tuple value from MFVec3f array */
	void get1Value (int index, float* result);

	/** Assign 3-tuple float array [] to type MFVec3f */
	void setValue (int size, float* values);

	/** Assign 3-tuple float array [] to type MFVec3f */
	//void setValue (float** values) ; // overloaded method for convenience

	/** Utility method to set a single 3-tuple value in MFVec3f array */
	void set1Value (int index, float* value);

	/** Utility method to append a single 3-tuple value to MFVec3f array */
	void append (float* value);

	/** Utility method to insert a single 3-tuple value in MFVec3f array */
	void insertValue (int index, float* value);

	int size();
	void clear();
	void remove(int index);
	SFVec3f getValue(int index);

private:
	std::vector<SFVec3f> m_Values;
};
 
//B.4.33 SFVec3d 
/** SFVec3d defines an abstract node interface.
* SFVec3d is a 3-tuple triplet of SFDouble values. See GeoVRML 1.0 Recommended Practice, Section 2.3, Limitations of Single Precision. Hint: SFVec3d can be used to specify a georeferenced 3D coordinate. */

class SFVec3d : public X3DField
{

public:
	SFVec3d();
	virtual ~SFVec3d();

	/** Return array of 3-tuple double results array [] from type SFVec3d */
	void getValue (double* value);

	/** Assign 3-tuple double array [] to type SFVec3d */
	void setValue (double* value) ;

	void setValue(double x, double y, double z);

	void getValue(double &x, double &y, double &z);

	double x();
	
	double y();

	double z();

private: 
	double m_values[3];
};
 
//B.4.34 MFVec3d 
/** MFVec3d defines an abstract node interface.
* MFVec3d is an array of SFVec3d values. Array values are optionally separated by commas. See GeoVRML 1.0 Recommended Practice, Section 2.3, Limitations of Single Precision. Hint: MFVec3d can be used to specify a list of georeferenced 3D coordinates. */

class MFVec3d : public MField
{

public:
	MFVec3d();
	virtual ~MFVec3d();

	/** Return array of 3-tuple double results array [] from type MFVec3d */
	//void getValue (double* result);

	/** Return array of 3-tuple double results array [] from type MFVec3d */
	//void getValue (double** result); // overloaded method for convenience

	/** Utility method to return single 3-tuple value from MFVec3d array */
	void get1Value (int index, double* result);

	/** Assign 3-tuple double array [] to type MFVec3d */
	void setValue (int size, double* values) ;

	/** Assign 3-tuple double array [] to type MFVec3d */
	//void setValue (double** values) ; // overloaded method for convenience

	/** Utility method to set a single 3-tuple value in MFVec3d array */
	void set1Value (int index, double* value);

	/** Utility method to append a single 3-tuple value to MFVec3d array */
	void append (double* value);

	/** Utility method to insert a single 3-tuple value in MFVec3d array */
	void insertValue (int index, double* value);

	int size();
	void clear();
	void remove(int index);
	SFVec3d getValue(int index);
private:
	std::vector<SFVec3d> m_Values;
};
 
//B.4.35 SFVec4f 
/** SFVec4f defines an abstract node interface.
* SFVec4f is a 4-tuple set of single-precision floating-point values, specifying a 3D homogeneous vector. */

class SFVec4f : public X3DField
{

public:
	SFVec4f();
	virtual ~SFVec4f();

	/** Return array of 4-tuple float results array [] from type SFVec4f */
	void getValue (float* value);

	/** Assign 4-tuple float array [] to type SFVec4f */
	void setValue (float* value);

	void setValue(float x, float y, float z, float w);

	void getValue(float &x, float &y, float &z, float &w);

	float x();
	
	float y();

	float z();

	float w();
private:
	float m_values[4];

};
 
//B.4.36 MFVec4f 
/** MFVec4f defines an abstract node interface.
* MFVec4f is zero or more SFVec4f values. */

class MFVec4f : public MField
{

public:
	MFVec4f();
	virtual ~MFVec4f();

	/** Return array of 4-tuple float results array [] from type MFVec4f */
	//void getValue (float* result);

	/** Return array of 4-tuple float results array [] from type MFVec4f */
	//void getValue (float** result); // overloaded method for convenience

	/** Utility method to return single 4-tuple value from MFVec4f array */
	void get1Value (int index, float* result);

	/** Assign 4-tuple float array [] to type MFVec4f */
	void setValue (int size, float* values) ;

	/** Assign 4-tuple float array [] to type MFVec4f */
	//void setValue (float** values) ; // overloaded method for convenience

	/** Utility method to set a single 4-tuple value in MFVec4f array */
	void set1Value (int index, float* value);

	/** Utility method to append a single 4-tuple value to MFVec4f array */
	void append (float* value);

	/** Utility method to insert a single 4-tuple value in MFVec4f array */
	void insertValue (int index, float* value);

	int size();
	void clear();
	void remove(int index);
	SFVec4f getValue(int index);
private:
	std::vector<SFVec4f> m_Values;
};
 
//B.4.37 SFVec4d 
/** SFVec4d defines an abstract node interface.
* SFVec4d is a 4-tuple set of double-precision floating-point values, specifying a 3D homogeneous vector. */

class SFVec4d : public X3DField
{

public:
	SFVec4d();
	virtual ~SFVec4d();

	/** Return array of 4-tuple double results array [] from type SFVec4d */
	void getValue (double* value);

	/** Assign 4-tuple double array [] to type SFVec4d */
	void setValue (double* value);

	void setValue(double x, double y, double z, double w);

	void getValue(double &x, double &y, double &z, double &w);

	double x();
	
	double y();

	double z();

	double w();

private: 
	double m_values[4];
};
 
//B.4.38 MFVec4d 
/** MFVec4d defines an abstract node interface.
* MFVec4d is zero or more SFVec4d values. */

class MFVec4d : public MField
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	MFVec4d();
	virtual ~MFVec4d();

	/** Return array of 4-tuple double results array [] from type MFVec4d */
	//void getValue (double* result);

	/** Return array of 4-tuple double results array [] from type MFVec4d */
	//void getValue (double** result); // overloaded method for convenience

	/** Utility method to return single 4-tuple value from MFVec4d array */
	void get1Value (int index, double* result);

	/** Assign 4-tuple double array [] to type MFVec4d */
	void setValue (int size, double* values) ;

	/** Assign 4-tuple double array [] to type MFVec4d */
	//void setValue (double** values) ; // overloaded method for convenience

	/** Utility method to set a single 4-tuple value in MFVec4d array */
	void set1Value (int index, double* value);

	/** Utility method to append a single 4-tuple value to MFVec4d array */
	void append (double* value);

	/** Utility method to insert a single 4-tuple value in MFVec4d array */
	void insertValue (int index, double* value);

	int size();
	void clear();
	void remove(int index);
	SFVec4d getValue(int index);
private:
	std::vector<SFVec4d> m_Values;
};
 
//B.4.39 SFMatrix3f 
/** SFMatrix3f defines an abstract node interface.
* SFMatrix3f specifies a 3x3 matrix of single-precision floating point numbers, organized in row-major fashion. */

class SFMatrix3f : public X3DField
{

public:
	SFMatrix3f();
	virtual ~SFMatrix3f();

	/** Return array of float results array [] from type SFMatrix3f */
	float* getValue ();

	/** Assign float array [] to type SFMatrix3f */
	void setValue (float* value) ;

private:
	float m_values[3][3];
};
 
//B.4.40 MFMatrix3f 
/** MFMatrix3f defines an abstract node interface.
* MFMatrix3f specifies zero or more 3x3 matrices of single-precision floating point numbers, organized in row-major fashion. */

class MFMatrix3f : public MField
{

public:
	MFMatrix3f();
	virtual ~MFMatrix3f();

	/** Return array of float results array [] from type MFMatrix3f */
	float* getValue ();

	/** Return array of float results array [] from type MFMatrix3f */
	void getValue (float** result); // overloaded method for convenience

	/** Utility method to return single value from MFMatrix3f array */
	float* get1Value (int index);

	/** Assign float array [] to type MFMatrix3f */
	void setValue (int size, float* values) ;

	/** Assign float array [] to type MFMatrix3f */
	void setValue (float** values) ; // overloaded method for convenience

	/** Utility method to set a single value in MFMatrix3f array */
	void set1Value (int index, float* value);

	/** Utility method to append a single value to MFMatrix3f array */
	void append (float* value);

	/** Utility method to insert a single value in MFMatrix3f array */
	void insertValue (int index, float* value);
};
 
//B.4.41 SFMatrix3d 
/** SFMatrix3d defines an abstract node interface.
* SFMatrix3d specifies a 3x3 matrix of double-precision floating point numbers, organized in row-major fashion. */

class SFMatrix3d : public X3DField
{

public:
	SFMatrix3d();
	virtual ~SFMatrix3d();

	/** Return array of double results array [] from type SFMatrix3d */
	double* getValue ();

	/** Assign double array [] to type SFMatrix3d */
	void setValue (double* value) ;
};
 
//B.4.42 MFMatrix3d 
/** MFMatrix3d defines an abstract node interface.
* MFMatrix3d specifies zero or more 3x3 matrices of double-precision floating point numbers, organized in row-major fashion. */

class MFMatrix3d : public MField
{

public:
	MFMatrix3d();
	virtual ~MFMatrix3d();

	/** Return array of double results array [] from type MFMatrix3d */
	double* getValue ();

	/** Return array of double results array [] from type MFMatrix3d */
	void getValue (double** result); // overloaded method for convenience

	/** Utility method to return single value from MFMatrix3d array */
	double* get1Value (int index);

	/** Assign double array [] to type MFMatrix3d */
	void setValue (int size, double* values) ;

	/** Assign double array [] to type MFMatrix3d */
	void setValue (double** values) ; // overloaded method for convenience

	/** Utility method to set a single value in MFMatrix3d array */
	void set1Value (int index, double* value);

	/** Utility method to append a single value to MFMatrix3d array */
	void append (double* value);

	/** Utility method to insert a single value in MFMatrix3d array */
	void insertValue (int index, double* value);
};
 
//B.4.43 SFMatrix4f 
/** SFMatrix4f defines an abstract node interface.
* SFMatrix4f specifies a 4x4 matrix of single-precision floating point numbers, organized in row-major fashion. */

class SFMatrix4f : public X3DField
{

public:
	SFMatrix4f();
	virtual ~SFMatrix4f();

	/** Return array of float results array [] from type SFMatrix4f */
	float* getValue ();

	/** Assign float array [] to type SFMatrix4f */
	void setValue (float* value) ;
};
 
//B.4.44 MFMatrix4f 
/** MFMatrix4f defines an abstract node interface.
* MFMatrix4f specifies zero or more 4x4 matrices of single-precision floating point numbers, organized in row-major fashion. */

class MFMatrix4f : public MField
{

public:
	MFMatrix4f();
	virtual ~MFMatrix4f();

	/** Return array of float results array [] from type MFMatrix4f */
	float* getValue ();

	/** Return array of float results array [] from type MFMatrix4f */
	void getValue (float** result); // overloaded method for convenience

	/** Utility method to return single value from MFMatrix4f array */
	float* get1Value (int index);

	/** Assign float array [] to type MFMatrix4f */
	void setValue (int size, float* values) ;

	/** Assign float array [] to type MFMatrix4f */
	void setValue (float** values) ; // overloaded method for convenience

	/** Utility method to set a single value in MFMatrix4f array */
	void set1Value (int index, float* value);

	/** Utility method to append a single value to MFMatrix4f array */
	void append (float* value);

	/** Utility method to insert a single value in MFMatrix4f array */
	void insertValue (int index, float* value);
};
 
//B.4.45 SFMatrix4d 
/** SFMatrix4d defines an abstract node interface.
* SFMatrix4d specifies a 4x4 matrix of double-precision floating point numbers, organized in row-major fashion. */

class SFMatrix4d : public X3DField
{

public:
	SFMatrix4d();
	virtual ~SFMatrix4d();

	/** Return array of double results array [] from type SFMatrix4d */
	double* getValue ();

	/** Assign double array [] to type SFMatrix4d */
	void setValue (double* value) ;
};
 
//B.4.46 MFMatrix4d 
/** MFMatrix4d defines an abstract node interface.
* MFMatrix4d specifies zero or more 4x4 matrices of double-precision floating point numbers, organized in row-major fashion. */

class MFMatrix4d : public MField
{

public:
	MFMatrix4d();
	virtual ~MFMatrix4d();

	/** Return array of double results array [] from type MFMatrix4d */
	double* getValue ();

	/** Return array of double results array [] from type MFMatrix4d */
	void getValue (double** result); // overloaded method for convenience

	/** Utility method to return single value from MFMatrix4d array */
	double* get1Value (int index);

	/** Assign double array [] to type MFMatrix4d */
	void setValue (int size, double* values) ;

	/** Assign double array [] to type MFMatrix4d */
	void setValue (double** values) ; // overloaded method for convenience

	/** Utility method to set a single value in MFMatrix4d array */
	void set1Value (int index, double* value);

	/** Utility method to append a single value to MFMatrix4d array */
	void append (double* value);

	/** Utility method to insert a single value in MFMatrix4d array */
	void insertValue (int index, double* value);
};
 
/////////////////////////////////////////////////////////////////////////////
// X3DObject
class X3DBaseNode
{

//Construction
public:
	X3DBaseNode();
	virtual ~X3DBaseNode();
	X3DBaseNode& operator=(const X3DBaseNode& src);

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	bool	isType(int nType);
	int		getType();
	void	setType(int nType);
	int		getID();
	void	setID(int id);
	std::string getNodeName();
	void	setNodeName(std::string strName);
	bool	isNodeName(std::string strName);
	virtual void	setContainerField(std::string strDef);

	void addChild(X3DBaseNode* child) ;
	void insertChild(X3DBaseNode* child);
	void removeChild(X3DBaseNode* child);
	X3DBaseNode* getChild(int nIdx);

	int	 getCount();

	void addComments(std::string strComments);
//Attributes
public:
	int				m_nNodeType;
	std::string			m_strNodeName;
	X3DBaseNode*	m_pParent;
	std::vector<X3DBaseNode*>		children;
	int				m_nID;
};

/////////////////////////////////////////////////////////////////////////////
// X3DNode
class X3DNode : public X3DBaseNode
{

//Construction
public:
	X3DNode();
	virtual ~X3DNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	X3DNode* getMetadata ();

	/** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	void setMetadata (X3DMetadataObject* node);

	/** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	void setMetadata (X3DPrototypeInstance* protoInstance);

	virtual void	setDEF(std::string strDef);
	std::string getDEF();
	virtual void	setUSE(std::string strUse);
	std::string getUSE();
//	bool	isType(int nType);
//	int		getType();
	//std::string getNodeName();

	/** Return String result [] from SFString inputOutput field named "name" */
	std::string getName();

	/** Assign String value [] to SFString inputOutput field named "name" */
	void setName(std::string value);

	/** Return String result [] from SFString inputOutput field named "reference" */
	std::string getReference();

	/** Assign String value [] to SFString inputOutput field named "reference" */
	void setReference(std::string value);

	/** Return String result [] from SFString inputOutput field named "reference" */
	std::string getContainerField();

	/** Assign String value [] to SFString inputOutput field named "reference" */
	void setContainerField(std::string value);

//Attributes
public:
	X3DMetadataObject* metadata;
	std::string			DEF;
	std::string			USE;
//	int				m_nNodeType;
//	std::string			m_strNodeName;
};
/////////////////////////////////////////////////////////////////////////////
//B.2.1 X3DAppearanceChildNode 
/** X3DAppearanceChildNode defines an abstract node interface that extends interface .
  * Nodes of this type can be used as child nodes for Appearance. */

class X3DAppearanceChildNode : public X3DNode
{

public:
	X3DAppearanceChildNode();
	virtual ~X3DAppearanceChildNode();

	// ===== methods for fields inherited from parent interfaces =====

	/** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	/** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	/** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.2 X3DAppearanceNode 
/** X3DAppearanceNode defines an abstract node interface that extends interface . */

class X3DAppearanceNode : public X3DNode
{

public:
	X3DAppearanceNode();
	virtual ~X3DAppearanceNode();

	// ===== methods for fields inherited from parent interfaces =====
 
	/** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	/** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	/** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};


//B.2.6 X3DChildNode 
/** X3DChildNode defines an abstract node interface that extends interface .
  * A node that implements X3DChildNode is one of the legal children for a X3DGroupingNode parent. */

class X3DChildNode : public X3DNode
{

public:
	X3DChildNode();
	virtual ~X3DChildNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.4 X3DBindableNode 
/** X3DBindableNode defines an abstract node interface that extends interfaces X3DNode.
  * Bindable nodes implement the binding stack, so that only one of each node type is active at a given time. */

class X3DBindableNode : public X3DChildNode
{

public:
	X3DBindableNode();
	virtual ~X3DBindableNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Assign bool value to SFBool inputOnly field named "set_bind" */
	void setBind (bool value);

	/** Return double result in seconds from SFTime outputOnly field named "bindTime" */
	double getBindTime ();

	/** Return bool result from SFBool outputOnly field named "isBound" */
	bool getIsBound ();

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);

//Attributes
public:
	double	bindTime;
	bool	isBound;
};


//B.2.3 X3DBackgroundNode 
/** X3DBackgroundNode defines an abstract node interface that extends interfaces X3DChildNode, X3DNode. */

class X3DBackgroundNode : public X3DBindableNode
{

public:
	X3DBackgroundNode();
	virtual ~X3DBackgroundNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of float results array in radians from MFFloat inputOutput field named "groundAngle" */
	float* getGroundAngle ();

	/** Return number of primitive values in "groundAngle" array */
	int getNumGroundAngle ();

	/** Assign float array in radians to MFFloat inputOutput field named "groundAngle" */
	void setGroundAngle (float* angles, int size);

	/** Assign single float value in radians as the MFFloat array for inputOutput field named "groundAngle" */
	void setGroundAngle (float angle);

	/** Return array of 3-tuple float results array using RGB values [0..1] from MFColor inputOutput field named "groundColor" */
	float* getGroundColor ();

	/** Return number of 3-tuple primitive values in "groundColor" array */
	int getNumGroundColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to MFColor inputOutput field named "groundColor" */
	void setGroundColor (float* colors, int size );

	void setGroundColor (float colors);

	/** Return array of float results array in radians from MFFloat inputOutput field named "skyAngle" */
	float* getSkyAngle ();

	/** Return number of primitive values in "skyAngle" array */
	int getNumSkyAngle ();

	/** Assign float array in radians to MFFloat inputOutput field named "skyAngle" */
	void setSkyAngle (float* angles, int size);
 
	/** Assign single float value in radians as the MFFloat array for inputOutput field named "skyAngle" */
	void setSkyAngle (float angle);
 
	/** Return array of 3-tuple float results array using RGB values [0..1] from MFColor inputOutput field named "skyColor" */
	float* getSkyColor ();

	/** Return number of 3-tuple primitive values in "skyColor" array */
	int getNumSkyColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to MFColor inputOutput field named "skyColor" */
	void setSkyColor (float* colors, int size);

	/** Assign single float value in radians as the MFFloat array for inputOutput field named "skyColor" */
	void setSkyColor (float colors);

	/** Return float result [] from intensityType type inputOutput field named "transparency" */
	float getTransparency ();

	/** Assign float value [] to intensityType type inputOutput field named "transparency" */
	void setTransparency (float value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Assign bool value to SFBool inputOnly field named "set_bind" */
	//void setBind (bool value);

	///** Return double result in seconds from SFTime outputOnly field named "bindTime" */
	//double getBindTime ();

	///** Return bool result from SFBool outputOnly field named "isBound" */
	//bool getIsBound ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);

//Attributes
public:
	std::vector<float> groundAngle;
	std::vector<float> groundColor;
	std::vector<float> skyAngle;
	std::vector<float> skyColor;
	float	transparency;
};
 

//B.2.15 X3DFollowerNode 
/** X3DFollowerNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DFollowerNode : public X3DChildNode
{

public:
	X3DFollowerNode();
	virtual ~X3DFollowerNode();

	/** Return bool result from SFBool outputOnly field named "isActive" */
	bool getIsActive ();

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
 
//B.2.5 X3DChaserNode 
/** X3DChaserNode defines an abstract node interface that extends interfaces X3DChildNode, X3DNode. */

class X3DChaserNode : public X3DFollowerNode
{

public:
	X3DChaserNode();
	virtual ~X3DChaserNode();

	/** Return double result in seconds from  type initializeOnly field named "duration" */
	double getDuration ();

	/** Assign double value in seconds to  type initializeOnly field named "duration" */
	void setDuration (double timestamp);

	// ===== methods for fields inherited from parent interfaces =====

	/** Return bool result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
 
//B.2.17 X3DGeometricPropertyNode 
/** X3DGeometricPropertyNode defines an abstract node interface that extends interface .
* This is the base node type for all geometric property node types. */

class X3DGeometricPropertyNode : public X3DNode
{

public:
	X3DGeometricPropertyNode();
	virtual ~X3DGeometricPropertyNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	// ===== methods for fields inherited from parent interfaces =====
	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 

//B.2.7 X3DColorNode 
/** X3DColorNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DColorNode : public X3DGeometricPropertyNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	X3DColorNode();
	virtual ~X3DColorNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
	//void setColor(std::string value);
//Attributes
public:
	//std::vector<float> color;
};
 
 
//B.2.61 X3DVolumeRenderStyleNode 
/** X3DVolumeRenderStyleNode defines an abstract node interface that extends interface . */

class X3DVolumeRenderStyleNode : public X3DNode
{

public:
	X3DVolumeRenderStyleNode();
	virtual ~X3DVolumeRenderStyleNode();

	/** Return bool result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign bool value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.8 X3DComposableVolumeRenderStyleNode 
/** X3DComposableVolumeRenderStyleNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DComposableVolumeRenderStyleNode : public X3DVolumeRenderStyleNode
{

public:
	X3DComposableVolumeRenderStyleNode();
	virtual ~X3DComposableVolumeRenderStyleNode();

	/** Return bool result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign bool value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.18 X3DGeometryNode 
/** X3DGeometryNode defines an abstract node interface that extends interface .
* Geometry nodes produce renderable geometry and are contained by a Shape node. */

class X3DGeometryNode : public X3DNode
{

public:
	X3DGeometryNode();
	virtual ~X3DGeometryNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.57 X3DVertexAttributeNode 
/** X3DVertexAttributeNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DVertexAttributeNode : public X3DGeometricPropertyNode
{

public:
	X3DVertexAttributeNode();
	virtual ~X3DVertexAttributeNode();

	/** Return String result [] from SFString inputOutput field named "name" */
	std::string getName ();

	/** Assign String value [] to SFString inputOutput field named "name" */
	void setName (std::string value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};

//B.2.10 X3DCoordinateNode 
/** X3DCoordinateNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DCoordinateNode : public X3DGeometricPropertyNode
{

public:
	X3DCoordinateNode();
	virtual ~X3DCoordinateNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.31 X3DNormalNode 
/** X3DNormalNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DNormalNode : public X3DGeometricPropertyNode
{

public:
	X3DNormalNode();
	virtual ~X3DNormalNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};

 
//B.2.51 X3DTextureCoordinateNode 
/** X3DTextureCoordinateNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DTextureCoordinateNode : public X3DGeometricPropertyNode
{

public:
	X3DTextureCoordinateNode();
	virtual ~X3DTextureCoordinateNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};

//C.3.72 FogCoordinate 
/** FogCoordinate defines a concrete node interface that extends interface X3DCoordinateNode. */

class FogCoordinate : public X3DCoordinateNode
{

public:
	FogCoordinate();
	virtual ~FogCoordinate();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of float results array [] from MFFloat inputOutput field named "depth" */
	float* getDepth ();

	/** Return number of primitive values in "depth" array */
	int getNumDepth ();

	/** Assign float array [] to MFFloat inputOutput field named "depth" */
	void setDepth (float* values, int size);

	/** Assign single float value [] as the MFFloat array for inputOutput field named "depth" */
	void setDepth (float value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	void setDepth(std::string strValue);
//Attributes
public:
	std::vector<float> depth;
};


//C.3.46 Coordinate 
/** Coordinate defines a concrete node interface that extends interface X3DCoordinateNode. */

class Coordinate : public X3DCoordinateNode
{

public:
//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	Coordinate();
	virtual ~Coordinate();

	/** Return array of 3-tuple float results array [] from MFVec3f inputOutput field named "point" */
	float* getPoint ();

	/** Return number of 3-tuple primitive values in "point" array */
	int getNumPoint ();

	/** Assign 3-tuple float array [] to MFVec3f inputOutput field named "point" */
	void setPoint (float* values, int size);

	void setPoint(MFVec3f* values);
	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	void setPoint(std::string strPoint);
//Attributes
public:
	//std::vector<SFVec3f> point;
	std::vector<float> point;
};
 

//C.3.30 Color 
/** Color defines a concrete node interface that extends interface X3DColorNode. */

class Color : public X3DColorNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	Color();
	virtual ~Color();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of 3-tuple float results array using RGB values [0..1] from MFColor inputOutput field named "color" */
	float* getColor ();

	/** Return number of 3-tuple primitive values in "color" array */
	int getNumColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to MFColor inputOutput field named "color" */
	void setColor (float* colors, int size);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	void setColor(std::string strPoint);
//Attributes
public:
	std::vector<float> color;
};

//C.3.137 Normal 
/** Normal defines a concrete node interface that extends interface X3DNormalNode. */

class Normal : public X3DNormalNode
{

//Construction
public:
	Normal();
	virtual ~Normal();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of 3-tuple float results array [] from MFVec3f inputOutput field named "vector" */
	float* getVector ();

	/** Return number of 3-tuple primitive values in "vector" array */
	int getNumVector ();

	/** Assign 3-tuple float array [] to MFVec3f inputOutput field named "vector" */
	void setVector (float* values, int size);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	void setVector(std::string strPoint);
//Attributes
public:
	std::vector<float> vector;
};

 
//C.3.220 TextureCoordinate 
/** TextureCoordinate defines a concrete node interface that extends interface X3DTextureCoordinateNode. */

class TextureCoordinate : public X3DTextureCoordinateNode
{

public:
	TextureCoordinate();
	virtual ~TextureCoordinate();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of 2-tuple float results array [] from MFVec2f inputOutput field named "point" */
	float* getPoint ();

	/** Return number of 2-tuple primitive values in "point" array */
	int getNumPoint ();

	/** Assign 2-tuple float array [] to MFVec2f inputOutput field named "point" */
	void setPoint (float* values, int size);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);
	void setPoint(std::string strPoint);
//Attributes
public:
	std::vector<float> point;
};
 
//B.2.9 X3DComposedGeometryNode 
/** X3DComposedGeometryNode defines an abstract node interface that extends interfaces X3DNode.
* Composed geometry nodes produce renderable geometry, can contain Color Coordinate Normal TextureCoordinate, and are contained by a Shape node. */

class X3DComposedGeometryNode : public X3DGeometryNode
{

public:
	X3DComposedGeometryNode();
	virtual ~X3DComposedGeometryNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return bool result from SFBool initializeOnly field named "ccw" */
	bool getCcw ();

	/** Assign bool value to SFBool initializeOnly field named "ccw" */
	void setCcw (bool value);

	/** Return boolean result from SFBool initializeOnly field named "convex" */
	bool getConvex();

	/** Assign boolean value to SFBool initializeOnly field named "convex" */
	void setConvex(bool value);

	/** Return bool result from SFBool initializeOnly field named "colorPerVertex" */
	bool getColorPerVertex ();

	/** Assign bool value to SFBool initializeOnly field named "colorPerVertex" */
	void setColorPerVertex (bool color);

	/** Return bool result from SFBool initializeOnly field named "normalPerVertex" */
	bool getNormalPerVertex ();

	/** Assign bool value to SFBool initializeOnly field named "normalPerVertex" */
	void setNormalPerVertex (bool value);

	/** Return bool result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign bool value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	/** Return array of X3DVertexAttributeNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "attrib" */
	X3DNode* getAttrib ();

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
	//X3DNode* getColor ();
	void getColor (X3DNode result);

	/** Assign X3DColorNode value (using a properly typed node) to SFNode inputOutput field named "color" */
	void setColor (X3DColorNode* color);
 
	/** Assign X3DColorNode value (using a properly typed protoInstance) */
	void setColor (X3DPrototypeInstance protoInstance);

	/** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "coord" */
	//X3DNode* getCoord ();
	void getCoord (X3DNode result);

	/** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "coord" */
	void setCoord (X3DCoordinateNode* node);

	/** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	void setCoord (X3DPrototypeInstance protoInstance);

	/** Return FogCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fogCoord" */
	//X3DNode* getFogCoord ();
	void getFogCoord (X3DNode result);

	/** Assign FogCoordinate value (using a properly typed node) to SFNode inputOutput field named "fogCoord" */
	void setFogCoord (FogCoordinate* node);

	/** Assign FogCoordinate value (using a properly typed protoInstance) */
	void setFogCoord (X3DPrototypeInstance protoInstance);

	/** Return X3DNormalNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "normal" */
	//X3DNode* getNormal ();
	void getNormal (X3DNode result);

	/** Assign X3DNormalNode value (using a properly typed node) to SFNode inputOutput field named "normal" */
	void setNormal (X3DNormalNode* node);

	/** Assign X3DNormalNode value (using a properly typed protoInstance) */
	void setNormal (X3DPrototypeInstance protoInstance);

	/** Return X3DTextureCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texCoord" */
	//X3DNode* getTexCoord ();
	void getTexCoord (X3DNode result);

	/** Assign X3DTextureCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "texCoord" */
	void setTexCoord (X3DTextureCoordinateNode* node);

	/** Assign X3DTextureCoordinateNode value (using a properly typed protoInstance) */
	void setTexCoord (X3DPrototypeInstance protoInstance);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);

	Coordinate*			getCoord();
	FogCoordinate*		getFogCoord();
	Color*				getColor();
	Normal*				getNormal();
	TextureCoordinate*	getTexCoord();

	//void				setConvex(bool bBool);
	//bool				getConvex();

protected:
	bool				ccw;
	bool				colorPerVertex;
	bool				convex;
	bool				normalPerVertex;
	bool				solid;

	Color*				color;
	Coordinate*			coord;
	FogCoordinate*		fogCoord;
	Normal*				normal;
	TextureCoordinate*	texCoord;

};

//B.2.11 X3DDamperNode 
/** X3DDamperNode defines an abstract node interface that extends interfaces X3DChildNode, X3DNode. */

class X3DDamperNode : public X3DFollowerNode
{

public:
	X3DDamperNode();
	virtual ~X3DDamperNode();

	/** Return double result in seconds from  type inputOutput field named "tau" */
	double getTau ();

	/** Assign double value in seconds to  type inputOutput field named "tau" */
	void setTau (double timestamp);

	/** Return float result [] from SFFloat inputOutput field named "tolerance" */
	float getTolerance ();

	/** Assign float value [] to SFFloat inputOutput field named "tolerance" */
	void setTolerance (float value);

	/** Return int result [] from  type initializeOnly field named "order" */
	int getOrder ();

	/** Assign int value [] to  type initializeOnly field named "order" */
	void setOrder (int value);

	// ===== methods for fields inherited from parent interfaces =====

	/** Return bool result from SFBool outputOnly field named "isActive" */ 
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.43 X3DSensorNode 
/** X3DSensorNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DSensorNode : public X3DChildNode
{

public:
	X3DSensorNode();
	virtual ~X3DSensorNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return bool result from SFBool outputOnly field named "isActive" */
	bool getIsActive ();

	/** Return bool result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign bool value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);

	void setActive(bool value);
//Attributes
public:
	bool enabled;
	bool isActive;
};
 
//B.2.38 X3DPointingDeviceSensorNode 
/** X3DPointingDeviceSensorNode defines an abstract node interface that extends interfaces X3DChildNode, X3DNode. */

class X3DPointingDeviceSensorNode : public X3DSensorNode
{

public:
	X3DPointingDeviceSensorNode();
	virtual ~X3DPointingDeviceSensorNode();

	/** Return bool result from SFBool outputOnly field named "isOver" */
	bool getIsOver ();

	/** Return String result [] from SFString inputOutput field named "description" */
	std::string getDescription ();

	/** Assign String value [] to SFString inputOutput field named "description" */
	void setDescription (std::string value);

	std::string getXMLString();
public:
	std::string description;
	/** Return bool result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	/** Assign bool value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	/** Return bool result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};

//B.2.12 X3DDragSensorNode 
/** X3DDragSensorNode defines an abstract node interface that extends interfaces X3DSensorNode, X3DChildNode, X3DNode. */

class X3DDragSensorNode : public X3DPointingDeviceSensorNode
{

public:
	X3DDragSensorNode();
	virtual ~X3DDragSensorNode();

	/** Return array of 3-tuple float results array [] from SFVec3f outputOnly field named "trackPoint_changed" */
	SFVec3f getTrackPoint ();

	/** Return bool result from SFBool inputOutput field named "autoOffset" */
	bool getAutoOffset ();

	/** Assign bool value to SFBool inputOutput field named "autoOffset" */
	void setAutoOffset (bool value);

	/** Return String result [] from SFString inputOutput field named "description" */
	std::string getDescription ();

	/** Assign String value [] to SFString inputOutput field named "description" */
	void setDescription (std::string value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return bool result from SFBool outputOnly field named "isOver" */
	//bool getIsOver ();

	///** Return bool result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return bool result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign bool value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
public:
	SFVec3f trackPoint_changed;
};
 
//B.2.13 X3DEnvironmentalSensorNode 
/** X3DEnvironmentalSensorNode defines an abstract node interface that extends interfaces X3DChildNode, X3DNode. */

class X3DEnvironmentalSensorNode : public X3DSensorNode
{

public:
	X3DEnvironmentalSensorNode();
	virtual ~X3DEnvironmentalSensorNode();

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "center" */
	float* getCenter ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "center" */
	void setCenter (float* value);
 
	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "size" */
	float* getSize ();

	/** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "size" */
	void setSize (float* value);

	/** Return bool result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign bool value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	/** Return bool result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.14 X3DEnvironmentTextureNode 
/** X3DEnvironmentTextureNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DEnvironmentTextureNode : public X3DAppearanceChildNode
{

public:
	X3DEnvironmentTextureNode();
	virtual ~X3DEnvironmentTextureNode();

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.16 X3DFontStyleNode 
/** X3DFontStyleNode defines an abstract node interface that extends interface . */

class X3DFontStyleNode : public X3DNode
{

public:
	X3DFontStyleNode();
	virtual ~X3DFontStyleNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	// ===== methods for fields inherited from parent interfaces =====
	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};

//B.3.1 X3DBoundedObject 
/** X3DBoundedObject defines an abstract node interface.
* X3DBoundedObject indicates that bounding box values can be provided (or computed) to encompass this node and any children. */

class X3DBoundedObject
{

public:
	X3DBoundedObject();
	virtual ~X3DBoundedObject();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	float* getBboxCenter ();

	/** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	void setBboxCenter (float* value);

	/** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	float* getBboxSize ();

	/** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	void setBboxSize (float* value) ;

	void setBboxCenter(SFVec3f value);

	/** Assign 3-tuple float array [0,1,2] or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	void setBboxSize(SFVec3f value);

	bool IsbboxDisplay();

	void setbboxDisplay(bool value);

	bool Isvisible();

	void setvisible(bool value);
	//SFVec3f getBboxCenter();
	//SFVec3f getBboxSize();
//Attributes
public:
	//SFVec3f	bboxCenter;
	//SFVec3f	bboxSize;
	float	bboxCenter[3];
	float	bboxSize[3];
	bool	bboxDisplay;
	bool	visible;

};
 
//B.2.19 X3DGroupingNode 
/** X3DGroupingNode defines an abstract node interface that extends interfaces X3DNode.
* Grouping nodes can contain other nodes as children, thus making up the backbone of a scene graph. */

class X3DGroupingNode : public X3DChildNode, public X3DBoundedObject
{

public:
	X3DGroupingNode();
	virtual ~X3DGroupingNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float*  value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value);

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	void addChildren (X3DChildNode* nodes) ;

	/** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	void addChildren (X3DChildNode node) ;

	/** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	void addChildren (X3DPrototypeInstance node) ;

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	void addChildren (X3DNode* nodes) ;

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DChildNode* nodes) ;

	/** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	void removeChildren (X3DChildNode node) ;

	/** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DPrototypeInstance node) ;

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	void removeChildren (X3DNode* nodes) ;

	/** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	X3DNode* getChildren ();

	/** Return number of nodes in "children" array */
	int getNumChildren ();

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	void setChildren (X3DChildNode* nodes);

	/** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	void setChildren (X3DChildNode node) ;

	/** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	void setChildren (X3DPrototypeInstance node) ;

	/** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	void setChildren (X3DNode* nodes) ;

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
//Attributes
public:
//	std::vector<X3DBaseNode*>	children;

};
 
//B.2.20 X3DInfoNode 
/** X3DInfoNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DInfoNode : public X3DChildNode
{

public:
	X3DInfoNode();
	virtual ~X3DInfoNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.21 X3DInterpolatorNode 
/** X3DInterpolatorNode defines an abstract node interface that extends interfaces X3DNode.
* Interpolator nodes are designed for linear keyframed animation. Interpolators are driven by an input key ranging [0..1] and produce corresponding piecewise-linear output functions. */

class X3DInterpolatorNode : public X3DChildNode
{

public:
	X3DInterpolatorNode();
	virtual ~X3DInterpolatorNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	void setFraction (float value) ;

	/** Return array of float results array [] from MFFloat inputOutput field named "key" */
	MFFloat* getKey ();

	/** Return number of primitive values in "key" array */
	int getNumKey ();

	/** Assign float array [] to MFFloat inputOutput field named "key" */
	void setKey (float* values, int size) ;

	/** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	void setKey (float value) ;

	/** Return array of 3-tuple float results array using RGB values [0..1] from MFColor inputOutput field named "keyValue" */
	MFFloat* getKeyValue ();

	/** Return number of 3-tuple primitive values in "keyValue" array */
	int getNumKeyValue ();

	/** Assign 3-tuple float array using RGB values [0..1] to MFColor inputOutput field named "keyValue" */
	void setKeyValue (float* values, int size);
	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);

public:
	MFFloat* key;
	MFFloat* keyValue;
};
 
//B.2.22 X3DKeyDeviceSensorNode 
/** X3DKeyDeviceSensorNode defines an abstract node interface that extends interfaces X3DChildNode, X3DNode. */

class X3DKeyDeviceSensorNode : public X3DSensorNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	X3DKeyDeviceSensorNode();
	virtual ~X3DKeyDeviceSensorNode();

	/** Return bool result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign bool value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	/** Return bool result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.59 X3DViewportNode 
/** X3DViewportNode defines an abstract node interface that extends interfaces X3DChildNode, X3DNode.
* Grouping nodes can contain other nodes as children, thus making up the backbone of a scene graph. */

class X3DViewportNode : public X3DGroupingNode
{

public:
	X3DViewportNode();
	virtual ~X3DViewportNode();

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value) ;

	// ===== methods for fields inherited from parent interfaces =====

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value) ;

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode* nodes) ;

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "addChildren" */
	//void addChildren (X3DChildNode node) ;

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DPrototypeInstance node) ;

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "addChildren" */
	//void addChildren (X3DNode* nodes) ;

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode* nodes) ;

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOnly field named "removeChildren" */
	//void removeChildren (X3DChildNode node) ;

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DPrototypeInstance node) ;

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOnly field named "removeChildren" */
	//void removeChildren (X3DNode* nodes) ;

	///** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "children" */
	//X3DNode* getChildren ();

	///** Return number of nodes in "children" array */
	//int getNumChildren ();

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DChildNode* nodes) ;

	///** Assign single X3DChildNode value (using a properly typed node) as the MFNode array for inputOutput field named "children" */
	//void setChildren (X3DChildNode node) ;

	///** Assign X3DChildNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DPrototypeInstance node) ;

	///** Assign X3DChildNode array (using a properly typed node array) to MFNode inputOutput field named "children" */
	//void setChildren (X3DNode* nodes) ;

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};

//B.2.23 X3DLayerNode 
/** X3DLayerNode defines an abstract node interface that extends interface . */

class X3DLayerNode : public X3DNode
{

public:
	X3DLayerNode();
	virtual ~X3DLayerNode();

	/** Return bool result from SFBool inputOutput field named "isPickable" */
	bool getIsPickable ();

	/** Assign bool value to SFBool inputOutput field named "isPickable" */
	void setIsPickable (bool value);

	/** Return X3DViewportNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "viewport" */
	X3DNode* getViewport ();

	/** Assign X3DViewportNode value (using a properly typed node) to SFNode inputOutput field named "viewport" */
	void setViewport (X3DViewportNode node) ;

	/** Assign X3DViewportNode value (using a properly typed protoInstance) */
	void setViewport (X3DPrototypeInstance protoInstance) ;

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.24 X3DLayoutNode 
/** X3DLayoutNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DLayoutNode : public X3DChildNode
{

public:
	X3DLayoutNode();
	virtual ~X3DLayoutNode();

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.25 X3DLightNode 
/** X3DLightNode defines an abstract node interface that extends interfaces X3DNode.
* Light nodes provide illumination for rendering geometry in the scene. */

class X3DLightNode : public X3DChildNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	X3DLightNode();
	virtual ~X3DLightNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return float result [] from intensityType type inputOutput field named "ambientIntensity" */
	float getAmbientIntensity ();

	/** Assign float value [] to intensityType type inputOutput field named "ambientIntensity" */
	void setAmbientIntensity (float value) ;

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "color" */
	float* getColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "color" */
	void setColor (float* color) ;

	/** Return float result [] from intensityType type inputOutput field named "intensity" */
	float getIntensity ();

	/** Assign float value [] to intensityType type inputOutput field named "intensity" */
	void setIntensity (float value) ;

	/** Return bool result from SFBool inputOutput field named "on" */
	bool getOn ();

	/** Assign bool value to SFBool inputOutput field named "on" */
	void setOn (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
	void setColor(SFColor Color);
	void setGlobal(bool Global);
	bool getGlobal();

//Attributes
public:
	float	ambientIntensity;
	//SFColor	color;
	float	color[4];
	bool	global;
	float	intensity;
	bool	on;
};
 
//B.2.26 X3DMaterialNode 
/** X3DMaterialNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DMaterialNode : public X3DAppearanceChildNode
{

public:
	X3DMaterialNode();
	virtual ~X3DMaterialNode();

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.27 X3DNBodyCollidableNode 
/** X3DNBodyCollidableNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DNBodyCollidableNode : public X3DChildNode
{

public:
	X3DNBodyCollidableNode();
	virtual ~X3DNBodyCollidableNode();

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	float* getBboxCenter ();

	/** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	void setBboxCenter (float* value);

	/** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	float* getBboxSize ();

	/** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	void setBboxSize (float* value) ;

	/** Return bool result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign bool value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "rotation" */
	float* getRotation ();

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "rotation" */
	void setRotation (float* value) ;

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "translation" */
	float* getTranslation ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "translation" */
	void setTranslation (float* value) ;

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.28 X3DNBodyCollisionSpaceNode 
/** X3DNBodyCollisionSpaceNode defines an abstract node interface that extends interface . */

class X3DNBodyCollisionSpaceNode : public X3DNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	X3DNBodyCollisionSpaceNode();
	virtual ~X3DNBodyCollisionSpaceNode();

	/** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	float* getBboxCenter ();

	/** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	void setBboxCenter (float* value);

	/** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	float* getBboxSize ();

	/** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	void setBboxSize (float* value) ;

	/** Return bool result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign bool value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.29 X3DNetworkSensorNode 
/** X3DNetworkSensorNode defines an abstract node interface that extends interfaces X3DChildNode, X3DNode. */

class X3DNetworkSensorNode : public X3DSensorNode
{

public:
	X3DNetworkSensorNode();
	virtual ~X3DNetworkSensorNode();

	/** Return bool result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign bool value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	/** Return bool result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.30 X3DNode 
/** X3DNode defines an abstract node interface.
* All instantiable nodes implement X3DNode, which corresponds to SFNode in the X3D specification. */

//class CX3Node : public void
//{
//	// ===== methods for fields inherited from parent interfaces =====
////
//public:
//	CX3Node();
//	virtual ~CX3Node();
//
//	/** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
//	X3DNode* getMetadata ();
//
//	/** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
//	void setMetadata (X3DMetadataObject* node);
//
//	/** Assign X3DMetadataObject value (using a properly typed protoInstance) */
//	void setMetadata (X3DPrototypeInstance* protoInstance);
//
//	/** Dispose of this node's resources. */
//	void dispose();
//
//	/** Get a field for this node by name. */
//	X3DField* getField (std::string name);
//
//	/** Get list of available fields in this node. */
//	X3DFieldDefinition* getFieldDefinitions();
//
//	/** Get the name of this node. */
//	std::string getNodeName();
//
//	/** Determine if node setup is completed. */
//	bool isRealized ();
//
//	/** Notify node that setup stage is complete. */
//	void realize ();
//};
 
//B.2.32 X3DNurbsControlCurveNode 
/** X3DNurbsControlCurveNode defines an abstract node interface that extends interface . */

class X3DNurbsControlCurveNode : public X3DNode
{

public:
	X3DNurbsControlCurveNode();
	virtual ~X3DNurbsControlCurveNode();

	/** Return array of 2-tuple double results array [] from MFVec2d inputOutput field named "controlPoint" */
	double* getControlPoint ();

	/** Return number of 2-tuple primitive values in "controlPoint" array */
	int getNumControlPoint ();

	/** Assign 2-tuple double array [] to MFVec2d inputOutput field named "controlPoint" */
	void setControlPoint (double* values, int size) ;

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
 
//B.2.34 X3DParametricGeometryNode 
/** X3DParametricGeometryNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DParametricGeometryNode : public X3DGeometryNode
{

public:
	X3DParametricGeometryNode();
	virtual ~X3DParametricGeometryNode();

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};

//B.2.33 X3DNurbsSurfaceGeometryNode 
/** X3DNurbsSurfaceGeometryNode defines an abstract node interface that extends interfaces X3DGeometryNode, X3DNode. */

class X3DNurbsSurfaceGeometryNode : public X3DParametricGeometryNode
{

public:
	X3DNurbsSurfaceGeometryNode();
	virtual ~X3DNurbsSurfaceGeometryNode();

	/** Return bool result from SFBool initializeOnly field named "uClosed" */
	bool getUClosed ();

	/** Assign bool value to SFBool initializeOnly field named "uClosed" */
	void setUClosed (bool value);

	/** Return bool result from SFBool initializeOnly field named "vClosed" */
	bool getVClosed ();

	/** Assign bool value to SFBool initializeOnly field named "vClosed" */
	void setVClosed (bool value);

	/** Return int result [] from SFInt32 initializeOnly field named "uDimension" */
	int getUDimension ();

	/** Assign int value [] to SFInt32 initializeOnly field named "uDimension" */
	void setUDimension (int value) ;

	/** Return int result [] from SFInt32 initializeOnly field named "vDimension" */
	int getVDimension ();

	/** Assign int value [] to SFInt32 initializeOnly field named "vDimension" */
	void setVDimension (int value) ;

	/** Return array of double results array [] from MFDouble initializeOnly field named "uKnot" */
	double* getUKnot ();

	/** Return number of primitive values in "uKnot" array */
	int getNumUKnot ();

	/** Assign double array [] to MFDouble initializeOnly field named "uKnot" */
	void setUKnot (double* values, int size) ;

	/** Assign single double value [] as the MFDouble array for initializeOnly field named "uKnot" */
	void setUKnot (double value) ;

	/** Return array of double results array [] from MFDouble initializeOnly field named "vKnot" */
	double* getVKnot ();

	/** Return number of primitive values in "vKnot" array */
	int getNumVKnot ();

	/** Assign double array [] to MFDouble initializeOnly field named "vKnot" */
	void setVKnot (double* values, int size) ;

	/** Assign single double value [] as the MFDouble array for initializeOnly field named "vKnot" */
	void setVKnot (double value) ;

	/** Return int result [] from SFInt32 initializeOnly field named "uOrder" */
	int getUOrder ();

	/** Assign int value [] to SFInt32 initializeOnly field named "uOrder" */
	void setUOrder (int value) ;

	/** Return int result [] from SFInt32 initializeOnly field named "vOrder" */
	int getVOrder ();

	/** Assign int value [] to SFInt32 initializeOnly field named "vOrder" */
	void setVOrder (int value) ;

	/** Return int result [] from SFInt32 inputOutput field named "uTessellation" */
	int getUTessellation ();

	/** Assign int value [] to SFInt32 inputOutput field named "uTessellation" */
	void setUTessellation (int value) ;

	/** Return int result [] from SFInt32 inputOutput field named "vTessellation" */
	int getVTessellation ();

	/** Assign int value [] to SFInt32 inputOutput field named "vTessellation" */
	void setVTessellation (int value) ;

	/** Return array of double results array [] from MFDouble inputOutput field named "weight" */
	double* getWeight ();

	/** Return number of primitive values in "weight" array */
	int getNumWeight ();

	/** Assign double array [] to MFDouble inputOutput field named "weight" */
	void setWeight (double* values, int size) ;

	/** Assign single double value [] as the MFDouble array for inputOutput field named "weight" */
	void setWeight (double value) ;

	/** Return bool result from SFBool initializeOnly field named "solid" */
	bool getSolid ();

	/** Assign bool value to SFBool initializeOnly field named "solid" */
	void setSolid (bool value);

	/** Return X3DCoordinateNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "controlPoint" */
	X3DNode* getControlPoint ();

	/** Assign X3DCoordinateNode value (using a properly typed node) to SFNode inputOutput field named "controlPoint" */
	void setControlPoint (X3DCoordinateNode node) ;

	/** Assign X3DCoordinateNode value (using a properly typed protoInstance) */
	void setControlPoint (X3DPrototypeInstance protoInstance) ;

	/** Return X3DTextureCoordinateNode|NurbsTextureCoordinate result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texCoord" */
	X3DNode* getTexCoord ();

	/** Assign X3DTextureCoordinateNode|NurbsTextureCoordinate value (using a properly typed node) to SFNode inputOutput field named "texCoord" */
	void setTexCoord (X3DNode node) ;

	/** Assign X3DTextureCoordinateNode|NurbsTextureCoordinate value (using a properly typed protoInstance) */
	void setTexCoord (X3DPrototypeInstance protoInstance) ;

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};

 
//B.2.35 X3DParticleEmitterNode 
/** X3DParticleEmitterNode defines an abstract node interface that extends interface . */

class X3DParticleEmitterNode : public X3DNode
{

public:
	X3DParticleEmitterNode();
	virtual ~X3DParticleEmitterNode();

	/** Return float result [] from SFFloat inputOutput field named "speed" */
	float getSpeed ();

	/** Assign float value [] to SFFloat inputOutput field named "speed" */
	void setSpeed (float value) ;

	/** Return float result [] from SFFloat inputOutput field named "variation" */
	float getVariation ();

	/** Assign float value [] to SFFloat inputOutput field named "variation" */
	void setVariation (float value) ;

	/** Return float result [] from SFFloat inputOutput field named "mass" */
	float getMass ();

	/** Assign float value [] to SFFloat inputOutput field named "mass" */
	void setMass (float value) ;

	/** Return float result [] from SFFloat initializeOnly field named "surfaceArea" */
	float getSurfaceArea ();

	/** Assign float value [] to SFFloat initializeOnly field named "surfaceArea" */
	void setSurfaceArea (float value) ;

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.36 X3DParticlePhysicsModelNode 
/** X3DParticlePhysicsModelNode defines an abstract node interface that extends interface . */

class X3DParticlePhysicsModelNode : public X3DNode
{

public:
	X3DParticlePhysicsModelNode();
	virtual ~X3DParticlePhysicsModelNode();

	/** Return bool result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign bool value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.37 X3DPickSensorNode 
/** X3DPickSensorNode defines an abstract node interface that extends interfaces X3DChildNode, X3DNode. */

class X3DPickSensorNode : public X3DSensorNode
{

public:
	X3DPickSensorNode();
	virtual ~X3DPickSensorNode();

	/** Return bool result from SFBool inputOutput field named "enabled" */
	bool getEnabled ();

	/** Assign bool value to SFBool inputOutput field named "enabled" */
	void setEnabled (bool value);

	/** Return array of String results array ["ALL","NONE","TERRAIN",...] from MFString inputOutput field named "objectType" */
	std::string* getObjectType ();

	/** Return number of primitive values in "objectType" array */
	int getNumObjectType ();

	/** Assign String array ["ALL","NONE","TERRAIN",...] to MFString inputOutput field named "objectType" */
	void setObjectType (std::string* values, int size);

	/** Assign single String value ["ALL","NONE","TERRAIN",...] as the MFString array for inputOutput field named "objectType" */
	void setObjectType (std::string value);

	/** Return String result (enumeration values "GEOMETRY"|"BOUNDS"|...) from SFString initializeOnly field named "intersectionType" */
	std::string getIntersectionType ();

	/** Assign String value (enumeration values "GEOMETRY"|"BOUNDS"|...) to SFString initializeOnly field named "intersectionType" */
	void setIntersectionType (std::string value);

	/** Return String result ["ANY"|"CLOSEST"|"ALL"|"ALL_SORTED"] from  type initializeOnly field named "sortOrder" */
	std::string getSortOrder ();

	/** Assign String value ["ANY"|"CLOSEST"|"ALL"|"ALL_SORTED"] to  type initializeOnly field named "sortOrder" */
	void setSortOrder (std::string value) ;

	/** Return array of X3DGroupingNode|X3DShapeNode|Inline results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "pickTarget" */
	X3DNode* getPickTarget ();

	/** Return number of nodes in "pickTarget" array */
	int getNumPickTarget ();

	/** Assign X3DGroupingNode|X3DShapeNode|Inline array (using a properly typed node array) to MFNode inputOutput field named "pickTarget" */
	void setPickTarget (X3DNode* nodes) ;

	/** Assign single X3DNode[] value (using a properly typed node) as the MFNode array for inputOutput field named "pickTarget" */
	void setPickTarget (X3DNode node) ;

	/** Assign X3DGroupingNode|X3DShapeNode|Inline array (using a properly typed protoInstance array) to MFNode inputOutput field named "pickTarget" */
	void setPickTarget (X3DPrototypeInstance node) ;

	/** Return array of X3DChildNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode outputOnly field named "pickedGeometry" */
	X3DNode* getPickedGeometry ();

	/** Return number of nodes in "pickedGeometry" array */
	int getNumPickedGeometry ();

	/** Return X3DGeometryNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "pickingGeometry" */
	X3DNode* getPickingGeometry ();

	/** Assign X3DGeometryNode value (using a properly typed node) to SFNode inputOutput field named "pickingGeometry" */
	void setPickingGeometry (X3DGeometryNode node) ;

	/** Assign X3DGeometryNode value (using a properly typed protoInstance) */
	void setPickingGeometry (X3DPrototypeInstance protoInstance) ;

	// ===== methods for fields inherited from parent interfaces =====

	/** Return bool result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return bool result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	///** Assign bool value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};

 
//B.2.39 X3DProductStructureChildNode 
/** X3DProductStructureChildNode defines an abstract node interface that extends interfaces X3DNode.
* The X3DProductStructureChildNode abstract node type marks nodes that are valid product structure children for the CADInterchange component. */

class X3DProductStructureChildNode : public X3DChildNode
{

public:
	X3DProductStructureChildNode();
	virtual ~X3DProductStructureChildNode();

	/** Return String result [] from SFString inputOutput field named "name" */
	std::string getName ();

	/** Assign String value [] to SFString inputOutput field named "name" */
	void setName (std::string value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.40 X3DPrototypeInstance 
/** X3DPrototypeInstance defines an abstract node interface.
* Note that direct children nodes are disallowed, let fieldValue with type SFNode/MFNode contain them. */

class X3DPrototypeInstance : public X3DNode
{

public:
	X3DPrototypeInstance();
	virtual ~X3DPrototypeInstance();

};
 
//B.2.41 X3DRigidJointNode 
/** X3DRigidJointNode defines an abstract node interface that extends interface . */

class X3DRigidJointNode : public X3DNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	X3DRigidJointNode();
	virtual ~X3DRigidJointNode();

	/** Return array of String results array [] from MFString inputOutput field named "forceOutput" */
	std::string* getForceOutput ();

	/** Return number of primitive values in "forceOutput" array */
	int getNumForceOutput ();

	/** Assign String array [] to MFString inputOutput field named "forceOutput" */
	void setForceOutput (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "forceOutput" */
	void setForceOutput (std::string value);

	/** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body1" */
	X3DNode* getBody1 ();

	/** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body1" */
	void setBody1 (RigidBody node) ;

	/** Assign RigidBody value (using a properly typed protoInstance) */
	void setBody1 (X3DPrototypeInstance protoInstance) ;

	/** Return RigidBody result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "body2" */
	X3DNode* getBody2 ();

	/** Assign RigidBody value (using a properly typed node) to SFNode inputOutput field named "body2" */
	void setBody2 (RigidBody node) ;

	/** Assign RigidBody value (using a properly typed protoInstance) */
	void setBody2 (X3DPrototypeInstance protoInstance) ;

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 

//B.3.6 X3DUrlObject 
/** X3DUrlObject defines an abstract node interface.
* X3DUrlObject indicates that a node has content loaded from a URL and can be tracked via a LoadSensor. */

class X3DUrlObject
{

public:
	X3DUrlObject();
	virtual ~X3DUrlObject();

	virtual void Draw();
	virtual std::string getXMLString();
	
	/** Return array of String results array [] from MFString inputOutput field named "url" */
	//MFString& getUrl ();
	std::string* getUrl();

	/** Return number of primitive values in "url" array */
	int getNumUrl ();

	/** Assign String array [] to MFString inputOutput field named "url" */
	void setUrl (std::string* values, int size);

	/** Assign single String value [] as the MFString array for inputOutput field named "url" */
	void setUrl (std::string value);

protected:

	//MFString	url;
	std::vector<std::string> url;
};

//B.2.42 X3DScriptNode 
/** X3DScriptNode defines an abstract node interface. */

class X3DScriptNode : public X3DChildNode, public X3DUrlObject
{

public:
	X3DScriptNode();
	virtual ~X3DScriptNode();

	/** Return array of String results array [] from MFString inputOutput field named "url" */
	//std::string* getUrl ();

	///** Return number of primitive values in "url" array */
	//int getNumUrl ();

	///** Assign String array [] to MFString inputOutput field named "url" */
	//void setUrl (std::string* values, int size);

	///** Assign single String value [] as the MFString array for inputOutput field named "url" */
	//void setUrl (std::string value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 

//B.2.44 X3DSequencerNode 
/** X3DSequencerNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DSequencerNode : public X3DChildNode
{

public:
	X3DSequencerNode();
	virtual ~X3DSequencerNode();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Assign bool value to SFBool inputOnly field named "next" */
	void setNext (bool value);

	/** Assign bool value to SFBool inputOnly field named "previous" */
	void setPrevious (bool value);

	/** Assign float value [] to SFFloat inputOnly field named "set_fraction" */
	void setFraction (float value) ;

	/** Return array of float results array [] from MFFloat inputOutput field named "key" */
	MFFloat* getKey ();

	/** Return number of primitive values in "key" array */
	int getNumKey ();

	/** Assign float array [] to MFFloat inputOutput field named "key" */
	void setKey (float* values, int size) ;

	/** Assign single float value [] as the MFFloat array for inputOutput field named "key" */
	void setKey (float value) ;

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
public:
	MFFloat* key;
};
 
//B.2.45 X3DShaderNode 
/** X3DShaderNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DShaderNode : public X3DAppearanceChildNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	X3DShaderNode();
	virtual ~X3DShaderNode();

	/** Assign bool value to SFBool inputOnly field named "activate" */
	void setActivate (bool value);

	/** Return bool result from SFBool outputOnly field named "isSelected" */
	bool getIsSelected ();

	/** Return bool result from SFBool outputOnly field named "isValid" */
	bool getIsValid ();

	/** Return String result (enumeration values = "Cg"|"GLSL"|"HLSL"|...) from SFString initializeOnly field named "language" */
	std::string getLanguage ();

	/** Assign String value (enumeration values = "Cg"|"GLSL"|"HLSL"|...) to SFString initializeOnly field named "language" */
	void setLanguage (std::string value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 

//C.3.69 FillProperties 
/** FillProperties defines a concrete node interface that extends interface X3DAppearanceChildNode. */

class FillProperties : public X3DAppearanceChildNode
{

public:
	FillProperties();
	virtual ~FillProperties();

	virtual void Draw();
	virtual std::string getXMLString();

	/** Return boolean result from SFBool inputOutput field named "filled" */
	bool getFilled ();

	/** Assign boolean value to SFBool inputOutput field named "filled" */
	void setFilled (bool value);

	/** Return boolean result from SFBool inputOutput field named "hatched" */
	bool getHatched ();

	/** Assign boolean value to SFBool inputOutput field named "hatched" */
	void setHatched (bool value);

	/** Return int result [] from SFInt32 inputOutput field named "hatchStyle" */
	int getHatchStyle ();

	/** Assign int value [] to SFInt32 inputOutput field named "hatchStyle" */
	void setHatchStyle (int value);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "hatchColor" */
	SFColor* getHatchColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "hatchColor" */
	void setHatchColor (float* color);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	bool filled;
	SFColor hatchColor;
	bool hatched;
	int hatchStyle;
};
 
//C.3.116 LineProperties 
/** LineProperties defines a concrete node interface that extends interface X3DAppearanceChildNode. */

class LineProperties : public X3DAppearanceChildNode
{

public:
	LineProperties();
	virtual ~LineProperties();
	virtual std::string getXMLString();

	/** Return boolean result from SFBool inputOutput field named "applied" */
	bool getApplied ();

	/** Assign boolean value to SFBool inputOutput field named "applied" */
	void setApplied (bool value);

	/** Return int result [] from SFInt32 inputOutput field named "linetype" */
	int getLinetype ();

	/** Assign int value [] to SFInt32 inputOutput field named "linetype" */
	void setLinetype (int value);

	/** Return float result [] from SFFloat inputOutput field named "linewidthScaleFactor" */
	float getLinewidthScaleFactor ();

	/** Assign float value [] to SFFloat inputOutput field named "linewidthScaleFactor" */
	void setLinewidthScaleFactor (float value);

private:
	bool applied;
	int linetype;
	float linewidthScaleFactor;
};

//B.2.52 X3DTextureNode 
/** X3DTextureNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DTextureNode : public X3DAppearanceChildNode
{

public:
	X3DTextureNode();
	virtual ~X3DTextureNode();

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};


//B.2.53 X3DTextureTransformNode 
/** X3DTextureTransformNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DTextureTransformNode : public X3DAppearanceChildNode
{

public:
	X3DTextureTransformNode();
	virtual ~X3DTextureTransformNode();

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node) ;

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance) ;
};

 
//C.3.121 Material 
/** Material defines a concrete node interface that extends interface X3DMaterialNode. */

class Material : public X3DMaterialNode
{

public:
	Material();
	virtual ~Material();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return float result [] from intensityType type inputOutput field named "ambientIntensity" */
	float getAmbientIntensity ();

	/** Assign float value [] to intensityType type inputOutput field named "ambientIntensity" */
	void setAmbientIntensity (float value);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "diffuseColor" */
	//float* getDiffuseColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "diffuseColor" */
	void setDiffuseColor (float* color);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "emissiveColor" */
	float* getEmissiveColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "emissiveColor" */
	void setEmissiveColor (float* color);

	/** Return float result [] from intensityType type inputOutput field named "shininess" */
	float getShininess ();

	/** Assign float value [] to intensityType type inputOutput field named "shininess" */
	void setShininess (float value);

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "specularColor" */
	float* getSpecularColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "specularColor" */
	void setSpecularColor (float* color);

	/** Return float result [] from intensityType type inputOutput field named "transparency" */
	float getTransparency ();

	/** Assign float value [] to intensityType type inputOutput field named "transparency" */
	void setTransparency (float value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	void setDiffuseColor(SFVec3f val);
	void setEmissiveColor(SFVec3f val);
	void setSpecularColor(SFVec3f val);

	SFColor *getDiffuseColor();
	//SFColor *getEmissiveColor();
	//SFColor *getSpecularColor();

//Attributes
public:
	float	ambientIntensity;
	SFColor	diffuseColor;
	//float	diffuseColor[3];
	//SFColor	emissiveColor;
	float	emissiveColor[3];
	float	shininess;
	//SFColor	specularColor;
	float	specularColor[3];
	float	transparency;
};
 
 
//B.2.49 X3DTexture2DNode 
/** X3DTexture2DNode defines an abstract node interface that extends interfaces X3DAppearanceChildNode, X3DNode. */

class X3DTexture2DNode : public X3DTextureNode
{

public:
	X3DTexture2DNode();
	virtual ~X3DTexture2DNode();
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return bool result from SFBool initializeOnly field named "repeatS" */
	bool getRepeatS ();

	/** Assign bool value to SFBool initializeOnly field named "repeatS" */
	void setRepeatS (bool value);

	/** Return bool result from SFBool initializeOnly field named "repeatT" */
	bool getRepeatT ();

	/** Assign bool value to SFBool initializeOnly field named "repeatT" */
	void setRepeatT (bool value);

	/** Return TextureProperties result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "textureProperties" */
	void getTextureProperties (X3DNode result);

	/** Assign TextureProperties value (using a properly typed node) to SFNode initializeOnly field named "textureProperties" */
	void setTextureProperties (TextureProperties node) ;

	/** Assign TextureProperties value (using a properly typed protoInstance) */
	void setTextureProperties (X3DPrototypeInstance protoInstance) ;

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);

//Attributes
public:
	bool	repeatS;
	bool	repeatT;
};

//C.3.95 ImageTexture 
/** ImageTexture defines a concrete node interface that extends interfaces X3DTexture2DNodeX3DUrlObject. */

class ImageTexture : public X3DTexture2DNode, public X3DUrlObject
{

public:
	ImageTexture();
	virtual ~ImageTexture();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();
	void setDescription (std::string value);


	/** Return array of String results array [] from MFString inputOutput field named "url" */
	//std::string* getUrl ();

	///** Return number of primitive values in "url" array */
	//int getNumUrl ();

	///** Assign String array [] to MFString inputOutput field named "url" */
	//void setUrl (std::string* values, int size);

	///** Assign single String value [] as the MFString array for inputOutput field named "url" */
	//void setUrl (std::string value);

	// ===== methods for fields inherited from parent interfaces =====

	/** Return boolean result from SFBool initializeOnly field named "repeatS" */
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

	/** Return TextureProperties result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "textureProperties" */
	void getTextureProperties (X3DNode result);

	/** Assign TextureProperties value (using a properly typed node) to SFNode initializeOnly field named "textureProperties" */
	void setTextureProperties (TextureProperties node);

	/** Assign TextureProperties value (using a properly typed protoInstance) */
	void setTextureProperties (X3DPrototypeInstance protoInstance);

	GLuint LoadTexture(std::string file_name, int nIdx);
//Attributes
public:
	//std::vector<std::string> url;
	int			m_nID;

};
 
//C.3.2 Appearance 
/** Appearance defines a concrete node interface that extends interface X3DAppearanceNode. */

class Appearance : public X3DAppearanceNode
{
	// ===== methods for fields inherited from parent interfaces =====

public:
	Appearance();
	virtual ~Appearance();

//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();


	/** Return array of X3DShaderNode results array (using a properly typed node array or X3DPrototypeInstance array) from MFNode inputOutput field named "shaders" */
	X3DNode* getShaders ();

	/** Return number of nodes in "shaders" array */
	int getNumShaders ();

	/** Assign X3DShaderNode array (using a properly typed node array) to MFNode inputOutput field named "shaders" */
	void setShaders (X3DShaderNode* nodes, int size);

	/** Assign single X3DShaderNode value (using a properly typed node) as the MFNode array for inputOutput field named "shaders" */
	void setShaders (X3DShaderNode node);

	/** Assign X3DShaderNode array (using a properly typed protoInstance array) to MFNode inputOutput field named "shaders" */
	void setShaders (X3DPrototypeInstance node);

	/** Assign X3DShaderNode array (using a properly typed node array) to MFNode inputOutput field named "shaders" */
	void setShaders (X3DNode* nodes, int size);

	/** Return FillProperties result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "fillProperties" */
	void getFillProperties (X3DNode result);

	/** Assign FillProperties value (using a properly typed node) to SFNode inputOutput field named "fillProperties" */
	void setFillProperties (FillProperties node);

	/** Assign FillProperties value (using a properly typed protoInstance) */
	void setFillProperties (X3DPrototypeInstance protoInstance);

	/** Return LineProperties result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "lineProperties" */
	void getLineProperties (X3DNode result);

	/** Assign LineProperties value (using a properly typed node) to SFNode inputOutput field named "lineProperties" */
	void setLineProperties (LineProperties node);

	/** Assign LineProperties value (using a properly typed protoInstance) */
	void setLineProperties (X3DPrototypeInstance protoInstance);

	/** Return X3DMaterialNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "material" */
	void getMaterial (X3DNode result);

	/** Assign X3DMaterialNode value (using a properly typed node) to SFNode inputOutput field named "material" */
	void setMaterial (X3DMaterialNode node);

	/** Assign X3DMaterialNode value (using a properly typed protoInstance) */
	void setMaterial (X3DPrototypeInstance protoInstance);

	/** Return X3DTextureNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "texture" */
	void getTexture (X3DNode result);

	/** Assign X3DTextureNode value (using a properly typed node) to SFNode inputOutput field named "texture" */
	void setTexture (X3DTextureNode node);

	/** Assign X3DTextureNode value (using a properly typed protoInstance) */
	void setTexture (X3DPrototypeInstance protoInstance);

	/** Return X3DTextureTransformNode result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "textureTransform" */
	void getTextureTransform (X3DNode result);

	/** Assign X3DTextureTransformNode value (using a properly typed node) to SFNode inputOutput field named "textureTransform" */
	void setTextureTransform (X3DTextureTransformNode node);

	/** Assign X3DTextureTransformNode value (using a properly typed protoInstance) */
	void setTextureTransform (X3DPrototypeInstance protoInstance);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance protoInstance);

	void setMaterial(Material*	Node);
	void setImageTexture(ImageTexture*	Node);
//Attributes
public:
	Material*		material;
	ImageTexture*	imagetexture;

};
 
//B.2.46 X3DShapeNode 
/** X3DShapeNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DShapeNode : public X3DChildNode, public X3DBoundedObject
{

public:
	X3DShapeNode();
	virtual ~X3DShapeNode();

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
	//void setBboxSize (float* value) ;

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);

	void setGeometry(X3DGeometryNode* pNode);

	void setAppearance(Appearance* pNode);
//Attributes
public:
	X3DGeometryNode*	geometry;
	Appearance*		appearance;

};
 
//B.2.47 X3DSoundNode 
/** X3DSoundNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DSoundNode : public X3DChildNode
{

public:
	X3DSoundNode();
	virtual ~X3DSoundNode();

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
 
//B.2.54 X3DTimeDependentNode 
/** X3DTimeDependentNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DTimeDependentNode : public X3DChildNode
{

public:
	X3DTimeDependentNode();
	virtual ~X3DTimeDependentNode();

	//Implimentation
public:
	virtual void Draw();
	virtual std::string getXMLString();

	/** Return double result in seconds from SFTime outputOnly field named "elapsedTime" */
	double getElapsedTime ();

	///** Return bool result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	/** Return bool result from SFBool outputOnly field named "isPaused" */
	bool getIsPaused ();

	/** Return bool result from SFBool inputOutput field named "loop" */
	bool getLoop ();

	/** Assign bool value to SFBool inputOutput field named "loop" */
	void setLoop (bool value);

	/** Return double result in seconds from SFTime inputOutput field named "pauseTime" */
	double getPauseTime ();

	/** Assign double value in seconds to SFTime inputOutput field named "pauseTime" */
	void setPauseTime (double timestamp) ;

	/** Return double result in seconds from SFTime inputOutput field named "resumeTime" */
	double getResumeTime ();

	/** Assign double value in seconds to SFTime inputOutput field named "resumeTime" */
	void setResumeTime (double timestamp) ;

	/** Return double result in seconds from SFTime inputOutput field named "startTime" */
	double getStartTime ();

	/** Assign double value in seconds to SFTime inputOutput field named "startTime" */
	void setStartTime (double timestamp) ;

	/** Return double result in seconds from SFTime inputOutput field named "stopTime" */
	double getStopTime ();

	/** Assign double value in seconds to SFTime inputOutput field named "stopTime" */
	void setStopTime (double timestamp) ;

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);

	bool	loop;
	SFTime	pauseTime;
	SFTime	resumeTime;
	SFTime	startTime;
	SFTime	stopTime;

};
 
//B.2.48 X3DSoundSourceNode 
/** X3DSoundSourceNode defines an abstract node interface that extends interfaces X3DChildNode, X3DNode.
* Nodes implementing X3DSoundSourceNode are allowed as children of Sound node. */

class X3DSoundSourceNode : public X3DTimeDependentNode
{

public:
	X3DSoundSourceNode();
	virtual ~X3DSoundSourceNode();
	virtual std::string getXMLString();

	/** Return double result in seconds from SFTime outputOnly field named "duration_changed" */
	double getDuration ();

	/** Return String result [] from SFString inputOutput field named "description" */
	std::string getDescription ();

	/** Assign String value [] to SFString inputOutput field named "description" */
	void setDescription (std::string value);

	/** Return float result [] from  type inputOutput field named "pitch" */
	float getPitch ();

	/** Assign float value [] to  type inputOutput field named "pitch" */
	void setPitch (float value) ;

	///** Return bool result from SFBool inputOutput field named "loop" */
	//bool getLoop ();

	///** Assign bool value to SFBool inputOutput field named "loop" */
	//void setLoop (bool value);

	///** Return double result in seconds from SFTime inputOutput field named "pauseTime" */
	//double getPauseTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "pauseTime" */
	//void setPauseTime (double timestamp) ;

	///** Return double result in seconds from SFTime inputOutput field named "resumeTime" */
	//double getResumeTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "resumeTime" */
	//void setResumeTime (double timestamp) ;

	///** Return double result in seconds from SFTime inputOutput field named "startTime" */
	//double getStartTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "startTime" */
	//void setStartTime (double timestamp) ;

	///** Return double result in seconds from SFTime inputOutput field named "stopTime" */
	//double getStopTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "stopTime" */
	//void setStopTime (double timestamp) ;

	//// ===== methods for fields inherited from parent interfaces =====

	///** Return double result in seconds from SFTime outputOnly field named "elapsedTime" */
	//double getElapsedTime ();

	///** Return bool result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	///** Return bool result from SFBool outputOnly field named "isPaused" */
	//bool getIsPaused ();

	///** Return bool result from SFBool inputOutput field named "loop" */
	//bool getLoop ();

	///** Assign bool value to SFBool inputOutput field named "loop" */
	//void setLoop (bool value);

	///** Return double result in seconds from SFTime inputOutput field named "pauseTime" */
	//double getPauseTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "pauseTime" */
	//void setPauseTime (double timestamp) ;

	///** Return double result in seconds from SFTime inputOutput field named "resumeTime" */
	//double getResumeTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "resumeTime" */
	//void setResumeTime (double timestamp) ;

	///** Return double result in seconds from SFTime inputOutput field named "startTime" */
	//double getStartTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "startTime" */
	//void setStartTime (double timestamp) ;

	///** Return double result in seconds from SFTime inputOutput field named "stopTime" */
	//double getStopTime ();

	///** Assign double value in seconds to SFTime inputOutput field named "stopTime" */
	//void setStopTime (double timestamp) ;

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
private:
	std::string description;
	float pitch;

};
 
 
//B.2.50 X3DTexture3DNode 
/** X3DTexture3DNode defines an abstract node interface that extends interfaces X3DAppearanceChildNode, X3DNode. */

class X3DTexture3DNode : public X3DTextureNode
{

public:
	X3DTexture3DNode();
	virtual ~X3DTexture3DNode();

	/** Return bool result from SFBool initializeOnly field named "repeatS" */
	bool getRepeatS ();

	/** Assign bool value to SFBool initializeOnly field named "repeatS" */
	void setRepeatS (bool value);

	/** Return bool result from SFBool initializeOnly field named "repeatT" */
	bool getRepeatT ();

	/** Assign bool value to SFBool initializeOnly field named "repeatT" */
	void setRepeatT (bool value);

	/** Return bool result from SFBool initializeOnly field named "repeatR" */
	bool getRepeatR ();

	/** Assign bool value to SFBool initializeOnly field named "repeatR" */
	void setRepeatR (bool value);

	/** Return TextureProperties result (using a properly typed node or X3DPrototypeInstance) from SFNode initializeOnly field named "textureProperties" */
	void getTextureProperties (X3DNode result);

	/** Assign TextureProperties value (using a properly typed node) to SFNode initializeOnly field named "textureProperties" */
	void setTextureProperties (TextureProperties node) ;

	/** Assign TextureProperties value (using a properly typed protoInstance) */
	void setTextureProperties (X3DPrototypeInstance protoInstance) ;

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};

;

//B.2.55 X3DTouchSensorNode 
/** X3DTouchSensorNode defines an abstract node interface that extends interfaces X3DSensorNode, X3DChildNode, X3DNode. */

class X3DTouchSensorNode : public X3DPointingDeviceSensorNode
{

public:
	X3DTouchSensorNode();
	virtual ~X3DTouchSensorNode();

	/** Return String result [] from SFString inputOutput field named "description" */
	//std::string getDescription ();

	/** Assign String value [] to SFString inputOutput field named "description" */
	//void setDescription (std::string value);

	/** Return double result in seconds from SFTime outputOnly field named "touchTime" */
	double getTouchTime ();

	std::string getXMLString();
	// ===== methods for fields inherited from parent interfaces =====

	/** Return bool result from SFBool outputOnly field named "isOver" */
	//bool getIsOver ();

	/** Return bool result from SFBool outputOnly field named "isActive" */
	//bool getIsActive ();

	/** Return bool result from SFBool inputOutput field named "enabled" */
	//bool getEnabled ();

	/** Assign bool value to SFBool inputOutput field named "enabled" */
	//void setEnabled (bool value);

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
//B.2.56 X3DTriggerNode 
/** X3DTriggerNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DTriggerNode : public X3DChildNode
{

public:
	X3DTriggerNode();
	virtual ~X3DTriggerNode();

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};
 
 
//B.2.58 X3DViewpointNode 
/** X3DViewpointNode defines an abstract node interface that extends interfaces X3DChildNode, X3DNode. */

class X3DViewpointNode : public X3DBindableNode
{

public:
	X3DViewpointNode();
	virtual ~X3DViewpointNode();

	/** Return String result [] from SFString inputOutput field named "description" */
	std::string getDescription ();

	/** Assign String value [] to SFString inputOutput field named "description" */
	void setDescription (std::string value);

	/** Return bool result from SFBool inputOutput field named "jump" */
	bool getJump ();

	/** Assign bool value to SFBool inputOutput field named "jump" */
	void setJump (bool value);

	/** Return array of 4-tuple float results array in radians from SFRotation inputOutput field named "orientation" */
	float* getOrientation ();

	/** Assign 4-tuple float array in radians to SFRotation inputOutput field named "orientation" */
	void setOrientation (float* value) ;

	/** Return bool result from SFBool inputOutput field named "retainUserOffsets" */
	bool getRetainUserOffsets ();

	/** Assign bool value to SFBool inputOutput field named "retainUserOffsets" */
	void setRetainUserOffsets (bool value);

	/** Return array of 3-tuple float results array in radians from SFVec3f inputOutput field named "centerOfRotation" */
	float* getCenterOfRotation ();

	/** Assign 3-tuple float array in radians to SFVec3f inputOutput field named "centerOfRotation" */
	void setCenterOfRotation (float* value);

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "position" */
	float* getPosition ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "position" */
	void setPosition (float* value);


	// ===== methods for fields inherited from parent interfaces =====

	/** Assign bool value to SFBool inputOnly field named "set_bind" */
	void setBind (bool value);

	/** Return double result in seconds from SFTime outputOnly field named "bindTime" */
	double getBindTime ();

	/** Return bool result from SFBool outputOnly field named "isBound" */
	bool getIsBound ();

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);

	void	setPosition(SFVec3f pos);
	void	setOrientation(SFVec4f ori);
	void	setCenterOfRotaion(SFVec3f cen);
	//SFVec3f	getPosition();
	//SFRotation	getOrientation2();
	//SFVec3f	getCenterOfRotaion();

//Attributes
protected:
	std::string		description;
	bool		jump;
	float		position[3];
	float		centerOfRotation[3];
	float		orientation[4];
	bool		retainUserOffsets;
};

 
//B.2.60 X3DVolumeDataNode 
/** X3DVolumeDataNode defines an abstract node interface that extends interfaces X3DNode. */

class X3DVolumeDataNode : public X3DChildNode, public X3DBoundedObject
{

public:
	X3DVolumeDataNode();
	virtual ~X3DVolumeDataNode();

	/** Return array of 3-tuple float results array [] from SFVec3f inputOutput field named "dimensions" */
	float* getDimensions ();

	/** Assign 3-tuple float array [] to SFVec3f inputOutput field named "dimensions" */
	void setDimensions (float* value) ;

	///** Return array of 3-tuple float results array [] from SFVec3f initializeOnly field named "bboxCenter" */
	//float* getBboxCenter ();

	///** Assign 3-tuple float array [] to SFVec3f initializeOnly field named "bboxCenter" */
	//void setBboxCenter (float* value);

	///** Return array of 3-tuple float results array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 from boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//float* getBboxSize ();

	///** Assign 3-tuple float array [0,âˆž) or âˆ’1 âˆ’1 âˆ’1 to boundingBoxSizeType type initializeOnly field named "bboxSize" */
	//void setBboxSize (float* value) ;

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);
};

//B.3.2 X3DFogObject 
/** X3DFogObject defines an abstract node interface. */

class X3DFogObject
{

public:
	X3DFogObject();
	virtual ~X3DFogObject();

	/** Return array of 3-tuple float results array using RGB values [0..1] from SFColor inputOutput field named "color" */
	float* getColor ();

	/** Assign 3-tuple float array using RGB values [0..1] to SFColor inputOutput field named "color" */
	void setColor (float* color) ;

	/** Return String enumeration result ("LINEAR"|"EXPONENTIAL") from fogTypeValues type inputOutput field named "fogType" */
	std::string getFogType ();

	/** Assign String enumeration value ("LINEAR"|"EXPONENTIAL") to fogTypeValues type inputOutput field named "fogType" */
	void setFogType (std::string value) ;

	/** Return float result [] from  type inputOutput field named "visibilityRange" */
	float getVisibilityRange ();

	/** Assign float value [] to  type inputOutput field named "visibilityRange" */
	void setVisibilityRange (float value) ;
};
 
//B.3.3 X3DMetadataObject 
/** X3DMetadataObject defines an abstract node interface that extends interface .
* Each X3DMetadataObject node contains a single array of strictly typed values: MFBool, MFInt32, MFFloat, MFDouble, MFString, of MFNode of ther Metadata nodes. */

class X3DMetadataObject
{

public:
	X3DMetadataObject();
	virtual ~X3DMetadataObject();

//Implimentation
public:
	//virtual void Draw();
	//virtual std::string getXMLString();

	/** Return String result [] from SFString inputOutput field named "name" */
	std::string getName ();

	/** Assign String value [] to SFString inputOutput field named "name" */
	void setName (std::string value);

	/** Return String result [] from SFString inputOutput field named "reference" */
	std::string getReference ();

	/** Assign String value [] to SFString inputOutput field named "reference" */
	void setReference (std::string value);

	/** Return String result [] from SFString inputOutput field named "reference" */
	std::string getContainerField();

	/** Assign String value [] to SFString inputOutput field named "reference" */
	void setContainerField(std::string value);

	// ===== methods for fields inherited from parent interfaces =====

	///** Return X3DMetadataObject result (using a properly typed node or X3DPrototypeInstance) from SFNode inputOutput field named "metadata" */
	//X3DNode* getMetadata ();

	///** Assign X3DMetadataObject value (using a properly typed node) to SFNode inputOutput field named "metadata" */
	//void setMetadata (X3DMetadataObject* node);

	///** Assign X3DMetadataObject value (using a properly typed protoInstance) */
	//void setMetadata (X3DPrototypeInstance* protoInstance);

	std::string getXMLString();

//Attributes
public:
	std::string		name;
	std::string		reference;
	std::string		containerField;

};
 
//B.3.4 X3DPickableObject 
/** X3DPickableObject defines an abstract node interface. */

class X3DPickableObject
{

public:
	X3DPickableObject();
	virtual ~X3DPickableObject();

	/** Return array of String results array ["ALL","NONE","TERRAIN",...] from MFString inputOutput field named "objectType" */
	std::string* getObjectType ();

	/** Return number of primitive values in "objectType" array */
	int getNumObjectType ();

	/** Assign String array ["ALL","NONE","TERRAIN",...] to MFString inputOutput field named "objectType" */
	void setObjectType (std::string* values, int size);

	/** Assign single String value ["ALL","NONE","TERRAIN",...] as the MFString array for inputOutput field named "objectType" */
	void setObjectType (std::string value);

	/** Return bool result from SFBool inputOutput field named "pickable" */
	bool getPickable ();

	/** Assign bool value to SFBool inputOutput field named "pickable" */
	void setPickable (bool value);
};
 
//B.3.5 X3DProgrammableShaderObject 
/** X3DProgrammableShaderObject defines an abstract node interface. */

class X3DProgrammableShaderObject
{

public:
	X3DProgrammableShaderObject();
	virtual ~X3DProgrammableShaderObject();
};

//B.5.1 BrowserEvent 
class BrowserEvent : public EventObject
{

public:
	BrowserEvent();
	virtual ~BrowserEvent();

	enum BrowserEventType {
		INITIALIZED = 0,
		SHUTDOWN = 1,
		URL_ERROR = 2,
		CONNECTION_ERROR = 10,
		LAST_IDENTIFIER = 100,
	};

	//BrowserEvent(void browser, int action);
	int getID();
};



//B.5.2 BrowserFactory 
class BrowserFactory
{

public:
	BrowserFactory();
	virtual ~BrowserFactory();

	//void setBrowserFactoryImpl(BrowserFactoryImpl fac);

	//X3DComponent createX3DComponent(Map params);

	//ExternalBrowser getBrowser(Applet applet);

	//ExternalBrowser getBrowser(Applet applet, std::string frameName, int index);
	//ExternalBrowser getBrowser(InetAddress address, int port);
};


//B.5.4 Matrix3 
class Matrix3
{
public:
	Matrix3();
	virtual ~Matrix3();
	void setIdentity();
	void set(int row, int column);
	float get(int row, int column);
	void setTransform(SFVec2f translation, SFVec3f rotation, SFVec2f scale, SFVec3f scaleOrientation, SFVec2f center);
	void getTransform(SFVec2f translation, SFVec3f rotation, SFVec2f scale);
	Matrix3 inverse();
	Matrix3 transpose();
	Matrix3 multiplyLeft(Matrix3 mat);
	Matrix3 multiplyRight(Matrix3 mat);
	Matrix3 multiplyRowVector(SFVec3f vec);
	Matrix3 multiplyColVector(SFVec3f vec);
};

//B.5.5 Matrix4 
class Matrix4
{
public:
	Matrix4();
	virtual ~Matrix4();

	void setIdentity();
	void set(int row, int column);
	float get(int row, int column);
	void setTransform(SFVec3f translation, SFRotation rotation, SFVec3f scale, SFRotation scaleOrientation, SFVec3f center);
	void getTransform(SFVec3f translation, SFRotation rotation, SFVec3f scale);
	Matrix4 inverse();
	Matrix4 transpose();
	Matrix4 multiplyLeft(Matrix4 mat);
	Matrix4 multiplyRight(Matrix4 mat);
	Matrix4 multiplyRowVector(SFVec3f vec);
	Matrix4 multiplyColVector(SFVec3f vec);
};
 
//B.6.1 ComponentInfo 
class componentInfo
{

public:
	componentInfo();
	virtual ~componentInfo();

	std::string getName();
	int getLevel();
	std::string getTitle();
	std::string getProviderURL();
	std::string toX3DString();
};

//B.6.2 ProfileInfo 
class ProfileInfo
{

public:
	ProfileInfo();
	virtual ~ProfileInfo();

	std::string getName();
	std::string getTitle();
	componentInfo* getComponents();
	std::string toX3DString();
};
 
//B.7.1 X3DException 
class X3DException : public std::runtime_error
{

public:
	X3DException();
	virtual ~X3DException();

	X3DException(std::string);
};

//B.7.2 BrowserNotSharedException 
class BrowserNotSharedException : public X3DException
{

public:
	BrowserNotSharedException();
	virtual ~BrowserNotSharedException();

	BrowserNotSharedException(std::string);
};

//B.7.3 ConnectionException 
class connectionException : public X3DException
{

public:
	connectionException();
	virtual ~connectionException();

	connectionException(std::string);
};

//B.7.4 ImportedNodeException 
class ImportedNodeException : public X3DException
{

public:
	ImportedNodeException();
	virtual ~ImportedNodeException();

	ImportedNodeException(std::string);
};

//B.7.5 InsufficientCapabilitiesException 
class InsufficientCapabilitiesException : public X3DException
{

public:
	InsufficientCapabilitiesException();
	virtual ~InsufficientCapabilitiesException();

	InsufficientCapabilitiesException(std::string);
};

//B.7.6 InvalidBrowserException 
class InvalidBrowserException : public X3DException
{

public:
	InvalidBrowserException();
	virtual ~InvalidBrowserException();

	InvalidBrowserException(std::string);
};

//B.7.7 InvalidDocumentException 
class InvalidDocumentException : public X3DException
{

public:
	InvalidDocumentException();
	virtual ~InvalidDocumentException();

	InvalidDocumentException(std::string);
};

//B.7.8 InvalidExecutionContextException 
class InvalidExecutionContextException : public X3DException
{

public:
	InvalidExecutionContextException();
	virtual ~InvalidExecutionContextException();

	InvalidExecutionContextException(std::string);
};

//B.7.9 InvalidFieldException 
class InvalidFieldException : public X3DException
{

public:
	InvalidFieldException();
	virtual ~InvalidFieldException();

	InvalidFieldException(std::string);
};

//B.7.10 InvalidFieldValueException 
class InvalidFieldValueException : public X3DException
{

public:
	InvalidFieldValueException();
	virtual ~InvalidFieldValueException();

	InvalidFieldValueException(std::string);
};

//B.7.11 InvalidNodeException 
class InvalidNodeException : public X3DException
{

public:
	InvalidNodeException();
	virtual ~InvalidNodeException();

	InvalidNodeException(std::string);
};

//B.7.12 InvalidOperationTimingException 
class InvalidOperationTimingException : public X3DException
{

public:
	InvalidOperationTimingException();
	virtual ~InvalidOperationTimingException();

	InvalidOperationTimingException(std::string);
};

//B.7.13 InvalidProtoException 
class InvalidProtoException : public X3DException
{

public:
	InvalidProtoException();
	virtual ~InvalidProtoException();

	InvalidProtoException(std::string);
};

//B.7.14 InvalidRouteException 
class InvalidRouteException : public X3DException
{

public:
	InvalidRouteException();
	virtual ~InvalidRouteException();

	InvalidRouteException(std::string);
};

//B.7.15 InvalidURLException 
class InvalidURLException : public X3DException
{

public:
	InvalidURLException();
	virtual ~InvalidURLException();

	InvalidURLException(std::string);
};

//B.7.16 InvalidX3DException 
class InvalidX3DException : public X3DException
{

public:
	InvalidX3DException();
	virtual ~InvalidX3DException();

	InvalidX3DException(std::string);
};

//B.7.17 NodeInUseException 
class NodeInUseException : public X3DException
{

public:
	NodeInUseException();
	virtual ~NodeInUseException();

	NodeInUseException(std::string);
};

//B.7.18 NodeUnavailableException 
class NodeUnavailableException : public X3DException
{

public:
	NodeUnavailableException();
	virtual ~NodeUnavailableException();

	NodeUnavailableException(std::string);
};

//B.7.19 NoSuchBrowserException 
class NoSuchBrowserException : public X3DException
{

public:
	NoSuchBrowserException();
	virtual ~NoSuchBrowserException();

	NoSuchBrowserException(std::string);
};

//B.7.20 NotSupportedException 
//class CNotSupportedException : public X3DException
//{
////
//public:
//	CNotSupportedException();
//	virtual ~CNotSupportedException();
//
//	CNotSupportedException(std::string);
//};

//B.7.21 URLUnavailableException 
class URLUnavailableException : public X3DException
{

public:
	URLUnavailableException();
	virtual ~URLUnavailableException();

	URLUnavailableException(std::string);
};

#endif // _Abstracts_H_
