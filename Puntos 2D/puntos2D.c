#include <GL/glut.h>
#include <stdio.h>
//Rutina de inicializacion
void inicializa (void)
{glClearColor(1.0,0.0,1.0,0.0); //Color del fondo RGBA (A no interesa por ahora)
glMatrixMode(GL_PROJECTION); //Para el tipo de matriz a usar
gluOrtho2D(0,400,0,400);} //Coordenada x de 0 a 400 y coordenada y de 0 a 400
//Rutina que pinta
void pinta(void)
{ glClear(GL_COLOR_BUFFER_BIT); //Limpia la ventana de visualización
glPointSize(10);
glBegin(GL_POINTS); //Pintamos dos puntos
glPointSize(20.0);
glVertex2i(10,10);
glVertex2i(100,100);
glEnd(); glFlush();}		//Ejecuta las rutinas de opengl

int main (int argc, char** argv)	//No es necesario poner algo en los parentesis
{glutInitWindowSize(400,400);
glutInit(&argc, argv);
glutCreateWindow("Octavio Augusto Martinez Reyes"); //Crea la ventana de visualización
inicializa();
glutDisplayFunc(pinta); //CRea la ventana de visualización
glutMainLoop();
return 0;
}
