#include <SFML/Graphics.hpp>
#include <time.h>

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(320, 480), "My Tetris Like!"); // Render window

    while (window.isOpen()) // isOpen() tests if window is open, true while it is.
    {
        Event e; // Create an object to listen events

        while (window.pollEvent(e)) // method to send events to the 'event listener object'
        {
            if (e.type == Event::Closed) // check if e.type is an Event::Closed kind
            {
                window.close(); // asks rendered window to be closed
            }
        }

        window.clear(Color::White); // Paint whole screen in white color while window is open
        window.display(); // Asks window to be displayed
    }

    return 0;
}