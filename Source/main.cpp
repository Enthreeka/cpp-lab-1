#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "LAB-1");

	sf::Color backgroundColor = sf::Color::White; 

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::R)
					backgroundColor = sf::Color::Red;
				else if (event.key.code == sf::Keyboard::G)
					backgroundColor = sf::Color::Green;
				else if (event.key.code == sf::Keyboard::B)
					backgroundColor = sf::Color::Blue;
				else if (event.key.code == sf::Keyboard::W)
					backgroundColor = sf::Color::White;
			}
		}

		window.clear(backgroundColor);
		window.display();
	}

	return 0;
}