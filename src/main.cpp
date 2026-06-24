#include "../include/Machine.h"
#include "../include/Product.h"
#include <iostream>
#include <string.h>
#include <vector>
#include <fstream>

void menu()
{
    std::cout << "=== Factory Tracker ===\n"
              << "1. Add product\n"
              << "2. List product\n"
              << "3. Add machine\n"
              << "4. List machines\n"
              << "5. Toggle machine on/off\n"
              << "6. Save all data\n"
              << "7. Load data\n"
              << "0. Exit\n"
              << "Choice: ";
}

int getChoice()
{
    int input{};

    std::cin >> input;
    std::cout << '\n';

    return input;
}

void printAllProducts(const std::vector<Product> &inventory)
{
    std::cout << "=== Products (" << inventory.size() << ") ===\n";

    for (const auto &product : inventory)
    {
        product.printInfo();
    }
}

void printAllMachines(const std::vector<Machine> &machines)
{
    std::cout << "=== Machines (" << machines.size() << ") ===\n";

    for (const auto &machine : machines)
    {
        machine.printInfo();
    }
}

void addProduct(std::vector<Product> &inventory)
{
    std::string name{};
    int quantity{};
    double price{};

    std::cout << "Product name: ";
    std::cin >> name;

    std::cout << "Quantity: ";
    std::cin >> quantity;

    std::cout << "Price per unit: ";
    std::cin >> price;

    inventory.push_back(Product(name, quantity, price));

    std::cout << "Product added!\n";
}

void addMachine(std::vector<Machine> &machines)
{
    std::string name{};
    int id{};
    std::string type{};

    std::cout << "ID: ";
    std::cin >> id;

    std::cout << "Product name: ";
    std::cin >> name;

    std::cout << "Type of machine: ";
    std::cin >> type;

    machines.push_back(Machine(id, name, type));

    std::cout << "Machine added!\n";
}

void toggleMachine(std::vector<Machine> &machines)
{
    std::string name{};

    std::cout << "What machine do you want to toggle?: ";
    std::cin >> name;

    for (auto &machine : machines)
    {
        if (name == machine.getName())
        {
            if (machine.getIsRunning() == false)
            {
                machine.setIsRunning(true);
            }
            else
            {
                machine.setIsRunning(false);
            }
        }
    }
}

void saveToFile(const std::vector<Product> &inventory, const std::vector<Machine> &machines, const std::string &filename)
{
    std::ofstream file(filename);

    if (!file.is_open())
    {
        std::cerr << "Error: could not open " << filename << '\n';
        return;
    }

    // write count to file so we know how much to read
    file << inventory.size() << '\n';

    // writing products
    for (const auto &product : inventory)
    {
        file << product.getName() << '\n' << product.getQuantity() << '\n' << product.getPrice() << '\n';
    }
    std::cout << "Saved " << inventory.size() << " products";

    file << machines.size() << '\n';

    // writing machines
    for (const auto &machine : machines)
    {
        file << machine.getId() << '\n' << machine.getName() << '\n' << machine.getType() << '\n' << machine.getIsRunning() << '\n';
    }
    std::cout << "Saved " << machines.size() << " machines";
}

void loadFromFile()
{
}

int main()
{
    std::vector<Product> inventory;
    std::vector<Machine> machines;
    int choice{};

    do
    {
        menu();
        choice = getChoice();

        switch (choice)
        {
        case 1:
            addProduct(inventory);
            break;
        case 2:
            printAllProducts(inventory);
            break;
        case 3:
            addMachine(machines);
            break;
        case 4:
            printAllMachines(machines);
            break;
        case 5:
            toggleMachine(machines);
            break;
        case 6:
            saveToFile(inventory, machinesm "data.txt");
            break;
        case 7:
            loadFromFile();
            break;
        case 0:
            std::cout << "Exiting..." << '\n';
            return 0;
            break;
        }

    } while (choice != 0);

    // inventory.push_back(Product("Steel Bolt M*", 500, 0.15));
    // inventory.push_back(Product("Aluminium Plate", 30, 12.50));
    // inventory.push_back(Product("Drive Belt", 20, 8.00));

    // printAllProducts(inventory);

    return 0;
}
