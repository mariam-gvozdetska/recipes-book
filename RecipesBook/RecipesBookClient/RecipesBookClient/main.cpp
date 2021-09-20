#include <iostream>
#include "Client.h"

int main()
{
	//RecipesBook recipesBook;
	//std::vector<Product> products;
	//std::vector<Dish> dishes;
	//products.push_back(Product("Буряк", "Vegetable", 20, 20));
	//products.push_back(Product("Сухар хлібобулочні", "Bread", 30, 25));
	//products.push_back(Product("Олія рафінована", "Test", 50, 55));
	//products.push_back(Product("Сіль харчова ", "Test", 50, 55));
	//recipesBook.AddDish(Dish(products, Ukrainian, 1000, 1050, "САЛАТ З БУРЯКОМ ТА СУХАРИКАМИ", Salad));

	//dishes.push_back(Dish(products, Ukrainian, 1000, 1050, "САЛАТ З БУРЯКОМ ТА СУХАРИКАМИ", Salad));

	//products.empty();

	//products.push_back(Product("Буряк", "Vegetable", 20, 20));
	//products.push_back(Product("Картопля", "Vegetable", 30, 25));
	//products.push_back(Product("Капуста квашена", "Vegetable", 50, 55));
	//products.push_back(Product("Олія соняшникова рафінована", "Test", 50, 55));
	//products.push_back(Product("Сіль харчова", "Test", 50, 55));
	//recipesBook.AddDish(Dish(products, Ukrainian, 1000, 1050, "САЛАТ З БУРЯКОМ, КАРТОПЛЕЮ 4 ТА КВАШЕНОЮ КАПУСТОЮ", Salad));

	//dishes.push_back(Dish(products, Ukrainian, 1000, 1050, "САЛАТ З БУРЯКОМ, КАРТОПЛЕЮ 4 ТА КВАШЕНОЮ КАПУСТОЮ", Salad));

	//products.empty();

	//products.push_back(Product("Капуста білокачанна", "Vegetable", 20, 20));
	//products.push_back(Product("Мускатний горіх мелений", "Vegetable", 30, 25));
	//products.push_back(Product("Сік лимонний свіжий", "Vegetable", 50, 55));
	//products.push_back(Product("Олія соняшникова рафінована", "Test", 50, 55));
	//products.push_back(Product("Сіль харчова", "Test", 50, 55));
	//recipesBook.AddDish(Dish(products, Ukrainian, 1000, 1050, "САЛАТ З ЗАПЕЧЕНОЇ КАПУСТИ", Salad));
	//
	//dishes.push_back(Dish(products, Ukrainian, 1000, 1050, "САЛАТ З БУРЯКОМ, КАРТОПЛЕЮ 4 ТА КВАШЕНОЮ КАПУСТОЮ", Salad));
	std::vector<Product> products;
	products.push_back(Product("Капуста білокачанна", "Vegetable", 20, 20));
	products.push_back(Product("Мускатний горіх мелений", "Vegetable", 30, 25));
	products.push_back(Product("Сік лимонний свіжий", "Vegetable", 50, 55));
	products.push_back(Product("Олія соняшникова рафінована", "Test", 50, 55));
	products.push_back(Product("Сіль харчова", "Test", 50, 55));
	Dish dish1 = { products, Ukrainian, 1000, 1050, "Some text", Salad };

	nlohmann::json j;
	j["product_title"] = dish1.GetTitle();
	j["cuisine"] = dish1.GetCuisine();
	j["type"] = dish1.GetType();
	j["weight"] = dish1.GetWeight();
	j["calories"] = dish1.GetCalories();

	// std::cout << j << std::endl;

	std::string serialzedString = j.dump();
	
	Dish dish2;
	nlohmann::json j1 = nlohmann::json::parse(serialzedString);
	dish2.SetTitle(j1["product_title"].get<std::string>());
	dish2.SetCuisine(j1["cuisine"].get<Cuisine>());
	dish2.SetType(j1["type"].get<DishType>());
	dish2.SetWeight(j1["weight"].get<int>());
	dish2.SetCalories(j1["calories"].get<int>());

	dish2.Print();

	//try
	//{
	//	Client client;
	//	client.ConnectToServer();

	//	client.SendMessageToServer("Hello, server!");
	//	std::cout << "Server: " << client.RecieveMessageFromServer() << std::endl;
	//}
	//catch (const std::exception& ex)
	//{
	//	std::cout << ex.what() << std::endl;
	//}

}


