#pragma once
#include <string>

struct ProductionLog
{
    int machineId{};
    std::string productName{};
    int quantityProduced{};
    std::string date{};

    void printInfo() const;
};
