/* // Lab 6
string CharToStr(char *chararray) {
	string newstring(chararray); // Only works when declaring
//	newstring = chararray;	// Primary method for char[] to string
	return newstring;
}
*/

/* // Defunct	// Technically "works" but only outside of function
void StrToChar(string blah) {
	char bleh[25];
	string bloh = blah.substr(0, 24); // Cuts string

	strcpy_s(bleh, bloh.c_str()); // Primary method
	cout << bleh << " , " << blah.length();
}
*/

/* // Snippet from stackoverflow:
// https://stackoverflow.com/questions/3733582/how-to-return-a-char-array-created-in-function
// By Alexander Rafferty

// You have two options for returning an array in C++. You can fill in pre-allocated memory (good), or allocate your own within the function and return it (bad). The reason that the first is preferred is because it re-enforces proper disposal of allocated memory.

// A basic example would look like this:
*/

/*
void fillArray(char* buffer, int sz) {
  char text[] = "hello there!";
  if (sizeof(text)>sz) {
    // overflow! Buffer is too small!
    return;
  }
  for (int n=0;n<sizeof(text);n++) {
    buffer[n] = text[n];
  }
}
*/

/*
int main() {
  char* buffer = new char[30]; // allocates a buffer of 30 bytes.
  fillArray(buffer,30);
  cout << buffer;
  delete [] buffer;
}

// note that it would be easier to use static memory in this example 
// End of snippet
*/

/*	// Defunct
string Scanner(char input[250]) {
	int length = 250, vowelcount = 0, count = 0;
	char output[250] = { };

	while (count < length, count++) {
		if (input[count] == 'a' || input[count] == 'e' || input[count] == 'i' || input[count] == 'o' || input[count] == 'u' || input[count] == 'A' || input[count] == 'E' || input[count] == 'I' || input[count] == 'O' || input[count] == 'U') {
			output[vowelcount] = input[count];
			vowelcount++;
		}
	}

	while (count < length, count++) {
		;
	}

	string out = output;
	return out;
}
*/

/* // strlen example
#include <stdio.h>
#include <string.h>

int main()
{
	char szInput[256];
	printf("Enter a sentence: ");
	gets(szInput);
	printf("The sentence entered is %u characters long.\n", (unsigned)strlen(szInput));
	return 0;
}
*/

//ofstream myfile;
//myfile.open ("example.txt");
//myfile << "Writing this to a file.\n";
//myfile.close();
// Lab 6, Exercise 2

/*
void VowelGame() {
	char vowels[25] = "something";
	CharToStr(vowels);

	char* buffer = new char[30]; // allocates a buffer of 30 bytes.
	fillArray(buffer, 30);

	cout << vowels << " , " << buffer;
}
*/