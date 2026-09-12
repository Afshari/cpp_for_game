#include "teacher.hpp"

Teacher::Teacher(size_t ID, std::string &NAME, int AGE, std::string &SUBJECT)
    : Person(ID, NAME, AGE), m_subject(std::move(SUBJECT)) {}

void Teacher::GetInfo() const
{
    std::cout << "Teacher name: " << m_name << "\n";
    std::cout << "Teacher subject: " << m_subject << "\n";
}