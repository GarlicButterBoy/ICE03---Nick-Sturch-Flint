/**
 * Project OOP3200 Lesson 4
 * @author Nick Sturch-Flint
 * @version 1
 */


#ifndef _STUDENT_H
#define _STUDENT_H

#include "Person.h"


class Student: public Person {
public:

/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
void Student(std::string first_name, std::string last_name, float age, string student_id);

string GetStudentID();

/**
 * @param value
 */
void SetStudentID(string value);

void Studies();

string ToString();
private:
    string m_student_id;
};

#endif //_STUDENT_H