#pragma once

#include "person.hpp"

class Student : public Person
{
private:
    std::string m_grade;

public:
    Student(size_t ID, std::string &NAME, int AGE, std::string &GRADE);

    void GetInfo() const override;
};