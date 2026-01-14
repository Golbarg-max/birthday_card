#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Birthday Card for Mom");

    bool isOpen = false;

    sf::RectangleShape envelope(sf::Vector2f(400, 250));
    envelope.setPosition(200, 150);
    envelope.setFillColor(sf::Color(255, 203, 230));

    sf::ConvexShape flap;
    flap.setPointCount(3);
    flap.setPoint(0, sf::Vector2f(200, 150));
    flap.setPoint(1, sf::Vector2f(600, 150));
    flap.setPoint(2, sf::Vector2f(400, 250));
    flap.setFillColor(sf::Color(238, 178, 210));
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        } 

            if (event.type == sf::Event::MouseButtonPressed) {
               if (event.mouseButton.button == sf::Mouse::Left) {
                    int x = event.mouseButton.x;
                    int y = event.mouseButton.y;
                    if (x >= 200 && x <= 600 && y >= 150 && y <= 250) {
                        isOpen = true;
                    }
               } 
            }

        window.clear(sf::Color::White);
        window.draw(envelope);
        if (!isOpen) {
           window.draw(flap); 
        }
        
        window.display();
    } 
    return 0;
}