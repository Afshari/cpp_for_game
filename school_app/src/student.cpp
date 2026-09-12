#include "student.hpp"

Student::Student(size_t ID, std::string &NAME, int AGE, std::string &GRADE)
    : Person(ID, NAME, AGE), m_grade(std::move(GRADE)) {}

void Student::GetInfo() const
{
    std::cout << "Student name: " << m_name << "\n";
    std::cout << "Student grade: " << m_grade << "\n";
}