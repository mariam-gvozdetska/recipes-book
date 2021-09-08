#include "RecipesBookUI.h"

RecipesBookUI::RecipesBookUI(){
}

void RecipesBookUI::initBookWindow(){
    window.create(sf::VideoMode(800, 800), "RECIPES BOOK");
    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear();
        window.display();
    }
}