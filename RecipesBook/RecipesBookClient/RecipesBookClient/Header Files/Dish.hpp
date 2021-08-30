#pragma once

#include "Product.hpp"
#include "Cuisine.h"
#include "DishType.h"

class Dish
{
    vector<Product> _products;
    Cuisine _cuisine;
    int _calories;
    int _weight;
    string _title;
    DishType _dishType;
    
public:
    Dish();
    Dish(vector<Product> products, Cuisine cuisine, int calories, int weight, string title, DishType dishType);
    
    void AddProduct(const Product product);
    void DeleteProduct(Product product);
    
    Cuisine GetCuisine()const;
    void SetCuisine(Cuisine cuisine);
    
    int GetCalories()const;
    void SetCalories(int calories);
    
    int GetWeight()const;
    void SetWeight(int weight);
    
    string GetTitle()const;
    void SetTitle(string title);
    
    DishType GetType()const;
    void SetType(DishType dishType);
    
    void Print()const;
    
    bool operator==(const Dish& r);
    
    bool IsUsed(Product product);
};
