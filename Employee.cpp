#include "Employee.h"
#include<iostream>
using namespace std;

/// <summary>
/// Default constructor
/// </summary>
CEmployee :: CEmployee ( )
{
	//Do nothing
}

/// <summary>
/// Get the employee details from the end user
/// </summary>
void CEmployee :: GetData ( )
{

	cout << "\t\t\t\tEnter Employee Details" << endl;
	cout << "\t\t\tEmployee Code : ";
	cin >> m_nEmployeeCode ;
	cout << "\n\t\t\tName          : ";
	cin >> m_strEmployeeName;
	cout << "\n\t\t\tAge           : ";
	cin >> m_nAge;
	cout << "\n\t\t\tDesignation   : ";
	cin >> m_strDesignation;
	//TODO collect rest of the data
}
/// <summary>
/// Funtion to display the Employees details 
/// </summary>
void CEmployee :: ShowData()
{
	//TODO Do the code to show the details 
	cout << "\t\t\t\tDisplaying record" << endl;
	cout << "\n\t\t\tEmployee code   : ";
	cout << m_nEmployeeCode << endl;
	cout << "\t\t\tName            : ";
	cout << m_strEmployeeName << endl;
	cout << "\t\t\tDesignation     : ";
	cout << m_strDesignation << endl;
	cout << "\t\t\tAge             : ";
	cout << m_nAge << endl;
}

/// <summary>
/// Calculate and return the salary of the employee
/// </summary>
/// <returns></returns>
float CEmployee :: GetSalary ( )
{
	//TODO calculate the salary based on the employee salary calculation
	return 0.0f ;
}

int CEmployee::ReturnIdOfEmployee()
{
	return m_nEmployeeCode;
}

/// <summary>
/// Fuction returns the object type
/// </summary>
/// <returns></returns>
int CEmployee::GetObjectType()
{
	return m_nObjectType ;
}


