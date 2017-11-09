
//Programmer:
//Date:
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
//prototype for total function
double getTotal(double, double, double, double);



//this program computes total scores for students
//in a class based on three quizzes

int finaldocanalyzer()

{
	string name;
	double score1, score2, score3, score4, total;
	double sumOfTotal = 0; //to hold the sum of all students' grades
	int count = 0; //counter for the number of students

	ifstream infile;

	infile.open("scores.txt");
	if (!infile)
	{
		cout << "error opening file";
		return 1;
	}

	cout << fixed << setprecision(2);   //output to two decimal

										//printing titles on the output screen

	cout << "Name" << '\t' << setw(8) << "score1" << setw(8) << "score2"
		<< setw(8) << "score3" << setw(8) << "score4" << setw(8)
		<< "total" << endl;


	//loop to process each of the students

	while (!infile.eof())
	{
		infile >> name >> score1 >> score2
			>> score3 >> score4;

		//call the function getTotal to retrieve the total score

		total = getTotal(score1, score2, score3, score4);
		cout << name << '\t' << setw(8) << score1 << setw(8) << score2
			<< setw(8) << score3 << setw(8) << score4 << setw(8)
			<< total << endl;

		//accumulate a sum of all totals to find the average;

		sumOfTotal += total;

		//count this student

		count++;

	}

	cout << endl << "Average grade is: " << sumOfTotal / count;

	return 0;
}
double getTotal(double x, double y, double z, double w)
{
	return x + y + z + w;
}
