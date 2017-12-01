#include <SFML\Graphics.hpp>

#include"BST\BST.h"
#include"LinkedList\LinkedList.h"
#include"Queue\Queue.h"
#include"Stack\Stack.h"
#include"Vector\Vector.h"

int main()
{
	/*
	Test Code
	Displays a green circle in the middle of the screen
	*/
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}
	return 0;
}