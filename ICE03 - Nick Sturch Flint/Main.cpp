// ICE03 - Nick Sturch Flint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Person.h"
#include "Proessor.h"
#include "Student.h"

int main()
{
	Person person = Person("Bob", "Smith", 26.3f);
	person.SaysHello();

	std::cout << person.ToString() << std::endl;

	Student student = Student("Mike", "Jones", 22.5f, "1003034444");

	student.SaysHello();
	student.Studies();
	std::cout << student.ToString() << std::endl;

	Proessor professor = Proessor("Ray", "Bilbo", 44.32f, "101202303");

	professor.SaysHello();
	professor.Teach();

	std::cout << professor.ToString() << std::endl;

}
