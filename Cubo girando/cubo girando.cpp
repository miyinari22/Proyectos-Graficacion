//Buffer de Profundidad
#include <GL/glut.h>

void init(void){
	glClearColor(0.5,0.5,0.5,0);
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0,0,5,0,0,0,0,1,5);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(60,1,1,12);
}
	
	void Pinta3D(void){
		int i;
		glColor3f(1.0,0.0,0.0);
		glMatrixMode(GL_MODELVIEW);
		for (i=0; i<=360; i++){
			glClear(GL_COLOR_BUFFER_BIT);
			glPushMatrix();
			glRotated(i,1,0,0);
			glTranslated(2,0,0);
			glutWireCube(1.0);
			Sleep(5);
			glPopMatrix();
			glFlush();
		}
	}
		
		int main (int argc, char **argv){
			glutInit(&argc,argv);
			glutInitWindowSize(600,600);
			glutCreateWindow("Buffer de Profundidad");
			init();
			glutDisplayFunc(Pinta3D);
			glutMainLoop();
			return 0; 
		}
			
