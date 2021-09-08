#include "RecipesBook.hpp"

RecipesBook::RecipesBook()
{
    _title = "";
}

RecipesBook::RecipesBook(std::vector<Dish> recipes, string title)
{
    _recipes = recipes;
    _title = title;
}

void RecipesBook::AddDish(Dish dish)
{
    _recipes.push_back(dish);
}

void RecipesBook::DeleteDish(Dish dish)
{
    vector<Dish>::iterator it1;
    
    for (auto it = _recipes.begin(); it != _recipes.end(); it++)
           if(*it == dish)
               it1 = it;
    
    _recipes.erase(it1);
}

vector<Dish> RecipesBook::GetByCuisine(Cuisine cuisine)
{
    vector<Dish> result;
    for (auto recipe : _recipes)
    {
        if(recipe.GetCuisine() == cuisine)
            result.push_back(recipe);
    }
    return result;
}

vector<Dish> RecipesBook::GetByType(DishType dishType)
{
    vector<Dish> result;
    for (auto recipe : _recipes)
        if(recipe.GetType() == dishType)
            result.push_back(recipe);
    return result;
}

vector<Dish> RecipesBook::GetByProduct(Product product)
{
    vector<Dish> result;
    for (auto recipe : _recipes)
        if(recipe.IsUsed(product))
            result.push_back(recipe);
    return result;
}
