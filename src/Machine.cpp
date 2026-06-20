#include "Machine.h"

class Machine
{
  private:
    int m_id{};
    std::string m_name{};
    std::string m_type{};
    bool m_isRunning = false;

  public:
    // constructor
    Machine(int id, std::string name, std::string type) : m_id{id}, m_name{name}, m_type{type}
    {}

    // getters
    int getId() const
    {
        return m_id;
    }

    std::string getName() const
    {
        return m_name;
    }

    std::string getType() const
    {
        return m_type;
    }

    bool getIsRunning() const
    {
        return m_isRunning;
    }
};
