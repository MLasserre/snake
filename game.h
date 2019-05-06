#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

class Game
{
    public: 
                         Game();
        void             run();

    private:
        void             processEvents();
        void             update(sf::Time deltaTime);
        void             render();

        void             handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

    private:
        sf::RenderWindow mWindow;
        sf::CircleShape  mPlayer;
        const sf::Time   TimePerFrame   = sf::seconds(1.f / 60.f);

        float            PlayerSpeed    = 100.f;

        bool             mIsMovingUp    = false;
        bool             mIsMovingDown  = false;
        bool             mIsMovingLeft  = false;
        bool             mIsMovingRight = false;

};

#endif // GAME_H
