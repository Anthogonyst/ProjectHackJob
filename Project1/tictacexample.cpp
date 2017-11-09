/*#include<iostream>
using namespace std;
const int DIM = 3;
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

	int toetactic()
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
	*/




#include <iostream>
using namespace std;
void sum(double*, int, int);

int main1() {
	// Constants
	const int column = 3;
	const int row = 4;

	// Initialization
	double BoxArray[column][row] = {
		{ 23, 14.12, 17, 85.99 },
		{ 6.06, 13, 1100, 0 },
		{ 36.36, 90.09, 3.145, 5.4 } };

	// Null pointer of column values
	double *ar[column];

	// Assigns address locations for each value of the array's column
	for (int i = 0; i < column; i++) {
		ar[i] = &BoxArray[i][2];
		// Prints value of each address
		cout << *ar[i] << '\n';
	}

//	sum(BoxArray, column, row);

	while (1) { ; }
}

// Function to add the sum of column
void sum(double *array, int col, int row) {
	double total = 0;

	// Attempts to assign address locations but fails because expression is not "pointer-to-object type"
	for (int i = 0; i < col; i++) {
		;
		//total = array[i][2];
		//cout << array[i][2] << '\n';
	}

	cout << total;

}

/*
Severity	Code	Description	Project	File	Line	Suppression State
Error (active)	E0167	argument of type "double (*)[4]" is incompatible with parameter of type "double *"	Project1	c:\Users\Ant\source\repos\Project1\Project1\tictacexample.cpp	121
Error (active)	E0142	expression must have pointer-to-object type	Project1	c:\Users\Ant\source\repos\Project1\Project1\tictacexample.cpp	132
Error (active)	E0142	expression must have pointer-to-object type	Project1	c:\Users\Ant\source\repos\Project1\Project1\tictacexample.cpp	133
Error (active)	E0006	comment unclosed at end of file	Project1	c:\Users\Ant\source\repos\Project1\Project1\tictacexample.cpp	140
Error	C2664	'void sum(double *,int,int)': cannot convert argument 1 from 'double [3][4]' to 'double *'	Project1	c:\users\Ant\source\repos\project1\project1\tictacexample.cpp	121
Error	C2109	subscript requires array or pointer type	Project1	c:\users\Ant\source\repos\project1\project1\tictacexample.cpp	132
Error	C2109	subscript requires array or pointer type	Project1	c:\users\Ant\source\repos\project1\project1\tictacexample.cpp	133
*/