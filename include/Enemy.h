#ifndef ENEMY_H
#define ENEMY_H

#include <SFML/Graphics.hpp>

class Enemy {
public:
    Enemy();
    void update();
    void draw(sf::RenderWindow& window);
    sf::Vector2f getPosition() const;

private:
    sf::Sprite sprite;
    sf::Texture texture;
    float speed;
};

#endif // ENEMY_H