/**
 * Project OOP3200 Lesson 4
 * @author Nick Sturch-Flint
 * @version 1
 */


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
void Professor(std::string first_name, string last_name , float age, string employee_id);

string GetEmployeeID();

/**
 * @param value
 */
void SetEmployeeID(string value);

void Teach();

string ToString();
private:
    string m_employee_id;
};

#endif //_PROESSOR_H