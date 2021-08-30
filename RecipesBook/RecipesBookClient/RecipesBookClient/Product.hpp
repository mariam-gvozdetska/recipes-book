#pragma once

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Product
{
//    enum ProductType
//    {
//        Fruit = 0, Vegetable, Berry, Meat, Fish, Milk, Nut, Cereal, Egg, Fowl, Seed, Sugar, Salt, Spices
//    };
    
    string _productTitle;
    string _productType;
    
    int _calories;
    int _weight;
    
public:
    Product();
    Product(string productTitle, string productType, int calories, int weight);
    
    void SetProductTitle(string productTitle);
    string GetProductTitle() const;
    
    void SetProductType(string productType);
    string GetProductType() const;
    
    void SetCalories(int calories);
    int GetCalories()const;
    
    void SetWeight(int weight);
    int GetWeight()const;
    
    void Print()const;
    
    bool operator==(const Product& r);
};
