#include "Game.h"

Game::Game() : window(sf::VideoMode(800, 600), "Space Shooter") {
    // Initialize game elements here (e.g., load textures, set up player, etc.)
}

void Game::run() {
    while (window.isOpen()) {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}

void Game::update() {
    // Update game logic (e.g., player movement, enemy updates)
}

void Game::render() {
    window.clear();
    // Draw game elements (e.g., player, enemies)
    window.display();
}