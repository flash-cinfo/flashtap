//
// Created by Ivan Ilin on 06.02.2021.
//

#include "Shooter.h"

using namespace std;


int main() {
    Shooter game;
    game.create(1280, 720, ShooterConsts::PROJECT_NAME, false);
    //game.create(1280, 720, ShooterConsts::PROJECT_NAME, true, Consts::BACKGROUND_COLOR, sf::Style::Fullscreen);

    return 0;
}
