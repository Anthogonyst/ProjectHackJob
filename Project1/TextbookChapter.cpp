/// Chapter in book pages 1264-1266, 1268-1278

/*
More on File Input/Output
In Chapter 3, you learned how to read data from and write data to a file. This section
expands on the concepts introduced in that chapter.
Binary Files
In Chapter 3, you learned how to make a program read data from and write data to a file.
However, the files that the programs have used until now are called text files. Data in a
text file is stored in the character format. For example, consider the number 45. If 45 is
stored in a file, then it is stored as a sequence of two characters?the character '4'
followed by the character '5'. The eight-bit machine representation of '4' is
00000100 and the eight-bit machine representation of '5' is 00000101. Therefore,
in a text file, 45 is stored as 0000010000000101. When this number is read by a C++
program, it must first be converted to its binary format. Suppose that the integers are
represented as 16-bit binary numbers. The 16-bit binary representation of 45 is then
0000000000101101. Similarly, when a program stores the number 45 in a text file, it
first must be converted to its text format. It thus follows that reading data from and
writing data to a text file is not efficient, because the data must be converted from the text
to the binary format and vice versa.
On the other hand, when data is stored in a file in the binary format, reading and writing
data is faster because no time is lost in converting the data from one format to another
format. Such files are called binary files. More formally, binary files are files in which
data is stored in the binary format. Data in a text file is also called formatted data, and in
a binary file it is called raw data.
C++ allows a programmer to create binary files. This section explains how to create
binary files and also how to read data from binary files.
To create a binary file, the file must be opened in the binary mode. Suppose outFile is
an ofstream variable (object). Consider the following statement:
outFile.open("employee.dat", ios::binary);
This statement opens the file employee.dat. Data in this file will be written in its
binary format. Therefore, the file opening mode ios::binary specifies that the file is
opened in the binary mode.
Next, you use the stream function write to write data to the file employee.dat. The
syntax to use the function write is:
fileVariableName.write(reinterpret_cast<const char *> (buffer),
sizeof(buffer));
where fileVariableName is the object used to open the output file, and the first argument
buffer specifies the starting address of the location in memory where the data is stored. The
expression sizeof(buffer)specifies the size of the data, in bytes, to be written.
For example, suppose num is an int variable. The following statement writes the value of
num in the binary format to the file associated with outFile:
outFile.write(reinterpret_cast<const char *> (&num),
sizeof(num));
Similarly, suppose empSalary is an array of, say, 100 components and the component
type is double. The following statement writes the entire array to the file associated with
outFile:
outFile.write(reinterpret_cast<const char *> (empSalary),
sizeof(empSalary));
Next, let us discuss how to read data from a binary file. The operation of reading data
from a binary file is similar to writing data to a binary file. First, the binary file must be
opened. For example, suppose inFile is an ifstream variable, and a program has
already created the binary file employee.dat. The following statement opens this file:
inFile.open("employee.dat");
or:
inFile.open("employee.dat", ios::binary);
To read data in the binary format, the stream function read is used. The syntax to use
the function read is:
fileVariableName.read(reinterpret_cast<char *> (buffer),
sizeof(buffer));
The first argument buffer specifies the starting address of the location in memory where
the data is to be stored. The expression sizeof(buffer) specifies the size of the data,
in bytes, to be read.
The program in the following example further explains how to create binary files and
read data from a binary file.
EXAMPLE E-1
//Creating and reading binary files
#include <iostream>
#include <fstream>
using namespace std;
struct studentType
{
char firstName[15];
char lastName[15];
int ID;
};
int main()
{
//create and initialize an array of studentsÅf IDs
int studentIDs[5] = {111111, 222222, 333333,
444444, 555555}; //Line 1
//declare and initialize the struct newStudent
studentType newStudent = {"John", "Wilson",
777777}; //Line 2
ofstream outFile; //Line 3
//open the output file as a binary file
outFile.open("ids.dat", ios::binary); //Line 4
//write the array in the binary format
outFile.write(reinterpret_cast<const char *> (studentIDs),
sizeof(studentIDs)); //Line 5
//write the newStudent data in the binary format
outFile.write(reinterpret_cast<const char *> (&newStudent),
sizeof(newStudent)); //Line 6
outFile.close(); //close the file //Line 7
ifstream inFile; //Line 8
int arrayID[5]; //Line 9
studentType student; //Line 10

* Missing page 1267 *

EXAMPLE E-2
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
int main()
{
customerType cust; //Line 1
ifstream inFile; //Line 2
ofstream outFile; //Line 3
inFile.open("customerData.txt"); //Line 4
if (!inFile) //Line 5
{
cout << "The input file does not exist. "
<< "The program terminates!!!!" << endl; //Line 6
return 1; //Line 7
}
outFile.open("customer.dat", ios::binary); //Line 8
inFile >> cust.ID >> cust.firstName >> cust.lastName
>> cust.balance; //Line 9
while (inFile) //Line 10
{
outFile.write(reinterpret_cast<const char *> (&cust),
sizeof(cust)); //Line 11
inFile >> cust.ID >> cust.firstName >> cust.lastName
>> cust.balance; //Line 12
}
inFile.close(); //Line 13
inFile.clear(); //Line 14
outFile.close(); //Line 15
inFile.open("customer.dat", ios::binary); //Line 16
if (!inFile) //Line 17
{
cout << "The input file does not exist. "
<< "The program terminates!!!!" << endl; //Line 18
return 1; //Line 19
}
cout << left << setw(8) << "ID"
<< setw(16) << "First Name"
<< setw(16) << "Last Name"
<< setw(10) << " Balance" << endl; //Line 20
cout << fixed << showpoint << setprecision(2); //Line 21
//read and output the data from the binary
//file customer.dat
inFile.read(reinterpret_cast<char *> (&cust),
sizeof(cust)); //Line 22
while (inFile) //Line 23
{
cout << left << setw(8) << cust.ID
<< setw(16) << cust.firstName
<< setw(16) << cust.lastName
<< right << setw(10) << cust.balance
<< endl; //Line 24
inFile.read(reinterpret_cast<char *> (&cust),
sizeof(cust)); //Line 25
}
inFile.close(); //close the file //Line 26
return 0; //Line 27
}
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


Random File Access
In Chapter 3 and the preceding section, you learned how to read data from and write data
to a file. More specifically, you used ifstream objects to read data from a file and
ofstream objects to write data to a file. However, the files were read and/or written
sequentially. Reading data from a file sequentially does not work very well for a variety of
applications. For example, consider a program that processes customersÅf data in a bank.
Typically, there are thousands or even millions of customers in a bank. Suppose we want
to access a customerÅfs data from the file that contains such data, say, for an account
update. If the data is accessed sequentially, starting from the first position and read until
the desired customerÅfs data is found, this process might be extremely time consuming.
Similarly, in an airlineÅfs reservation system to access a passengerÅfs reservation information
sequentially, this might also be very time consuming. In such cases, the data retrieval must
be efficient. A convenient way to do this is to be able to read the data randomly from a
file, that is, randomly access any record in the file.
In the preceding section, you learned how to use the stream function read to read a
specific number of bytes, and the function write to write a specific number of bytes.
The stream function seekg is used to move the read position to any byte in the file. The
general syntax to use the function seekg is:
fileVariableName.seekg(offset, position);
The stream function seekp is used to move the write position to any byte in the file.
The general syntax to use the function seekp is:
fileVariableName.seekp(offset, position);
The offset specifies the number of bytes the reading/writing positions are to be
moved, and position specifies where to begin the offset. The offset can be calculated
from the beginning of the file, end of the file, or the current position in the file.
Moreover, offset is a long integer representation of an offset. Table E-3 shows the
values that can be used for position.
TABLE E-3 Values of position
position Description
ios::beg The offset is calculated from the beginning of the file.
ios::cur The offset is calculated from the current position of the reading marker
in the file.
ios::end The offset is calculated from the end of the file.
EXAMPLE E-3
Suppose you have the following line of text stored in a file, say,
digitsAndLetters.txt:
0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ
Also, suppose that inFile is an ifstream object and the file digitsAndLetters.txt
has been opened using the object inFile. One byte is used to store each character of this
line of text. Moreover, the position of the first character is 0.
The program in the following example further explains how the functions seekg and
seekp work.
EXAMPLE E-4
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
char ch; //Line 1
ifstream inFile; //Line 2
inFile.open("digitsAndAlphabet.txt"); //Line 3
if (!inFile) //Line 4
{
cout << "The input file does not exist. "
<< "The program terminates!!!!" << endl; //Line 5
return 1; //Line 6
}
inFile.get(ch); //Line 7
cout << "Line 8: The first byte: " << ch << endl; //Line 8
//position the reading marker six bytes to the
//right of its current position
inFile.seekg(6L, ios::cur); //Line 9
inFile.get(ch); //read the character //Line 10
cout << "Line 11: Current byte read: " << ch
<< endl; //Line 11
//position the reading marker seven bytes
//from the beginning
inFile.seekg(7L, ios::beg); //Line 12
inFile.get(ch); //read the character //Line 13
cout << "Line 14: Seventh byte from the beginning: "
<< ch << endl; //Line 14
//position the reading marker 26 bytes
//from the end
inFile.seekg(-26L, ios::end); //Line 15
inFile.get(ch); //read the character //Line 16
cout << "Line 17: Byte 26 from the end: " << ch
<< endl; //Line 17
return 0; //Line 18
}
Sample Run:
Line 8: The first byte: 0
Line 11: Current byte read: 7
Line 14: Seventh byte from the beginning: 7
Line 17: Byte 26 from the end: A
The input file contains the following line of text:
0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ
The following program illustrates how the function seekg works with structs.
EXAMPLE E-5
Suppose customerType is a struct defined as follows:
struct customerType
{
char firstName[15];
char lastName[15];
int ID;
double balance;
};
The program in Example E-2 created the binary file customer.dat consisting of
certain customersÅf data. You can use the function seekg to move the reading position
of this file to any record. Suppose inFile is an ifstream object used to open the
binary file customer.dat.
The following statement calculates the size of a customerType struct and stores it in
the variable custSize:
long custSize = sizeof(cust);
We can use the value of the variable custSize to move the reading position to a specific
record in the file. For example, consider the following statement:
inFile.seekg(6 * custSize, ios::beg);
This statement moves the reading position just after the sixth customerÅfs record, that is,
just before the seventh customerÅfs record.
The following program further illustrates how the function seekg works with structs.
EXAMPLE E-6
//Reading a file randomly
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
void printCustData(const customerType& customer);
int main()
{
customerType cust; //Line 1
ifstream inFile; //Line 2
long custSize = sizeof(cust); //Line 3
inFile.open("customer.dat", ios::binary); //Line 4
if (!inFile) //Line 5
{
cout << "The input file does not exist. "
<< "The program terminates!!!!" << endl; //Line 6
return 1; //Line 7
}
cout << fixed << showpoint << setprecision(2); //Line 8
//randomly read the records and output them
inFile.seekg(6 * custSize, ios::beg); //Line 9
inFile.read(reinterpret_cast<char *> (&cust),
sizeof(cust)); //Line 10
cout << "Seventh customer's data: " << endl; //Line 11
printCustData(cust); //Line 12
inFile.seekg(8 * custSize, ios::beg); //Line 13
inFile.read(reinterpret_cast<char *> (&cust),
sizeof(cust)); //Line 14
cout << "Ninth customer's data: " << endl; //Line 15
printCustData(cust);
inFile.seekg(-8 * custSize, ios::end); //Line 16
inFile.read(reinterpret_cast<char *> (&cust),
sizeof(cust)); //Line 17
cout << "Eighth (from the end) customer's data: "
<< endl; //Line 18
printCustData(cust); //Line 19
inFile.close(); //close the file //Line 20
return 0; //Line 21
}
void printCustData(const customerType& customer)
{
cout << " ID: " << customer.ID <<endl
<< " First Name: " << customer.firstName <<endl
<< " Last Name: " << customer.lastName <<endl
<< " Account Balance: $" << customer.balance
<< endl;
}
Sample Run:
Seventh customer's data:
ID: 22222
First Name: Jose
Last Name: Ramey
Account Balance: $25345.35
Ninth customer's data:
ID: 55555
First Name: Tommy
Last Name: Pitts
Account Balance: $892.85
Eighth (from the end) customer's data:
ID: 11111
First Name: Rita
Last Name: Gupta
Account Balance: $14863.50
The program in Example E-6 illustrates how the function seekg works. Using the
function seekg, the reading position in a file can be moved to any location in the file.
Similarly, the function seekp can be used to move the write position in a file to any
location. Furthermore, these functions can be used to create a binary file in which the
data is organized according to the values of either a variable or a particular component of
a struct. For example, suppose there are at most, say, 100 students in a class. Each
student has a unique ID in the range 1 to 100. Using the studentsÅf IDs, we can create a
random access binary file in such a way that in the file, a studentÅfs data is written at the
location specified by its ID. This is like treating the file as an array. The advantage is that,
once the file is created, a studentÅfs data from the file can be read, directly, using the
studentÅfs ID. Another advantage is that in the file, the data is sorted according to the IDs.
Here, we are assuming that the student IDs are in the range 1 to 100. However, if you use,
say, a three-, four-, or five-digit number as a student ID and there are only a few students in
the class, the data in the file could be scattered. In other words, a lot of space could be used
just to store only a few studentsÅf data. In such cases, more advanced techniques are used to
organize the data so that it can be accessed efficiently.
The program in Example E-7 illustrates how to use the studentsÅf IDs to organize the data
in a binary file. The program also shows how to output the file.
EXAMPLE E-7
//Creating and reading a random access file.
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
struct studentType
{
char firstName[15];
char lastName[15];
int ID;
double GPA;
};
void printStudentData(const studentType& student);
int main()
{
studentType st; //Line 1
ifstream inFile; //Line 2
ofstream outFile; //Line 3
long studentSize = sizeof(st); //Line 4
//open the input file, which is a text file
inFile.open("studentData.txt"); //Line 5
if (!inFile) //Line 6
{
cout << "The input file does not exist. "
<< "The program terminates!!!!" << endl; //Line 7
return 1; //Line 8
}
//open a binary output file
outFile.open("student.dat", ios::binary); //Line 9
inFile >> st.ID >> st.firstName
>> st.lastName >> st.GPA; //Line 10
while (inFile) //Line 11
{
outFile.seekp((st.ID - 1) * studentSize,
ios::beg); //Line 12
outFile.write(reinterpret_cast<const char *> (&st),
sizeof(st)); //Line 13
inFile >> st.ID >> st.firstName
>> st.lastName >> st.GPA; //Line 14
};
inFile.close(); //Line 15
inFile.clear(); //Line 16
outFile.close(); //Line 17
cout << left << setw(3) << "ID"
<< setw(16) << "First Name"
<< setw(16) << "Last Name"
<< setw(12) << "Current GPA" << endl; //Line 18
cout << fixed << showpoint << setprecision(2); //Line 19
//open the input file, which is a binary file
inFile.open("student.dat", ios::binary); //Line 20
if (!inFile) //Line 21
{
cout << "The input file does not exist. "
<< "The program terminates!!!!" << endl; //Line 22
return 1; //Line 23
}
//read the data at location 0 in the file
inFile.read(reinterpret_cast<char *> (&st),
sizeof(st)); //Line 24
while (inFile) //Line 25
{
if (st.ID != 0) //Line 26
printStudentData(st); //Line 27
//read the data at the current reading position
inFile.read(reinterpret_cast<char *> (&st),
sizeof(st)); //Line 28
};
return 0; //Line 29
}
void printStudentData(const studentType& student)
{
cout << left << setw(3) << student.ID
<< setw(16) << student.firstName
<< setw(16) << student.lastName
<< right << setw(10)<< student.GPA
<< endl;
}
Sample Run:
ID First Name Last Name Current GPA
2 Sheila Duffy 4.00
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
The data in the file studentData.txt is as follows:
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