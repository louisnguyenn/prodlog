#ifndef PRODUCT_H
#define PRODUCT_H
#pragma once
#include <string>

class Product
{
  private:
    std::string m_name{};
    int m_quantity{};
    double m_price{};

  public:
    // constructor
    Product(std::string name, int quantity, double price) : m_name{name}, m_quantity{quantity}, m_price{price}
    {
    }

    // getters
    std::string_view getName() const
    {
        return m_name;
    }

    int getQuantity() const
    {
        return m_quantity;
    }

    double getPrice() const
    {
        return m_price;
    }

    void printInfo() const
    {
        return; // function stub
    }
};

#endif // PRODUCT_H
