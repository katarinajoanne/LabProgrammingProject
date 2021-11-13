#include <iostream>
using namespace std;

struct studentData
{
	int ID;
	int Age;
	int GPA;
	string Class;
	string Name;
};

studentData student[99];

int main()
{
	
	cout << "Welcome to our student data management system!" << endl << endl
		 << "What would you like to do?" << endl;

	/*
		1. Add student data
		2. Display student data
		   a. Opt 1: Sort by name (alphabetically)
		   b. Opt 2: Sort by Age (output choice: ascending or descending?)
		   c. Opt 3: Display unsorted data
		3. Search for student data with variable "ID" as input
	*/
}