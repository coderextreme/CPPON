/////////////////////////////////////////////////////////////////////////////
// glMath.h : Header file; Defines the class definitions
/////////////////////////////////////////////////////////////////////////////

#ifndef __GLMATH__
#define __GLMATH__


/////////////////////////////////////////////////////////////////////////////
// glMath Definitions:
//
#define Pi				3.14159265f
#define PiOver180		1.74532925199433E-002f
#define PiUnder180		5.72957795130823E+001f
#define SMALL_NUMBER	0.00001
#define LARGE_NUMBER	1E20

#define X				0	// Used for Coordinate array index
#define Y				1
#define Z				2
#define W				3

#define R				0	// Used for Color array index
#define G				1
#define B				2
#define A				3

#define TS				0	// Used for Texture coordinate array index
#define TT				1
#define TR				2
#define TQ				3


/////////////////////////////////////////////////////////////////////////////
// Type Definitions:
//
typedef GLfloat		VECTORF[4];
typedef GLfloat		VECTOR3[3];
typedef GLfloat		COLORF[4];
typedef GLdouble	Matx4x4[4][4];		


/////////////////////////////////////////////////////////////////////////////
// External function prototypes:
//

// Misc Math Functions
extern BOOL IsEven(int n);
extern BOOL IsEven(float f);

extern GLfloat Radiansf(GLfloat Angle);
extern GLfloat Degreesf(GLfloat Angle);
extern GLfloat Cosf(GLfloat Angle);
extern GLfloat Sinf(GLfloat Angle);
extern GLfloat ACosf(GLfloat Angle);
extern GLfloat Tanf(GLfloat Angle);
extern GLfloat Powerf(GLfloat Base, int Exponent);
extern GLfloat Sqrf(GLfloat x);
extern int Roundf(GLfloat x);
extern float Roundf(GLfloat x, int numDecimalPlaces);
extern GLfloat Diff(GLfloat a, GLfloat b);

// Vector Functions
extern BOOL VecEqualf(VECTORF a, VECTORF b);

extern void VecClearf(VECTORF a);

extern void Vec3f(GLfloat r, GLfloat s, GLfloat t, VECTORF a);
extern void Vec4f(GLfloat r, GLfloat s, GLfloat t, GLfloat u, VECTORF a);

extern void VecCopyf(VECTORF a, VECTORF b);
extern void VecCopy3f(VECTORF a, VECTORF b);

extern void VecSubf(VECTORF a, VECTORF b, VECTORF c);
extern void VecAddf(VECTORF a, VECTORF b, VECTORF c);
extern void VecScalef(VECTORF a, float scale, VECTORF b);

extern GLfloat VecDotf(VECTORF a, VECTORF b);
extern void VecCrossf(VECTORF a, VECTORF b, VECTORF c);
extern GLfloat VecLenf(VECTORF a);
extern void VeNormalizef(VECTORF a);
extern void CalNormalf(VECTORF a, VECTORF b, VECTORF c, VECTORF n, BOOL bCCW=TRUE);


// Affine Matrix Transformation Funcitons
extern void ZeroMatrix(Matx4x4 a);
extern void IdentityMatrix(Matx4x4 a);
extern void Translate3D(float tx, float ty, float tz, Matx4x4 a);
extern void Scale3D(float sx, float sy, float sz, Matx4x4 a);
extern void Rotate3D(int m, float Theta, Matx4x4 a);
extern void MultiplyMatricies(Matx4x4 a, Matx4x4 b, Matx4x4 c);
extern void MatrixCopy(Matx4x4 a, Matx4x4 b);
extern void PrepareMatrix(float Ox,  float Oy,  float Oz,
						  float Sx,  float Sy,  float Sz,
						  float Rx,  float Ry,  float Rz,
						  float Tx,  float Ty,  float Tz,
						  Matx4x4 XForm);

void RotationMatrix(float angle, float x, float y, float z, Matx4x4 mMatrix);
void RotateVector(const VECTOR3 vSrcVector, const Matx4x4 mMatrix, VECTOR3 vOut);

extern void VeTransformf(VECTORF sx, VECTORF dx, Matx4x4 M);

// Misc OpenGL Related Functions
extern void Matx4x4ToglMatrix(Matx4x4 a, float M[16]);
extern void Transformf(VECTORF sx, VECTORF dx, GLdouble M[16]);

#endif // Include/Define

