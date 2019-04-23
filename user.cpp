#include <iostream>
#include "user.h"

user::user(string username, string password, string email)
{
	this->username = username;
	this->password = password;
	this->email = email;
	numberoffriends = 0;
	friendlist = new string[numberoffriends];
}

void user::showuserinfo()
{
	cout << "\n\t username: " << username << "\n\t email: " << email << "\n\t Number of Friends: " << numberoffriends << endl;
	system("pause");
}

user::~user()
{
	cout << "in the desctructor. need work";
}