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
	glColor3f(1,1,0); /*Pinta las lineas de color blanco*/
	///////*Sol*/////////
	glBegin(GL_TRIANGLE_FAN);
	glVertex2i(0,400); glVertex2i(100,400);glVertex2i(100,390); 
	glVertex2i(100,390); glVertex2i(60,340);
	glVertex2i(60,340); glVertex2i(40,330);
	glVertex2i(40,330); glVertex2i(20,320);
	glVertex2i(20,320); glVertex2i(0,315);
	glEnd();
	/*Rayos del sol*/
	glBegin(GL_TRIANGLES);
	glVertex2i(10,300); glVertex2i(20,300); glVertex2i(20,310);
	glVertex2i(30,310); glVertex2i(40,310); glVertex2i(40,320);
	glVertex2i(50,320); glVertex2i(60,320); glVertex2i(60,330);
	glVertex2i(70,330); glVertex2i(80,330); glVertex2i(80,340);
	glVertex2i(80,350); glVertex2i(90,350); glVertex2i(90,360);
	glVertex2i(90,370); glVertex2i(100,370); glVertex2i(100,380);
	glVertex2i(100,390); glVertex2i(110,390); glVertex2i(110,400);
		
	/////*Mariposa*//////
	/*Alas*/
	glBegin(GL_TRIANGLES);
	glColor3f(0,0,1);
	glVertex2i(200,340); glVertex2i(280,260); glVertex2i(200,260);
	glVertex2i(310,260); glVertex2i(390,340); glVertex2i(390,260);
	glColor3f(0,0,1);
	glVertex2i(210,250); glVertex2i(280,250), glVertex2i(280,180);
	glVertex2i(310,250); glVertex2i(380,250); glVertex2i(310,180);
	glEnd();
	/*Cuerpo*/
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0,0,0);
	glVertex2i(280,250); glVertex2i(310,250); glVertex2i(300,190);
	glVertex2i(295,200); glVertex2i(310,200);
	glEnd();
	/*Cabeza*/
	glBegin(GL_TRIANGLES);
	glVertex2i(280,260); glVertex2i(310,260);glVertex2i(298,280);
	glEnd();
	/*Ojos*/
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor3f(1,1,1);
	glVertex2i(290,269);glVertex2i(300,269);
	glEnd();
	
	/*Detalles de las alas*/
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1,0,1);
	glVertex2i(210,270); glVertex2i(210,320);
	glColor3f(1,1,0);
	glVertex2i(220,285); glVertex2i(250,270);
	glColor3f(1,0,1);
	glEnd();
	////Ala Izquierda///
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2i(330,270); glVertex2i(380,320);
	glColor3f(1,1,0);
	glVertex2i(360,280); glVertex2i(380,270);
	glEnd();
	////Alas Inferiores + lunares////
	glPointSize(5);
	glBegin(GL_POINTS); /*Lunares alas superiores*/
	glColor3f(0,1,1);
	glVertex2i(370,300); glVertex2i(370,280);
	glVertex2i(220,300); glVertex2i(230,290);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP); /*Marcas Alas inferiores*/
	glColor3f(0,1,0);
	glVertex2i(230,240); glVertex2i(270,240);
	glColor3f(0,1,1);
	glVertex2i(260,210); glVertex2i(270,200);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0,1,0);
	glVertex2i(320,240); glVertex2i(350,240);
	glColor3f(0,1,1);
	glVertex2i(320,200); glVertex2i(345,237); 
	glEnd();
	
	////*Flores*////
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1,0,0);
	glVertex2i(20,110); glVertex2i(60,110); glVertex2i(40,90); 
    glVertex2i(80,90); glVertex2i(80,50); glVertex2i(60,70);
	glVertex2i(60,30); glVertex2i(20,30); glVertex2i(40,50);
	glVertex2i(0,50); glVertex2i(0,90); glVertex2i(20,70);
	glVertex2i(20,110); glVertex2i(60,110);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0,0,1);
	glVertex2i(120,110); glVertex2i(160,110); glVertex2i(140,90); 
	glVertex2i(180,90); glVertex2i(180,50); glVertex2i(160,70);
	glVertex2i(160,30); glVertex2i(120,30); glVertex2i(140,50);
	glVertex2i(100,50); glVertex2i(100,90); glVertex2i(120,70);
	glVertex2i(120,110); glVertex2i(160,110);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1,1,0);
	glVertex2i(220,110); glVertex2i(260,110); glVertex2i(240,90); 
	glVertex2i(280,90); glVertex2i(280,50); glVertex2i(260,70);
	glVertex2i(260,30); glVertex2i(220,30); glVertex2i(240,50);
	glVertex2i(200,50); glVertex2i(200,90); glVertex2i(220,70);
	glVertex2i(220,110); glVertex2i(260,110);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0,1,1);
	glVertex2i(320,110); glVertex2i(360,110); glVertex2i(340,90); 
	glVertex2i(380,90); glVertex2i(380,50); glVertex2i(360,70);
	glVertex2i(360,30); glVertex2i(320,30); glVertex2i(340,50);
	glVertex2i(300,50); glVertex2i(300,90); glVertex2i(320,70);
	glVertex2i(320,110); glVertex2i(360,110);
	glEnd();
	
	/*Tallo*/
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0,1,0);
	glVertex2i(0,30); glVertex2i(20,30); glVertex2i(40,0); glVertex2i(20,0);
	glVertex2i(60,30); glVertex2i(80,30); glVertex2i(60,0); glVertex2i(40,0);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0,1,0);
	glVertex2i(100,30); glVertex2i(120,30); glVertex2i(140,0); glVertex2i(120,0);
	glVertex2i(160,30); glVertex2i(180,30); glVertex2i(160,0); glVertex2i(140,0);
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0,1,0);
	glVertex2i(200,30); glVertex2i(220,30); glVertex2i(240,0); glVertex2i(220,0);
	glVertex2i(260,30); glVertex2i(280,30); glVertex2i(260,0); glVertex2i(240,0);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0,1,0);
	glVertex2i(300,30); glVertex2i(320,30); glVertex2i(340,0); glVertex2i(320,0);
	glVertex2i(360,30); glVertex2i(380,30); glVertex2i(360,0); glVertex2i(340,0);
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
			
