#include <SFML/Graphics.hpp>
#include <time.h>
#include <iostream>

using namespace sf;

// Game grid area
const int columns = 10;
const int rows = 20;
int grid[columns][rows] = {0};

// Piece matrix
struct Point
{
    int x, y;
} currentPiece[4], nextPiece[4];

//  Game pieces | 7  pieces, each has 4 points inside a matrix
int pieces[7][4] = {
    {1, 3, 5, 7}, // I
    {1, 4, 5, 7}, // Z
    {3, 5, 4, 6}, // S
    {3, 5, 4, 7}, // T
    {2, 3, 5, 7}, // L
    {3, 5, 7, 6}, // J
    {2, 3, 4, 5}  // O
};

int main()
{ ///// Game Window /////
    RenderWindow window(VideoMode(320, 480), "My Tetris Like!");

    ///// Piece properties //////
    int position_X = 0, color = 1;
    bool rotate = 0;
    Texture crystalTexture;
    Sprite crystalSprite;

    crystalTexture.loadFromFile("assets/tiles/crystals.png");
    crystalSprite.setTexture(crystalTexture);
    crystalSprite.setTextureRect(IntRect(0, 0, 4, 4));
    crystalSprite.setScale(4, 4);

    ////// Game Loop ///////
    while (window.isOpen())
    {
        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)
            {
                window.close();
            }

            ////// Player Inputs //////
            if (e.type == Event::KeyPressed)
            {
                switch (e.key.code)
                {
                case Keyboard::Up:
                    rotate = true;
                    break;
                case Keyboard::Left:
                    position_X = -1;
                    break;
                case Keyboard::Right:
                    position_X = 1;
                    break;
                }
            }
        }



        // Movement
        for (int points = 0; points < 4; points++)
        {
            currentPiece[points].x += position_X;
        }

        // Rotate
        if (rotate)
        {
            Point point = currentPiece[1];
            for (int i = 0; i < 4; i++)
            {
                int x = currentPiece[i].y - point.y;
                int y = currentPiece[i].x - point.x;
                currentPiece[1].x = point.x - x;
                currentPiece[1].y = point.y + y;
            }
        }

        if (currentPiece[0].x == 0)
        {
            for (int point = 0; point < 4; point++)
            {
                currentPiece[point].x = pieces[3][point] % 2;
                currentPiece[point].y = pieces[3][point] / 2;
            }
        }

        position_X = 0;
        rotate = 0;

        window.clear(Color::White); // Paint whole screen in white color while window is open
        for (int point = 0; point < 4; point++)
        {
            crystalSprite.setPosition(currentPiece[point].x * 16, currentPiece[point].y * 16); // shift sprite to change it's color
            window.draw(crystalSprite);                                                        // draw or sprite
        }

        window.display(); // Asks window to be displayed
    }

    return 0;
}