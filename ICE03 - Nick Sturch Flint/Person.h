/**
 * Project OOP3200 Lesson 4
 * @author Nick Sturch-Flint
 * @version 1
 */

#pragma once
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
Person(std::string first_name, std::string last_name, float age);

float GetAge() const;

/**
 * @param value
 */
void SetAge(float value);

std::string GetFirstName() const;

/**
 * @param value
 */
void SetFirstName(std::string value);

std::string GetLastName() const;

/**
 * @param value
 */
void SetLastName(std::string value);
void SaysHello() const;

void SaysHello();

virtual std::string ToString();
private:
    float m_age;
std::string m_firstName;
std::string m_lastName;
};

#endif //_PERSON_H