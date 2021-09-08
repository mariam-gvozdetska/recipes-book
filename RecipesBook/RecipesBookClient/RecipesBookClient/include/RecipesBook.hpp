#pragma once

#include "Dish.hpp"

class RecipesBook
{
    std::vector<Dish> _recipes;
    std::string _title;
    
public:
    RecipesBook();
    RecipesBook(std::vector<Dish> recipes, string title);
    
    void AddDish(Dish dish);
    void DeleteDish(Dish dish);
    
    void SetTitle(std::string title);
    std::string GetTitle()const;
    
    void Print()const;
    
    vector<Dish> GetByCuisine(Cuisine cuisine);
    vector<Dish> GetByType(DishType dishType);
    vector<Dish> GetByProduct(Product product);
};
