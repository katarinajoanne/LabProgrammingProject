#include <iostream>
using namespace std;

int i, j;

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
search: //goto label
	string fname;
	string lname;
	cout << "Who would you like to search (first name and last name)? ";
	cin >> fname >> lname;
	for (int i = 0; i < counter + 2; i++)
	{
		if (student[i].f_name == fname && student[i].l_name == lname)
		{
			cout << endl;
			cout << "ID: " << student[i].ID << endl;
			cout << "Student Name: " << student[i].f_name << " " << student[i].l_name << endl;
			cout << "Age: " << student[i].Age << endl;
			cout << "Class: " << student[i].Class << endl;
			cout << "GPA: " << student[i].GPA << endl << endl;
		}
		else if (i < counter + 1)
		{
			continue;
		}
		else
		{
			cout << endl << "Data not found" << endl << endl;
			goto search;
		}
	}
}

void edit_data(int key) // edit data
{
editStudent:
	cout << "Please enter the following: " << endl;
	cout << "Student ID: "; cin >> student[key].ID;
	cout << endl;
	cout << "Age: "; cin >> student[key].Age;
	cout << endl;
	cout << "GPA: "; cin >> student[key].GPA;
	cout << endl;
	cout << "Class: "; cin >> student[key].Class;
	cout << endl;
	cout << "Student Name (first name and last name): ";
	cin >> student[key].f_name >> student[key].l_name;
	cout << endl << endl;

	char more;
	char correct;

	cout << "ID: " << student[key].ID << endl
		<< "Age: " << student[key].Age << endl
		<< "GPA: " << student[key].GPA << endl
		<< "Class: " << student[key].Class << endl
		<< "Student Name: " << student[key].f_name << " " << student[key].l_name << endl;
	cout << endl << "Is this data correct? "; cin >> correct;
	if (correct == 'n')
	{
		cout << endl;
		goto editStudent;
	}
}

void sort_descending()
{
	// temp = GPA, temp1 = ID, temp3 = Age, temp 4 = Class, 
	// temp5 = first name, temp6 = last name
	int temp3, temp1;
	float temp;
	string temp4, temp5, temp6;

	for (int i = 0; i <= counter; i++)
	{
		for (int j = 0; j <= counter; j++)
		{
			if (student[i].GPA > student[j].GPA)
			{
				temp = student[i].GPA;
				student[i].GPA = student[j].GPA;
				student[j].GPA = temp;

				temp1 = student[i].ID;
				student[i].ID = student[j].ID;
				student[j].ID = temp1;

				temp3 = student[i].Age;
				student[i].Age = student[j].Age;
				student[j].Age = temp3;

				temp4 = student[i].Class;
				student[i].Class = student[j].Class;
				student[j].Class = temp4;

				temp5 = student[i].f_name;
				student[i].f_name = student[j].f_name;
				student[j].f_name = temp5;

				temp6 = student[i].l_name;
				student[i].l_name = student[j].l_name;
				student[j].l_name = temp6;
			}
		}
	}
}

void sort_ascending()
{
	// temp = GPA, temp1 = ID, temp3 = Age, temp 4 = Class, 
	// temp5 = first name, temp6 = last name
	int temp3, temp1;
	float temp;
	string temp4, temp5, temp6;

	for (int i = 0; i <= counter; i++)
	{
		for (int j = 0; j <= counter; j++)
		{
			if (student[i].GPA < student[j].GPA)
			{
				temp = student[i].GPA;
				student[i].GPA = student[j].GPA;
				student[j].GPA = temp;

				temp1 = student[i].ID;
				student[i].ID = student[j].ID;
				student[j].ID = temp1;

				temp3 = student[i].Age;
				student[i].Age = student[j].Age;
				student[j].Age = temp3;

				temp4 = student[i].Class;
				student[i].Class = student[j].Class;
				student[j].Class = temp4;

				temp5 = student[i].f_name;
				student[i].f_name = student[j].f_name;
				student[j].f_name = temp5;

				temp6 = student[i].l_name;
				student[i].l_name = student[j].l_name;
				student[j].l_name = temp6;
			}
		}
	}
}

void print_alldata()
{
	for (int i = 0; i <= counter; i++)
	{
		cout << "ID: " << student[i].ID << endl;
		cout << "Student Name: " << student[i].f_name << " " << student[i].l_name << endl;
		cout << "Age: " << student[i].Age << endl;
		cout << "Class: " << student[i].Class << endl;
		cout << "GPA: " << student[i].GPA << endl;
		cout << endl;
	}
}


int main()
{
start: //goto label
	int choice;
	string student_name;

	cout << "Welcome to our student data management system!" << endl;
	cout << "What would you like to do? " << endl << endl;
	cout << "1. Add student data" << endl
		<< "2. Edit/Display student data" << endl
		<< "3. Search for student by name" << endl
		<< "4. End Program" << endl << endl;
	cin >> choice;
	cout << endl;

	/*
		Make functions to do these tasks:
		1. Add student data
		2. Display student data
		   a. Opt 1: Edit data (Almas)
		   b. Opt 2: Sort by GPA (output choice: ascending or descending) (Joy and Katarina)
		3. Search for student data by name as input (Almas)
	4. End Program
	*/

	switch (choice)
	{
	case 1:
		add_student();
		goto start;
		break;
	case 2:
		int option;
		cout << "Options: " << endl
			<< "1. Edit Data" << endl
			<< "2. GPA (ascending)" << endl
			<< "3. GPA (descending)" << endl;
		cin >> option;
		cout << endl;
		switch (option)
		{
		case 1:
			int datakey;
			print_alldata();
			cout << endl;
			cout << "Enter which index you would like to change: ";
			cin >> datakey;
			cout << endl;

			edit_data(datakey - 1);
			print_alldata();
			goto start;

		case 2:
			sort_ascending();
			print_alldata();
			goto start;

		case 3:
			sort_descending();
			print_alldata();
			goto start;
		}
	case 3:
		search_student();
		goto start;
		break;
	case 4:
		goto exit;
	}
exit:
	return 0;
}
