#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(512, 512), "SFML Tutorial",
                            sf::Style::Close | sf::Style::Resize);

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
            }
        }
    }

    return 0;
}
