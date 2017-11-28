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