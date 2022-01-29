#pragma once
#include<iostream>
#include<string>
#include "Employee.h"

using namespace	 std;

class CDoctor : public CEmployee 
{
private :

	/// <summary>
	/// Variable to store the Number of patient the doctor consulted
	/// </summary>
	int m_nNumberofPatients = 0 ;

	/// <summary>
	/// Variable to sore the seniority level of Doctor
	/// </summary>
	int m_nSeniority = 0 ;

	/// <summary>
	/// Variable to store the Speciality
	/// </summary>
	string m_strSpeciality;

	/// <summary>
	/// I can create an employee object in Doctor class so that its properties and functions will be
	/// used in Doctor class 
	/// </summary>
	CEmployee* m_pEmployee = NULL ;

public :

	/// <summary>
	/// Default constructor 
	/// </summary>
	CDoctor( ) ;

	/// <summary>
	/// Get the employee details from the end user
	/// </summary>
	void GetData();

	/// <summary>
	/// Funtion to display the Employees details 
	/// </summary>
	void ShowData();

	/// <summary>
	/// Calculate and return the salary of the employee
	/// </summary>
	/// <returns></returns>
	float GetSalary();
	///summary
	///return id of the employyeee
	/// 
	int ReturnIdOfEmployee();
} ;


