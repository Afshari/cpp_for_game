#include "school_course.hpp"

SchoolCourse::SchoolCourse(size_t ID, std::string &NAME, Teacher *TEACHER,
                           std::unordered_map<std::string, Person *> &STUDENTS,
                           std::string &COURSE_SUBJECT)
    : Course(ID, NAME, TEACHER, STUDENTS),
      m_course_subject(std::move(COURSE_SUBJECT)) {}

void SchoolCourse::GetAllStudents() const
{
    std::cout << "Course: " << m_name << "\n";
    m_teacher->GetInfo();
    std::cout << "\n";
    for (auto &x : m_students)
    {
        std::cout << x.first << "\n";
        x.second->GetInfo();
        std::cout << "\n";
    }
}

void SchoolCourse::AddStudent(std::string &student_name, Person *student)
{
    m_students[student_name] = student;
    std::cout << "Added student: " << student_name << "\n";
}