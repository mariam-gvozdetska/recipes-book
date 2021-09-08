#pragma once

#include "Client.hpp"

class Product
{
//    enum ProductType
//    {
//        Fruit = 0, Vegetable, Berry, Meat, Fish, Milk, Nut, Cereal, Egg, Fowl, Seed, Sugar, Salt, Spices
//    };
    
    std::string _productTitle;
    std::string _productType;
    
    int _calories;
    int _weight;
    
public:
    Product();
    Product(std::string productTitle, std::string productType, int calories, int weight);
    
    void SetProductTitle(std::string productTitle);
    std::string GetProductTitle() const;
    
    void SetProductType(std::string productType);
    std::string GetProductType() const;
    
    void SetCalories(int calories);
    int GetCalories()const;
    
    void SetWeight(int weight);
    int GetWeight()const;
    
    void Print()const;
    
    bool operator==(const Product& r);
};
