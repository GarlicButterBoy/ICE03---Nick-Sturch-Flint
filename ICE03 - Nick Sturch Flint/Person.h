/**
 * Project OOP3200 Lesson 4
 * @author Nick Sturch-Flint
 * @version 1
 */


#ifndef _PERSON_H
#define _PERSON_H
#include <string>

class Person {
public:

/**
 * @param first_name
 * @param last_name
 * @param age
 */
void Person(std::string first_name, string last_name, float age);

float GetAge();

/**
 * @param value
 */
void SetAge(float value);

string GetFirstName();

/**
 * @param value
 */
void SetFirstName(string value);

string GetLastName();

/**
 * @param value
 */
void SetLastName(string value);

void SaysHello();

string ToString();
private:
    float m_age;
    string m_firstName;
    string m_lastName;
};

#endif //_PERSON_H