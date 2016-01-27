#include <GL/gl.h>
#include <GL/pgl.h>
#include <GL/glu.h>

/*
** Nano Window Toolkit.
*/

/*
** Window Types
*/

#define PM_ESCAPE	0x0f
#define PM_LEFT		0x15
#define PM_UP		0x16
#define PM_RIGHT	0x17
#define PM_DOWN		0x18

#define TK_RGB		0
#define TK_INDEX	1
#define TK_SINGLE	0
#define TK_DOUBLE	2
#define TK_DIRECT	0
#define TK_INDIRECT	4
#define TK_ACCUM	8
#define TK_ALPHA	16
#define TK_DEPTH	32
#define TK_OVERLAY	64
#define TK_UNDERLAY	128
#define TK_STENCIL	512

/*
** Display Mode Selection Criteria
*/

enum {
    TK_USE_ID = 1,
    TK_EXACT_MATCH,
    TK_MINIMUM_CRITERIA
};

/* 
** Window Masks
*/

#define TK_IS_RGB(x)		(((x) & TK_INDEX) == 0)
#define TK_IS_INDEX(x)		(((x) & TK_INDEX) != 0)
#define TK_IS_SINGLE(x)		(((x) & TK_DOUBLE) == 0)
#define TK_IS_DOUBLE(x)		(((x) & TK_DOUBLE) != 0)
#define TK_IS_DIRECT(x)		(((x) & TK_INDIRECT) == 0)
#define TK_IS_INDIRECT(x)	(((x) & TK_INDIRECT) != 0)
#define TK_HAS_ACCUM(x)		(((x) & TK_ACCUM) != 0)
#define TK_HAS_ALPHA(x)		(((x) & TK_ALPHA) != 0)
#define TK_HAS_DEPTH(x)		(((x) & TK_DEPTH) != 0)
#define TK_HAS_OVERLAY(x)	(((x) & TK_OVERLAY) != 0)
#define TK_HAS_UNDERLAY(x)	(((x) & TK_UNDERLAY) != 0)
#define TK_HAS_STENCIL(x)	(((x) & TK_STENCIL) != 0)

/*
** Windowing System Specific Gets
*/

enum {
    TK_X_DISPLAY = 1,
    TK_X_WINDOW,
    TK_PM_HAB,
    TK_PM_HWND
};

/*
** Event Status
*/

#define	TK_LEFTBUTTON		1
#define	TK_RIGHTBUTTON		2
#define	TK_MIDDLEBUTTON		4
#define	TK_SHIFT		1
#define	TK_CONTROL		2

/* 
** Key Codes
*/

#define TK_RETURN		0x0D
#define TK_ESCAPE		0x1B
#define TK_SPACE		0x20
#define TK_LEFT			0x25
#define TK_UP			0x26
#define TK_RIGHT		0x27
#define TK_DOWN			0x28
#define TK_A			'A'
#define TK_B			'B'
#define TK_C			'C'
#define TK_D			'D'
#define TK_E			'E'
#define TK_F			'F'
#define TK_G			'G'
#define TK_H			'H'
#define TK_I			'I'
#define TK_J			'J'
#define TK_K			'K'
#define TK_L			'L'
#define TK_M			'M'
#define TK_N			'N'
#define TK_O			'O'
#define TK_P			'P'
#define TK_Q			'Q'
#define TK_R			'R'
#define TK_S			'S'
#define TK_T			'T'
#define TK_U			'U'
#define TK_V			'V'
#define TK_W			'W'
#define TK_X			'X'
#define TK_Y			'Y'
#define TK_Z			'Z'
#define TK_a			'a'
#define TK_b			'b'
#define TK_c			'c'
#define TK_d			'd'
#define TK_e			'e'
#define TK_f			'f'
#define TK_g			'g'
#define TK_h			'h'
#define TK_i			'i'
#define TK_j			'j'
#define TK_k			'k'
#define TK_l			'l'
#define TK_m			'm'
#define TK_n			'n'
#define TK_o			'o'
#define TK_p			'p'
#define TK_q			'q'
#define TK_r			'r'
#define TK_s			's'
#define TK_t			't'
#define TK_u			'u'
#define TK_v			'v'
#define TK_w			'w'
#define TK_x			'x'
#define TK_y			'y'
#define TK_z			'z'
#define TK_0			'0'
#define TK_1			'1'
#define TK_2			'2'
#define TK_3			'3'
#define TK_4			'4'
#define TK_5			'5'
#define TK_6			'6'
#define TK_7			'7'
#define TK_8			'8'
#define TK_9			'9'

/*
** Color Macros
*/

enum {
    TK_BLACK = 0,
    TK_RED,
    TK_GREEN,
    TK_YELLOW,
    TK_BLUE,
    TK_MAGENTA,
    TK_CYAN,
    TK_WHITE
};

extern float tkRGBMap[8][3];

#define TK_SETCOLOR(x, y) (TK_IS_RGB((x)) ? \
		           glColor3fv(tkRGBMap[(y)]) : glIndexf((y)))

/*
** RGB Image Structure
*/

typedef struct _TK_RGBImageRec {
    GLint sizeX, sizeY;
    unsigned char *data;
} TK_RGBImageRec;

/*
** Prototypes
*/

extern PVISUALCONFIG APIENTRY tkGetCurrentConfig(void);
extern void APIENTRY tkInitDisplayMode(GLenum);
extern void APIENTRY tkInitPosition(int, int, int, int);
extern GLenum APIENTRY tkInitWindow(char *);
extern void APIENTRY tkCloseWindow(void);
extern void APIENTRY tkQuit(void);

extern GLenum APIENTRY tkSetWindowLevel(GLenum);
extern void APIENTRY tkSwapBuffers(void);

extern void APIENTRY tkExec(void);
extern void APIENTRY tkExposeFunc(void (* APIENTRY)(int, int));
extern void APIENTRY tkReshapeFunc(void (* APIENTRY)(int, int));
extern void APIENTRY tkDisplayFunc(void (* APIENTRY)(void));
extern void APIENTRY tkKeyDownFunc(GLenum (* APIENTRY)(int, GLenum));
extern void APIENTRY tkMouseDownFunc(GLenum (* APIENTRY)(int, int, GLenum));
extern void APIENTRY tkMouseUpFunc(GLenum (* APIENTRY)(int, int, GLenum));
extern void APIENTRY tkMouseMoveFunc(GLenum (* APIENTRY)(int, int, GLenum));
extern void APIENTRY tkIdleFunc(void (* APIENTRY)(void));

extern GLint APIENTRY tkGetColorMapSize(void);
extern void APIENTRY tkGetMouseLoc(int *, int *);
extern void APIENTRY tkGetSystem(GLenum, void *);

extern void APIENTRY tkSetOneColor(int, float, float, float);
extern void APIENTRY tkSetFogRamp(int, int);
extern void APIENTRY tkSetGreyRamp(void);
extern void APIENTRY tkSetRGBMap(int, float *);

extern void APIENTRY tkNewCursor(GLint, GLubyte *, GLubyte *, GLenum, GLenum,
			GLint, GLint);
extern void APIENTRY tkSetCursor(GLint);

extern TK_RGBImageRec* APIENTRY tkRGBImageLoad(char *);

extern GLenum APIENTRY tkCreateStrokeFont(GLuint);
extern GLenum APIENTRY tkCreateOutlineFont(GLuint);
extern GLenum APIENTRY tkCreateFilledFont(GLuint);
extern GLenum APIENTRY tkCreateBitmapFont(GLuint);
extern void APIENTRY tkDrawStr(GLuint, char *);

extern void APIENTRY tkWireSphere(GLuint, float);
extern void APIENTRY tkSolidSphere(GLuint, float);
extern void APIENTRY tkWireCube(GLuint, float);
extern void APIENTRY tkSolidCube(GLuint, float);
extern void APIENTRY tkWireBox(GLuint, float, float, float);
extern void APIENTRY tkSolidBox(GLuint, float, float, float);
extern void APIENTRY tkWireTorus(GLuint, float, float);
extern void APIENTRY tkSolidTorus(GLuint, float, float);
extern void APIENTRY tkWireCylinder(GLuint, float, float);
extern void APIENTRY tkSolidCylinder(GLuint, float, float);
extern void APIENTRY tkWireCone(GLuint, float, float);
extern void APIENTRY tkSolidCone(GLuint, float, float);
extern GLint APIENTRY tkGetDisplayModePolicy(void);
extern GLint APIENTRY tkGetDisplayModeID(void);
extern GLenum APIENTRY tkGetDisplayMode(void);
extern void APIENTRY tkInitDisplayMode(GLenum);
extern void APIENTRY tkInitDisplayModePolicy(GLenum);
extern GLenum APIENTRY tkInitDisplayModeID(GLint);
void APIENTRY tkClipBoard(void);
