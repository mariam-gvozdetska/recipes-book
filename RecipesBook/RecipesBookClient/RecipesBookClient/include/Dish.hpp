#pragma once

#include "Product.hpp"
#include "Cuisine.hpp"
#include "DishType.hpp"

class Dish
{
    std::vector<Product> _products;
    Cuisine _cuisine;
    int _calories;
    int _weight;
    std::string _title;
    DishType _dishType;
    
public:
    Dish();
    Dish(std::vector<Product> products, Cuisine cuisine, int calories, int weight, std::string title, DishType dishType);
    
    void AddProduct(const Product product);
    void DeleteProduct(Product product);
    
    Cuisine GetCuisine()const;
    void SetCuisine(Cuisine cuisine);
    
    int GetCalories()const;
    void SetCalories(int calories);
    
    int GetWeight()const;
    void SetWeight(int weight);
    
    std::string GetTitle()const;
    void SetTitle(std::string title);
    
    DishType GetType()const;
    void SetType(DishType dishType);
    
    void Print()const;
    
    bool operator==(const Dish& r);
    
    bool IsUsed(Product product);
};
