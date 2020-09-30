/**
 * Project OOP3200 Lesson 4
 * @author Nick Sturch-Flint
 * @version 1
 */


#include "Person.h"


#include <iostream>
#include <string>

/**
 * Person implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 */
Person::Person(std::string first_name, std::string last_name, float age):
m_firstName(std::move(first_name)), m_lastName(std::move(last_name)), m_age(age)
{

}

/**
 * @return float
 */
float Person::GetAge() const
{
    return m_age;
}

/**
 * @param value
 */
void Person::SetAge(float value)
{
    m_age = value;
}

/**
 * @return string
 */
std::string Person::GetFirstName() const
{
    return m_firstName;
}

/**
 * @param value
 */
void Person::SetFirstName(std::string value)
{
    m_firstName = value;
}

/**
 * @return string
 */
std::string Person::GetLastName() const
{
    return m_lastName;
}

/**
 * @param value
 */
void Person::SetLastName(std::string value)
{
    m_lastName = value;
}

/**
 * @return void
 */
void Person::SaysHello()
{
    std::cout << GetFirstName() << " says Hello!" << std::endl;
}



/**
 * @return string
 */
std::string Person::ToString()
{
    std::string outputString;

    outputString += "\n-------------------------------------------------------";
    outputString += "\nFirst Name: " + GetFirstName();
    outputString += "\nLast Name : " + GetLastName();
    outputString += "\nAge       : " + std::to_string(GetAge());

    return outputString;
}