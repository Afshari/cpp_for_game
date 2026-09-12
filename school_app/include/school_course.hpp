#pragma once

#include "course.hpp"
#include "person.hpp"
#include "teacher.hpp"
#include <cstddef>
#include <iostream>
#include <unordered_map>

class SchoolCourse : public Course
{
private:
    std::string m_course_subject;

public:
    SchoolCourse(size_t ID, std::string &NAME, Teacher *TEACHER,
                 std::unordered_map<std::string, Person *> &STUDENTS,
                 std::string &COURSE_SUBJECT);

    void GetAllStudents() const override;
    void AddStudent(std::string &student_name, Person *student) override;
};