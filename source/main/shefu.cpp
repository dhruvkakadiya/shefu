#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main() {
  sf::Music music;
  if (music.openFromFile("music/Super Mario medley.wav")) {
    music.play();
  }
  sf::RenderWindow window(sf::VideoMode(1200, 1200), "SFML works!");
  sf::CircleShape shape(600.f);
  shape.setFillColor(sf::Color::Green);

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) window.close();
    }

    window.clear();
    window.draw(shape);
    window.display();
  }

  return 0;
}
