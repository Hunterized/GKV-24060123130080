/* 	Nama: Dimas A Albanna Zain
	NIM	: 24060123130080
	File: LenganBergerak
	Desc: Ilustrasi/Gambaran lengan robotik rotatable */
	
	
#include <GL/glut.h>
static int shoulder = 0, elbow = 0, palm = 0;
static int thumb1 = 0, thumb2 = 0, thumb3 = 0;
static int finger1_1 = 0, finger1_2 = 0, finger1_3 = 0;
static int finger2_1 = 0, finger2_2 = 0, finger2_3 = 0;
static int finger3_1 = 0, finger3_2 = 0, finger3_3 = 0;
static int finger4_1 = 0, finger4_2 = 0, finger4_3 = 0;
void init(void) {
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glShadeModel (GL_FLAT);
}

void drawFinger(float baseX, float baseY, float baseZ, int joint1, int joint2, int joint3) {
    glPushMatrix();
        glTranslatef(baseX, baseY, baseZ); 
        glRotatef((GLfloat) joint1, 0.0, 1.0, 0.0);
        glPushMatrix();
            glScalef(0.3, 0.15, 0.15);
            glutWireCube(1.0);
        glPopMatrix();

        glTranslatef(0.3, 0.0, 0.0); 
        glRotatef((GLfloat) joint2, 0.0, 1.0, 0.0); 
        glPushMatrix();
            glScalef(0.25, 0.15, 0.15);
            glutWireCube(1.0);
        glPopMatrix();

        glTranslatef(0.2, 0.0, 0.0);
        glRotatef((GLfloat) joint3, 0.0, 1.0, 0.0);
        glPushMatrix();
            glScalef(0.2, 0.15, 0.15);
            glutWireCube(1.0);
        glPopMatrix();
    glPopMatrix();
}

void display(void) {
	glClear (GL_COLOR_BUFFER_BIT);
	glPushMatrix();
		glTranslatef (-1.0, 0.0, 0.0);									// Shoulder
		glRotatef ((GLfloat) shoulder, 0.0, 0.0, 1.0);
		glTranslatef (1.0, 0.0, 0.0); 
		glPushMatrix();
			glScalef (2.0, 1.0, 0.4);
			glutWireCube (1.0); 
		glPopMatrix();
		
		glTranslatef (1.0, 0.0, 0.0);									// Elbow
		glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
		glTranslatef (1.0, 0.0, 0.0); 
		glPushMatrix();
			glScalef (2.0, 0.7, 0.4);
			glutWireCube (1.0);
		glPopMatrix(); 
		
		glTranslatef(1.0, 0.0, 0.0);									// Palm
		glRotatef ((GLfloat) palm, 0.0, 0.0, 1.0);
		glTranslatef (0.5, 0.13, 0.0); 
		glPushMatrix();
			glScalef(1.0, 1.0, 0.4);
			glutWireCube(1.0);
		glPopMatrix();
		
		glPushMatrix(); 												// Thumb
	        glTranslatef(-0.3, 0.5, 0.0); 
	        glRotatef(25, 0.0, 0.0, 1.0);
			glRotatef(-25, 0.0, 1.0, 0.0);	
	        glRotatef((GLfloat) thumb1, 0.0, 0.0, 1.0);
	        glPushMatrix();
	            glScalef(0.3, 0.2, 0.15);
	            glutWireCube(1.0);
	        glPopMatrix();
	
	        glTranslatef(0.3, 0.0, 0.0); 
	        glRotatef((GLfloat) thumb2, 0.0, 1.0, 0.0); 
	        glPushMatrix();
	            glScalef(0.25, 0.15, 0.15);
	            glutWireCube(1.0);
	        glPopMatrix();
	
	        glTranslatef(0.2, 0.0, 0.0);
	        glRotatef((GLfloat) thumb3, 0.0, 1.0, 0.0);
	        glPushMatrix();
	            glScalef(0.2, 0.15, 0.15);
	            glutWireCube(1.0);
	        glPopMatrix();
	    glPopMatrix();
		
		drawFinger(0.5,  0.45,  0.0, finger1_1, finger1_2, finger1_3); 	// Index finger
		drawFinger(0.5,  0.15,  0.0, finger2_1, finger2_2, finger2_3); 	// Middle finger
		drawFinger(0.5,  -0.15,  0.0, finger3_1, finger3_2, finger3_3); // Ring finger
		drawFinger(0.5,  -0.45,  0.0, finger4_1, finger4_2, finger4_3); // Pinky finger
			
	glPopMatrix();
	glutSwapBuffers();
}
void reshape (int w, int h) {
	glViewport (0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode (GL_PROJECTION); 
	glLoadIdentity();
	gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW); 
	glLoadIdentity();
	glTranslatef (0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
	switch (key) {
		case 'z': shoulder = (shoulder + 5) % 360;
		glutPostRedisplay(); break;
		case 'Z': shoulder = (shoulder - 5) % 360;
		glutPostRedisplay(); break;
		
		case 'x': elbow = (elbow + 5) % 360;
		glutPostRedisplay(); break;
		case 'X': elbow = (elbow - 5) % 360;
		glutPostRedisplay(); break;
		
		case 'c': palm = (palm + 5) % 360;
		glutPostRedisplay(); break;
		case 'C': palm = (palm - 5) % 360;
		glutPostRedisplay(); break;
		
		case 'q': thumb1 = (thumb1 + 5) % 360;
		glutPostRedisplay(); break;
		case 'Q': thumb2 = (thumb2 - 5) % 360;
		glutPostRedisplay(); break;
		case '1': thumb3 = (thumb3 - 5) % 360;
		glutPostRedisplay(); break;
		
		case 'w': finger1_1 = (finger1_1 - 5) % 360;
		glutPostRedisplay(); break;
		case 'W': finger1_2 = (finger1_2 - 5) % 360;
		glutPostRedisplay(); break;
		case '2': finger1_3 = (finger1_3 - 5) % 360;
		glutPostRedisplay(); break;
		
		case 'e': finger2_1 = (finger2_1 - 5) % 360;
		glutPostRedisplay(); break;
		case 'E': finger2_2 = (finger2_2 - 5) % 360;
		glutPostRedisplay(); break;
		case '3': finger2_3 = (finger2_3 - 5) % 360;
		glutPostRedisplay(); break;
		
		case 'r': finger3_1 = (finger3_1 - 5) % 360;
		glutPostRedisplay(); break;
		case 'R': finger3_2 = (finger3_2 - 5) % 360;
		glutPostRedisplay(); break;
		case '4': finger3_3 = (finger3_3 - 5) % 360;
		glutPostRedisplay(); break;
		
		case 't': finger4_1 = (finger4_1 - 5) % 360;
		glutPostRedisplay(); break;
		case 'T': finger4_2 = (finger4_2 - 5) % 360;
		glutPostRedisplay(); break;
		case '5': finger4_3 = (finger4_3 - 5) % 360;
		glutPostRedisplay(); break;
		
		case 27: exit(0); break;
		default: break;
	}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize (700, 600);
	glutInitWindowPosition (100, 100);
	glutCreateWindow (argv[0]); init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop(); return 0;
}

