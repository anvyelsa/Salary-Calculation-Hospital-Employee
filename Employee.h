#pragma once
#include <iostream>
#include <string>
#include <vector>

class CEmployee
{

protected : 
	//Protected variables can be accessed in derrived classes, Private variable cannot
	/// <summary>
	/// Variable to store the enmplyee code
	/// </summary>
	int m_nEmployeeCode =  0 ;

	/// <summary>
	/// Variable to store the employee age
	/// </summary>
	int	m_nAge =  0 ;

	/// <summary>
	/// Variable to store the employee name
	/// </summary>
	std::string m_strEmployeeName = "" ;

	/// <summary>
	/// Variable to store the emplyee designation
	/// </summary>
	std::string  m_strDesignation = "" ;

public :

	/// <summary>
	/// Variable to store the sub class object type
	/// 0 - for base, 1 - For docgtor , 2 - For Nurse, 3 - For receptionist
	/// </summary>
	int m_nObjectType = 0;

	/// <summary>
	/// Default constructor
	/// </summary>
	CEmployee ( ) ;

	/// <summary>
	/// Get the employee details from the end user
	/// </summary>
	virtual void GetData( ) ;

	/// <summary>
	/// Funtion to display the Employees details 
	/// </summary>
	virtual void ShowData( ) ;

	/// <summary>
	/// Calculate and return the salary of the employee
	/// </summary>
	/// <returns></returns>
	virtual float GetSalary( ) ;
	///<summary?
	///	creturns the id of employee
	/// 
	virtual int ReturnIdOfEmployee( ) ;

	/// <summary>
	/// Fuction returns the object type
	/// </summary>
	/// <returns></returns>
	int GetObjectType ( ) ;

} ;

