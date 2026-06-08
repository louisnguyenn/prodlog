#ifndef PRODUCT_H
#define PRODUCT_H
#pragma once
#include <string>
#include <string_view>

class Product
{
  private:
    std::string m_name{};
    int m_quantity{};
    double m_price{};

  public:
    // constructor
    Product(std::string name, int quantity, double price)
    {
    }

    // getters
    std::string_view getName() const;
    int getQuantity() const;
    double getPrice() const;
    void printInfo() const;
};

#endif // PRODUCT_H
