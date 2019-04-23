#pragma once
#include <iostream>
#include <string>
using namespace std;

class user
{
private:
	string username;
	string password;
	string email;
	int numberoffriends;
	string *friendlist;
public:
	user(string username, string password, string email);
	~user();
	void showuserinfo();
};