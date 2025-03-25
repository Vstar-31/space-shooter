#include "Enemy.h"

Enemy::Enemy() : speed(2.0f) {
    texture.loadFromFile("assets/images/enemy.png");
    sprite.setTexture(texture);
    sprite.setPosition(rand() % 800, 0); // Random starting position
}

void Enemy::update() {
    sprite.move(0, speed);
}

void Enemy::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}

sf::Vector2f Enemy::getPosition() const {
    return sprite.getPosition();
}