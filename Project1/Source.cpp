/*
Anthony Arroyo
Computer Science 126
September 18, 2017
Professor Zelikovitz
Professor Domanski
Lab #5
*/

#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<fstream>
#include<cstring>
using namespace std;

/// Initialize function prototypes
int SuperMenu();
void Project(int choice, int &project);
void Navigation(string choice, int &project);
string Project1(string choice1);
string Project2(string choice2);
string Project3(string choice3);
string Project4(string choice4);
string Project5(string choice5);
string Project6(string choice6);
string Project7(string choice7);
string Project8(string choice8);
int ChooseLab(int lab);
// Lab 8, DNE down
void Game7();
void ArrayColumnSum(double &array, int column, int row);
void Ceiling();
void AllElements();
void FancyArrayGame();
void AirplaneGame();
void HardwareGame();
const int DIM = 3;
void initChessBoard(char cb[][DIM]);
void printChessBoard(char cb[][DIM]);
bool putChequer(char cb[][DIM], int i, int j, char x);
bool state(char cb[][DIM], int row, int col, char x);
void TicTacToeGame();
void Navigation7(string final);
void Game8();
void Navigation8(string finale);
// End of lab 8
void Reader();
// Lab 7
void Game6();
void AlphaArrayGame();
void filterEvens(int arrayelement);
void ArraySorterGame();
void DealershipGame();
void UpperArray(char arr[], int length);
void DeoxyribonucleicGame();
void Navigation6(string entre);
// End of lab 7
// Lab 6
void Game5();
void WritingGame();
char* StrChar(string stuff);
void LowerArray(char arr[], int length);
void VowelGame();
void LudumDare();
const int row = 8;
const int element = 4;
void PrintBoard(int *display[row][row], string(&part)[11]);
void PrintBoard(int *display[row][row], string(&part)[11], string player);
void Navigation5(string exceed);
// End of lab 6
// Lab 5
void Game4();
int Err();
void Er();
void DistanceGame();
double Radius(double xa, double ya, double xb, double yb);
double Circumference(double radii);
double Area(double radius);
// Defines constant pi
const double pi = acos(-1);
void printStars();
int addThem(int integer1, int integer2);
void StarGame();
int Flip(int rng);
bool Broke(int post);
void CoinGame();
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
void in(int &i);
void in(float &fl);
void in(double &db);
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
void Convo(int conversation);
void Convo(int overload, int modifier);
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


int main() {
	// Initialization
	string name;			
	string choice;
	int project = 6;
	cout << fixed << setprecision(2);

	// Queries name
	cout << "Please enter your name.";
	cin >> name;			

menu:					// For backtracking when exiting
	Menu1(name);			// Creates main menu text
	cin >> choice;			// Navigates main menu

	if (choice == "1") {				// Play

		// For backtracking when quitting
		game:
		// Uses returned value to navigate menu
		switch (project) {
		case 1: choice = Project1(choice);
			break;
		case 2: choice = Project2(choice);
			break;
		case 3: choice = Project3(choice);
			break;
		case 4: choice = Project4(choice);
			break;
		case 5: choice = Project5(choice);
			break;
		case 6: choice = Project6(choice);
			break;
		case 7: choice = Project7(choice);
			break;
		case 8: choice = Project8(choice);
			break;
			}

				// Player chose a game or prompts again
			if (choice != "9") {
				cout << "Finished." << endl;
				goto game;
			}	// Player chose to quit
			else if (choice == "9") {	
				cout << "Quitting to menu." << endl;
				// Exits to menu
				goto menu;
			}
			else cout << "Error 1.";	// Bug patched

			// Error checking
			if (!cin) {
				cout << "Error 6. Illegal string. Exitting...";
				cin.clear();
				return 1;
			}
		}

	// Demo
	if (choice == "2") {				
		// Will mostly be for development purposes or pre-defined answers.

		Demo1();
		cout << "b.";
		cout << "lib." + static_cast<char>(2) << '\n'; // b.
		NumberBoxRows();
		cout << pi*6;
		double kay = Circumference(6.);
		cout << kay;

		int loka = 10;
		do { cout << (rand()) << '\n'; } while (loka--, loka > 0);
		char f[2]; 
		char s[2];
		cin.getline(f, 2);
		cin.getline(s, 2);
		cout << f << '\n' << s;

		// Demo finished, goes to main menu
		goto menu;					
	}

	// Switches projects
	if (choice == "3") {
		project = ChooseLab(project);
		goto menu;
	}

	// Exits program
	if (choice == "4") {
		cout << "Exiting...";
		return 0;
	}
	else cout << "Error 2. Multiple strings.";	// To-do debug
	Err();	// Defunct

	// Loops errors to main menu
	goto menu;
}

// Error # (D) == Debugged; (F) == Fatal;
// Error 1 (D) = Choice selected in game 1 does not equal a number;
// Error 2 = Choice selected in menu 1 does not equal a number; name has a space; program crash;
// Error 3 (F) = Inserted string into int/double;
// Error 4 = Inserted string into char; minor crash;
// Error 5 = Message not printed; previous input was a string;
// Error 6 = Special character entered.
// Error 7 = Caught by error handler. Er()

/*int SuperMenu() {
	// Initialization
	string name;
	string choice;
	int project = 6;
	bool menu = 1; bool game = 1;
	cout << fixed << setprecision(2);

	// Queries name
	cout << "Please enter your name.";
	cin >> name;

	while (menu) {
		// Creates main menu text
		Menu1(name);
		// Navigates main menu
		cin >> choice;

		// Play
		if (choice == "1") {
			// Repeats until exit trigger
			while (game) {
				switch (project) {
				// Chooses navigation depending on project
				case 1: choice = Project1(choice);
					continue;
				case 2: choice = Project2(choice);
					continue;
				case 3: choice = Project3(choice);
					continue;
				case 4: choice = Project4(choice);
					continue;
				case 5: choice = Project5(choice);
					continue;
				case 6: choice = Project6(choice);
					continue;
				case 7: choice = Project7(choice);
					continue;
				case 8: choice = Project8(choice);
					continue;
				case 9: cout << "Quitting to menu." << endl;
					game = 0;
					break;
				default: cout << "Error 1.";	// Bug patched
					break;
				}
				// Error checking
				if (!cin) {
					cout << "Error 6. Illegal string. Exitting...";
					cin.clear();
					return 1;
				}
				// Prints finished when game is done
				cout << "Finished." << endl;
			}
		}

		// Demo
		if (choice == "2") {
			// Will mostly be for development purposes or pre-defined answers.
			Demo1();

			cout << "b." << '\n';
			cout << "lib." + static_cast<char>(2) << '\n'; // b.
			cout << pi * 6;
			double kay = Circumference(6.);
			cout << kay;
			int loka = 10;
			do { cout << (rand()) << '\n'; } while (loka--, loka > 0);
		}

		// Switches projects
		if (choice == "3") {
			project = ChooseLab(project);
		}

		// Exits program
		if (choice == "4") {
			cout << "Exiting...";
			// Unnecessary until new menu is added
			menu = 0;
			return 0;
		}

		// New game
		game = 1;

		// Error checking
		if (!cin)
			cin.clear();
		else cout << "Error 2. Multiple strings.";	// To-do debug
		Err();	// Defunct
	}
}*/

/*
int SuperMenu() {
	// Initialization
	string name;
	int choice;
	int project = 6;
	bool menu = 1; bool game = 1;
	cout << fixed << setprecision(2);

	// Queries name
	cout << "Please enter your name.";
	cin >> name;

	while (menu) {
		// Creates main menu text
		Menu1(name);
		// Navigates main menu
		in(choice);

		// Play
		if (choice = 1) {
			// Repeats until exit trigger
			while (game) {
				switch (project) {
					// Chooses navigation depending on project
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8: Project(project, choice); break;
				case 9: cout << "Quitting to menu. " << endl;
					game = 0;
					break;
				default: cout << "Error 1.";	// Bug patched
					break;
				}
				// Error checking
				Er();
				// Prints finished when game is done
				cout << "Finished." << endl;
			}
		}

		// Demo
		if (choice = 2) {
			// Will mostly be for development purposes or pre-defined answers.
			Demo1();

			cout << "b." << '\n';
			cout << "lib." + static_cast<char>(2) << '\n'; // b.
			cout << pi * 6;
			double kay = Circumference(6.);
			cout << kay;
			int loka = 10;
			do { cout << (rand()) << '\n'; } while (loka--, loka > 0);
		}

		// Switches projects
		if (choice = 3) {
			project = ChooseLab(project);
		}

		// Exits program
		if (choice = 4) {
			cout << "Exiting...";
			// Unnecessary until new menu is added
			menu = 0;
			return 0;
		}

		// New game
		game = 1;

		// Error checking
		Er();
	}
	// Menu disabled
	return 0;
}
*/

void Project(int choice, int &project) {
	// Prints out game menu
	switch (choice) {
	case 1: Game1();
	case 2: Game2();
	case 3: Game3();
	case 4: Game4();
	case 5: Game5();
	case 6: Game6();
	case 7: Game7();
	case 8: Game8();
	}
	// Chooses minigame
	in(choice);
	string schoice = to_string(choice);
	Navigation(schoice, project);
}

void Navigation(string choice, int &project) {
	switch (project) {
	case 1: Navigation1(choice);
	case 2: Navigation2(choice);
	case 3: Navigation3(choice);
	case 4: Navigation4(choice);
	case 5: Navigation5(choice);
	case 6: Navigation6(choice);
	case 7: Navigation7(choice);
	case 8: Navigation8(choice);
	}
}

///To do:
//Lab 7, Exercise 4
//Lab 8, Exercise 1 - 4
// Proper error handling try{ stuff; } catch (...) { throw x=0; cin.clear(); }

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
		cout << "\nChoose which lab you want to open. (2-7, cancel with 0)\n";
		cin >> lab;

		if (lab >= 0 && lab <= 7) {
			if (lab == 1)
				cout << "\nLab 1 was not a program.";
			else master = 1;
		}
		else cout << "Input invalid. Please retry.";
	} while (master != 1);

	// Temp error handler for <(int project) crashes
	if (!cin)
		Er();

	// Possibly fixes fatal error
	if (lab == 1)
		lab++;

	if (lab != 0) {
		cout << "\nNow loading lab " << lab << "...\n" << endl;
		// Project number is 1 less than lab number
		lab--;
		return lab;
	}
	else {
		cout << "\nReverting to original lab...\n" << endl;
		return original;
	}
}

/// Lab Eight TBA
void Game7() { ; }

void ArrayColumnSum(double &array, int column, int row) {
	double total = 0;
	double *arr;
	//arr = array[column][row];
	column--;

	for (column; column > 0; column--) {
		;//total += **array[column][row];
	}
}

void Ceiling() { ; }
void AllElements() { ; }

void FancyArrayGame() {
	const int column = 3;
	const int row = 4;

	double myFancyArray[column][row] = { 
		{23, 14.12, 17, 85.99},
		{6.06, 13, 1100, 0},
		{36.36, 90.09, 3.145, 5.4} };

}

void AirplaneGame() { ; }
void HardwareGame() { ; }

//initChessBoard
void initChessBoard(char cb[][DIM]) {
	//set all the elements of the ChessBoard to blanks
	//Complete this part in the following:
}

//printChessBoard
void printChessBoard(char cb[][DIM]) {
	//print all the elements of the chessBoard with each row in one line
	//Complete this part in the following:
}

//putChequer
bool putChequer(char cb[][DIM], int i, int j, char x) {
	//		if i and j are not out of bound(that is, i and j are in the range of 0 and DIM-1) and
	//cb[i][j] is not occupied(that is, the value of cb[i][j] is blank), set cb[i][j] to be the value of x and
	//return true. Otherwise, return false.
	//		Complete this part in the following:

	//judge the state of the game. The player has put x in the position (row, col).
	// If all the elements in this row are x, x wins
	// If all the elements in this column are x, x wins.
	// If x is in the main diagonal, and if all the elements in the main diagonal are x, x wins.
	// If x is in the opposite diagonal, and if all the elements in the opposite diagonal are x, x wins.
	return 0;
}

bool state(char cb[][DIM], int row, int col, char x) {
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

void TicTacToeGame() {
	char chessboard[DIM][DIM];
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
				return;
			};
			if (blanks == 0)
			{
				cout << "Ties" << endl;
				return;
			}
			if (cur == 'X')
				cur = 'O';
			else cur = 'X';
		}
		cout << "Input the position(row col), (-1 -1) for exit; It is the turn of " << cur << endl;
		cin >> row >> col;
	}
}

void Navigation7(string final) { ; }

void Game8() {
	GameHeader();
	cout << "1.\tMablib\n"
		<< "2.\tChoose Your Own Adventure\n"
		<< "3.\tTreasure Hunt\n"
		<< "4.\tPsychic\n"
		<< "5.\tTic Tac Toe\n";
	GameFooter();
}

void Navigation8(string finale) {
	if (finale == "1")
		MadLibGame();

	if (finale == "2")
		AdventureGame();

	if (finale == "3")
		Treasure();

	if (finale == "4")
		PsychicGame();

	if (finale == "4")
		TicTacToeGame();
}

/// Lab Seven
// Game menu 6
void Game6() {
	GameHeader();
	cout << "1.\tAlpha Array\n"
		<< "2.\tArray Sorter\n"
		<< "3.\tDealership\n"
		<< "4.\tReader\n";
	GameFooter();
}

void Reader() {
	ifstream inFile;
	ofstream outFile;

	char letter;
	string stuff;

	inFile.open("sample.txt");
	outFile.open("output.txt");

	//cin >> letter;

	for (int i = 0; i < 6; i++) {
		cin.get(letter);
		cout << letter;

	}

	inFile.close();
	outFile.close();

}

// Lab 7, Exercise 1
void AlphaArrayGame() {
	// Initialization
	double alpha[50];

	// Defines the first 25 values
	for (int i = 0; i < 25; i++) {
		// Value = index^2
		alpha[i] = i * i;
	}

	// Defines the last 25 values
	for (int j = 25; j < 50; j++) {
		// Value = index*3
		alpha[j] = j * 3;
	}

	// Removes decimals
	cout << setprecision(0) << '\n';

	// Prints results
	for (int l = 0; l < 5; l++) {
		for (int m = 0; m < 9; m++) {
			cout << alpha[10 * l + m] << '\t';
		}
		cout << alpha[10 * l + 9] << '\n';
	}

	// Error checking
	Er();

	// Resets precision
	cout << setprecision(2) << endl;
}

// Lab 7, Exercise 2
void filterEvens(int arrayelement) {
	// Print even numbers
	if (arrayelement % 2 == 0)
		cout << arrayelement << ' ';
}

// Lab 7, Exercise 2
void ArraySorterGame() {
	// Initialization
	int myArray[8];
	// Prompt
	cout << "\nInput 8 numbers please.";

	for (int i = 0; i < 8; i++) {
		//Input
		cin >> myArray[i];
		// Error checking
		if (!cin) {
			myArray[i] = -1;
			cin.clear(); // Exits fail state after closing
		}
	}

	cout << '\n';
	// Filter even numbers
	for (int i = 0; i < 8; i++)
		filterEvens(myArray[i]);
	cout << endl;
	
	// Error checking
	Er();
}

// Lab 7, Exercise 3
void DealershipGame() {

	// int 2DArray[column][row]

	// Initialization
	int total = 0, mostsales = 0, employee[10], myArray[2][10];
	int cars[10] = { 7, 3, 6, 0, 14, 8, 1, 2, 9, 8 };

	// Assigns employees 1-10
	for (int i = 0; i < 10; i++)
		employee[i] = i + 1;

	// Assigns employees to array
	for (int j = 0; j < 10; j++) {
		myArray[0][j] = employee[j];
	}

	// Assigns sales to array
	for (int k = 0; k < 10; k++) {
		myArray[1][k] = cars[k];
	}

	// Runs scanner
	for (int i = 0; i < 10; i++) {
		// Adds car sales to total
		total += myArray[1][i];
		// Checks if new employee did better than current best
		if (myArray[1][i] > myArray[1][mostsales])
			mostsales = i;
	}

	// Print
	cout << "\nWe sold a total of " << total << " car" << IsS(total) << "."
		<< "\nWe especially congratulate salesperson #" << myArray[0][mostsales] << " for his sale of " << myArray[1][mostsales] << " car" << IsS(myArray[1][mostsales]) << ".";

	// Error checking
	Er();
}

// Lab 7, Exercise 4
void UpperArray(char arr[], int length) {
	// Sets a character array to lowercase
	for (int i = 0; i < length; i++) {
		arr[i] = toupper(arr[i]);
	}
}

// Lab 7, Exercise 4
void DeoxyribonucleicGame() {
	// Initialization
	string dna;

	// Prompt
	cout << "\nPlease enter a RNA strand's code.";
	cin >> dna;

	// Creates and saves the address of the new pointer
	char* rna = StrChar(dna);

	// Shows string output
	if (1) {
		cout << "\nDiagnostics on...\n";
		for (int i = 0; i < dna.length(); i++)
			cout << rna[i];
		cout << endl;
	}

	// Sets each character to uppercase
	UpperArray(rna, dna.length());

	// Shows string output with lowercase
	if (1) {
		for (int i = 0; i < dna.length(); i++)
			cout << rna[i];
		cout << endl;
	}

	// Checks for vowels within the array that is pointed
	for (int i = 0; i < dna.length(); i++) {
		switch (rna[i]) {
		case 65: rna[i] = 'U'; break;
		case 67: rna[i] = 'G'; break;
		case 71: rna[i] = 'C'; break;
		case 84: rna[i] = 'A'; break;
		default: break;
		}
	}

	// Shows string output with lowercase
	for (int i = 0; i < dna.length(); i++)
		cout << rna[i];
	cout << endl;
	

	// Error checking
	Er();
}

// Game skeleton 6
void Navigation6(string entre) {
	if (entre == "1")
		AlphaArrayGame();

	if (entre == "2")
		ArraySorterGame();

	if (entre == "3")
		DealershipGame();

	if (entre == "4")
		DeoxyribonucleicGame();
}

/// Lab Six
// Game menu 5
void Game5() {
	GameHeader();
	cout << "1.\tExport Even Numbers\n"
		<< "2.\tVowels\n"
		<< "3.\tLudum Dare\n";
	GameFooter();
}

// Lab 6, Exercise 1
void WritingGame() {
	int hellalot = 1000, currentnumber;

	cout << "\nWriting numbers to file...";
	ofstream numberfile;
	numberfile.open("myEvenRandoms.txt");

		do {
		// Chooses a number between 10 and 20
		currentnumber = (rand() % 11 + 10);

		// If even, writes number to file
		if (currentnumber % 2 == 0) {
			numberfile << currentnumber << '\n';
			hellalot--;
		}
		} while (hellalot > 0);

	cout << "\nDone writing numbers to file!\n" << endl;
}

// Lab 6, Exercise 2
char* StrChar(string stuff) {
	// Dynamically creates a char pointer that can fit the whole string
	char* dyna = new char[stuff.length()];
	// Assigns values to each index value
	for (int i = 0; i < stuff.length(); i++) {
		dyna[i] = stuff[i];
	}
	// Returns the address of the new pointer
	return dyna;
}

// Lab 6, Exercise 2
void LowerArray(char arr[], int length) {
	// Sets a character array to lowercase
	for (int i = 0; i < length; i++) {
		arr[i] = tolower(arr[i]);
	}
}

// Lab 6, Exercise 2
void VowelGame() {
	string input;
	int vowels = 0;
	bool diagnostic = 0;

	// Prompt
	cout << "\nInput a string please.";
	cin >> input;

	// Creates and saves the address of the new pointer
	char* output = StrChar(input);

	// Shows string output
	if (diagnostic) {
		cout << "\nDiagnostics on...\n";
		for (int i = 0; i < input.length(); i++)
			cout << output[i];
		cout << endl;
	}

	// Sets each character to lowercase
	LowerArray(output, input.length());

	// Shows string output with lowercase
	if (diagnostic) {
		for (int i = 0; i < input.length(); i++)
			cout << output[i];
		cout << endl;
	}

	// Checks for vowels within the array that is pointed
	for (int i = 0; i < input.length(); i++) {
		if (output[i] == 'a' || output[i] == 'e' || output[i] == 'i' || output[i] == 'o' || output[i] == 'u')
			vowels++;
	}

	// Displays the total number of vowels
	cout << "\nThere are a total of " << vowels << " vowel" << IsS(vowels) << "." << endl;
}

// Lab 6, Exercise 3
void LudumDare() {
	bool diagnostic = 0; bool yes = 0; bool normal = 1;
	string parts[11] = { " ", " X", " O", " x", " o", ">X", ">O", ">x", ">o", "---", " |" };

	int null = 0;
	string pause;

	int *displayboard[row][row];
	int board[row][element];

	cout << "\nBeginning checkers game. Initializing...\n";

	// Initialize display board with board addresses
	for (int i = 0; i < row; i++) {
		if (i % 2) {
			for (int j = 0; j < row; j += 2) {
				displayboard[i][j] = &board[i][j / 2];
			}
			for (int k = 1; k < row; k += 2) {
				displayboard[i][k] = &null;
			}
		}
		else {
			for (int k = 0; k < row; k += 2) {
				displayboard[i][k] = &null;
			}
			for (int j = 1; j < row; j += 2) {
				displayboard[i][j] = &board[i][j / 2];
			}
		}
	}

	// Initialize data board with normal checker setup
	if (normal) {
		int i = 0;
		for (i; i < 3; i++) {
			for (int j = 0; j < element; j++) {
				board[i][j] = 1;
			}
		}
		for (i; i < 5; i++) {
			for (int j = 0; j < element; j++) {
				board[i][j] = 0;
			}
		}
		for (i; i < 8; i++) {
			for (int j = 0; j < element; j++) {
				board[i][j] = 2;
			}
		}
	}

	// Initalizes entire board with ones
	/*if (yes)
	for (int i = 0; i < row; i++) {
	for (int j = 0; j < element; j++) {
	board[i][j] = 1;
	}
	}*/

	PrintBoard(displayboard, parts);

	cout << "Logic and player input pending.";

	//Alternate player
	//Recieve input as d5 a1
	//Logic circuit and movement
	cin >> pause;
}

void PrintBoardRaw(int *display[row][row]) {
	// Prints raw result
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			cout << *display[i][j] << ' ';
		}
		cout << '\n';
	}
}

void PrintBoard(int *display[row][row], string(&part)[11]) {
	string noname = "\b";
	PrintBoard(display, part, noname);
}

void PrintBoard(int *display[row][row], string(&part)[11], string player) {
	//string part[11] = { " ", " X ", " O ", " x ", " o ", ">X ", ">O ", ">x ", ">o ", "---", "|" };
	int counter = 0;
	char letter = 'A';

	// Draws upper edge
	cout << "\n\n" << setw(2) << part[0];
	for (int h = 0; h < row; h++)
		cout << setw(4) << h + 1;
	cout << endl << setw(3) << part[0];
	for (int i = 0; i < row; i++)
		cout << setw(4) << part[9];
	cout << endl;

	// Draws the rest of the board
	for (int j = 0; j < row; j++) {
		// Draws the upper space
		cout << setw(2) << part[0];
		for (int l = 0; l < row; l++)
			cout << setw(2) << part[10] << setw(2) << part[0];
		cout << setw(1) << part[10] << endl;

		// Draws the middle space
		cout << setw(1) << part[0] << letter++;
		for (int k = 0; k < row; k++) {
			cout << setw(1) << part[10] << setw(2) << part[*display[counter][k]];
		}
		counter++;
		cout << setw(1) << part[10] << endl;

		// Draws the lower space
		cout << setw(2) << part[0];
		for (int m = 0; m < row; m++)
			cout << setw(2) << part[10] << setw(2) << part[0];
		cout << setw(1) << part[10] << endl;

		// Draws bottom edge
		cout << setw(3) << part[0];
		for (int i = 0; i < row; i++)
			cout << setw(4) << part[9];
		cout << endl;
	}
	cout << "\n  Please enter your next move, Player " << player << ".  ";
}

// Game skeleton 5
void Navigation5(string exceed) {
	if (exceed == "1")
		WritingGame();

	if (exceed == "2")
		VowelGame();

	if (exceed == "3")
		LudumDare();
}

/// Lab Five
// Game menu 4
void Game4() {
	GameHeader();
	cout << "1.\tCircles\n"
		<< "2.\tStar Blanket\n"
		<< "3.\tCoin Flip\n"
		<< "4.\tPsychic\n";
	GameFooter();
}

// Lab 5, Exercise 1
void DistanceGame() {
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

// Lab 5, Exercise 1
double Radius(double xa, double ya, double xb, double yb) {
	double triangle = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2));
	return triangle;
}

// Lab 5, Exercise 1
double Circumference(double radii) {
	return (radii*2*pi);
}

// Lab 5, Exercise 1
double Area(double radius) {
	return (pow(radius, 2)*pi);
}

// Lab 5, Exercise 2
void printStars() {
	cout << "\n*****";
}

// Lab 5, Exercise 2
int addThem(int integer1, int integer2) {
	return (integer1 + integer2);
}

// Lab 5, Exercise 2
void StarGame() {
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

// Lab 5, Exercise 3
int Flip(int rng) {
	return (rand() % rng);
}

// Lab 5, Exercise 3
bool Broke(int post) {
	if (post > 0)
		return 0;
	else return 1;
}

// Lab 5, Exercise 3
void CoinGame() {
	int roll, coin = 0, bal = 50, heads = 0, tails = 0;

	cout << "\nHow many coin flips would you like gamble?";
	cin >> roll;

	if (roll != 0)
	while (coin < roll) {
		bool flipped = Flip(2);
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
		<< IsS(heads) << " and " << tails << " tail" << IsS(tails) << ".\n"	<< endl;
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

		if (notaseed >= 1 || notaseed <= 19)
			Say(notaseed);
		else Say(0);

		predictions--;
		prev[predictions] = notaseed;
		do {
			notaseed = rand() % 20;
		} while (notaseed == 1 || notaseed == 2 || notaseed == 3 || notaseed == prev[0] || notaseed == prev[4] || notaseed == prev[3] || notaseed == prev[2] || notaseed == prev[1]);

	}
}

// Lab 5, Exercise 4
void Say(int words) {
	string sayings[20] = {
		// Twenty unique fortunes
		"\nA good day is coming your way.",
		"\nYou'll find you're better showing than telling.", // Love
		"\nAlways put in your all in anything you do.", // School
		"\nPositive thinking brings in good things.", // Finance
		"\nA misunderstanding will dampen your day.",
		"\nYour actions are a thousand words.",
		"\nGood vibes attracts good things.",
		"\nHold onto the good, it'll help the bad pass.",
		"\nFind the bright side of every situation.",
		"\nHope for the best and expect the worst.",
		"\nIt’s better to fail trying than not trying at all.",
		"\nYou will get there, just have patience.",
		"\nAlways cherish what makes you happy.",
		"\nDon't be a clone, be your own individual.",
		"\nDo your best; that's all anyone can ask for.",
		"\nDo what you think is right.",
		"\nDon't let anyone get in the way of your dreams.",
		"\nKeep your health good, it'll get you far.",
		"\nMake your own fortune.",
		"\nDon't sink to their level, be the bigger person." };

	// Print out one fortune
	cout << sayings[words];
}

// Game skeleton 4
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

void Er() {
	cin.clear();
	cout << "Error 7. Illegal input. Exitting...";
	Err();
}

// TBA
#pragma warning(suppress: 4715)
int Err() {				// Defunct?
	if (!cin) {
		cout << "Error 6. Illegal string. Exitting...";
		cin.clear();
		return 0;
	}
}

// All in() functions cause undefined behavior in C++17 compiler.
// Works fine in C++11 compiler, possibly with consequences?
// http://www.augustcouncil.com/~tgibson/tutorial/iotips.html
void in(int &i) {
	char temp[20];

	std::cin.getline(temp, 20);
	i = strtol(temp, 0, 10);
}

void in(float &fl) {
	char temp[20];

	std::cin.getline(temp, 20);
	fl = strtof(temp, 0);
}

void in(double &db) {
	char temp[20];

	std::cin.getline(temp, 20);
	db = strtod(temp, 0);
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

void Convo(int conversation) {
	switch (conversation) {
	case 1: cout << "\nYou wake up in an empty room.\n"
		<< "There is a single door and a small cabinet.\n"
		<< "Well, you've been in stranger places. You should escape, right?\n"; break;
	case 2: cout << "\nYou head towards the door and turn the knob.\n"
		<< "It's locked. Well, only one noticeable feature is left in the room.\n"
		<< "Check the cabinet?\n"; break;
	case 3: cout << "\nYou head towards the door and turn the knob.\n"
		<< "It's locked. Well, only one noticeable feature is left in the room.\n"
		<< "Check the cabinet?\n"; break;
	case 4: cout << "\nYour pen is out of ink.\n"
		<< "And you're surrounded by your graffiti.\n"
		<< "You have to face your hero someday.\n"; break;
	case 5: cout << "\nYou look in the cabinet.\n"
		<< "Within is a single hook that hangs a key.\n"
		<< "Do you take the key to the door?\n"; break;
	case 6: cout << "\nThe exit looms in front of you.\n"
		"Back to where you subsist, you suppose.\n"
		"Are you ready to leave?\n";
	case 7: cout << "\nYou open the door and step outside.\n"
		<< "The air seems to rush past you...\n"
		<< "Restart?\n"; break;
	case 8: cout << "\nYou behold your work, consider it.\n"
		<< "The only sound is your grumbling stomach.\n"
		<< "Shall we go then?\n"; break;
	case 9: cout << "\nYou have to go."; break;
	default: break;
	}
}

void Convo(int overload, int hesitation) {														// Lab 3, E4
	if (hesitation > 0)
		cout << "\nYou have to go.";
	cout << "\nThe exit looms in front of you.\n"
		"Back to where you subsist, you suppose.\n"
		"Are you ready to leave?\n";
}

void AdventureGame() {																// Lab 3, E4
	char yes;
	int pen = 0;
	int modifier = 0;
	int beginning = 0;

start:
	Convo(1);
	if (beginning = 0)
		cout << "Enter yes or no. (y/n)\n";
	yes = Adv();
	if (yes == 'y')
		goto door;
	else goto idle;
door:
	Convo(2);
	yes = Adv();
	if (yes == 'y')
		goto cabinet;
	else goto idle;
idle:
	if (pen != 7) {
		pen++;
		Convo(3);
		yes = Adv();
		if (yes == 'y')
			goto idle;
		else goto door;
	}
	else
		Convo(4);
	yes = Adv();
	if (yes == 'y')
		goto door;
	else goto pen;
cabinet:
	Convo(5);
	yes = Adv();
	if (yes == 'y')
		goto key;
	else goto idle;
key:
	Convo(6, modifier);
	yes = Adv();
	if (yes == 'y')
		goto end;
	else {
		modifier++;
		goto key;
	}
pen:
	Convo(8);
	yes = Adv();
	if (yes == 'n') {
		goto pen;
	}
	else goto cabinet;
end:
	Convo(7);
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
	} else cout << n << "th";
}

void PowerOf2() {																	// Lab 4, E2
	int dayz, exponent = 2, y = 0;
	double terrible = 0;

	cout << "\nSuppose your employer offered a multiplicative wage per day."
		<< "\nEnter a number of days to see how your contract goes. ";
	cin >> dayz;

	while (y < dayz) {
		y++;							// crashes at 2^1024
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
	int x = 15, y = 15, abrupt = 0, step = 0; // Explorer’s coordinates
	int x1, y1; // Treasure’s coordinates
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
