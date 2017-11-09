/// Example E-2

//Creating and reading a binary file consisting of
//bank customers' data
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct customerType
{
	char firstName[15];
	char lastName[15];
	int ID;
	double balance;
};

int Example2() {
	customerType cust;
	ifstream inFile;
	ofstream outFile;
	inFile.open("customerData.txt");

	if (!inFile)
	{
		cout << "The input file does not exist. "
			<< "The program terminates!!!!" << endl;
		return 1;
	}

	outFile.open("customer.dat", ios::binary);
	inFile >> cust.ID >> cust.firstName >> cust.lastName >> cust.balance;

	while (inFile) {
		outFile.write(reinterpret_cast<const char *> (&cust), sizeof(cust));
		inFile >> cust.ID >> cust.firstName >> cust.lastName >> cust.balance;
	}

	inFile.close();
	inFile.clear();
	outFile.close();
	inFile.open("customer.dat", ios::binary);

	if (!inFile) {
		cout << "The input file does not exist. " << "The program terminates!!!!" << endl;
		return 1;
	}

	cout << left << setw(8) << "ID"
		<< setw(16) << "First Name"
		<< setw(16) << "Last Name"
		<< setw(10) << " Balance" << endl;
	cout << fixed << showpoint << setprecision(2);
	
		//read and output the data from the binary file customer.dat
	inFile.read(reinterpret_cast<char *> (&cust), sizeof(cust));

	while (inFile) {
		cout << left << setw(8) << cust.ID
			<< setw(16) << cust.firstName
			<< setw(16) << cust.lastName
			<< right << setw(10) << cust.balance
			<< endl;

		inFile.read(reinterpret_cast<char *> (&cust), sizeof(cust));
	}

	inFile.close(); //close the file
	return 0;

	/* 
	Sample Run:
ID First Name Last Name Balance
77234 Ashley White 4563.50
12345 Brad Smith 128923.45
87123 Lisa Johnson 2345.93
81234 Sheila Robinson 674.00
11111 Rita Gupta 14863.50
23422 Ajay Kumar 72682.90
22222 Jose Ramey 25345.35
54234 Sheila Duffy 65222.00
55555 Tommy Pitts 892.85
23452 Salma Quade 2812.90
32657 Jennifer Ackerman 9823.89
82722 Steve Sharma 78932.00
	*/
}

/// Example E-4

//#include <iostream>
//#include <fstream>
//using namespace std;

int Example4() {
	char ch;
	ifstream inFile;
	inFile.open("digitsAndAlphabet.txt");

	if (!inFile) {
		cout << "The input file does not exist. " << "The program terminates!!!!" << endl;
		return 1;
	}

	inFile.get(ch);
	cout << "Line 8: The first byte: " << ch << endl;
	
		
	inFile.seekg(6L, ios::cur); //position the reading marker six bytes to the right of its current position
	inFile.get(ch); //read the character
	cout << "Line 11: Current byte read: " << ch << endl;

	inFile.seekg(7L, ios::beg); //position the reading marker seven bytes from the beginning
	inFile.get(ch); //read the character
	cout << "Line 14: Seventh byte from the beginning: " << ch << endl;
																		
	inFile.seekg(-26L, ios::end); //position the reading marker 26 bytes from the end
	inFile.get(ch); //read the character
	cout << "Line 17: Byte 26 from the end: " << ch << endl;
	return 0;

	/*
	Sample Run:
Line 8: The first byte: 0
Line 11: Current byte read: 7
Line 14: Seventh byte from the beginning: 7
Line 17: Byte 26 from the end: A
The input file contains the following line of text:
0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ
	*/
}

/// Example E-6 

//#include <iostream>
//#include <fstream>
//#include <iomanip>
//using namespace std;

//struct customerType
//{
//	char firstName[15];
//	char lastName[15];
//	int ID;
//	double balance;
//};

void printCustData(const customerType &customer);

int Example6()
{
	customerType cust;
	ifstream inFile;
	long custSize = sizeof(cust);
	inFile.open("customer.dat", ios::binary);

	if (!inFile) {
		cout << "The input file does not exist. " << "The program terminates!!!!" << endl;
		return 1;
	}

	cout << fixed << showpoint << setprecision(2);

		//randomly read the records and output them
	inFile.seekg(6 * custSize, ios::beg); 
	inFile.read(reinterpret_cast<char *> (&cust), sizeof(cust));
	cout << "Seventh customer's data: " << endl;
	printCustData(cust);

	inFile.seekg(8 * custSize, ios::beg);
	inFile.read(reinterpret_cast<char *> (&cust), sizeof(cust));
	cout << "Ninth customer's data: " << endl;
	printCustData(cust);

	inFile.seekg(-8 * custSize, ios::end);
	inFile.read(reinterpret_cast<char *> (&cust), sizeof(cust));
	cout << "Eighth (from the end) customer's data: " << endl;
	printCustData(cust);

	inFile.close(); //close the file
	return 0;

	/*
Sample Run :
Seventh customer's data:
	ID : 22222
	First Name : Jose
	Last Name : Ramey
	Account Balance : $25345.35
Ninth customer's data:
	ID : 55555
	First Name : Tommy
	Last Name : Pitts
	Account Balance: $892.85
Eighth (from the end) customer's data:
	ID: 11111
	First Name: Rita
	Last Name: Gupta
	Account Balance: $14863.50
	*/
}

void printCustData(const customerType &customer)
{
	cout << " ID: " << customer.ID << endl
		<< " First Name: " << customer.firstName << endl
		<< " Last Name: " << customer.lastName << endl
		<< " Account Balance: $" << customer.balance
		<< endl;
}

/// Example E-7

//Creating and reading a random access file.
//#include <iostream>
//#include <fstream>
//#include <iomanip>
//using namespace std;

struct studentType
{
	char firstName[15];
	char lastName[15];
	int ID;
	double GPA;
};

void printStudentData(const studentType &student);

int Example7() {
	studentType st;
	ifstream inFile;
	ofstream outFile;
	long studentSize = sizeof(st);

	inFile.open("studentData.txt"); //open the input file, which is a text file

	if (!inFile) {
		cout << "The input file does not exist. " << "The program terminates!!!!" << endl;
		return 1;
	}

	outFile.open("student.dat", ios::binary); //open a binary output file

	inFile >> st.ID >> st.firstName >> st.lastName >> st.GPA;
	while (inFile) {
		outFile.seekp((st.ID - 1) * studentSize, ios::beg);
		outFile.write(reinterpret_cast<const char *> (&st), sizeof(st));
		inFile >> st.ID >> st.firstName >> st.lastName >> st.GPA;
	}

	inFile.close();
	inFile.clear();
	outFile.close();

	cout << left << setw(3) << "ID"
		<< setw(16) << "First Name"
		<< setw(16) << "Last Name"
		<< setw(12) << "Current GPA" << endl;

	cout << fixed << showpoint << setprecision(2);

	inFile.open("student.dat", ios::binary); //open the input file, which is a binary file
	if (!inFile) {
		cout << "The input file does not exist. " << "The program terminates!!!!" << endl;
		return 1;
	}
	
	inFile.read(reinterpret_cast<char *> (&st), sizeof(st)); //read the data at location 0 in the file

	while (inFile) {
		if (st.ID != 0)
			printStudentData(st);
		inFile.read(reinterpret_cast<char *> (&st), sizeof(st)); //read the data at the current reading position
	}
	return 0;

	/*
	Sample Run :
ID First Name Last Name Current GPA
2  Sheila Duffy 4.00
10 Ajay Kumar 3.60
12 Ashley White 3.90
16 Tommy Pitts 2.40
23 Rita Gupta 3.40
34 Brad Smith 3.50
36 Salma Quade 3.90
41 Steve Sharma 3.50
45 Sheila Robinson 2.50
56 Lisa Johnson 2.90
67 Jose Ramey 3.80
75 Jennifer Ackerman 4.00
The data in the file studentData.txt is as follows :
12 Ashley White 3.9
34 Brad Smith 3.5
56 Lisa Johnson 2.9
45 Sheila Robinson 2.5
23 Rita Gupta 3.4
10 Ajay Kumar 3.6
67 Jose Ramey 3.8
2 Sheila Duffy 4.0
16 Tommy Pitts 2.4
36 Salma Quade 3.9
75 Jennifer Ackerman 4.0
41 Steve Sharma 3.5
	*/
}

void printStudentData(const studentType &student)
{
	cout << left << setw(3) << student.ID
		<< setw(16) << student.firstName
		<< setw(16) << student.lastName
		<< right << setw(10) << student.GPA
		<< endl;
}
