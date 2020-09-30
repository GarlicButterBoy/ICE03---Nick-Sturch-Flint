/**
 * Project OOP3200 Lesson 4
 * @author Nick Sturch-Flint
 * @version 1
 */


#include "Proessor.h"


#include <iostream>
#include <string>
#include <utility>

/**
 * Proessor implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
Proessor::Proessor(std::string first_name, std::string last_name , float age, std::string employee_id)
	:Person(std::move(first_name), std::move(last_name), age), m_employee_id(std::move(employee_id))
{

}

/**
 * @return string
 */
std::string Proessor::GetEmployeeID() const
{
    return m_employee_id;
}

/**
 * @param value
 */
void Proessor::SetEmployeeID(std::string value)
{
    m_employee_id = std::move(value);
}

/**
 * @return void
 */
void Proessor::Teach()
{
    std::cout << GetFirstName() << " is teaching" << std::endl;
}

/**
 * @return string
 */
std::string Proessor::ToString()
{
    std::string outputString;

    outputString += Person::ToString();
    outputString += "Employee ID: " + GetEmployeeID();

    return outputString;
}