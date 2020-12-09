#include"Email.h"
#include<iostream>
#include<cctype>
using namespace std;

int main()
{	
	//Email email;
	string firstName, lastName, department;

	cout << "Please enter your first Name: " << endl;
	cin >> firstName;
	cout << "Please enter your last Name: " << endl;
	cin >> lastName;
	Email email(firstName,lastName);
	
	email.displayInfo();

	char reset;
	cout << endl; 
	cout << "Do you want to reset your password? Y/N" << endl;
	cin >> reset;

	if(reset == 'Y' || reset == 'y')
	{	
		email.passwordChange();
		email.displayInfo();
	}
	
	cout << "Thank you!" << endl;
	return 0;
}