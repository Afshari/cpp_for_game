#pragma once

#include <cstddef>
#include <iostream>
#include <unordered_map>
#include "person.hpp"
#include "teacher.hpp"

class Course
{
protected:
    size_t m_id;
    std::string m_name;
    Teacher *m_teacher;
    std::unordered_map<std::string, Person *> m_students;

public:
    Course(size_t ID, std::string &NAME, Teacher *TEACHER,
           std::unordered_map<std::string, Person *> &STUDENTS);

    virtual void GetAllStudents() const = 0;
    virtual void AddStudent(std::string &student_name, Person *student) = 0;
};