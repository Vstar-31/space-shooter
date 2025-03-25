#ifndef BULLET_H
#define BULLET_H

#include <SFML/Graphics.hpp>

class Bullet {
public:
    Bullet(sf::Vector2f position);
    void update();
    void draw(sf::RenderWindow& window);
    bool isOffScreen() const;

private:
    sf::Sprite sprite;
    sf::Texture texture;
    float speed;
};

#endif // BULLET_H