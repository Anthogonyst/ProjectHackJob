/*
Anthony Arroyo
Computer Science 126
September 18, 2017
Professor Domanski
Lab #4
*/

#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<fstream>
using namespace std;

/// Initialize function prototypes
string Project1(string choice1);
string Project2(string choice2);
string Project3(string choice3);
string Project4(string choice4);
string Project5(string choice5);
string Project6(string choice6);	// DNE
string Project7(string choice7);	// DNE
string Project8(string choice8);	// DNE
int ChooseLab(int lab);
// Lab 8, DNE down
void Game7();
void ColumnSum(int third[3]);
void Ceiling();
void AllElements();
void FancyArrayGame();
void AirplaneGame();
void HardwareGame();
void initChessBoard(char cb[]);
void printChessBoard(char cb[]);
bool putChequer(char cb[], int i, int j, char x);
bool state(char cb[], int row, int col, char x);
void TicTacToeGame();
void Navigation7(string final);
void Game8();
void Navigation8(string finale);
// End of lab 8
// Lab 7
void Game6();
void AlphaArrayActivity();
void filterEvens();
void ArraySorterGame();
void DealershipGame();
void DeoxyribonucleicGame();
void Navigation6(string entre);
// End of lab 7
// End of DNE
// Lab 6
void Game5();
void WritingGame();
string Scanner(char input);
void VowelGame();
void LudumDare();
void Navigation5(string exceed);
// End of lab 6
// Lab 5
void Game4();
int Err();
void DistanceGame();
double Radius(double xa, double ya, double xb, double yb);
double Circumference(double radii);
double Area(double radius);
// Defines constant pi
const double pi = acos(-1);
void printStars();
int addThem(int integer1, int integer2);
void StarGame();
int Flip();
bool Broke(int post);
void CoinGame();
void PsychicSeed();	// Unused
void PsychicGame();
void Psycho(int notaseed);
void Say(int words);
void Navigation4(string excelsior);
// End of lab 5
// Foundation
void Asterisks(int n);
void GameHeader();
void GameFooter();
void Menu1(string nombre);
string IsS(int things);
void Game1();
// End of foundation
// Lab 2
void Average4(double n1, double n2, double n3, double n4, bool f);
void Demo1();
void NumberPref(string e, int sentence);
void AverageGame();
void ProfitsGame();
void MadLibGame();
void Navigation1(string choose);
// End of lab 2
void NumberBoxRows(); // Unused
					  // Lab 3
void Game2();
void ForecastGame();
double IncomeTax(double dinero, double SalaryTax);
double StateTax(double income);
double ChildPension(double notenough, int demons);
double SchoolMakesYouPoor(double evenLess, double debtForYearsToCome);
void TaxGame();
void Sort3(char char1, char char2, char char3);
void SorterGame();
char Adv();
void Convo1();
void Convo2();
void Convo3();
void Convo4();
void Convo5();
void Convo6(int hesitation);
void Convo7();
void Convo8();
void AdventureGame();
void Navigation2(string choose);
// End of lab 3
// Lab 4
void Game3();
void CountingGame();
void Ordinal(int ord);
void PowerOf2();
void LoanCalculator();
void OtherFactorial();
void Treasure();
void Navigation3(string whimsy);
// End of lab 4
void LetterPrinter(char last); // Unused, from codelab


int main() {																		// Main();
	string name;			// Initialization
	string choice;
	int project = 5;
	cout << fixed << setprecision(2);

	cout << "Please enter your name.";
	cin >> name;			// Queries name
menu:					// For backtracking when exiting
	Menu1(name);			// Creates main menu text
	cin >> choice;			// Navigates main menu

	if (choice == "1") {				// Play

	game:					// For backtracking when quitting
		if (project == 1)					// Lab 2
			choice = Project1(choice);	// Uses returned value to navigate menu
		if (project == 2)					// Lab 3
			choice = Project2(choice);
		if (project == 3)					// Lab 4
			choice = Project3(choice);
		if (project == 4)					// Lab 5
			choice = Project4(choice);
		if (project == 5)					// Lab 6
			choice = Project5(choice);
		if (project == 6)					// Lab 7
			choice = Project6(choice);
		if (project == 7)					// Lab 8
			choice = Project7(choice);
		if (project == 8)					// Lab 8, Final
			choice = Project8(choice);

		if (choice != "9") {		// Player chose a game or prompts again
			cout << "Finished." << endl;
			goto game;				// Quits current game
		}
		else if (choice == "9") {	// Player chose to quit
			cout << "Quitting to menu." << endl;
			goto menu;				// Exits to menu
		}
		else cout << "Error 1.";	// Bug patched

		if (!cin) {
			cout << "Error 6. Illegal string. Exitting...";
			return 0;
		}
	}

	if (choice == "2") {				// Demo
										// Will mostly be for development purposes or pre-defined answers.
		cout << "lib." + static_cast<char>(2) << '\n'; // b.
		NumberBoxRows();
		Demo1();
		cout << '\n' << ';' + 63 << endl;
		Sort3('a', 'b', 'c');
		cout << endl;

		//char s[5];
		int x = 0;

		cout << "Enter a number to find the ordinal suffix for ";
		Ordinal(x);//, s);
				   /*
				   string moreletters;
				   cin >> moreletters;
				   char oneletter = moreletters[0];
				   //		cin >> moreletters;
				   cout << '\n' << oneletter << '\n' << moreletters << '\n';*/
		char lolwut;
		cout << "Char.";
		cin >> lolwut;
		if (lolwut == 'n')
			cout << "b.";

		cout << pi * 6;
		double kay = Circumference(6.);
		cout << kay;

		int loka = 10;
		do { cout << (rand()) << '\n'; } while (loka--, loka > 0);


		goto menu;					// Demo finished, goes to main menu
	}

	if (choice == "3") {			// Switches projects
		project = ChooseLab(project);
		goto menu;
	}

	if (choice == "4") {			// Exits program
		cout << "Exiting...";
		return 0;
	}
	else cout << "Error 2. Multiple strings.";		// To-do debug
	Err();	// Defunct

	goto menu;						// Loops errors to main menu
}
// Error # (D) == Debugged; (F) == Fatal;
// Error 1 (D) = Choice selected in game 1 does not equal a number;
// Error 2 = Choice selected in menu 1 does not equal a number; name has a space; program crash;
// Error 3 (F) = Inserted string into int/double;
// Error 4 = Inserted string into char; minor crash;
// Error 5 = Message not printed; previous input was a string;
// Error 6 = Special character entered.


string Project1(string choice1) {
	Game1();			// Creates game menu text
	cin >> choice1;		// Navigates game menu
	Navigation1(choice1);// Scripting pointer
	return choice1;
}

string Project2(string choice2) {
	Game2();			// Creates game menu text
	cin >> choice2;		// Navigates game menu
	Navigation2(choice2);// Scripting pointer
	return choice2;
}

string Project3(string choice3) {
	Game3();
	cin >> choice3;
	Navigation3(choice3);
	return choice3;
}

string Project4(string choice4) {
	Game4();
	cin >> choice4;
	Navigation4(choice4);
	return choice4;
}

string Project5(string choice5) {
	Game5();
	cin >> choice5;
	Navigation5(choice5);
	return choice5;
}

string Project6(string choice6) {
	Game6();
	cin >> choice6;
	Navigation6(choice6);
	return choice6;
}

string Project7(string choice7) {
	Game7();
	cin >> choice7;
	Navigation7(choice7);
	return choice7;
}

string Project8(string choice8) {
	Game8();
	cin >> choice8;
	Navigation8(choice8);
	return choice8;
}

int ChooseLab(int lab) {
	int original = lab;
	int master = 0;

	do {
		cout << "\nChoose which lab you want to open. (2-5, cancel with 0)\n";
		cin >> lab;

		if (lab >= 0 && lab <= 5) {
			if (lab == 1)
				cout << "\nLab 1 was not a program.";
			else master = 1;
		}
		else cout << "Input invalid. Please retry.";
	} while (master != 1);

	if (lab != 0) {
		cout << "\nNow loading lab " << lab << "...\n" << endl;
		lab--;				// Project number is 1 less than lab number
		return lab;
	}
	else {
		cout << "\nReverting to original lab...\n" << endl;
		return original;
	}
}

void Game7() { ; }
void ColumnSum(int third[3]) { ; }
void Ceiling() { ; }
void AllElements() { ; }
void FancyArrayGame() { ; }
void AirplaneGame() { ; }
void HardwareGame() { ; }
void initChessBoard(char cb[]) { ; }
void printChessBoard(char cb[]) { ; }
bool putChequer(char cb[], int i, int j, char x) { return 0; }
bool state(char cb[], int row, int col, char x) { return 0; }
void TicTacToeGame() { ; }
void Navigation7(string final) { ; }
void Game8() { ; }
void Navigation8(string finale) { ; }

/// Lab Seven
void Game6() { ; }
void AlphaArrayActivity() { ; }
void filterEvens() { ; }
void ArraySorterGame() { ; }
void DealershipGame() { ; }
void DeoxyribonucleicGame() { ; }
void Navigation6(string entre) { ; }

/// Lab Six
void Game5() {
	GameHeader();
	cout << "1.\tExport Even Numbers\n"
		<< "2.\tVowels\n"
		<< "3.\tLudum Dare\n";
	GameFooter();
}

void WritingGame() {
	int hellalot = 1000, currentnumber;

	cout << "\nWriting numbers to file...";
	ofstream numberfile;
	numberfile.open("myEvenRandoms.txt");

	do {
		currentnumber = (rand() % 11 + 10);		// Makes a remainder of 0-10 + 10
		if (currentnumber % 2 == 0)				// If even
			numberfile << currentnumber << '\n';// Writes to file
	} while (hellalot > 0, hellalot--);

	cout << "\nDone writing numbers to file!\n" << endl;
}

string CharToStr(char *chararray) {
	string newstring(chararray); // Only works when declaring
								 //	newstring = chararray;	// Primary method for char[] to string
	return newstring;
}

/* // Defunct	// Technically "works" but only outside of function
void StrToChar(string blah) {
char bleh[25];
string bloh = blah.substr(0, 24); // Cuts string

strcpy_s(bleh, bloh.c_str()); // Primary method
cout << bleh << " , " << blah.length();
}
*/

/*
// Snippet from stackoverflow:
// https://stackoverflow.com/questions/3733582/how-to-return-a-char-array-created-in-function
// By Alexander Rafferty

// You have two options for returning an array in C++. You can fill in pre-allocated memory (good), or allocate your own within the function and return it (bad). The reason that the first is preferred is because it re-enforces proper disposal of allocated memory.

// A basic example would look like this:
*/
void fillArray(char* buffer, int sz) {
	char text[] = "hello there!";
	if (sizeof(text)>sz) {
		// overflow! Buffer is too small!
		return;
	}
	for (int n = 0; n<sizeof(text); n++) {
		buffer[n] = text[n];
	}
}
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

void VowelGame() {
	char vowels[25] = "something";
	CharToStr(vowels);

	char* buffer = new char[30]; // allocates a buffer of 30 bytes.
	fillArray(buffer, 30);

	cout << vowels << " , " << buffer;
}

void LudumDare() { ; }

void Navigation5(string exceed) {												// Foundation
	if (exceed == "1")															// Game menu 5
		WritingGame();

	if (exceed == "2")
		VowelGame();

	if (exceed == "3")
		LudumDare();
}

/*
ofstream myfile;
myfile.open ("example.txt");
myfile << "Writing this to a file.\n";
myfile.close();
*/

/// Lab Five
void Game4() {																		// Foundation
	GameHeader();
	cout << "1.\tCircles\n"
		<< "2.\tStar Blanket\n"
		<< "3.\tCoin Flip\n"
		<< "4.\tPsychic\n";
	GameFooter();
}


#pragma warning(suppress: 4715)
int Err() {				// Defunct?													// TBA
	if (!cin) {
		cout << "Error 6. Illegal string. Exitting...";
		return 0;
	}
}

void DistanceGame() {																// Lab 5, Exercise 1
	double x1, y1, x2, y2;
	double r;

	cout << "Enter 4 numbers corresponding to the "
		<< "\ncoordinates of two points.";
	cin >> x1 >> y1 >> x2 >> y2;

	r = Radius(x1, y1, x2, y2);

	cout << "The radius is: " << r;
	cout << "The circumference is: " << Circumference(r);
	cout << "The area is: " << Area(r);
}


double Radius(double xa, double ya, double xb, double yb) {							// Lab 5, Exercise 1
	double triangle = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2));
	return triangle;
}

double Circumference(double radii) {												// Lab 5, Exercise 1
	return (radii * 2 * pi);
}

double Area(double radius) {														// Lab 5, Exercise 1
	return (pow(radius, 2)*pi);
}

void printStars() {																	// Lab 5, Exercise 2
	cout << "\n*****";
}

int addThem(int integer1, int integer2) {											// Lab 5, Exercise 2
	return (integer1 + integer2);
}

void StarGame() {																	// Lab 5, Exercise 2
	int a, b, d = 0, e = 0;

	cout << "Input two numbers you would like to add to your star blanket.";
	cin >> a;
	cin >> b;

	d = addThem(a, b);
	while (e < d) {
		e++;
		printStars();
	}
	cout << endl;
}

int Flip() {																		// Lab 5, Exercise 3
	return (rand() % 2);
}

bool Broke(int post) {																// Lab 5, Exercise 3
	if (post > 0)
		return 0;
	else return 1;
}

void CoinGame() {																	// Lab 5, Exercise 3
	int roll, coin = 0, bal = 50, heads = 0, tails = 0;

	cout << "\nHow many coin flips would you like gamble?";
	cin >> roll;

	if (roll != 0)
		while (coin < roll) {
			bool flipped = Flip();
			// cout << flipped;

			switch (flipped) {
			case 1: { heads++;
				bal += 10;
				break;
			}
			default: { tails++;
				bal -= 10;
				break;
			}
			}
			coin++;
			if (Broke(bal) == 1)
				roll = coin;
		}

	cout << "\nFrom $50, you successfully rolled " << coin << " times and"
		<< "\nnow have a balance of $" << bal << ".\nYou rolled " << heads << " head"
		<< IsS(heads) << " and " << tails << " tail" << IsS(tails) << ".\n" << endl;
}

// Unused
void PsychicSeed() {
	cout << "l0l, p$yCh1C2 4r3/v'7 R3^l.";
}

// Lab 5, Exercise 4
void PsychicGame() {
	int psych = 0;
	string null;

	cout << "\nYes, I see all. But may I ask what your favorite number is?";
	cin >> null;
	cout << "\nAnd about what do you inquire?\n\tLove\tSchool\tFinance\n";
	cin >> null;

	if (null == "Love" || null == "love")
		psych = 1;
	if (null == "School" || null == "school")
		psych = 2;
	if (null == "Finance" || null == "finance")
		psych = 3;

	Psycho(psych);
	cout << "\nNow, I must rest. I'll see you again.\n" << endl;
}

// Lab 5, Exercise 4
void Psycho(int notaseed) {
	int predictions = 5;
	int prev[5] = { 20, 20, 20, 20, 20 };

	while (predictions > 0) {

		switch (notaseed) {
		case 1: Say(1);
			break;
		case 2: Say(2);
			break;
		case 3: Say(3);
			break;
		case 4: Say(4);
			break;
		case 5: Say(5);
			break;
		case 6: Say(6);
			break;
		case 7: Say(7);
			break;
		case 8: Say(8);
			break;
		case 9: Say(9);
			break;
		case 10: Say(10);
			break;
		case 11: Say(11);
			break;
		case 12: Say(12);
			break;
		case 13: Say(13);
			break;
		case 14: Say(14);
			break;
		case 15: Say(15);
			break;
		case 16: Say(16);
			break;
		case 17: Say(17);
			break;
		case 18: Say(18);
			break;
		case 19: Say(19);
			break;
		default: Say(0);
			break;
		}

		predictions--;
		prev[predictions] = notaseed;
		do {
			notaseed = rand() % 20;
		} while (notaseed == 1 || notaseed == 2 || notaseed == 3 || notaseed == prev[0] || notaseed == prev[4] || notaseed == prev[3] || notaseed == prev[2] || notaseed == prev[1]);

	}
}

// Lab 5, Exercise 4
void Say(int words) {
	string sayings[20] = { "\nIdk1.",
		"\nLove",
		"\nSchool.",
		"\nFinance.",
		"\nIdk5.",
		"\nIdk6.",
		"\nIdk7.",
		"\nIdk8.",
		"\nIdk9.",
		"\nIdk10.",
		"\nIdk11.",
		"\nIdk12.",
		"\nIdk13.",
		"\nIdk14.",
		"\nIdk15.",
		"\nIdk16.",
		"\nIdk17.",
		"\nIdk18.",
		"\nIdk19.",
		"\nIdk20." };
	cout << sayings[words];
}

// Game menu 4
void Navigation4(string excelsior) {
	if (excelsior == "1")
		DistanceGame();

	if (excelsior == "2")
		StarGame();

	if (excelsior == "3")
		CoinGame();

	if (excelsior == "4")
		PsychicGame();
}

/// Foundation
// Prints a line of asterisks
void Asterisks(int n) {
	do {
		cout << '*';
		n--;
	} while (n > 0);
}

// Header for game menu
void GameHeader() {
	cout << "\n";
	Asterisks(51);	// Asterisks
	cout << "\n" << "\t\tBeginning the game!\n\n"			// Makes the future game menu
		<< "Please choose a game from the following options:\n\n";
}

// Footer for game menu
void GameFooter() {
	cout << "9.\tQuit\n\n";
	Asterisks(51);	// again again again again again
	cout << endl;
}

// Makes the main menu
void Menu1(string nombre) {
	cout << "\n";
	Asterisks(51);	// Makes the asterisks line
	cout << "\n\t\tWelcome, " << nombre << "!\n\n"
		<< "Please choose a number from the following options:\n\n"
		<< "1.\tPlay the game!\n"
		<< "2.\tDemo the game!\n"
		<< "3.\tChange project\n"
		<< "4.\tExit\n\n";
	Asterisks(51);	// again again
	cout << endl;
}

// Adds a "s" if quantity is not 1
string IsS(int things) {
	if (things != 1)
		return "s";
	else return "";
}

// Everything past Lab 1-4
/// Lab Two
void Game1() {																		// Lab 2, E1
	cout << "\n";											// Makes the game menu
	Asterisks(51);	// Asterisks line
	cout << "\n" << "\t\tBeginning the game!\n\n"
		<< "Please choose a game from the following options:\n\n"
		<< "1.\tAverage numbers\n"
		<< "2.\tProfit calculator\n"
		<< "3.\tMadlib!\n"
		<< "9.\tQuit\n\n";
	Asterisks(51);	// again again again
	cout << endl;
}

void Average4(double n1, double n2, double n3, double n4, bool f) {					// Lab 2, E2/3
	double total = n1 + n2 + n3 + n4;			// 4 numbers, qualifer. 0 means total, 1 means average.
	double average = total / 4;					// Use Demo1() for Exercise 2
	if (f != 0)									// Use AverageGame() for any 4 numbers, Exercise 3
		cout << average;
	else cout << total;	// I should make an array in the future
}

void Demo1() {																		// Lab 2, E2
	cout << "The total of 578, 986, 1066, and 714 is: ";	// Pre-defined
	Average4(578, 986, 1066, 714, 0);
	cout << endl << "The average of 578, 986, 1066, and 714 is: ";
	Average4(578, 986, 1066, 714, 1);
	cout << endl;
}

void NumberPref(string e, int sentence) {
	if (sentence == 1) 							// I'm too lazy to type the same thing 4 times
		cout << "Enter the " << e << " number: ";
	if (sentence == 2)
		cout << "Enter the " << e << " character: ";
	if (sentence == 3)
		cout << "On the " << e << " day, the paycheck is: $";
}

void AverageGame() {																// Lab 2, E3
	int g = 0;
	do {
		g = g + 1;
		double i, j, k, l;
		NumberPref("first", 1);
		cin >> i;		// Causes fatal error 3 if val != double;
		NumberPref("second", 1);
		cin >> j;
		NumberPref("third", 1);	// This is where I was lazy
		cin >> k;		// It was actually worse than hardcode
		NumberPref("fourth", 1);
		cin >> l;
		if (g = 4) {
			cout << "The average of these numbers is: ";	// Exercise 3
			Average4(i, j, k, l, 1);
			cout << endl;
		}
	} while (g < 4);
}

void ProfitsGame() {																// Lab 2, E4
	double shares, iprice, fprice, profit;
	cout << "How many shares have you purchased?";
	cin >> shares;
	cout << "What price were they when you bought them?";	// Simple back and forth
	cin >> iprice;						// hardcode
	cout << "What price are they currently worth?";
	cin >> fprice;
	profit = shares * (fprice - iprice); // factor * delta
	cout << "You have made a profit of $" << profit << " dollars since you bought "
		<< shares << " shares of this stock." << endl;
}

void MadLibGame() {																	// Lab 2, E5
	int r = 1;
	string s, libx, lib1, lib2, lib3, lib4, lib5, lib6, lib7, lib8, lib9;
	lib1 = "time", lib2 = "noun", lib3 = "event", lib4 = "place", lib5 = "noun";	// Definitions
	lib6 = "pronoun", lib7 = "emotion", lib8 = "verb", lib9 = "adjective";

	/*do {									// **DEFUNCT**
	libx = "lib";
	s = static_cast<char>(r + 48);
	cout << "Enter a " << libx.append(s) << '.'; // I had to look that one up
	cin >> libx.append(s);		// It only partially worked
	r++; } while (r < 10);*/

	cout << "Enter a " << lib1 << ".";
	cin >> lib1;
	cout << "Enter a " << lib2 << ".";
	cin >> lib2;
	cout << "Enter a " << lib3 << ".";
	cin >> lib3;
	cout << "Enter a " << lib4 << "."; // I gave up and HARDCODED everything.
	cin >> lib4;
	cout << "Enter a " << lib5 << ".";
	cin >> lib5;
	cout << "Enter a " << lib6 << ".";
	cin >> lib6;
	cout << "Enter a " << lib7 << ".";
	cin >> lib7;
	cout << "Enter a " << lib8 << ".";
	cin >> lib8;
	cout << "Enter a " << lib9 << ".";
	cin >> lib9;

	cout << endl << "\nIt was the beginning of a most beautiful " << lib1	// A story
		<< ". All around, everywhere there were " << lib2
		<< " roaming, busy with the upcoming " << lib3
		<< ". You knew what you had to do. You went as fast as you can to " << lib4
		<< " where you were certain to find " << lib5
		<< ". Along the way, you almost " << lib6
		<< " but you recovered swiftly and pressed on. Eventually, your " << lib7
		<< " got the better of you, and you " << lib8
		<< " pretty bad. Maybe tomorrow will be a " << lib9
		<< " day.\n" << endl;
}

void Navigation1(string choose) {													// Foundation
	if (choose == "1")			// Chooses a game from your choice				// Game menu 1
		AverageGame();

	if (choose == "2") {
		ProfitsGame();
	}

	if (choose == "3") {
		MadLibGame();
	}
}

void NumberBoxRows() {																// Unused
	int looper = 0;
	do {
		char loop = static_cast<char>(looper);
		int loopy = static_cast<int>(loop);
		cout << loopy;
		if (looper % 16 == 0)
			cout << '\n';
		looper++;
	} while (looper < 256);
	cout << endl;
}

/// Lab Three
void Game2() {																		// Foundation
	cout << "\n";
	Asterisks(51);	// Asterisks
	cout << "\n" << "\t\tBeginning the game!\n\n"			// Makes the second game menu
		<< "Please choose a game from the following options:\n\n"
		<< "1.\tTemperature Forecast\n"
		<< "2.\tIncome Tax calculator\n"
		<< "3.\tCharacter sorter\n"
		<< "4.\tChoose your own adventure!\n"
		<< "5.\tMadlib!\n"
		<< "\n\nPlease don't break this program by using a character...\n\n"
		<< "9.\tQuit\n\n";
	Asterisks(51);	// again again again again
	cout << endl;
}

void ForecastGame() {																// Lab 3, E1
	double temp;
	cout << "\nWhat temperature is it outside today?";
	cin >> temp;
	if (temp > 80.) {
		cout << "It is very hot today!";
	}
	else if (temp < 40) {
		cout << "It is very cold today!";
	}
	else {
		cout << "It is a beautiful day outside!" << endl; // Subjective much?
	}									// I prefer 30 below freezing and hail

}

double IncomeTax(double dinero, double SalaryTax) {									// Lab 3, E2
	double incomeLoss = dinero * SalaryTax;
	return incomeLoss;
}

double StateTax(double income) {													// Lab 3, E2+
	double stateAndLocalTax = 0.15;
	double stateLoss = income * stateAndLocalTax;	// I thought all of these functions would
	return stateLoss;								// be necessary. Probably not...
}

double ChildPension(double notenough, int demons) {									// Lab 3, E2+
	double demonWorth = 0.05;						// Additive deduction
	double poorDays = notenough - (demonWorth * demons * notenough);
	return poorDays;								// 20+ children means no taxes
}

double SchoolMakesYouPoor(double evenLess, double debtForYearsToCome) {				// Lab 3, E2+
	double morepoor = evenLess - debtForYearsToCome;
	return morepoor;
}

void TaxGame() {																	// Lab 3, E2
	double salary, incomeTaxRate, netSalary, studentLoan, totalLoss;
	int children;
	bool stateTaxExemption = 0;

	cout << "\nWhat is your annual salary?";		// Prompts salary, children, and loans
	cin >> salary;
	cout << "\nHow many children do you care for?";
	cin >> children;
	cout << "\nFinally, if you have any student loans, how much interest have you paid off last year?\n";
	cin >> studentLoan;

	Asterisks(51);
	salary = ChildPension(salary, children);		// Pre-tax deductions
	cout << "\nYour salary after children is $" << salary;	// Children
	salary = SchoolMakesYouPoor(salary, studentLoan);
	cout << "\nYour salary after school is $" << salary;	// Student loans

	if (salary <= 12000) {
		incomeTaxRate = 0.06;						// Conditionals determine tax rate
		stateTaxExemption = 1;						// in ascending order of wealth
	}
	else if (salary <= 38000) {
		incomeTaxRate = 0.27;
	}
	else if (salary <= 55000) {
		incomeTaxRate = 0.33;
	}
	else { // salary > 55000
		incomeTaxRate = 0.39;
	}

	totalLoss = IncomeTax(salary, incomeTaxRate);	// Income tax
	cout << "\nIn income tax at " << incomeTaxRate * 100 << "% rate, you paid $" << totalLoss;
	if (stateTaxExemption != 1) {					// Poor exempt from state tax
		totalLoss += StateTax(salary);
		cout << "\nIn state tax, you paid $" << StateTax(salary);
	}
	else {											// State tax
		cout << "\nYou are exempt from state tax.";
	}
	netSalary = salary - totalLoss;					// Total taxes
	cout << "\nThis year you paid $" << totalLoss << " dollars in tax."
		<< "\nSo your net salary after taxes taken out is $" << netSalary << ".\n";
	if (netSalary < 0) {
		cout << "\nYou're on welfare!\n";			// Taxes were negative
	}
	Asterisks(51);
	cout << endl;
}

void Sort3(char char1, char char2, char char3) {									// Lab 3, E3
	int z = 0;
	int diagnostic = 0;
	int sorted[3];
	string finalsort;
	int integer1 = char1; // static_cast<int>(char1);
	int integer2 = char2; // static_cast<int>(char2);
	int integer3 = char3; // static_cast<int>(char3);
	int intarray[3] = { integer1, integer2, integer3 };

	if (diagnostic != 0)
		cout << '\n' << intarray[0] << '\n' << intarray[1] << '\n' << intarray[2];

	do {
		if (intarray[z] >= 65 && intarray[z] <= 90) 		// if between A and Z
			sorted[z] = 2 * intarray[z] - 128;				// assigns an odd value between 1-51
		else if (intarray[z] >= 97 && intarray[z] <= 122)	// if between a and z
			sorted[z] = 2 * intarray[z] - 193;				// assigs an even value between 2-52
		else if (intarray[z] >= 48 && intarray[z] <= 57) 	// if between 0 and 9
			sorted[z] = intarray[z] + 5;					// assigns a value between 53-62
		else
			sorted[z] = intarray[z] + 65;					// assigns a value above 63
		z++;
	} while (z < 3);

	if (diagnostic != 0)
		cout << '\n' << sorted[0] << '\n' << sorted[1] << '\n' << sorted[2] << '\n';

	if (sorted[0] < sorted[1]) {
		if (sorted[1] < sorted[2])
			cout << char1 << char2 << char3;
		else if (sorted[0] < sorted[2])
			cout << char1 << char3 << char2;
		else
			cout << char3 << char1 << char2;
	}
	else if (sorted[1] < sorted[2]) {
		if (sorted[2] < sorted[0])
			cout << char2 << char3 << char1;
		else
			cout << char2 << char1 << char3;
	}
	else if (sorted[2] < sorted[0]) {
		if (sorted[0] < sorted[1])
			cout << char3 << char1 << char2;	// Unused?
		else
			cout << char3 << char2 << char1;
	}
	else {
		cout << endl << "The sorted result is: " << char1 << char2 << char3;
		// Error 5 if cin is a string instead of char;
	}
}

void SorterGame() {																	// Lab 3, E3
	char sort1, sort2, sort3;
	NumberPref("first", 2);
	cin >> sort1;
	NumberPref("second", 2);
	cin >> sort2;
	NumberPref("third", 2);
	cin >> sort3;
	cout << "\n";

	Sort3(sort1, sort2, sort3);
	cout << endl;
}

char Adv() {																		// Lab 3, E4
	string no;
	cin >> no;
	if (no == "y")
		return 'y';
	else
		return 'n';
}

void Convo1() {																		// Lab 3, E4
	cout << "\nYou wake up in an empty room.\n"
		<< "There is a single door and a small cabinet.\n"
		<< "Well, you've been in stranger places. You should escape, right?\n";
}

void Convo2() {																		// Lab 3, E4
	cout << "\nYou head towards the door and turn the knob.\n"
		<< "It's locked. Well, only one noticeable feature is left in the room.\n"
		<< "Check the cabinet?\n";
}

void Convo3() {																		// Lab 3, E4
	cout << "\nYou sit down for a moment.\n"
		<< "You reach into your pocket and pull out a pen.\n"
		<< "You draw graffiti of your favorite hero.\n"
		<< "Having fun sitting on the floor?\n";
}

void Convo4() {																		// Lab 3, E4
	cout << "\nYour pen is out of ink.\n"
		<< "And you're surrounded by your graffiti.\n"
		<< "You have to face your hero someday.\n";
}

void Convo5() {																		// Lab 3, E4
	cout << "\nYou look in the cabinet.\n"
		<< "Within is a single hook that hangs a key.\n"
		<< "Do you take the key to the door?\n";
}

void Convo6(int hesitation) {														// Lab 3, E4
	if (hesitation > 0)
		cout << "\nYou have to go.";
	cout << "\nThe exit looms in front of you.\n"
		"Back to where you subsist, you suppose.\n"
		"Are you ready to leave?\n";
}

void Convo7() {																		// Lab 3, E4
	cout << "\nYou open the door and step outside.\n"
		<< "The air seems to rush past you...\n"
		<< "Restart?\n";
}

void Convo8() {																		// Lab 3, E4
	cout << "\nYou behold your work, consider it.\n"
		<< "The only sound is your grumbling stomach.\n"
		<< "Shall we go then?\n";
}

void AdventureGame() {																// Lab 3, E4
	char yes;
	int pen = 0;
	int modifier = 0;
	int beginning = 0;

start:
	Convo1();
	if (beginning = 0)
		cout << "Enter yes or no. (y/n)\n";
	yes = Adv();
	if (yes == 'y')
		goto door;
	else goto idle;
door:
	Convo2();
	yes = Adv();
	if (yes == 'y')
		goto cabinet;
	else goto idle;
idle:
	if (pen != 7) {
		pen++;
		Convo3();
		yes = Adv();
		if (yes == 'y')
			goto idle;
		else goto door;
	}
	else
		Convo4();
	yes = Adv();
	if (yes == 'y')
		goto door;
	else goto pen;
cabinet:
	Convo5();
	yes = Adv();
	if (yes == 'y')
		goto key;
	else goto idle;
key:
	Convo6(modifier);
	yes = Adv();
	if (yes == 'y')
		goto end;
	else {
		modifier++;
		goto key;
	}
pen:
	Convo8();
	yes = Adv();
	if (yes == 'n') {
		goto pen;
	}
	else goto cabinet;
end:
	Convo7();
	yes = Adv();
	if (yes == 'y')
		goto start;
	cout << endl;
}

void Navigation2(string choose) {													// Foundation
	if (choose == "1") {															// Game menu 2
		ForecastGame();
	}

	if (choose == "2") {
		TaxGame();
	}

	if (choose == "3") {
		SorterGame();
	}

	if (choose == "4") {
		AdventureGame();
	}
	if (choose == "5") {															// Lab 3, E5
		MadLibGame();
	}
}

/// Lab Four
void Game3() {																		// Foundation
	GameHeader();
	cout << "1.\tCountdown\n"
		<< "2.\tWages Bet\n"
		<< "3.\tStudent Loan Calculator\n"
		<< "4.\tAddition Factorial\n"
		<< "5.\tTreasure Hunt!\n";
	GameFooter();
}

void CountingGame() {																// Lab 4, E1
	int lessen;

	cout << "\nEnter a number: ";
	cin >> lessen;

	while (lessen > 0) {
		lessen--;
		cout << "\nIt is now " << lessen << ".";
	}
	cout << '\n' << endl;
}

void Ordinal(int n) {
	if (n % 10 != 1 && n % 10 != 2 && n % 10 != 3)
		cout << n << "th";
	else if (n % 100 != 11 && n % 100 != 12 && n % 100 != 13) {
		if (n % 10 == 1)
			cout << n << "st";
		if (n % 10 == 2)
			cout << n << "nd";
		if (n % 10 == 3)
			cout << n << "rd";
	}
	else cout << n << "th";
}

void PowerOf2() {																	// Lab 4, E2
	int dayz, exponent = 2, y = 0;
	double terrible = 0;

	cout << "\nSuppose your employer offered a multiplicative wage per day."
		<< "\nEnter a number of days to see how your contract goes. ";
	cin >> dayz;

	while (y < dayz) {
		y++;
		terrible += pow(exponent, y);	// sum of 2^day
	}

	cout << "\n\nIf your wage at $" << exponent
		<< " doubled per day, \nyou would earn $" << terrible
		<< " on your ";
	Ordinal(dayz);
	cout << " day of employment.\n" << endl;
}

void LoanCalculator() {																// Lab 4, E3
	double shackles, sentencing, service; // added alliterative appeal
	int release = 0;

	cout << "\n\nSo, how much do you owe in student loans?";
	cin >> shackles;
	cout << "\nAnd, in percent, what is the yearly interest rate?";
	cin >> sentencing;
	cout << "\nFinally, how much are you able to pay each month?";
	cin >> service;

	do {
		if (service <= shackles * 0.01 * sentencing / 12) {
			cout << "\n\nYou should reconsider your budget...\n" << endl;
			break;
		}
		else {
			shackles += shackles * 0.01 * sentencing / 12 - service;
			release++;
		}
		if (shackles <= 0.0) {
			cout << "\nYou would need " << release << " months to pay off your debt.\n" << endl;
			break;
		}
	} while (shackles > 0);
}

void OtherFactorial() {																// Lab 4, E4
	int bracket, settheory;

	cout << "\nWhich number would you like to add up from zero?";
	cin >> bracket;
	cout << "\n\nWhich number set would like you to use?\n\n"
		<< "1.\tReal Set\n"
		<< "2.\tEven Set\n"
		<< "3.\tOdd Set\n";
	cin >> settheory;

	if (settheory == 1) {	// all real numbers
		cout << "The total is: " << (bracket * bracket + bracket) / 2 << endl;
	}
	if (settheory == 2) {	// even numbers
		cout << "The even total is: " << (bracket - bracket % 2 + 2) * (bracket - bracket % 2) / 4 << endl;
	}
	if (settheory == 3) {	// odd numbers
		cout << "The odd total is: " << (bracket + bracket % 2) * (bracket + bracket % 2) / 4 << endl;
	}
}

void Treasure() {																	// Lab 4, E5
	int x = 15, y = 15, abrupt = 0, step = 0; // Explorerfs coordinates
	int x1, y1; // Treasurefs coordinates
	char direction;
	float distance;
	bool treasure = false;
#pragma warning(suppress: 4244)
	srand(time(0)); // secretly seed the rand function !
	x1 = rand() % 30 + 1; // set X1 to random between 1 and 30
	y1 = rand() % 30 + 1; // set y1 to random between 1 and 30

	do {
		cout << "\nPlease enter direction (n,s,e,w), or x to exit: ";
		cin >> direction;

		if (direction == 'n' || 's' || 'e' || 'w' || 'x') {
			if (direction == 'n')
				y++;
			if (direction == 's')
				y--;
			if (direction == 'e')
				x++;
			if (direction == 'w')
				x--;
			if (direction == 'x') {
				treasure = 1;
				abrupt = 1;
			}
			step++;
#pragma warning(suppress: 4244)
			distance = sqrt(static_cast<double>((x - x1)*(x - x1) + (y - y1)*(y - y1)));	// pythagorean theorum

			if (distance != 0) {	// reached treasure
				cout << "\nYou are currently " << distance << " meters away from the treasure.\t\t\tStep " << step
					<< "\nYour coordinates are: (" << x << ", " << y << ")";
			}
			else treasure = 1;

		}
		else
			cout << "\nError. Please enter a valid character. ";	// Error handler
	} while (treasure != 1);

	if (abrupt != 1)				// if quit early, no message is shown
		cout << "\n\nCongrats, you got the treasure in " << step << " steps!";
	if (step == 1 && abrupt != 1)	// if cheated to win on turn 1, sarcasm
		cout << "\nDivine fortune shines up thee surely. The luck of every force in the world...";
	cout << endl;
}

void Navigation3(string whimsy) {													// Foundation
	if (whimsy == "1")																// Game menu 3
		CountingGame();

	if (whimsy == "2")
		PowerOf2();

	if (whimsy == "3")
		LoanCalculator();

	if (whimsy == "4")
		OtherFactorial();

	if (whimsy == "5")
		Treasure();
}

void LetterPrinter(char last) {
	char alpha = 'a';
	char temp = 'a';

	while (alpha <= last) {
		temp = 'a';
		while (temp <= last) {
			cout << alpha << temp << '\n';
			temp++;
		}
		alpha++;
	}
}

/* I think this has the answer to perfecting AverageGame();


Overloaded operators[edit]
For more details on this topic, see Operators in C and C++.
In C++, operators, such as + - * /, can be overloaded to suit the needs of programmers. These operators are called overloadable operators.

By convention, overloaded operators should behave nearly the same as they do in built-in datatypes (int, float, etc.), but this is not required. One can declare a structure called integer in which the variable really stores an integer, but by calling integer * integer the sum, instead of the product, of the integers might be returned:

struct integer
{
int i;
integer(int j = 0) : i(j) {}
integer operator*(const integer &k) const
{
return integer (i + k.i);
}
};
The code above made use of a constructor to "construct" the return value. For clearer presentation (although this could decrease efficiency of the program if the compiler cannot optimize the statement into the equivalent one above), the above code can be rewritten as:

integer operator*(const integer &k) const
{
integer m;
m.i = i + k.i;
return m;
}
Programmers can also put a prototype of the operator in the struct declaration and define the function of the operator in the global scope:

struct integer
{
int i;

integer(int j = 0) : i(j) {}

integer operator*(const integer &k) const;
};

integer integer::operator*(const integer &k) const
{
return integer(i * k.i);
}
i above represents the sender's own member variable, while k.i represents the member variable from the argument variable k.

The const keyword appears twice in the above code. The first occurrence, the argument const integer &k, indicated that the argument variable will not be changed by the function. The second incidence at the end of the declaration promises the compiler that the sender would not be changed by the function run.

In const integer &k, the ampersand (&) means "pass by reference". When the function is called, a pointer to the variable will be passed to the function, rather than the value of the variable.

The same overloading properties above apply also to classes.

Note that arity, associativity and precedence of operators cannot be changed.
*/

/*
Lab Activity #6 ? More Functions/FILES
Exercise #2 (DO ONLY IF WE COVERED ARRAYS OF CHARACTERS):
Write a program that will ask the user to enter a sentence. Then create a separate function that
will count the number of vowels in that sentence and display the answer.


Lab Activity #7 - Arrays
Exercise #1:
Write a program that declares an array named alpha with 50 components of the type
double. Initialize the array so that the first 25 components are equal to the square of
the counter (or index) variable and the last 25 components are equal to three times the
index variable.
Output the array so that exactly ten elements per line are printed.

Exercise #2:
Write a program that declares an array named myArray with 8 components of the type
int. Initialize the array to 8 values that the user inputs (remember to prompt the user).
Finally, pass the array as a parameter to a new function called filterEvens. This new
function will display all of the even numbers in the array.

Exercise #3:
A car dealership has 10 salespeople. The dealership keeps track of the number of cars
sold by each salesperson each month and reports it to management. The management
then takes that data and assigns a number 1 ? 10 to each salesperson. The following
statement declares an array to store the number of cars sold by each salesperson (it
means that salesperson #1 sold 7 cars, salesperson #2 sold 3 cars etc):
int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8};
Output
1) the total number of cars sold at the entire dealership,
2) which salesperson sold the most cars (Salesperson #1, Salesperson #2, etc.), and
3) how many cars that best salesperson sold.
Exercise #4:
DNA is made up from 4 different bases (nucleotides), adenine (A), thymine (T), guanine (G) and
cytosine (C). This is true for plants, animals, bacteria, in fact it is true all life forms on earth that
contain DNA.

In an incredible molecular feat called transcription, your cells create molecules of messenger
RNA that mirror the sequence of nucleotides in your DNA. The RNA then creates proteins that
do the work of the cell.
Create a function called dna_to_rna, which should take as input a string which will have DNA
nucleotides (capital letter As, Cs, Gs, and Ts). There may be other characters, too; they should be
ignored by your transcribe function and disappear from the output. These might be spaces or
other characters that are not DNA nucleotides.
Then, dna_to_rna should output the messenger RNA that would be produced from that DNA
string. The correct output simply uses replacement:
? As in the input become Us in the output.
? Cs in the input become Gs in the output.
? Gs in the input become Cs in the output.
? Ts in the input become As in the output.
? any other input characters should disappear from the output altogether
Not quite working? One common problem that can arise is that dna_to_rna needs to have an
ELSE to capture all of the non-legal characters. All non-nucleotide characters should be dropped.
Here are the tests to check:
ACGTTGCA should be transformed into UGCAACGU
ACG TGCA should be transformed into UGCACGU // note that the space disappears
GATTACA should be transformed into CUAAUGU
A42% should be transformed into U



Lab Activity #8 ? 2D Arrays and File Streams

Exercise #1:
Write a program that declares a two-dimensional array named myFancyArray of the type
double. Initialize the array to the following values:

23 14.12 17 85.99
6.06 13 1100 0
36.36 90.09 3.145 5.4
1. Create a function that will return the sum of the third column. Output this result.
2. Create a function that finds the ceiling [the closest whole number that is not smaller
than that number. So ceil(4.6) is 5 and ceil(4.2) is 5, and ceil(-3.4) is -3
]of each value in the array.
3. Create a function that will use a nested loop to display all the elements in the array to
the screen.

Exercise #2:
Write a program that can be used to assign seats for a commercial airline. The airplane has 13
rows, with 6 seats in each row. Rows 1-3 are first-class seats, while rows 5-13 are economy
seats.
Create a menu-driven program. Display a gmaph of all of the seats on the airplane (display a star
(*) to indicate the seat is available; display an X if the seat is occupied). Ask the user which class
of ticket they are interested in (first-class or economy) and to select the specific seat(s) they
wish to reserve.
You must create this program by writing the following functions: displayMap will display the
current seating map of the entire airplane, makeReservation will let the user select the specific
seat(s) they wish to reserve, and validateFunction will make sure that a) the user is not trying to
reserve seats that are already taken and b) the userfs seat-class choice is appropriate for the
specific seats theyfve selected.

A B C D E F
Row 1 * * X * X X
Row 2 * X * X * X
Row 3 X * X X * X
(etc.)

Exercise #3:
You are the owner of a hardware store and need to keep an inventory that can tell you what
different tools you have, how many of each you have on hand and the cost of each one. The
data is organized as follows:
? The first column contains the tool name
? The second column contains the quantity of that product in inventory.
? The third column contains the cost per item or unit price of that product.

Use the following information to start your file:
Hammer 76 11.99
Jigsaw 21 14.99
Wrench 10 4.49

Write a C++ program that will do the following:
? Read data from a data file you create called hardware.dat located on the hard
drive. The inventory changes occasionally, so you do not know how much data
there is to process.
? Call a function that will return the total value of the storefs inventory for any one
particular product (unit price * number of items).
? Compute the total number of items in the inventory.
? Print the output to a file you create called hardware.out to display the results. The
output in that file should be displayed as follows (make sure you include the
necessary headings that are shown below):
MY HARDWARE STORE
---------------------------------
TOOL QUANTITY PRICE
Hammer 76 11.99
Jigsaw 21 14.99
Wrench 10 4.49
Value of all hammers in stock: $ 911.24
Value of all jigsaws in stock: $ 314.79
Value of all wrenches in stock: $ 44.90

Total items in inventory: 107

Exercise #4: Tic-Tac-Toe (courtesy of Dr. Huo)
The following program is the base for the game: tic-tac-toe. The main function and program
structure is given, donft modify them. Complete three functions as required. Compile and run
this program, and then you can play the game. Have fun!
#include<iostream>
using namespace std;
const int DIM=3;
char chessboard[DIM][DIM];
//initChessBoard
void initChessBoard(char cb[][DIM])
{
//set all the elements of the ChessBoard to blanks
//Complete this part in the following:
}
//printChessBoard
void printChessBoard(char cb[][DIM])
{
//print all the elements of the chessBoard with each row in one line
//Complete this part in the following:
}
//putChequer
bool putChequer(char cb[][DIM], int i, int j, char x)
{
//		if i and j are not out of bound(that is, i and j are in the range of 0 and DIM-1) and
//cb[i][j] is not occupied(that is, the value of cb[i][j] is blank), set cb[i][j] to be the value of x and
//return true. Otherwise, return false.
//		Complete this part in the following:

//judge the state of the game. The player has put x in the position (row, col).
// If all the elements in this row are x, x wins
// If all the elements in this column are x, x wins.
// If x is in the main diagonal, and if all the elements in the main diagonal are x, x wins.
// If x is in the opposite diagonal, and if all the elements in the opposite diagonal are x, x wins.
bool state(char cb[][DIM], int row, int col, char x)
{

// We declare four variables count1, count2, count3, count4 to represent the
//occurrence number of x in row number row, column number col, in the main diagonal,
//and in the opposite diagonal. If after calculation, count1, count2, count3 or count4
//equals to DIM, return true(that is, x wins).
int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
for (int i = 0; i<DIM; ++i)
{
// Complete this part in the following:
// if the element in position (row, i) is x, count1 is increased by 1.
// if the element in position (i, col) is x, count2 is increased by 1.
// if x is in the main diagonal, and the element in position (i, i) is x,
// count3 is increased by 1.
// if x is in the opposite diagonal, and the element in position (i, DIM-1-I) is x,
// count4 is increased by 1.
}
return (count1 == DIM || count2 == DIM || count3 == DIM || count4 == DIM);
}

int main()
{
int row, col;
int blanks = DIM*DIM;
initChessBoard(chessboard);
printChessBoard(chessboard);
char cur = 'O';
cout << "Input the position(row col), (-1 -1) for exit; It is the turn of " << cur << endl;
cin >> row >> col;
while (row != -1 && col != -1)
{
if (!putChequer(chessboard, row, col, cur))
{
cout << "Invalid move" << endl;
printChessBoard(chessboard);
}
else
{
--blanks;
printChessBoard(chessboard);
if (state(chessboard, row, col, cur))
{

cout << cur << " Wins" << endl;
return 0;
};
if (blanks == 0)
{
cout << "Ties" << endl;
return 0;
}
if (cur == 'X')
cur = 'O';
else cur = 'X';
}
cout << "Input the position(row col), (-1 -1) for exit; It is the ture of " << cur << endl;
cin >> row >> col;
}
}

Exercise #5: Complete Your Game!
If you have not already done so, add a loop to your game.
The loop can be an infinite loop(while (1)).The inside of the loop consists of the IF statement
that gives the user the choice of playing a game, showing a demo of the game and exiting.
When the user chooses to exit, the program ends.
Change the menu above so that instead of the three choices, you have the following choices :

? Play the Madlib game(from Lab #2)
? Play the Choose Your Own Adventure game(from Lab #3)
? Play Treasure Hunt game(from Lab #5)
? Play the Psychic game(from Lab #5)
? Play Tic - Tac - Toe(from this lab, Exercise #4)
? Exit

The WHILE loop will consist of the menu above and the IF statement.
However, this time, based upon the user choice, the main program will call a function that plays
the game of choice.If the user chooses choice 1, the main program will call a function that plays
the Math game, etc.
Make each game a function of its own!




*/


