/**
 * Project OOP3200 Lesson 4
 * @author Nick Sturch-Flint
 * @version 1
 */


#include "Student.h"


#include <iostream>
#include <string>
#include <utility>

/**
 * Student implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
Student::Student(std::string first_name, std::string last_name, float age, std::string student_id)
	: Person(std::move(first_name), std::move(last_name), age), m_student_id(std::move(student_id))
{

}

/**
 * @return string
 */
std::string Student::GetStudentID() const
{
    return m_student_id;
}

/**
 * @param value
 */
void Student::SetStudentID(std::string value)
{
    m_student_id = value;
}

/**
 * @return void
 */
void Student::Studies() const
{
    std::cout << GetFirstName() << " is studying" << std::endl;
}

/**
 * @return string
 */
std::string Student::ToString()
{
    std::string outputString;

    outputString += Person::ToString();
    outputString += "\nStudent ID: " + GetStudentID();

    return outputString;
}