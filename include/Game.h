#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"

class Game {
public:
    Game();
    void run();

private:
    void processEvents();
    void update();
    void render();
    
    sf::RenderWindow window;
    Player player;
    std::vector<Enemy> enemies;
    std::vector<Bullet> bullets;
};

#endif // GAME_H