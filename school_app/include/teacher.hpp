#pragma once

#include "person.hpp"

class Teacher : public Person
{
private:
    std::string m_subject;

public:
    Teacher(size_t ID, std::string &NAME, int AGE, std::string &SUBJECT);

    void GetInfo() const override;
};