#include "person.hpp"

Person::Person(size_t ID, std::string &NAME, int AGE)
    : m_id(std::move(ID)), m_name(std::move(NAME)), m_age(std::move(AGE)) {}