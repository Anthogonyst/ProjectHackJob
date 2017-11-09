
/* I think this has the answer to perfecting AverageGame();


Overloaded operators[edit]
For more details on this topic, see Operators in C and C++.
In C++, operators, such as + - * /, can be overloaded to suit the needs of programmers. These operators are called overloadable operators.

By convention, overloaded operators should behave nearly the same as they do in built-in datatypes (int, float, etc.), but this is not required.
One can declare a structure called integer in which the variable really stores an integer, but by calling integer * integer the sum, instead of the product,
of the integers might be returned:

struct integer
{
int i;
integer(int j = 0) : i(j) {}
integer operator*(const integer &k) const
{
return integer (i + k.i);
}
};
The code above made use of a constructor to "construct" the return value. For clearer presentation (although this could decrease efficiency of the program
if the compiler cannot optimize the statement into the equivalent one above), the above code can be rewritten as:

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

The const keyword appears twice in the above code. The first occurrence, the argument const integer &k, indicated that the
argument variable will not be changed by the function. The second incidence at the end of the declaration promises the compiler
that the sender would not be changed by the function run.

In const integer &k, the ampersand (&) means "pass by reference". When the function is called, a pointer to the variable will
be passed to the function, rather than the value of the variable.

The same overloading properties above apply also to classes.

Note that arity, associativity and precedence of operators cannot be changed.
*/

/*
Lab Activity #6 – More Functions/FILES
Exercise #2 (DO ONLY IF WE COVERED ARRAYS OF CHARACTERS):
Write a program that will ask the user to enter a sentence. Then create a separate function that
will count the number of vowels in that sentence and display the answer.


Lab Activity #7 - Arrays
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
> As in the input become Us in the output.
> Cs in the input become Gs in the output.
> Gs in the input become Cs in the output.
> Ts in the input become As in the output.
> any other input characters should disappear from the output altogether
Not quite working? One common problem that can arise is that dna_to_rna needs to have an
ELSE to capture all of the non-legal characters. All non-nucleotide characters should be dropped.
Here are the tests to check:
ACGTTGCA should be transformed into UGCAACGU
ACG TGCA should be transformed into UGCACGU // note that the space disappears
GATTACA should be transformed into CUAAUGU
A42% should be transformed into U



Lab Activity #8 – 2D Arrays and File Streams

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
Create a menu-driven program. Display a “map” of all of the seats on the airplane (display a star
(*) to indicate the seat is available; display an X if the seat is occupied). Ask the user which class
of ticket they are interested in (first-class or economy) and to select the specific seat(s) they
wish to reserve.
You must create this program by writing the following functions: displayMap will display the
current seating map of the entire airplane, makeReservation will let the user select the specific
seat(s) they wish to reserve, and validateFunction will make sure that a) the user is not trying to
reserve seats that are already taken and b) the user’s seat-class choice is appropriate for the
specific seats they’ve selected.

A B C D E F
Row 1 * * X * X X
Row 2 * X * X * X
Row 3 X * X X * X
(etc.)

Exercise #3:
You are the owner of a hardware store and need to keep an inventory that can tell you what
different tools you have, how many of each you have on hand and the cost of each one. The
data is organized as follows:
> The first column contains the tool name
> The second column contains the quantity of that product in inventory.
> The third column contains the cost per item or unit price of that product.

Use the following information to start your file:
Hammer 76 11.99
Jigsaw 21 14.99
Wrench 10 4.49

Write a C++ program that will do the following:
> Read data from a data file you create called hardware.dat located on the hard
drive. The inventory changes occasionally, so you do not know how much data
there is to process.
> Call a function that will return the total value of the store’s inventory for any one
particular product (unit price * number of items).
> Compute the total number of items in the inventory.
> Print the output to a file you create called hardware.out to display the results. The
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

*/


/*
Attempting to modify a string literal causes undefined behavior:[8]

char *p = "wikipedia"; // valid C, ill-formed C++11, deprecated C++98/C++03
p[0] = 'W'; // undefined behavior
Integer division by zero results in undefined behavior:[9]

int x = 1;
return x / 0; // undefined behavior
Certain pointer operations may result in undefined behavior:[10]

int arr[4] = {0, 1, 2, 3};
int *p = arr + 5;  // undefined behavior
Reaching the end of a value-returning function (other than main()) without a return statement results in undefined behavior if the value of the function call is used by the caller:[11]

int f()
{
}  // undefined behavior if the value of the function call is used
Modifying an object between two sequence points more than once produces undefined behavior.[12] It is worth mentioning that there are considerable changes in what causes undefined behavior in relation to sequence points as of C++11.[13] The following example will however cause undefined behavior in both C++ and C.

i = i++ + 1; // undefined behavior
When modifying an object between two sequence points, reading the value of the object for any other purpose than determining the value to be stored is also undefined behavior.[14]

a[i] = i++; // undefined behavior
printf("%d %d\n", ++n, power(2, n)); // also undefined behavior
*/