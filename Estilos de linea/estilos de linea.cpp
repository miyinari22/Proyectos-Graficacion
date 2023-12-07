/*Alumno: Octavio Augusto Martinez Reyes     	Matricula:201904948 */
#include <GL/glut.h>
#include <stdio.h>

void inicializa(void){ /*Inicializa la ventana */
	glClearColor(1,1,1,0); /*Cambia el color de la ventana a color negro*/
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,400,0,400);
}

	void pinta(void){
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(1.0,0.0,0.0);
		glEnable(GL_LINE_STIPPLE);
		glLineStipple(2,0x00FF);
		glLineWidth(5); ///Linea grosor/////////
		glBegin(GL_LINES);
		glVertex2i(25,25);
		glVertex2i(150,25);
		glEnd();
		glLineStipple(2,0x0C0F);
		glBegin(GL_LINES);
		glVertex2i(25,50);
		glVertex2i(150,50);
		glEnd();
		glLineStipple(4,0xFF22);
		glBegin(GL_LINES);
		glVertex2i(25,75);
		glVertex2i(150,75);
		glEnd();
		glLineStipple(2,0xAAAA);
		glBegin(GL_LINES);
		glVertex2i(25,100);
		glVertex2i(150,100);
		glEnd();
		glDisable(GL_LINE_STIPPLE);
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
