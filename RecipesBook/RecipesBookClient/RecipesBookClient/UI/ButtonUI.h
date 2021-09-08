#include "Header.h"

class ButtonUI
{
public:
    enum ButtonState {
        NORMAL = 0,
        HOWER = 1, // когда курсор наведен на кнопку
        CLICKED = 2,
        DISABLED = 3
    };

private:
    sf::Sprite normal;
    sf::Sprite hower;
    sf::Sprite clicked;
    sf::Sprite disabled;
    sf::Sprite* currentSpr; // рисунок текущего состояния
    sf::Text text;
    ButtonState current; // текущее состояние кнопки
    int width;
    int height;
    sf::Image image;
    bool enabled;

    bool (*onClick)();

    void setState(ButtonState);

public:
    ButtonUI(sf::Texture* normal, sf::Texture* hower, sf::Texture* clicked, sf::Texture* disabled, std::string text, sf::IntRect location, sf::Vector2f inset);
    bool checkHit(sf::Vector2f); // проверка есть ли курсор на кнопке
    void setText(std::string);
    sf::Sprite* getSprite(); // возващает текущий вид кнопки
    sf::Text* getText();
    void setEnabled(bool enabled);
    bool doClick(sf::Vector2f);
    bool doMove(sf::Vector2f);
    bool getEnabled();
    void setOnClick(bool(*funcPointer)());
};