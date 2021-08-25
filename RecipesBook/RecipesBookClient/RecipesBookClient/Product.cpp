#include "Product.hpp"

Product::Product()
{
    _productType = "";
    _productTitle = "";
    _calories = 0;
    _weight = 0;
}

Product::Product(string productTitle, string productType, int calories, int weight)
{
    _productType = productType;
    _productTitle = productTitle;
    
    if(calories > 0)
        _calories = calories;
    else
        _calories = 0;
    
    if(weight > 0)
        _weight = weight;
    else
        _weight = 0;
}

void Product::SetProductTitle(string productTitle)
{
    _productTitle = productTitle;
}

string Product::GetProductTitle()const
{
    return _productTitle;
}

void Product::SetProductType(string productType)
{
    _productType = productType;
}

string Product::GetProductType()const
{
    return _productType;
}

void Product::SetCalories(int calories)
{
    if(calories > 0)
        _calories = calories;
    else
        _calories = 0;
}

int Product::GetCalories()const
{
    return _calories;
}

int Product::GetWeight()const
{
    return _weight;
}

void Product::SetWeight(int weight)
{
    if(weight > 0)
        _weight = weight;
    else
        _weight = 0;
}

void Product::Print()const
{
    cout << "Product Title: " + _productTitle << endl;
    cout << "Product Type: " + _productType << endl;
    cout << "Calories: " << _calories << endl;
    cout << "Weight: " << _weight << endl;
}

bool Product::operator==(const Product& r)
{
    return this->_productTitle == r._productTitle;
}
