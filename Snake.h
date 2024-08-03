//
// Created by cubin on 8/3/2024.
//

#ifndef SNAKE_H
#define SNAKE_H
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

#include "GameDesign.h"


class Snake {
public:
    Snake();

    void grow();
    void move();
    bool checkCollision() const;
    void render(sf::RenderWindow &window);
    void setDirection(Direction direction);
    void getDirection();
    sf::RectangleShape getSegment();

private:
    int size;
    bool alive;
    // Animation/Sprite Handler
    Direction direction;
    int life;
    std::vector<sf::RectangleShape> segments;
};



#endif //SNAKE_H
