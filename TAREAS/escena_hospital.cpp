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
	glColor3f(0,0,0); /*Pinta las lineas de color blanco*/
	glLineWidth(5);
	glBegin(GL_LINES);
	/* Edificio */
	glVertex2i(10,10); glVertex2i(10,390); /*Dibuja una linea vertical del lado izquierdo*/
	glVertex2i(390,390); glVertex2i(390,10); /*Dibuja una linea vertical del lado derecho*/
	glVertex2i(10,390); glVertex2i(390,390); /*Dibuja una linea horizontal en la parte superior*/
	glVertex2i(390,10); glVertex2i(10,10); /*Dibuja una linea horizontal en la parte inferior para formar un rectangulo*/
	/*Cruz*/
	glColor3f(1,0,0); /*Cambia el color de las siguientes lineas a rojo*/
	glVertex2i(200,360); glVertex2i(200,250); /*Linea Vertical*/
	glVertex2i(150,320); glVertex2i(250,320); /*Linea Horizontal */
	/* Puerta */
	glColor3f(0,1,1); /* Cambia el color a azul*/
	glVertex2i(150,100); glVertex2i(225,100); /* Parte Horizontal */
	glVertex2i(150,100); glVertex2i(150,10);
	glVertex2i(225,100), glVertex2i(225,10);
	/*Ventanal*/
	glColor3f(0,0,1);
	glVertex2i(50,200); glVertex2i(350,200); /*Lineas Horizontales */
	glVertex2i(50,120); glVertex2i(350,120); /* Lineas Horizontales */
	glVertex2i(50,200); glVertex2i(50,120); /* Parte Vertical */
	glVertex2i(350,200); glVertex2i(350,120);
	
	/* "Arbustos" */
	glColor3f(0,1,0); /* cambia el color a verde */
	glVertex2i(10,50); glVertex2i(80,50); /* Horizontal */
	glVertex2i(390,50); glVertex2i(310,50);
	glVertex2i(80,50); glVertex2i(80,11); /* Vertical*/
	glVertex2i(310,50); glVertex2i(310,11);
	glColor3f(1,1,0); /* Cambia el color para simular un macetero*/
	glVertex2i(10,10); glVertex2i(80,10); /*Horizontal*/
	glVertex2i(310,10); glVertex2i(390,10);
	glEnd();
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
