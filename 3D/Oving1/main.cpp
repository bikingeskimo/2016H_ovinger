#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/System.hpp>

#ifdef __APPLE__
#include <OpenGL/glu.h>
#else
#include <GL/glu.h>
#endif

#include <glm/glm.hpp>

class SFMLApplication {
  sf::ContextSettings context_settings;
  sf::Window window;

public:
  SFMLApplication() : context_settings(32),
                      window(sf::VideoMode(800, 600), "SFML Example", sf::Style::Default, context_settings) {
    window.setFramerateLimit(144);
    window.setVerticalSyncEnabled(true);

    //Various settings
    glClearColor(0.5, 0.5, 0.5, 0.0);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    //Setup projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //45° Field of View, 4:3 ratio, display range : 0.1 unit <-> 100 units
    gluPerspective(45.0, 4.0 / 3.0, 0.1, 100.0);

    glMatrixMode(GL_MODELVIEW);
  }

  void start() {
    glm::vec3 camera(0.0, 0.0, -25.0);

    bool running = true;
    while (running) {
      //Handle events
      sf::Event event;
      while (window.pollEvent(event)) {
        if (event.type == sf::Event::KeyPressed) {
          if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
            window.close();
            running = false;
          }
        }
        else if (event.type == sf::Event::MouseMoved) {
          camera.x = 0.01 * (event.mouseMove.x - static_cast<int>(window.getSize().x) / 2);
          camera.y = 0.01 * (event.mouseMove.y - static_cast<int>(window.getSize().y) / 2);
        }
        else if (event.type == sf::Event::Closed) {
          window.close();
          running = false;
        }
      }

      //Draw
      glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
      glLoadIdentity();

      gluLookAt(camera.x, camera.y, camera.z, //Camera position in World Space
                camera.x, camera.y, 0.0,      //Camera looks towards this position
                0.0, 1.0, 0.0);               //Up
      
      glBegin(GL_POINT);
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(0.0, 2.0, 0.0);   //P0
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(1.5, 1.5, 0.0);   //P1
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(2.0, 0.0, 0.0);   //P2
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(1.5, -1.5, 0.0);  //P3
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(0.0, -2.0, 0.0);  //P4
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(-1.5, -1.5, 0.0); //P5
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(-2.0, 0.0, 0.0);  //P6
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(-1.5, 1.5, 0.0);  //P7
      glEnd();
      
      
      glTranslatef(3.0, 0.0, 0.0);
      glBegin(GL_LINES);
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(0.0, 2.0, 0.0);   //P0
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(1.5, 1.5, 0.0);   //P1
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(2.0, 0.0, 0.0);   //P2
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(1.5, -1.5, 0.0);  //P3
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(0.0, -2.0, 0.0);  //P4
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(-1.5, -1.5, 0.0); //P5
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(-2.0, 0.0, 0.0);  //P6
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(-1.5, 1.5, 0.0);  //P7
      glEnd();
      
      glTranslatef(3.0, 0.0, 0.0);
      glBegin(GL_LINE_STRIP);
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(0.0, 2.0, 0.0);   //P0
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(1.5, 1.5, 0.0);   //P1
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(2.0, 0.0, 0.0);   //P2
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(1.5, -1.5, 0.0);  //P3
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(0.0, -2.0, 0.0);  //P4
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(-1.5, -1.5, 0.0); //P5
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(-2.0, 0.0, 0.0);  //P6
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(-1.5, 1.5, 0.0);  //P7
      glEnd();
      
      glTranslatef(-6.0, -6.0, 0.0);
      glBegin(GL_LINE_LOOP);
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(0.0, 2.0, 0.0);   //P0
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(1.5, 1.5, 0.0);   //P1
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(2.0, 0.0, 0.0);   //P2
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(1.5, -1.5, 0.0);  //P3
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(0.0, -2.0, 0.0);  //P4
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(-1.5, -1.5, 0.0); //P5
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(-2.0, 0.0, 0.0);  //P6
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(-1.5, 1.5, 0.0);  //P7
      glEnd();
      
      glTranslatef(3.0, 0.0, 0.0);
      glBegin(GL_TRIANGLES);
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(0.0, 2.0, 0.0);   //P0
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(1.5, 1.5, 0.0);   //P1
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(2.0, 0.0, 0.0);   //P2
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(1.5, -1.5, 0.0);  //P3
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(0.0, -2.0, 0.0);  //P4
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(-1.5, -1.5, 0.0); //P5
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(-2.0, 0.0, 0.0);  //P6
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(-1.5, 1.5, 0.0);  //P7
      glEnd();
      
      glTranslatef(3.0, 0.0, 0.0);
      glBegin(GL_TRIANGLE_STRIP);
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(0.0, 2.0, 0.0);   //P0
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(1.5, 1.5, 0.0);   //P1
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(2.0, 0.0, 0.0);   //P2
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(1.5, -1.5, 0.0);  //P3
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(0.0, -2.0, 0.0);  //P4
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(-1.5, -1.5, 0.0); //P5
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(-2.0, 0.0, 0.0);  //P6
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(-1.5, 1.5, 0.0);  //P7
      glEnd();
      
      glTranslatef(-6.0, -6.0, 0.0);
      glBegin(GL_TRIANGLE_FAN);
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(0.0, 2.0, 0.0);   //P0
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(1.5, 1.5, 0.0);   //P1
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(2.0, 0.0, 0.0);   //P2
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(1.5, -1.5, 0.0);  //P3
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(0.0, -2.0, 0.0);  //P4
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(-1.5, -1.5, 0.0); //P5
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(-2.0, 0.0, 0.0);  //P6
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(-1.5, 1.5, 0.0);  //P7
      glEnd();
      
      glTranslatef(3.0, 0.0, 0.0);
      glBegin(GL_QUADS);
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(0.0, 2.0, 0.0);   //P0
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(1.5, 1.5, 0.0);   //P1
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(2.0, 0.0, 0.0);   //P2
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(1.5, -1.5, 0.0);  //P3
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(0.0, -2.0, 0.0);  //P4
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(-1.5, -1.5, 0.0); //P5
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(-2.0, 0.0, 0.0);  //P6
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(-1.5, 1.5, 0.0);  //P7
      glEnd();
      
      glTranslatef(3.0, 0.0, 0.0);
      glBegin(GL_QUAD_STRIP);
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(0.0, 2.0, 0.0);   //P0
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(1.5, 1.5, 0.0);   //P1
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(2.0, 0.0, 0.0);   //P2
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(1.5, -1.5, 0.0);  //P3
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(0.0, -2.0, 0.0);  //P4
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(-1.5, -1.5, 0.0); //P5
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(-2.0, 0.0, 0.0);  //P6
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(-1.5, 1.5, 0.0);  //P7
      glEnd();
      
      glTranslatef(-6.0, -6.0, 0.0);
      glBegin(GL_POLYGON);
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(0.0, 2.0, 0.0);   //P0
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(1.5, 1.5, 0.0);   //P1
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(2.0, 0.0, 0.0);   //P2
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(1.5, -1.5, 0.0);  //P3
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(0.0, -2.0, 0.0);  //P4
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f(-1.5, -1.5, 0.0); //P5
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(-2.0, 0.0, 0.0);  //P6
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f(-1.5, 1.5, 0.0);  //P7
      glEnd();

      //Swap buffer (show result)
      window.display();
    }
  }
};

int main() {
  SFMLApplication sfml_application;
  sfml_application.start();

  return 0;
}
