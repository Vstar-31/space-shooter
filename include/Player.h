#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

class Player {
public:
    Player();
    void update();
    void draw(sf::RenderWindow& window);
    sf::Vector2f getPosition() const;

private:
    sf::Sprite sprite;
    sf::Texture texture;
    float speed;
};

#endif // PLAYER_H