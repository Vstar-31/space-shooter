#include "Bullet.h"

Bullet::Bullet(sf::Vector2f position) : speed(10.0f) {
    texture.loadFromFile("assets/images/bullet.png");
    sprite.setTexture(texture);
    sprite.setPosition(position);
}

void Bullet::update() {
    sprite.move(0, -speed);
}

void Bullet::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}

bool Bullet::isOffScreen() const {
    return sprite.getPosition().y < 0;
}