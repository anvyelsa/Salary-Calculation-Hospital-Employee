#include "receptionist.h"
#include<iostream>
using namespace std;
void Creceptionist::GetData()
{
	//Call the base class function to get the basic information
	CEmployee::GetData();

	std::cout << "Working hours      :" << endl;
	std::cin >> m_nWorkingHours;

	//TODO collect rest of the data
}

/// <summary>
/// Funtion to display the Employees details 
/// </summary>
void Creceptionist::ShowData()
{
	//TODO Do the code to show the details 
	CEmployee::ShowData();
	cout << "Working hours :";
	cout << m_nWorkingHours << endl;
}

/// <summary>
/// Calculate and return the salary of the employee
/// </summary>
/// <returns></returns>
float Creceptionist::GetSalary()
{
	return 3000 + (m_nWorkingHours * 100);
}

/// <summary>
/// Default constructor 
/// </summary>
Creceptionist::Creceptionist( )
{
	m_nObjectType = 3 /*FOr Receptionist */; //Can use enumerator here


	//Default Consturcotr 
}
int Creceptionist::ReturnIdOfEmployee()
{
	int id = 0;
	id=CEmployee::ReturnIdOfEmployee();
	return id;
}

