#include "Nurse.h"

/// <summary>
/// Get the employee details from the end user
/// </summary>
void CNurse :: GetData( )
{
	//Call the base class function to get the basic information
	CEmployee::GetData( ) ;

	std::cout << "NumberofPatients       : "  ;
	std::cin >> m_nNumberofPatients ;
	std::cout << "Experience             : "  ;
	std::cin >> m_nExperience;
	//TODO collect rest of the data
}

/// <summary>
/// Funtion to display the Employees details 
/// </summary>
void CNurse :: ShowData ( )
{
	//TODO Do the code to show the details 
	CEmployee::ShowData();
	cout << "Number of patients : ";
	cout << m_nNumberofPatients << endl;
	
}

/// <summary>
/// Calculate and return the salary of the employee
/// </summary>
/// <returns></returns>
float CNurse :: GetSalary ( )
{
	
	float tempSalary;
	//TODO calculate the salary based on the employee salary calculation
	if (m_nExperience > 5)
	{
		 tempSalary = 7000 + (m_nNumberofPatients * 200);
	}
	else
	{
		tempSalary = 6000 + (m_nNumberofPatients * 200);
	}
	return tempSalary;
}

/// <summary>
/// Default constructor 
/// </summary>
CNurse :: CNurse( )
{
	m_nObjectType = 2 /*FOr Nurse */; //Can use enumerator here

	//Default Consturcotr 
}
int CNurse::ReturnIdOfEmployee()
{
	int id = 0;
	id=CEmployee::ReturnIdOfEmployee();
	return id;
}