/* Description:
//
/////////////////////////////////////////////////////////////////*/


//preprocessor directives
#include"Email.h"
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include<iostream>
#include<cctype>
using namespace std;

//default constructor definition
Email::Email()
{
}


//constructor with two parameters definition
Email::Email(string firstName, string lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->password = randomPassword(10);
	this->department = setDepartment();
}
//setDepartment definition
string setDepartment();
//passwordChange definition
void passwordChange();
//displayInfo definition
void displayInfo();



/**************************************
*Name: randomPassword
*Input: int length
*Output: string
*This method generates a random password given the length.
*/
string Email::randomPassword(int length)
{
	srand(time(NULL));
	string passStr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$";
	string pass = "";
	
	int index;

	for(int i = 0; i < length; i++)
	{
		index = rand()%length;
		pass = pass + passStr[index];
	}

	return pass;
}
/**************************************
*Name: setDepartment
*Input: int (cin)
*Output: string
*This method generates the department code for the email.
*/
string Email::setDepartment()
{
	int code;
	cout << "Enter your department code: \n";
	cout << "============================\n";
	cout << "0: No department\n";
	cout << "1: Computer Science\n";
	cout << "2: Account\n";
	cout << "3: Electrical Engineering\n";
	cin >> code;

	switch (code)
	{
	case 0:
		 department = firstName + "." + lastName + "@" + domain2;
		 
		break;
	case 1:
		department = firstName + "." + lastName + "@cs" + domain1;
		break;
	case 2:
		department = firstName + "." + lastName + "@act" + domain1;
		break;
	case 3:
		department = firstName + "." + lastName + "@ee" + domain1; 
		break;
	default:
		cout << "Invalid code!\n";
		break;
	}
	for(int i = 0; i < department.size(); i++)
	{
		department[i] = tolower(department[i]);
	}
	cout << "Your email account has been created successfully!\n\n";
	return department;
	
	

}
/**************************************
*Name: displayInfo
*Input: nothing
*Output: string
*This method prints the emails to the console.
*/
void Email::displayInfo()
{
	//this->mailBoxCapacity = mailBoxCapacity;
	cout << "Your Email Account Information:\n";
	cout << "============================\n";
	cout << "   Email address: " << department << endl;
	cout << "        Password: " << password << endl;
	cout << "Mailbox capacity: " << mailBoxCapacity << " MB" <<  endl;


}
/**************************************
*Name: passwordChange
*Input: string
*Output: string
*This method changes the password.*/
void Email::passwordChange()
{	string password = "";
	cout << "Please enter your new password:\n";
	cin >> this->password;
	password = this->password;
	cout << "Your password has been updated!\n\n";
	
}
