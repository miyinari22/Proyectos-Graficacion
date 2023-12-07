#include <GL/glut.h>

void inicializa (void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glMatrixMode (GL_PROJECTION);
	gluOrtho2D (0, 550, 0, 550);
}

void Curva_Bezier (void)
{
	glClear (GL_COLOR_BUFFER_BIT);
	
	float PuntosDeControl [4][3] =
	{{80, 70, 0}, {50, 270, 0}, {220, 270, 0}, {270, 150, 0}};
	
	glMap1f (GL_MAP1_VERTEX_3, 0, 1, 3, 4, *PuntosDeControl);
	glEnable (GL_MAP1_VERTEX_3);
	glMapGrid1f (100, 0, 1);
	glColor3f (1, 1, 1);
	glLineWidth (4);
	glEvalMesh1 (GL_LINE, 0, 100);
	//glEvalMesh1 (GL_POINT, 0, 100);
	
	glDisable (GL_MAP1_VERTEX_3);
	glEnd();
	
	float PuntosDeControl2 [4][3] =
	{{240, 150, 0}, {200, 320, 0}, {370, 320, 0}, {400, 200, 0}};
	
	glMap1f (GL_MAP1_VERTEX_3, 0, 1, 3, 4, *PuntosDeControl2);
	glEnable (GL_MAP1_VERTEX_3);
	glMapGrid1f (100, 0, 1);
	glColor3f (1, 1, 1);
	glLineWidth (4);
	glEvalMesh1 (GL_LINE, 0, 100);
	glDisable (GL_MAP1_VERTEX_3);
	glEnd();
	
	float PuntosDeControl3 [4][3] =
	{ {240, 150, 0}, {245, 130, 0}, {265, 130, 0}, {270, 150, 0}};
	
	glMap1f (GL_MAP1_VERTEX_3, 0, 1, 3, 4, *PuntosDeControl3);
	glEnable (GL_MAP1_VERTEX_3);
	glMapGrid1f (100, 0, 1);
	glColor3f (1, 1, 1);
	glLineWidth (4);
	glEvalMesh1 (GL_LINE, 0, 100);
	glDisable (GL_MAP1_VERTEX_3);
	glEnd();
	
	glFlush();
}

int main (int argc, char *argv[])
{
	glutInit(&argc, argv);
	
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (100, 20);
	glutCreateWindow("-- CURVAS --");	//crea la ventana de visualizacion
	
	inicializa();
	glutDisplayFunc(Curva_Bezier);
	glutMainLoop();
}
