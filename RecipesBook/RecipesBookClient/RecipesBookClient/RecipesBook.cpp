#include "RecipesBook.h"

RecipesBook::RecipesBook()
{
    _title = "";
}

RecipesBook::RecipesBook(std::vector<Dish> recipes, std::string title)
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
    std::vector<Dish>::iterator it1;

    for (auto it = _recipes.begin(); it != _recipes.end(); it++)
        if (*it == dish)
            it1 = it;

    _recipes.erase(it1);
}

std::vector<Dish> RecipesBook::GetByCuisine(Cuisine cuisine)
{
    std::vector<Dish> result;
    for (auto recipe : _recipes)
    {
        if (recipe.GetCuisine() == cuisine)
            result.push_back(recipe);
    }
    return result;
}

std::vector<Dish> RecipesBook::GetByType(DishType dishType)
{
    std::vector<Dish> result;
    for (auto recipe : _recipes)
        if (recipe.GetType() == dishType)
            result.push_back(recipe);
    return result;
}

std::vector<Dish> RecipesBook::GetByProduct(Product& product)
{
    std::vector<Dish> result;
    for (auto recipe : _recipes)
        if (recipe.IsUsed(product))
            result.push_back(recipe);
    return result;
}
