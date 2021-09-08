#include "ButtonUI.h"

ButtonUI::ButtonUI(sf::Texture* normal, sf::Texture* hower, sf::Texture* clicked, sf::Texture* disabled, std::string text, sf::IntRect location, sf::Vector2f inset){
    this->normal.setTexture(*normal);
    this->clicked.setTexture(*clicked);
    this->hower.setTexture(*hower);
    this->disabled.setTexture(*disabled);
    this->currentSpr = &this->normal;
    current = NORMAL;
    width = location.width;
    height = location.height;
    this->normal.setTextureRect(location);
    this->clicked.setTextureRect(location);
    this->hower.setTextureRect(location);
    this->disabled.setTextureRect(location);
    this->text.setString(text);
    sf::Vector2f place = inset;
    place.x += location.left;
    place.y += location.top;
    this->text.setPosition(place);
    image = normal->copyToImage();
    enabled = true;

    onClick = nullptr;
}

bool ButtonUI::checkHit(sf::Vector2f mousePos){
     sf::Vector2f inPos = mousePos - normal.getPosition();
     if (inPos.x >= 0 && inPos.y >= 0 && inPos.x <= width && inPos.y <= height) {
         return image.getPixel(inPos.x, inPos.y).a > 0;
     }
     return false;
}

void ButtonUI::setState(ButtonState which){
    current = which;
    switch (current)
    {
    case ButtonUI::HOWER:
        currentSpr = &hower;
        break;
    case ButtonUI::CLICKED:
        currentSpr = &clicked;
        break;
    case ButtonUI::DISABLED:
        currentSpr = &disabled;
        enabled = false;
        break;
    default:
        currentSpr = &normal;
        enabled = true;
        break;
    }
}

void ButtonUI::setText(std::string text){
    this->text.setString(text);
}

sf::Sprite* ButtonUI::getSprite(){
    return currentSpr;
}

sf::Text* ButtonUI::getText(){
    return &text;
}

void ButtonUI::setEnabled(bool enabled){
    setState(enabled ? NORMAL : DISABLED);
}

bool ButtonUI::doClick(sf::Vector2f point){
    if (enabled && checkHit(point)) {
        setState(CLICKED);
        if(onClick != nullptr) 
            return onClick();
    }
    return false;
}

bool ButtonUI::doMove(sf::Vector2f point){
    if (enabled) {
        ButtonState state = current;
        setState(checkHit(point) ? HOWER : NORMAL);
        return state != current;
    }
    return false;
}

bool ButtonUI::getEnabled(){
    return enabled;
}

void ButtonUI::setOnClick(bool(*funcPointer)()){
    onClick = funcPointer;
}