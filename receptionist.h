#pragma once
#include<iostream>
#include<string>
#include "Employee.h"
using namespace	 std;
class Creceptionist : public CEmployee
{
//variable for storing work hours
int m_nWorkingHours;

public:


	/// <summary>
	/// Default constructor 
	/// </summary>
	Creceptionist();

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

