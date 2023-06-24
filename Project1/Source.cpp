#include<iostream>
#include <fstream>
using namespace std;
struct date
{
	int day;
	int month;
	int year;
};
struct user
{
	char name[20];
	char pass[20];
	char car_plate[20];
	int car_num;
	int license_number;
	date dob;
}x;
struct fine
{
	char streat_name[20];
	date date_of_fine;
	int spead;
	int max_spead;
	int value;
}z;

struct login
{
	char name1[20];
	char password1[20];
}l;

int main()
{
	ofstream registration;
	registration.open("registration.txt", ios::app);
	char name3[50], car_plate[50], password[50], license_number1[50], car_num[50];
	cout << "please enter the name \n name:";
	cin.ignore();
	cin.getline(name3, 20);
	cout << "please enter the password \n password:";
	cin.getline(password, 20);
	registration<<name3 << "|" << password << "|";
	cin.ignore();
	cin.getline((l.name1), 20);
	cout << "password:";
	cin.getline((l.password1), 20);
	ifstream file;
	file.open("registration.txt", ios::in);
	char  password1[50], name3[50],

	while (!file.eof())
	{

			file.getline(password, 50, '|');
			file.getline(name3, 50, '|');
	}
	if (l.name1 ==x.name && l.password1==x.pass)
	{
		cout << "___________done_______";
	}
	else
		cout << "wrong password or name";
}