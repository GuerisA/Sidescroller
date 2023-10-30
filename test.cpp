#include <SFML/Graphics.hpp>

int windowWidth = 600;
int windowHeight = 400;

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(windowWidth, windowHeight), "SFML works!");
    CircleShape shape(100.f);
    shape.setFillColor(Color::Red);

    bool up, down, left, rihgt = false;
    
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}