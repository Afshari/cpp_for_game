#include "student.hpp"
#include "teacher.hpp"
#include "school_course.hpp"
#include <unordered_map>

int main()
{

    size_t teacher_id = 1;
    std::string teacher_name = "Mr. Andersson";
    int teacher_age = 45;
    std::string teacher_subject = "Mathematics";

    Teacher teacher1 = Teacher(teacher_id, teacher_name, teacher_age, teacher_subject);

    size_t student_id = 2;
    std::string student_name = "Anna";
    int student_age = 16;
    std::string student_grade = "A";

    Student student1 = Student(student_id, student_name, student_age, student_grade);

    size_t course_id = 100;
    std::string course_name = "Algebra 101";
    std::unordered_map<std::string, Person *> course_students;
    std::string course_subject = "Math";

    SchoolCourse course1 = SchoolCourse(course_id, course_name, &teacher1, course_students, course_subject);

    std::string name_to_add = "Anna";
    course1.AddStudent(name_to_add, &student1);
    course1.GetAllStudents();

    return 0;
}