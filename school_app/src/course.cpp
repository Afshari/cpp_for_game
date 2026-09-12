#include "course.hpp"

Course::Course(size_t ID, std::string &NAME, Teacher *TEACHER,
               std::unordered_map<std::string, Person *> &STUDENTS)
    : m_id(std::move(ID)), m_name(std::move(NAME)), m_teacher(TEACHER),
      m_students(std::move(STUDENTS)) {}