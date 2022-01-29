#pragma once
#include<iostream>
#include<string>
#include "Employee.h"

using namespace	 std ;

class CNurse  : public CEmployee
{
private :

	/// <summary>
	/// Variable to store the Number of patients attended by Nurse
	/// </summary>
	int m_nNumberofPatients = 0 ;

	/// <summary>
	/// Variable to store the Nurse experience in years
	/// </summary>
	int m_nExperience = 0 ;

public:

	/// <summary>
	/// Default constructor 
	/// </summary>
	CNurse( ) ;

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
	///FUNCTION FOR RETURNING THE id
	int ReturnIdOfEmployee();
	

};

