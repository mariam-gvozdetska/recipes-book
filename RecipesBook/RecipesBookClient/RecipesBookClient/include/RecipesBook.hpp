#pragma once

#include "Dish.hpp"

class RecipesBook
{
    vector<Dish> _recipes;
    string _title;
    
public:
    RecipesBook();
    RecipesBook(vector<Dish> recipes, string title);
    
    void AddDish(Dish dish);
    void DeleteDish(Dish dish);
    
    void SetTitle(string title);
    string GetTitle()const;
    
    void Print()const;
    
    vector<Dish> GetByCuisine(Cuisine cuisine);
    vector<Dish> GetByType(DishType dishType);
    vector<Dish> GetByProduct(Product product);
};
