#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

sf::Vector2f viewSize(1500, 1024);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "Hello Game SFML !!!", sf::Style::Default);

sf::Texture skyTexture;
sf::Sprite skySprite;

sf::Texture heroTexture;
sf::Sprite heroSprite;

void init() {
  skyTexture.loadFromFile("images/sky1.jpg");
  skySprite.setTexture(skyTexture);

  heroTexture.loadFromFile("images/hero1.png");
  heroSprite.setTexture(heroTexture);
  heroSprite.setPosition(sf::Vector2f(viewSize.x / 2, viewSize.y / 2));
  heroSprite.setOrigin(heroTexture.getSize().x / 2,
                       heroTexture.getSize().y / 2);
}

void draw() {
  window.draw(skySprite);
  window.draw(heroSprite);
}

int main() {
  sf::Music music;
  if (music.openFromFile("music/Super Mario medley.wav")) {
    music.play();
  }

  init();

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) window.close();
    }

    window.clear();
    draw();
    window.display();
  }

  return 0;
}
