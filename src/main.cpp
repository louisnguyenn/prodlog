#include "../include/Machine.h"
#include "../include/Product.h"
#include <iostream>
#include <vector>

template <typename T>
void printAllProducts(const std::vector<T> &inventory)
{
    std::cout << "=== Products (" << inventory.size() << ") ===\n";

    for (const auto &product : inventory)
    {
        product.printInfo();
    }
}

void menu()
{
    std::cout << "=== Factory Tracker ===\n" << "1. Add product\n" << "2. List product\n" << "3. Add machine\n" << "4. List machines\n" << "5. Toggle machine on/off\n" << "0. Exit\n" << "Choice: ";
}

int getChoice()
{
    int input{};

    std::cin >> input;

    return input;
}

int main()
{
    std::vector<Product> inventory;
    int choice{};

    do {
        menu();
        choice = getChoice();

    } while (choice != 0);

    // inventory.push_back(Product("Steel Bolt M*", 500, 0.15));
    // inventory.push_back(Product("Aluminium Plate", 30, 12.50));
    // inventory.push_back(Product("Drive Belt", 20, 8.00));

    // printAllProducts(inventory);

    return 0;
}
