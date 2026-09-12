#pragma once

#include <iostream>

class Person
{
protected:
    size_t m_id;
    std::string m_name;
    int m_age;

public:
    Person(size_t ID, std::string &NAME, int AGE);

    virtual void GetInfo() const = 0;
};