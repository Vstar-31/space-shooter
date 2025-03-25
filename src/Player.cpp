#include "Player.h"

Player::Player() : speed(5.0f) {
    texture.loadFromFile("assets/images/player.png");
    sprite.setTexture(texture);
    sprite.setPosition(400, 500); // Starting position
}

void Player::update() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        sprite.move(-speed, 0);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        sprite.move(speed, 0);
    }
}

void Player::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}

sf::Vector2f Player::getPosition() const {
    return sprite.getPosition();
}