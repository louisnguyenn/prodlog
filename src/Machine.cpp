#include "Machine.h"

Machine::Machine(int id, std::string name, std::string type) : m_id{id}, m_name{name}, m_type{type}
{
}

int Machine::getId() const
{
    return m_id;
}

std::string_view Machine::getName() const
{
    return m_name;
}

std::string_view Machine::getType() const
{
    return m_type;
}

bool Machine::getIsRunning() const
{
    return m_isRunning;
}

// setters
void Machine::setIsRunning(bool toggle)
{
    m_isRunning = toggle;
}

void Machine::printInfo() const
{
    std::cout << "ID: " << m_id << '\n'
              << "Name: " << m_name << '\n'
              << "Type: " << m_type << '\n'
              << "Is running: " << m_isRunning << '\n';
}
