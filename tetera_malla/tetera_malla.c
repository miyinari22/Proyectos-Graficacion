/*Alumno: Octavio Augusto Martinez Reyes     	Matricula:201904948 */
#include <GL/glut.h>
#include <stdio.h>

void inicializa(void){ /*Inicializa la ventana */
	glClearColor(1.0,1.0,1.0,0.0); /*Cambia el color de la ventana a color negro*/
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0,0,5,0,0,0,0,1,5);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(45,1,1,12);
}
	
void pinta(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0,1,0); /*Pinta las lineas de color blanco*/
	glutWireTeapot(1.0);
	glFlush();
}


int main(int argc, char** argv){
	glutInitWindowSize(400,400);
	glutInit(&argc, argv);
	glutCreateWindow("Martinez Reyes Octavio Augusto");
	inicializa();
	glutDisplayFunc(pinta);
	glutMainLoop();
	return 0;
}
