#pragma once

#include "Dish.h"

class RecipesBook
{
    std::vector<Dish> _recipes;
    std::string _title;

public:
    RecipesBook();
    RecipesBook(std::vector<Dish> recipes, std::string title);

    void AddDish(Dish dish);
    void DeleteDish(Dish dish);

    void SetTitle(std::string title);
    std::string GetTitle()const;

    void Print()const;

    std::vector<Dish> GetByCuisine(Cuisine cuisine);
    std::vector<Dish> GetByType(DishType dishType);
    std::vector<Dish> GetByProduct(Product& product);
};
