#include "Product.h"
#include <iomanip>
#include <iostream>

Product::Product(std::string name, int quantity, double price) : m_name{name}, m_quantity{quantity}, m_price{price}
{
}

std::string_view Product::getName() const
{
    return m_name;
}

int Product::getQuantity() const
{
    return m_quantity;
}

double Product::getPrice() const
{
    return m_price;
}

void Product::printInfo() const
{
    std::cout << "Product: " << m_name << '\n'
              << "Quantity: " << m_quantity << " units\n"
              << "Price: $" << std::fixed << std::setprecision(2) << m_price << '\n';
}
