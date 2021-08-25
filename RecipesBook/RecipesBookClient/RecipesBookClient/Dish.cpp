#include "Dish.hpp"

Dish::Dish()
{
    _cuisine = Indonesian;
    _calories = 0;
    _weight = 0;
    _title = "";
    _dishType = Salad;
}

Dish::Dish(vector<Product> products, Cuisine cuisine, int calories, int weight, string title, DishType dishType)
{
    _products = products;
    _cuisine = cuisine;
    
    if(calories > 0)
        _calories = calories;
    else
        _calories = 0;
    
    if(weight > 0)
        _weight = weight;
    else
        _weight = 0;
    
    _title = title;
    _dishType = dishType;
}

void Dish::AddProduct(const Product product)
{
    _products.push_back(product);
}

void Dish::DeleteProduct(Product product)
{
    vector<Product>::iterator it1;
    for (auto it = _products.begin(); it != _products.end(); it++)
           if(*it == product)
               it1 = it;
    
    _products.erase(it1);
}

Cuisine Dish::GetCuisine()const
{
    return _cuisine;
}

void Dish::SetCuisine(Cuisine cuisine)
{
    _cuisine = cuisine;
}

int Dish::GetCalories()const
{
    return _calories;
}

void Dish::SetCalories(int calories)
{
    if(calories > 0)
        _calories = calories;
    else
        _calories = 0;
}

int Dish::GetWeight()const
{
    return _weight;
}

void Dish::SetWeight(int weight)
{
    if(weight > 0)
        _weight = weight;
    else
        _weight = 0;
}

string Dish::GetTitle()const
{
    return _title;
}

void Dish::SetTitle(string title)
{
    _title = title;
}

DishType Dish::GetType()const
{
    return _dishType;
}

void Dish::SetType(DishType dishType)
{
    _dishType = dishType;
}

void Dish::Print()const
{
    for (auto item : _products)
    {
        item.Print();
    }
}

bool Dish::operator==(const Dish& r)
{
    return this->_title == r._title;
}

bool Dish::IsUsed(Product product)
{
    for(auto item : _products)
        if(item.GetProductTitle() == product.GetProductTitle())
            return true;
    return false;
}
