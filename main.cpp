#include <iostream>
using namespace std;

struct studentData
{
	int ID;
	int Age;
	float GPA;
	string Class;
	string f_name; //firstname
	string l_name; //lastname
};

studentData student[99];
int counter = 0; //array index


void add_student()
{
	/*
		1. Function will ask for several data within the studentData
		2. Prints out the data entered and asks for confirmation
		3. Asks if user would like to add more student data
	*/
	addStudent: //goto Label
	cout << "Please enter the following: " << endl;
	cout << "Student ID: "; cin >> student[counter].ID;
	cout << endl;
	cout << "Age: "; cin >> student[counter].Age;
	cout << endl;
	cout << "GPA: "; cin >> student[counter].GPA;
	cout << endl;
	cout << "Class: "; cin >> student[counter].Class;
	cout << endl;
	cout << "Student Name (first name and last name): ";
	cin >> student[counter].f_name >> student[counter].l_name;
	cout << endl << endl;

	char more;
	char correct;

	cout << "ID: " << student[counter].ID << endl
			 << "Age: " << student[counter].Age << endl
			 << "GPA: " << student[counter].GPA << endl
			 << "Class: " << student[counter].Class << endl
			 << "Student Name: " << student[counter].f_name << " " << student[counter].l_name << endl;
	cout << endl << "Is this data correct? "; cin >> correct;
	if (correct == 'n')
	{
		cout << endl;
		goto addStudent;
	}

	cout << endl << "Would you like to add more student data?(y/n) "; cin >> more;

	while (more == 'y')
	{
		cout << endl << endl;
		counter++;
		goto addStudent;
	}
	cout << endl;
}

void search_student()
{
	string fname;
	string lname;
	cout << "Who would you like to search (first name and last name)? ";
	cin >> fname >> lname;
	for (int i = 0; i < counter; i++)
	{
		if (student[i].f_name == fname && student[i].l_name == lname)
		{
			cout << endl;
			cout << "ID: " << student[i].ID << endl;
			cout << "Student Name: " << student[i].f_name << " " << student[i].l_name << endl;
			cout << "Age: " << student[i].Age << endl;
			cout << "Class: " << student[i].Class << endl;
		}
		else
		{
			continue;
		}
	}
}


int main()
{
	start:
	int choice;
	string student_name;

	cout << "Welcome to our student data management system!" << endl;
	cout << "What would you like to do? " << endl << endl;
	cout << "1. Add student data" << endl
		 	 << "2. Display student data" << endl
		 	 << "3. Search for student by ID" << endl << endl;
	cin >> choice;
	cout << endl;

	/*
		Make functions to do these tasks:
		1. Add student data
		2. Display student data (Joy and Katarina)
		   a. Opt 1: Sort by name (alphabetically)
		   b. Opt 2: Sort by Age (output choice: ascending or descending?)
		   c. Opt 3: Display unsorted data (Almas)
		3. Search for student data with variable "ID" as input (Almas)
	*/

	switch(choice)
	{
		case 1:
			add_student();
			goto start;
		break;
		case 2:
		/*
			function for sort algorithm
		*/
		goto start;
		case 3:
		/*
			function for search algorithm
		*/
			search_student();
			goto start;
		break;
		case 4:
		goto exit;
	}
	exit:
	return 0;
}
