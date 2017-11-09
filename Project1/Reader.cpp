/*
can i get a general idea how to code a file scanner? specifically, i generally know how to do the headers and stuff but im not sure what to do in the body. for example, how would i write a speech to output file while also looking out for keywords? this is what i got so far:
```cpp
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

int main() {
ifstream inFile;
ofstream outFile;

char letter;
string stuff;

inFile.open("sample.txt");
outFile.open("output.txt");

; //... body stuff here.

inFile.close();
outFile.close();
return 0;
}
```
*/

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

int Readers() {
	ifstream inFile;
	ofstream outFile;

	char letter;
	string stuff;

	inFile.open("sample.txt");
	outFile.open("output.txt");

	for (int i = 0; i < 3; i++) {
		cin.get(letter);
		cout << letter;

	}

	inFile.close();
	outFile.close();
	return 0;
}