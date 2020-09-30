/**
 * Project OOP3200 Lesson 4
 * @author Nick Sturch-Flint
 * @version 1
 */

#pragma once
#ifndef _PROESSOR_H
#define _PROESSOR_H

#include "Person.h"


class Proessor: public Person {
public:

/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
Proessor(std::string first_name, std::string last_name , float age, std::string employee_id);

std::string GetEmployeeID() const;

/**
 * @param value
 */
void SetEmployeeID(std::string value);

void Teach();

std::string ToString() override;
private:
std::string m_employee_id;
};

#endif //_PROESSOR_H