//program written by Anvy Elsa Saji
#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include "Doctor.h"
#include "Nurse.h"
#include "receptionist.h"
#include <vector>


using namespace std;

enum eChoice
{
	AddDoctor	= 1 ,
	AddNurse	= 2 ,
	AddReceptionist = 3 ,
	ViewEmployee	= 4 ,
	ViewNurse	= 5 ,
	ViewReceptionist = 6
} ;

int main()
{

	CEmployee* pEmployee = new CEmployee();
	
	//colection of objects
	std::vector<CEmployee*> vEmployeeCollection ;
	
	
	//TODO Read from the file at the beggning of the application

	int nControl = 0 ;
	int temp = 0;
	float nSalary = 0;

	bool bflag = true ;
	pEmployee = NULL;
	while ( bflag )
	{
		cout << "\t\t\t\tHOSPITAL  " << endl;
		cout << "________________________________________________________________________" << endl;
		cout << "\t\t\t\t1.Add doctor" << endl;
		cout << "\t\t\t\t2.Add nurse" << endl;
		cout << "\t\t\t\t3.Add recptionist" << endl;
		cout << "\t\t\t\t4.View Employee" << endl;
		cout << "________________________________________________________________________" << endl;
		cin >> nControl ;
		switch ( nControl )
		{
		case eChoice::AddDoctor :
			system("cls");
			pEmployee = new CDoctor( ) ;
			pEmployee -> GetData( ) ;
			_getch();
			system("cls");
			vEmployeeCollection.push_back( pEmployee ) ;
			break;
		case eChoice::AddNurse:
			system("cls");
			pEmployee = new CNurse ( ) ;
			pEmployee -> GetData();
			_getch();
			system("cls");
			vEmployeeCollection.push_back( pEmployee ) ;
			break;
		case eChoice::AddReceptionist :
			system("cls");
			pEmployee = new Creceptionist();
			pEmployee -> GetData( ) ;
			_getch();
			system("cls");
			vEmployeeCollection.push_back( pEmployee ) ;
			break;

		case eChoice::ViewEmployee :
			system("cls");
			cout << "enter id" << endl;
			cin >> nControl;
		
			for ( int i = 0; i < vEmployeeCollection.size( ) ; ++i )
			{

				pEmployee = vEmployeeCollection[i] ;
				temp = pEmployee ->ReturnIdOfEmployee( )  ;
				if (temp == nControl)
				{
					pEmployee->ShowData();
					nSalary=pEmployee->GetSalary();
					cout << "Salary       :";
					cout << nSalary;
					cout << endl;
				}
				_getch();
				system("cls");

			}
			break;
		default:
			bflag = false;
			break;
		}
	}

}

