#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>
void Mobil(void)
{
	//Badan Mobil
	glPushMatrix();
		glTranslatef(0.0, -0.21, 0.0);
		glBegin(GL_QUADS);
			glColor3f(0.5f, 0.0f, 0.0f);
			    glVertex3f(-0.65f, -0.14f, 0.0f);
			    glVertex3f( 0.6f,  -0.14f, 0.0f);
			glColor3f(0.7f, 0.0f, 0.0f);
			    glVertex3f( 0.6f,  0.01f, 0.0f);
			    glVertex3f(-0.77f,  0.01f, 0.0f);
		glEnd();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(0.0, -0.21, 0.0);
		glBegin(GL_QUADS);
			glColor3f(0.7f, 0.0f, 0.0f);
			    glVertex3f(-0.77f, 0.01f, 0.0f);
			    glVertex3f( 0.6f,  0.01f, 0.0f);
			glColor3f(1.0f, 0.0f, 0.0f);
			    glVertex3f( 0.6f,  0.21f, 0.0f);
			    glVertex3f(-0.8f,  0.21f, 0.0f);
		glEnd();
	glPopMatrix();
	
	//Paint Putih
	glPushMatrix();
		glTranslatef(0.0, -0.21, 0.0);
		glBegin(GL_QUADS);
			glColor3f(0.8f, 0.8f, 0.8f);
			    glVertex3f( 0.0f, -0.14f, 0.0f);
			    glVertex3f( 0.2f,  -0.14f, 0.0f);
			glColor3f(1.0f, 1.0f, 1.0f);
			    glVertex3f( 0.5f,  0.21f, 0.0f);
			    glVertex3f( 0.3f,  0.21f, 0.0f);
		glEnd();
	glPopMatrix();
	
	glPushMatrix();
	    glTranslatef(-0.22f, -0.21f, 0.0f);
	    glBegin(GL_QUADS);
			glColor3f(0.8f, 0.8f, 0.8f);
	            glVertex3f(0.12f, -0.14f, 0.0f);
	            glVertex3f(0.18f, -0.14f, 0.0f);
			glColor3f(1.0f, 1.0f, 1.0f);
	            glVertex3f(0.48f, 0.21f, 0.0f);
	            glVertex3f(0.42f, 0.21f, 0.0f);
	    glEnd();
	glPopMatrix();
	
	//Mulut
	glPushMatrix();
		glTranslatef(0.0, -0.21, 0.0);
		glBegin(GL_QUADS);
			glColor3f(0.7f, 0.0f, 0.0f);
			    glVertex3f( 0.6f, 0.01f, 0.0f);
			    glVertex3f( 0.85f, 0.01f, 0.0f);
			glColor3f(1.0f, 0.0f, 0.0f);
			    glVertex3f( 0.75f,  0.14f, 0.0f);
			    glVertex3f( 0.6f,  0.21f, 0.0f);
		glEnd();
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0.0, -0.21, 0.0);
		glBegin(GL_QUADS);
			glColor3f(0.5f, 0.0f, 0.0f);
			    glVertex3f( 0.6f, -0.14f, 0.0f);
			    glVertex3f( 0.7f, -0.14f, 0.0f);
			glColor3f(0.7f, 0.0f, 0.0f);
			    glVertex3f( 0.85f,  0.01f, 0.0f);
			    glVertex3f( 0.6f,  0.01f, 0.0f);
		glEnd();
	glPopMatrix();
	
	
	//Kepala
	glPushMatrix();
		glBegin(GL_QUADS);
	    glColor3f(0.9f, 0.0f, 0.0f);
		    glVertex3f(-0.6f, 0.0f, 0.0f);
		    glVertex3f( 0.40f, 0.0f, 0.0f);
		glColor3f(1.0f, 0.0f, 0.0f);
		    glVertex3f( 0.2f,  0.22f, 0.0f);
		    glVertex3f(-0.2f,  0.2f, 0.0f); 
		glEnd();
	glPopMatrix();	
	
	//Jendela Samping
	glPushMatrix();
		glBegin(GL_QUADS);
	    glColor3f(0.2f, 0.2f, 0.35f);
		    glVertex3f( -0.1f, 0.02f, 0.0f);
		    glVertex3f( 0.25f, 0.02f, 0.0f);
		glColor3f(0.3f, 0.3f, 0.45f);
		    glVertex3f( 0.15f,  0.20f, 0.0f);
		    glVertex3f( -0.12f,  0.182f, 0.0f); 
		glEnd();
	glPopMatrix();
		//Jendala Highlight
	glPushMatrix();
		glTranslatef(-0.12f, -0.03f, 0.0f);
	    glBegin(GL_LINES);
	        glColor3f(1.0f, 1.0f, 1.0f); 
	        glVertex3f(0.05f, 0.1f, 0.0f);
	        glVertex3f(0.2f, 0.2f, 0.0f);
	    glEnd();
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-0.15f, -0.03f, 0.0f);
	    glBegin(GL_LINES);
	        glColor3f(1.0f, 1.0f, 1.0f); 
	        glVertex3f(0.05f, 0.1f, 0.0f);
	        glVertex3f(0.2f, 0.2f, 0.0f);
	    glEnd();
	glPopMatrix();	
	
	//Jendala Depan
	glPushMatrix();
		glTranslatef(0.035f, 0.0f, 0.0f);
		glBegin(GL_QUADS);
	    glColor3f(0.2f, 0.2f, 0.35f);
		    glVertex3f( 0.25f, 0.02f, 0.0f);
		    glVertex3f( 0.35f, 0.02f, 0.0f);
		glColor3f(0.3f, 0.3f, 0.45f);
		    glVertex3f( 0.2f,  0.20f, 0.0f);
		    glVertex3f( 0.15f,  0.20f, 0.0f);
		glEnd();
	glPopMatrix();
	
	//Sayap
	glPushMatrix();
		glTranslatef(-0.8f, 0.0f, 0.0f);
		glBegin(GL_QUADS);
			glColor3f(1.0f, 0.1f, 0.0f);
			    glVertex3f( 0.0f, 0.0f, 0.0f);
			glColor3f(0.8f, 0.1f, 0.0f);
			    glVertex3f( 0.15f, 0.0f, 0.0f);
			    glVertex3f( 0.1f,  0.05f, 0.0f);
			glColor3f(1.0f, 0.1f, 0.0f);
			    glVertex3f( 0.0f,  0.05f, 0.0f);
		glEnd();
	glPopMatrix();
	glPushMatrix();
		glScalef(1.9f, 1.9f, 1.0f);
		glTranslatef(-0.21f, -0.01f, 0.0f);
	    glColor3f(1.0f, 0.1f, 0.0f);
	 	glBegin(GL_TRIANGLE_STRIP);
	
	    float a = -1.5f, b = 0.0f, c = 0.05f; 
	    float xStart = -0.16f, xEnd = 0.16f, step = 0.02f;
	
	    for (float x = xStart; x <= xEnd; x += step) {
	        float y = a * x * x + b * x + c;
	        glVertex2f(x, y);
	        glVertex2f(x, 0.0f);
	    }
	
	    glEnd();
	glPopMatrix();
	
	//Lubang Roda
	glPushMatrix();
		glScalef(0.95f, 710.0 / 500.0 * 0.95f, 1.0f);
        glTranslatef(-0.49f, -0.16f, 0.0f); 
	    glBegin(GL_TRIANGLE_FAN);
	        glColor3f(0.0f, 0.0f, 0.0f);
	        glVertex2f(0.0f, -0.1f);
	        float JariJari = 0.2f;  
	        for (int i = 0; i <= 50; i++) {
	            float angle = 3.1415926f * i / 50;
	            float x = JariJari * cos(angle);
	            float y = JariJari * sin(angle);
	            glVertex2f(x, y - 0.1f);
	        }
	    glEnd();
	glPopMatrix();
	
	glPushMatrix();
		glScalef(0.95f, 710.0 / 500.0 * 0.95f, 1.0f);
        glTranslatef(0.44f, -0.16f, 0.0f); 
	    glBegin(GL_TRIANGLE_FAN);
	        glColor3f(0.0f, 0.0f, 0.0f);
	        glVertex2f(0.0f, -0.1f);
	        JariJari = 0.2f;  
	        for (int i = 0; i <= 50; i++) {
	            float angle = 3.1415926f * i / 50;
	            float x = JariJari * cos(angle);
	            float y = JariJari * sin(angle);
	            glVertex2f(x, y - 0.1f);
	        }
	    glEnd();
	glPopMatrix();
	
	//Roda Kiri
	glPushMatrix();
		JariJari = 0.15f;
		glScalef(1.0, 640.0 / 500.0, 1.0); 
        glTranslatef(-0.47f, -0.22f, 0.0f); 
        glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.2f, 0.2f, 0.2f); 
            glVertex2f(0.0f, 0.0f);
            for (int i = 0; i <= 50; i++) {
                float angle = 2.0f * 3.1415926f * i / 50;
                float x = JariJari * cos(angle);
                float y = JariJari * sin(angle);
                if (y > -0.0025) {
		            glColor3f(0.0f, 0.0f, 0.0f); 
		        } else if (y > -0.05){
		        	glColor3f(0.1f, 0.1f, 0.1f);
		        } else {
		            glColor3f(0.2f, 0.2f, 0.2f); 
		        }
                glVertex2f(x, y);
            }
        glEnd();
        JariJari = 0.1f;
        glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.9f, 0.9f, 0.9f);
            glVertex2f(0.0f, 0.0f);
            for (int i = 0; i <= 50; i++) {
                float angle = 2.0f * 3.1415926f * i / 50;
                float x = JariJari * cos(angle);
                float y = JariJari * sin(angle);
                glVertex2f(x, y);
            }
        glEnd();
        JariJari = 0.09f;
        glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.1f, 0.1f, 0.1f);
            glVertex2f(0.0f, 0.0f);
            for (int i = 0; i <= 50; i++) {
                float angle = 2.0f * 3.1415926f * i / 50;
                float x = JariJari * cos(angle);
                float y = JariJari * sin(angle);
                glVertex2f(x, y);
            }
        glEnd();
    glPopMatrix();
    
    //Roda Kanan
    glPushMatrix();
    	JariJari = 0.15f;
		glScalef(1.0, 640.0 / 500.0, 1.0); 
        glTranslatef(0.42f, -0.22f, 0.0f); 
        glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.2f, 0.2f, 0.2f);
            glVertex2f(0.0f, 0.0f);
            for (int i = 0; i <= 50; i++) {
                float angle = 2.0f * 3.1415926f * i / 50;
                float x = JariJari * cos(angle);
                float y = JariJari * sin(angle);
                if (y > -0.0025) {
		            glColor3f(0.0f, 0.0f, 0.0f); 
		        } else if (y > -0.05){
		        	glColor3f(0.1f, 0.1f, 0.1f);
		        } else {
		            glColor3f(0.2f, 0.2f, 0.2f); 
		        }
                glVertex2f(x, y);
            }
        glEnd();
        JariJari = 0.1f;
        glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.9f, 0.9f, 0.9f);
            glVertex2f(0.0f, 0.0f);
            for (int i = 0; i <= 50; i++) {
                float angle = 2.0f * 3.1415926f * i / 50;
                float x = JariJari * cos(angle);
                float y = JariJari * sin(angle);
                glVertex2f(x, y);
            }
        glEnd();
        JariJari = 0.09f;
        glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.1f, 0.1f, 0.1f);
            glVertex2f(0.0f, 0.0f);
            for (int i = 0; i <= 50; i++) {
                float angle = 2.0f * 3.1415926f * i / 50;
                float x = JariJari * cos(angle);
                float y = JariJari * sin(angle);
                glVertex2f(x, y);
            }
        glEnd();
    glPopMatrix();
	
	//Lines
	glPushMatrix();
	    glLineWidth(2.0f);
	    glBegin(GL_LINES);
	        glColor3f(0.1f, 0.1f, 0.1f);
	        glVertex3f(-0.15f, 0.2f, 0.0f);
	        glVertex3f(-0.12f, 0.0f, 0.0f);
	    glEnd();
	glPopMatrix();
	glPushMatrix();
	    glBegin(GL_LINES);
	        glColor3f(0.1f, 0.1f, 0.1f);
	        glVertex3f(-0.18f, 0.2f, 0.0f);
	        glVertex3f(-0.18f, 0.0f, 0.0f);
	    glEnd();
	glPopMatrix();
	
	
	//Others
	glPushMatrix();
		glTranslatef(-0.18f, -0.13f, 0.0f);
		glBegin(GL_QUADS);
			glColor3f(0.6f, 0.1f, 0.0f);
			    glVertex3f( 0.0f, 0.0f, 0.0f);
			    glVertex3f( 0.1f, 0.0f, 0.0f);
			glColor3f(1.0f, 0.1f, 0.0f);
			    glVertex3f( 0.1f,  0.12f, 0.0f);
			    glVertex3f( -0.02f,  0.12f, 0.0f);
		glEnd();
	glPopMatrix();
	
	glLineWidth(3.5f);
	glPushMatrix();
		glTranslatef(-0.18f, -0.13f, 0.0f);
	    glBegin(GL_LINES);
	        glColor3f(0.1f, 0.1f, 0.1f);
			    glVertex3f( 0.1f, -0.15f, 0.0f);
			    glVertex3f( 0.45f, -0.15f, 0.0f);
	    glEnd();
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-0.18f, -0.13f, 0.0f);
	    glLineWidth(3.5f);
	    glBegin(GL_LINES);
	        glColor3f(0.1f, 0.1f, 0.1f);
			    glVertex3f( -0.02f,  0.12f, 0.0f);
			    glVertex3f( 0.45f, 0.12f, 0.0f);
	    glEnd();
	glPopMatrix();
	
	glLineWidth(2.0f);
	glPushMatrix();
		glTranslatef(0.1f, -0.2f, 0.0f);
	    glBegin(GL_LINES);
	        glColor3f(0.1f, 0.1f, 0.1f);
	        glVertex3f(-0.18f, 0.2f, 0.0f);
	        glVertex3f(-0.18f, -0.09f, 0.0f);
	    glEnd();
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0.45f, -0.2f, 0.0f);
	    glBegin(GL_LINES);
	        glColor3f(0.1f, 0.1f, 0.1f);
	        glVertex3f(-0.18f, 0.2f, 0.0f);
	        glVertex3f(-0.18f, -0.09f, 0.0f);
	    glEnd();
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-0.18f, -0.13f, 0.0f);
	    glBegin(GL_LINES);
	        glColor3f(0.1f, 0.1f, 0.1f);
	        glVertex3f(0.0f, 0.0f, 0.0f);
			glVertex3f( -0.02f,  0.12f, 0.0f);
	    glEnd();
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-0.18f, -0.13f, 0.0f);
	    glBegin(GL_LINES);
	        glColor3f(0.1f, 0.1f, 0.1f);
			glVertex3f( -0.2f, 0.0f, 0.0f);
			glVertex3f( 0.1f, 0.0f, 0.0f);
	    glEnd();
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-0.8f, 0.0f, 0.0f);
	    glBegin(GL_LINES);
	        glColor3f(0.1f, 0.1f, 0.1f);
			glVertex3f( 0.15f, 0.0f, 0.0f);
			glVertex3f( 0.4f, -0.2f, 0.0f);
	    glEnd();
	glPopMatrix();
}

void Road() {
    glColor3f(0.3f, 0.3f, 0.3f);
    glBegin(GL_QUADS);
        glVertex2f(-1.0f, -0.2f);
        glVertex2f(1.0f, -0.2f);
        glVertex2f(1.0f, -1.0f);
        glVertex2f(-1.0f, -1.0f);
    glEnd();
}

void StreetLight(){
	glPushMatrix();
		glTranslatef(0.74f, -1.0f, 0.0f);
		glBegin(GL_QUADS);
			glColor3f(0.1f, 0.1f, 0.1f);
				glVertex3f(0.0f, 0.0f, 0.0f);
				glVertex3f(0.07f, 0.0f, 0.0f);
			glColor3f(0.5f, 0.5f, 0.5f);
				glVertex3f(0.07f, 3.0f, 0.0f);
				glVertex3f(0.0f, 3.0f, 0.0f);
		glEnd();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(0.7f, -1.0f, 0.0f);
		glBegin(GL_QUADS);
			glColor3f(0.1f, 0.1f, 0.1f);
				glVertex3f(0.0f, 0.0f, 0.0f);
				glVertex3f(0.15f, 0.0f, 0.0f);
			glColor3f(0.2f, 0.2f, 0.2f);
				glVertex3f(0.15f, 0.35f, 0.0f);
				glVertex3f(0.0f, 0.35f, 0.0f);
		glEnd();
	glPopMatrix();
}

void Cloud(float x, float y) {
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
        for (int i = 0; i < 360; i += 20) {
            float angle = i * 3.1415926f / 180;
            glVertex2f(x + 0.4f * cos(angle), y + 0.2f * sin(angle));
        }
    glEnd();
}

void DisplayMobil(){
	glClear(GL_COLOR_BUFFER_BIT);
	Road();
	Mobil();
	Cloud(1.0f, 0.5f);
	Cloud(-1.2f, 0.7f);
	Cloud(0.8f, 0.8f);
	StreetLight();
    glFlush();
}

int main (int argc, char* argv[])
{	
	glutInit(&argc, argv);
	glutInitWindowSize(720, 500);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Ford GT40 Mk.I");
	glutDisplayFunc(DisplayMobil);
	glClearColor(0.53f, 0.81f, 0.92f, 0.0f);
	glutMainLoop();
	return 0;
}
