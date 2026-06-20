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

int main()
{
    std::vector<Product> inventory;

    inventory.push_back(Product("Steel Bolt M*", 500, 0.15));
    inventory.push_back(Product("Aluminium Plate", 30, 12.50));
    inventory.push_back(Product("Drive Belt", 20, 8.00));

    printAllProducts(inventory);

    return 0;
}
