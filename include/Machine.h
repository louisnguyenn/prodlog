#ifndef MACHINE_H
#define MACHINE_H
#pragma once
#include <iostream>
#include <string>
#include <string_view>

class Machine
{
  private:
    int m_id{};
    std::string m_name{};
    std::string m_type{};
    bool m_isRunning = false;

  public:
    // constructor
    Machine(int id, std::string name, std::string type);

    // getters
    int getId() const;
    std::string getName() const;
    std::string getType() const;
    bool getIsRunning() const;
    bool setIsRunning(bool);
    void printInfo() const;
};

#endif // MACHINE_H
