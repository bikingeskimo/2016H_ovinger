#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/System.hpp>
#include <GL/glu.h>

#include <iostream>

/*
 * Gi inn koordinater til hjørnepunktene til kuben/terningen. Bruk
 * gl.glBegin(GL.GL_LINE_LOOP); til å tegne linjer mellom hjørnepunktene. Anta at
 * sentrum i kuben er plassert i origo i modellkoordinatsystemet (WorldCoordinate System)
 * og at lengden på sidekantene i kuben/terningen = 2.0.
 * For å få tegningen vist på skjermen, benytt Java-rammeverket fra øving 1, og modifiser
 * den tegnefila/programfila du laget i øving1. Bruk metoden gl.glTranslate() til å forskyve
 * terningen i negativ z-retning slik at den faller innenfor synspyramiden definert ved det
 * parametervalget du har benyttet i glu.gluPerspective().
 *
 */

class SFMLApplication {
    sf::ContextSettings context_settings;
    sf::Window window;

public:
    SFMLApplication() : context_settings(32),
                        window(sf::VideoMode(800, 600),
                        "SFML Example",
                        sf::Style::Default,
                        context_settings) {
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

            glBegin(GL_LINE_LOOP);
            glVertex3f(1.0, 1.0, 1.0);      //P1    Top square
            glVertex3f(1.0, -1.0, 1.0);     //P2
            glVertex3f(1.0, 1.0, -1.0);     //P3
            glVertex3f(1.0, -1.0, -1.0);    //P4
            glVertex3f(-1.0, 1.0, 1.0);     //P5    Bottom Square
            glVertex3f(-1.0, -1.0, 1.0);    //P6
            glVertex3f(-1.0, 1.0, -1.0);    //P7
            glVertex3f(-1.0, -1.0, -1.0);   //P8




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