#include "Doctor.h"

/// <summary>
/// Default constructor 
/// </summary>
CDoctor :: CDoctor( )
{
	m_pEmployee = new CEmployee( ) ;
	m_pEmployee -> m_nObjectType = 1 /*FOr Doctor */; //Can use enumerator here

	m_nAge ;
}

/// <summary>
/// Get the employee details from the end user
/// </summary>
void CDoctor :: GetData( )
{
	//Call the base class function to get the basic information
	//CEmployee :: GetData( ) ; // This is for IS A
	m_pEmployee -> GetData( ) ; // This is for HAS A

	std::cout << "NumberofPatients       :  " ;
	std::cin >> m_nNumberofPatients ;
	std::cout << "Seniority              :" ;
	std::cin >> m_nSeniority;


	//TODO collect rest of the data
}
/// <summary>
/// Funtion to display the Employees details 
/// </summary>
void CDoctor::ShowData()
{
	//CEmployee::ShowData(); //This is for IS A
	m_pEmployee -> ShowData ( ) ; //This is for HAS A

	//TODO Do the code to show the details 
	cout << "Number of patients   : ";
	cout << m_nNumberofPatients << endl;
	cout << "Seniority            : ";
	cout << m_nSeniority << endl;
}
/// <summary>
/// Calculate and return the salary of the employee
/// </summary>
/// <returns></returns>
float CDoctor :: GetSalary( )
{
	//TODO calculate the salary based on the employee salary calculation
	return 5000 + (m_nSeniority * 1000) + (m_nNumberofPatients * 400);
}

int CDoctor::ReturnIdOfEmployee() //This is written for HAS A relation
{
	return m_pEmployee->ReturnIdOfEmployee( ) ;
}