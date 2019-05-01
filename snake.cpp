#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdio.h>

int main()
{
    sf::RenderWindow window(sf::VideoMode(512, 512), "SFML Tutorial",
                            sf::Style::Close | sf::Style::Resize);
    sf::RectangleShape player(sf::Vector2f(100.0f, 100.0f));
    player.setFillColor(sf::Color::Green);

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
                case sf::Event::TextEntered:
                    if (evt.text.unicode < 128){
                        printf("%c\n", evt.text.unicode);
                    }
                    break;
                default:
                    break;
            }
        }
        window.draw(player);
        window.display();
    }

    return 0;
}
