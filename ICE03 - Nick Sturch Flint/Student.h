/**
 * Project OOP3200 Lesson 4
 * @author Nick Sturch-Flint
 * @version 1
 */

#pragma once
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
Student(std::string first_name, std::string last_name, float age, std::string student_id);

std::string GetStudentID() const;


/**
 * @param value
 */
void SetStudentID(std::string value);


void Studies() const;


std::string ToString() override;


private:
std::string m_student_id;
};

#endif //_STUDENT_H