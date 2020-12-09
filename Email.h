#ifndef EMAIL_H
#define EMAIL_H

#include<string>
using namespace std;

//declare your class Email here
class Email{
private:
string firstName;
string lastName;
string password;
string department;
int mailBoxCapacity = 500;
int passwordLength = 10;
string domain1 = ".mtsu.edu";
string domain2 = "mtsu.edu";

string setDepartment();
string randomPassword(int length);

public:
Email();
Email(string, string);
void displayInfo();
void passwordChange();
};



#endif
