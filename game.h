#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

class Game
{
    public: 
                              Game();
        void                  run();

    private:
        void                  processEvents();
        void                  update(sf::Time elapsedTime);
        void                  render();

        void                  updateStatistics(sf::Time elapsedTime);
        void                  handlePlayerInput(sf::Keyboard::Key key,
                                                bool isPressed);

    private:
        static const float    PlayerSpeed;
        static const sf::Time TimePerFrame;

        sf::RenderWindow      mWindow;

        sf::Texture           mTexture;
        sf::Sprite            mPlayer;

        sf::Font              mFont;
        sf::Text              mStatisticsText;
        sf::Time              mStatisticsUpdateTime;
        std::size_t           mStatisticsNumFrames  = 0;

        bool                  mIsMovingUp           = false;
        bool                  mIsMovingDown         = false;
        bool                  mIsMovingLeft         = false;
        bool                  mIsMovingRight        = false;
};

#endif // GAME_H
