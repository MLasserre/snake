#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdio.h>

int main()
{
    sf::RenderWindow window(sf::VideoMode(512, 512), "SFML Tutorial",
                            sf::Style::Close | sf::Style::Resize);
    sf::RectangleShape player(sf::Vector2f(100.0f, 100.0f));
    player.setPosition(206.0f, 206.0f);
    sf::Texture playerTexture;
    playerTexture.loadFromFile("sprites/idle_1.png");
    player.setTexture(&playerTexture);
    //player.setOrigin(50.0f, 50.0f);
    //player.setFillColor(sf::Color::Green);

    while (window.isOpen()){
        sf::Event evt;
        while (window.pollEvent(evt)){
            switch (evt.type){
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::Resized:
                    std::cout << "New window width: " << evt.size.width
                              << " New window height: " <<  evt.size.height
                              << std::endl;
                    break;
                //case sf::Event::TextEntered:
                    //if (evt.text.unicode < 128){
                        //printf("%c\n", evt.text.unicode);
                    //}
                    //break;
                default:
                    break;
            }
        }

        /*
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z)){
            player.move(0.0f, -0.5f);
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q)){
            player.move(-0.5f, 0.0f);
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
            player.move(0.5f, 0.0f);
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
            player.move(0.0f, 0.5f);
        }
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
            sf::Vector2i mousePos = sf::Mouse::getPosition(window);
            player.setPosition(static_cast<float>(mousePos.x),
                               static_cast<float>(mousePos.y));
        }
        */

        window.clear();
        window.draw(player);
        window.display();
    }

    return 0;
}
