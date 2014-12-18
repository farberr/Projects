/***********************************************************
* Author: Ryan Farber
* Date Created: 1/19/14
* Last Modification Date: 2/8/14
* Filename: Final Project
* Overview: Review
************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <stdio.h>
#include "final.h"
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void Menu();
void clearScreen();
void Binary();
void twosCompliment();
void macro();
void simpleOutput();
void cinGetline();
void typecast();
void conditional();
void logical();
void loop();
void randomnumgen();
void errors();
void debugging();
int multiplication();
void math();
void decomposition();
void scope();
void passMechanisms();
void overloadingFunction();
void strings();
void recurse();
void multiarray();
void dynarray();
void argue();
void printMuscles( struct Muscles *muscle);
void structs();
void volume();
void pointarray();
void pointstruct();
void calcount();
void namegame();
void vect();
void construction();
void overloadOperators();
void STLboost();
void Poly();
void inherit();
void except();
void projectreview();
string ToBeSolved(string word, string unsolved, char letter);
char GetNewGuess (string PrevGuesses);
string ToBeSolved( string word );
void playGame();
void playAgain();
void extracredit();
void headerfile();
void fileIO();

/* List of projects wanting to be re-evaluated
*
*Project 2: I want the entire project to be re-evaluated
*Project 2 can be found at void project review, void playGame
*   with strings ToBeSolved, GetNewGuess, and playAgain
*Project 2 needs to be fully re-evaluated because I did not have
*  understanding of how to do it at all during the assignment time.
*  I received a 55/100, where 40 of those points came from compiling.
*
*Project 4: I want to re-evaluate a bug in my program in the menu that
*  cost me 5 points. I lost 5 points due to a menu char input when an
*  int input was expected. I debugged it fully on this so that it would
*  not bug up at all in the menu.
*
*Project 1: I think I lost 6 points due to not having min/max... I forget
*  Re-eval in void randomnumgen for the min/max.
*
*
*/




int main(int argc, char *argv[])
{
Menu();
if (argc != 3) return -1;
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = a + b;
cout<< c <<endl;

	return 0;
}




void Menu(){
char ans;
do
{
int c;

cout<< "Welcome to the Review Session!" <<endl;
cout<< "This can be used to brush up on any code that you might have forgotten!"<<endl;
cout<< "Although this will be boring, it will be easy to grade" <<endl;
cout<< "Please pick one of the following options (1-40) to grade" <<endl;
cout<< endl;
cout<< "(x) to exit the program" <<endl;
cout<< "(1) Binary numbers" <<endl;
cout<< "(2) Two's Compliment" <<endl;
cout<< "(3) Pre-Defined Macro"<<endl;
cout<< "(4) Simple Output" <<endl;
cout<< "(5) cin and Getline" <<endl;
cout<< "(6) typecast "<<endl;
cout<< "(7) conditional" <<endl;
cout<< "(8) logical "<<endl;
cout<< "(9) loop "<<endl;
cout<< "(10) random number generator "<<endl;
cout<< "(11) Error categories "<<endl;
cout<< "(12) Debugging tricks "<<endl;
cout<< "(13) Using a function" <<endl;
cout<< "(14) Functional Decomposition "<<endl;
cout<< "(15) Scope"<<endl;
cout<< "(16) Passing Mechanism"<<endl;
cout<< "(17) Overloading Functions"<<endl;
cout<< "(18) Strings"<<endl;
cout<< "(19) Recursive"<<endl;
cout<< "(20) Multi-array"<<endl;
cout<< "(21) Dynamic-array"<<endl;
cout<< "(22) Command Line Argument"<<endl;
cout<< "(23) Structs"<<endl;
cout<< "(24) Classes w/ object"<<endl;
cout<< "(25) Pointer w/ an array"<<endl;
cout<< "(26) Pointer w/ a struct"<<endl;
cout<< "(27) Pointer w/ a class"<<endl;
cout<< "(28) Namespaces"<<endl;
cout<< "(29) Vectors"<<endl;
cout<< "(30) Constructors"<<endl;
cout<< "(31) Overloading Operators"<<endl;
cout<< "(32) STL + boost"<<endl;
cout<< "(33) PolyMorphism"<<endl;
cout<< "(34) Inheritance"<<endl;
cout<< "(35) Exceptions"<<endl;
cout<< "(36) Project review 2"<<endl;
cout<< "(37) Extra Credit" <<endl;
cout<< "(38) Header file"<<endl;
cout<< "(39) FileIO "<<endl;
cin.clear();
cin >>c;
cin.ignore();

switch (c)
 {
case 1:
Binary();
 }
switch (c)
 {
case 2:
twosCompliment();
 }
switch (c)
 {
case 3:
macro();
 }
switch (c)
 {
case 4:
simpleOutput();
 }
 switch (c)
 {
case 5:
cinGetline();
 }
 switch (c)
 {
 case 6:
 typecast();
 }
 switch (c)
 {
 case 7:
 conditional();
 }
 switch (c)
 {
 case 8:
 logical();
 }
 switch (c)
 {
 case 9:
 loop();
 }
 switch (c)
 {
 case 10:
 randomnumgen();
 }
 switch (c)
 {
 case 11:
 errors();
 }
 switch (c)
 {
 case 12:
 debugging();
 }
 switch (c)
 {
 case 13:
 math();
 }
 switch (c)
 {
 case 14:
 decomposition();
 }
 switch (c)
 {
 case 15:
 scope();
 }
 switch (c)
 {
 case 16:
 passMechanisms();
 }
 switch (c)
 {
 case 17:
 overloadingFunction();
 }
 switch (c)
 {
 case 18:
 strings();
 }
 switch (c)
 {
 case 19:
 recurse();
 }
 switch (c)
 {
 case 20:
 multiarray();
 }
 switch (c)
 {
 case 21:
 dynarray();
 }
 switch (c)
 {
 case 22:
 argue();
 }
 switch (c)
 {
 case 23:
 structs();
 }
 switch (c)
 {
 case 24:
 volume();
 }
 switch (c)
 {
 case 25:
 pointarray();
 }
 switch (c)
 {
 case 26:
 pointstruct();
 }
 switch(c)
 {
 case 27:
 calcount();
 }
 switch (c)
 {
 case 28:
 namegame();
 }
 switch (c)
 {
 case 29:
 vect();
 }
 switch (c)
 {
 case 30:
 construction();
 }
 switch(c)
 {
 case 31:
 overloadOperators();
 }
 switch (c)
 {
 case 32:
 STLboost();
 }
 switch (c)
  {
 case 33:
 Poly();
  }
  switch (c)
  {
  case 34:
  inherit();
  }
  switch (c)
  {
  case 35:
  except();
  }
  switch (c)
  {
  case 36:
  projectreview();
  }
  switch (c)
  {
  case 37:
  extracredit();
  }
  switch (c)
  {
  case 38:
  headerfile();
  }
  switch (c)
  {
  case 39:
  fileIO();
  }
  switch (c)
  {
  default:
  cout<<"Press enter to continue"<<endl;
  char chChar = getchar();
        if(chChar == 'x')
            break;
  Menu();
  }
cin >> ans;
}
while ('x' == ans || 'x' == ans);

}

void    clearScreen()
{
  for (int i=0; i<=256; i++)
  {
      cout<<endl;
  }
}




void Binary (){
char review;

cout << endl;
cout << "Welcome to the Binary review!" <<endl;
cout << "In the coding, when numbers, letters or words are represented"
		"by a specific group of symbols, it is said that the number, letter"
		"or word is being encoded. The group of symbols is called as a code."
		"The digital data is represented, stored and transmitted as group of "
		"binary bits. This group is also called as binary code. The binary code "
		"is represented by the number as well as alphanumeric letter" <<endl;
cout <<endl;
cout << "Binary code comes in 0's and 1's, or in other words, base 2 " <<endl;
cout << endl;
cout << "An example is the number 101010" <<endl;
cout << "If we start on the far right side and traverse to the far left, each number"
		"has a value. The first number is the 'ones' category, then the next number"
		"is the 'twos' category, then 'fours', 'eights' ,'sixteenth', 'thirty-seconds'"
		"and so on and so forth having it multiply by two each time." << endl;
cout<<endl;
cout<< "So we if we take 101010, we have 0 'ones', 1 'twos', 0 'fours', 1 'eights'"
	    " 0 'sixteenths', and 1 'thirty-seconds'. This would total up to 2+8+32 = 42" <<endl;
cout << " 101010 is equivalent with 42" <<endl;
cout << endl;

cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
cin.clear();
Menu();
}
}

void twosCompliment(){
char review;
cout << endl;
cout << "Two's complement is a mathematical operation on binary numbers, as well as a "
		"binary signed number representation based on this operation. Its wide use in computing"
		"makes it the most important example of a radix complement" <<endl;
cout << endl;
cout << " To get the two's complement negative notation of an integer, you write out the number"
		"in binary.You then invert the digits, and add one to the result." <<endl;
cout << endl;
cout << "An example would be having 01101" <<endl;
cout << "Inverted would be 00010" <<endl;
cout << "Adding one to it would be 0011" <<endl;
cout << "so 01101 is 13, while 10011 would be -13 in a 5 bit binary "<<endl;
cout << endl;
cout << "If we did this in 4 bit binary, we would get overflow" <<endl;
cout << endl;

cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

void macro(){
char review;
cout << endl;
cout << "Today is the "<<__DATE__<<endl;
cout << "The time is "<<__TIME__<<endl;
cout << "This exact line is featured on "<<__LINE__<<endl;

cout << "Time, Date, and Line number were used as a predefined macro" <<endl;
cout << endl;

cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

void simpleOutput(){
char review;
cout << endl;
cout << "How do you tell an introverted computer scientist"<<endl;
cout << "from an extroverted computer scientist?" <<endl;
cout << string(3, '\n');
cout << "An extroverted computer scientist looks at your shoes when"
        " he talks to you."<<endl;
cout << string(3, '\n');
cout << "Why do programmers always mix up Halloween and Christmas?"<<endl;
cout << string(3, '\n');
cout << "Because Oct 31 = Dec 25!" <<endl;
cout << string(3, '\n');
cout << "(Octal 31 = Decimal 25...) Yeah I went there..." <<endl;\
cout << endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

void cinGetline (){
char review;
string name;
int g;

cout << endl;
cout << "What is your name?" <<endl;
getline(cin, name);
cout << "Your name is "<<name<<"!"<<endl;
cout << endl;
cout << "Enter some  numbers!"<<endl;
cin >> g;
cout << "You entered" <<g<< "!"<<endl;
cout<<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

void typecast(){
char review;
cout <<endl;

short int a = 6;
int		b = 5.;
long int	c = 7;
float	d = 7.561;
double	e = 8.001;
long double	f = 8.3450;
char g = 'a';
string h = "abcdef";
bool i = true;

cout<< "Examples of typecast is a short "<<a<< ",int "<<b<<
        " ,long  "<<c<<", float  "<<d<<", double  "<<e<<",  long double  "
        <<f<<", char letter  "<<g<<", string  "<<h<<
        " , and finally bool  "<<i<<endl;
cout<<endl;
cout<< "Make sure to check the code to understand how each is used"<<endl;
cout<< "Short is 2 bytes, int/long/float is 4 bytes, double is 8 bytes"
        " long double is 10 bytes, char is 1 byte, and bool is 1 byte" <<endl;
cout << endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

void conditional(){
char review;
int num;
int x,y = 10;
cout<<endl;

cout<< "A conditional is basically setting the condition of how it will branch off" <<endl;
cout<< "For example lets take the number 10" <<endl;
cout<< "Enter a number that is greater than 10"<<endl;
cin >> num;

if (num >10)
{
cout << "You have entered a number greater than 10"<<endl;
cout <<endl;
}
if (num==10)
{
cout <<"Smartass :)"<<endl;
cout<<endl;
}
if (num < 10) {
cout << "Seriously? Enter a number more than 10 next time" <<endl;
cout <<endl;
}

cout << "Here I made three options, as the condition was spit out a different 'cout' if  the number was "
		"either above, below, or exactly 10" <<endl;
cout <<endl;

cout << "The conditional can also be written as exp 1 ? exp 2 : exp 3;" <<endl;
cout << "An example is the following" <<endl;
cout << "x = (y < 10) ? 30 : 40;   where x and y are 10" <<endl;
x = (y<10) ? 30: 40;
cout << "value of x: "<<x<< endl;
cout <<endl;
cout << "Make sure to check the code to understand too!" <<endl;
cout << endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

void logical(){
char review;
cout<<endl;
int x = 5;
int y = 6;
cout << "x = "<<x<<endl;
cout << "y = "<<y<<endl;
x = x + y;
cout << "x=x+y"<<endl;
cout << "x = "<<x<<endl;
y = x * y;
cout << "y= x*y"<<endl;
cout << "y = "<<y<<endl;
x = x - y;
cout << "x=x-y"<<endl;
cout << "x = "<<x<<endl;
cout << endl;
cout << "Notice how x and y act throughout this calculation :)" <<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

void loop(){
char review;
int num;
int number;
string word;
cout <<endl;

cout << "There are three different loops: The While loop, the do-While loops, and "
		"the For loops. They all have their advantages. The do-While has to run at least"
		" once for it to work, and the for loop can be used to do 1000 loops in one line."
		" The while loop doesn't necessarily have to run at all. " <<endl;
cout<<endl;

cout << "Example of a while loop" <<endl;
cout << "How many times do you truly want to repeat this loop?"<<endl;
cin >> num;

while ( num > 0 )
{
cout << " This will loop " <<num << " times " <<endl;
num = num -1;
}
cout<<endl;
cout << "An example of a do-while loop is" <<endl;
cout << "How many times do you truly want to repeat this loop?"<<endl;
cin >> num;

do
{
cout << " This will loop " <<num << " times " <<endl;
num = num -1;
} while (num > 0 );
cout <<endl;
cout << "do-While will run it at least once compared to while" <<endl;
cout << "Example of a for loop" <<endl;
cout << "Enter a word"<<endl;
cin >>  word;

for (int i = 0; i<10; i++)
{
    cout << word <<endl;
}

cout << endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

void randomnumgen (){
char review;
cout<<endl;
int min;
int max;




		cout<< "Welcome to the random number generator"<<endl;
		cout<< "Please enter your lowest range number!"<<endl;
		cin>>min;
		cout<< "Please enter your highest range number!"<<endl;
		cin>>max;

		srand(time(0));
		int random = rand()%max+min;
		cout<< "A random number " <<random<<" was picked between " <<min<<" and "<<max<<""<<endl;

cout << endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

void errors(){
char review;
cout<<endl;
cout<< "There are a few different type of errors" <<endl;
cout<< "Syntax error comes from violation the grammatical rules of the program. "<<endl;
cout<< "An example of this would be not having std namespace for a cout" <<endl;
cout<<endl;
cout<<"Logic errors come from the program operating not in its intended ways"<<endl;
cout<<"For example, a+b*2 and (a+b)*2 will give two different results"<<endl;
cout<<endl;
cout<<"Run time errors generally mean lacking the memory to run."<<endl;
cout<<"This is where the joke of 'stop torrenting porn' comes from whening playing online games"<<endl;
cout<<endl;
cout<<"Out of all of these, I am most guilty of the Logic errors with human input"<<endl;
cout << endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

void debugging(){
char review;
cout<<endl;
cout<<	"The trick to debugging is to think that the user that is on your program is "
        "doing everything in their power to make your program break. It's a pain,"
        "but its true."<<endl;
cout<< endl;
cout<< "The ones I notice the most that have caught me in the past is character input    with numbers"
		" and number input for characters. I still don't know how to exactly solve this problem. "<<endl;
cout<<endl;
cout<< "Other methods is using the try/throw/catch method which doesn't make it to the  live version in"
		" my programs usually. I don't use return -1 due to my void          functions being used all the time. "<<endl;
cout<<endl;
cout<< " The rest is making it as user proof as possible. I used cases for the menu, and have it organized "
		" in voids to see where my errors comes from. It is also in   ythe design that I can build up from each instance"
		" of adding new void functions to the previous ones." <<endl;
cout<<endl;
cout<< "Basically, its all in the design in the end" <<endl;
cout << endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
int multiplication (int a, int b)
{
int r ;
r = a*b;
cout<< "r= a*b"<<endl;
cout<< "This is the function multiplication"<<endl;
cout<< "Now I am returning r to void math"<<endl;
cout<<endl;
return r;
}
void math()
{
char review;
int x;
x = multiplication (45,54);
cout<< "Received input from int multiplication" <<endl;
cout<< "The answer is "<< x<<endl;
cout << endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
void decomposition()
{
 char review;
 cout<< endl;
 cout<< "This final project was a result of functional decomposition" <<endl;
 cout<< "My main aim was to make it as simple to grade as possible" <<endl;
 cout<< "The end result was me splitting each item into its own category"<<endl;
 cout<< "even though it probably didn't need it" <<endl;
 cout<<endl;
 cout<< "Here is another joke"<<endl;
 cout<<endl;
 cout<<"How many computer programmers does it take to change a light bulb?"<<endl;
 cout<<string(3,'\n');
 cout<<"None, its a hardware problem"<<endl;
 cout<<string(5,'\n');
 cout<<"A programmer is at work when his wife calls and asks him to go to the store"<<endl;
 cout<<"She says she needs a gallon of milk, and if they have fresh eggs, buy a dozen"<<endl;
 cout<<endl;
 cout<<"He comes home with 12 gallons of milk"<<endl;
 cout << endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
void scope()
{
char review;
cout<<endl;
cout<<"A scope is a region of the program and broadly speaking there are three places,"<<endl;
cout<<"where variables can be declared:" <<endl;
cout<<"(1) Inside a function or a block which is called local variables,"<<endl;
cout<<"(2) In the definition of function parameters which is called formal parameters."<<endl;
cout<<"(3) Outside of all functions which is called global variables."<<endl;
cout<<endl;
cout<< "Its best practice to do only 1 and 2, as 3 can cause bugs in the program"<<endl;
cout<< "As the code gets bigger, the global variables become more dangerous. Imagine if I were to"
        " use int x in all my void functions as a global parameters... It would be a mess!"<<endl;
cout<<endl;
cout<<endl;
cout<<"Another round of jokes!"<<endl;
cout<<endl;
cout<<"There are 10 types of people in the world - those who understand tertiary,"<<endl;
cout<<"those who don't, and those who thought this was a binary joke"<<endl;
 cout << endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
void passMechanisms()
{
char review;
cout<<endl;
cout<<"There are three passing mechanisms. Pass by reference/value/pointer "<<endl;
cout<<"First we will pass by value, the default method of c++"<<endl;
cout<<endl;
cout<<"With pass by value, changes are made to the parameter inside the function have  no"
	  " effect on the argument"<<endl;
cout<<endl;
cout<<"I will show all three styles by swapping. Starting with pass by value... "<<endl;
cout<<endl;

int a = 1;
int b = 2;
cout<<"Before the swap"<<endl;
cout<< "a = "<<a<<endl;
cout<< "b = "<<b<<endl;

swap (a,b);
cout<<endl;
cout<<"After the swap"<<endl;
cout<< "a = "<<a<<endl;
cout<< "b = "<<b<<endl;
cout<<endl;

cout<<"Second, we will do the pass by reference"<<endl;
cout<<endl;
cout<<"The reference method of passing arguments to a function copies the reference of an argument "
	" into the formal parameter. Inside the function, the reference is   used to access the actual "
	"argument used in the call. This means that changes made to the parameter affect the passed argument."<<endl;
cout<<endl;
cout<<"Pass by pointer is pretty much the same as pass by reference, but"<<endl;
cout<<"instead of &, you put *  and add & to the swap part. "<<endl;
cout<<endl;
cout<<"References are best in function parameters while Pointers are best in data structures and algorithms"<<endl;

cout << endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

void swap(int x, int y)
{
	int temp;
	temp = x;
	x=y;
	y=temp;
	return;
}
void swap(int &x, int &y)
{
	int temp;
	temp = x;
	x=y;
	y=temp;
	return;
}

int sum(int a, int b)
{
return a+b;
}
double sum(double a, double b)
{
return a+b;
}
void overloadingFunction()
{
char review;
cout<<endl;
cout<<"With Function overloading, two functions can have the same name if "<<endl;
cout<<"the parameters are different" <<endl;
cout<<"The sum of 5 + 6 is"<<endl;
cout<< sum(5,6)<<endl;
cout<<"The sum of 7.0 +8.0 is "<<endl;
cout<< sum(7.0,8.0)<<endl;;


cout<< "In this example, I am using an int and a double to overload function 'sum'"<<endl;
cout << endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
void strings(){
char review;
string str1 = "Hello";
string str2 = "World";
string str3;

str3 = str1+str2;
cout<<str1<<endl;
cout<<str2<<endl;
str3 = str1 + str2;
cout<<"str1 + str2 = " <<str3<<endl;
cout << endl;
cout << "Joke time!"<<endl;
cout<<endl;
cout << "These two strings walk into a bar and sit down. The bartender says, 'So what'll it be?'"<<endl;
cout << "The first strign says 'I'll think I'll have a beer uag dk^CjfdLk jk3s d#f67howe%^U r89nvy owmc63^Dz x.xvcu"<<endl;
cout << "'Please excuse my friend' the second string says, 'He isn't null-terminated"<<endl;

cout<<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
int Pins(int rows) {
    if (rows == 1 || rows==0) {
        return 1;
    } else {
        return rows + Pins(rows-1);
    }
}
void recurse(){
char review;

	int number;
	cout << "To understand what recursion is, you must first understand recursion."<<endl;
    cout << "Please pick a number to see bowling pin count ";
	cin >> number;
	cout << Pins(number) << endl;
	cout <<"Isn't recursion fun?"<<endl;
	cout<<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
void multiarray(){
char review;
cout<<endl;


for (int i = 0; i<10; i++)
{

    for (int j=0; j<10; j++)
    {
    cout<<0;
    }
    cout<<endl;
}
	cout<<endl;
cout << "A ten by ten array, best done by nested loops"<<endl;
cout <<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
void dynarray(){
char review;
cout<<endl;

int size;
cout<<"How big do you want your array?"<<endl;
cin>> size;
int *array = new int[size];
for (int i =0; i<size; i++)
{
    for (int j=0; j<size; j++)
    {
    cout<<size;
    }
    cout<<endl;
}
cout<<endl;
delete [] array;
cout<< "Always remember to delete"<<endl;


cout <<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
void argue(){
char review;
cout<<endl;
cout<<"Looks like I have to use int main... way to go!"<<endl;
cout<<"Enter a number in the command line :)"<<endl;
cout<<endl;
cout<<"Joke time!"<<endl;
cout<<endl;
cout<<"What do you get when you cross a joke with a rhetorical question?"<<endl;
cout<<endl;



cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
struct Muscles
{
char legs[30];
char arms[30];
char chest[30];
char backs[30];
char shoulder[30];
char abdominal[30];
};


void structs(){
char review;
struct Muscles Muscles1;

strcpy(Muscles1.legs, "Quadriceps");
strcpy(Muscles1.arms, "Bicep Brachii");
strcpy(Muscles1.chest, "Pectoralis Major");
strcpy(Muscles1.backs, "Latissimus Dorsi");
strcpy(Muscles1.shoulder, "Posterior Deltoid");
strcpy(Muscles1.abdominal, "Rectus Abdominis");

printMuscles ( &Muscles1 );
cout<<endl;

cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}


void printMuscles( struct Muscles *muscle)
{
cout << "A leg muscle :" <<muscle->legs<<endl;
cout << "An arm muscle :"<<muscle->arms<<endl;
cout << "A chest muscle :"<<muscle->chest<<endl;
cout << "A back muscle :"<<muscle->backs<<endl;
cout << "A shoulder muscle :"<<muscle->shoulder<<endl;
cout << "A stomach muscle :"<<muscle->abdominal<<endl;
cout<<endl;

}

class Hypertrophy
{
public:
    int sets;
    int reps;
    int weight;
};

void volume(){
char review;
Hypertrophy hypertrophy1;
Hypertrophy hypertrophy2;
int volume = 0;

hypertrophy1.sets = 3;
hypertrophy1.reps = 12;
hypertrophy1.weight = 135;

hypertrophy2.sets = 10;
hypertrophy2.reps = 10;
hypertrophy2.weight= 95;

volume = hypertrophy1.sets * hypertrophy1.reps * hypertrophy1.weight;
cout << "Volume of hypertrophy of 3 sets of 12 at 135 pounds: "<<volume<<endl;
cout<<endl;
volume = hypertrophy2.sets * hypertrophy2.reps * hypertrophy2.weight;
cout << "Volume of hypertrophy of 10 sets of 10 at 95 pounds: "<<volume<<endl;
cout<<endl;

cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
void pointarray(){
char review;
int caffeine [5] = {100, 200,300,400,500};
int *e;
e=caffeine;
for (int i = 0; i < 5; i++)
{
    cout<< i<<" ";
    cout<< *(e+i)<<endl;
}
cout<<endl;

cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
void pointstruct(){
cout<<endl;
char review;
cout<<"Check out (23) on structs for the pointer usage!"<<endl;
cout<<endl;
cout<<"Joke time!"<<endl;
cout<<endl;
cout<<"A pizza with depth a and radius z has a volume of pi z z a."<<endl;
cout<<endl;
cout<<endl;

cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

class Calories
{
    public:
    Calories(int c=4, int f=9, int p=4, int a =7)
    {
        carbohydrate =c;
        fat = f;
        protein = p;
        alcohol = a;
    }
    int Counter()
    {
    return carbohydrate + fat + protein + alcohol;
    }
    private:
    int carbohydrate;
    int fat;
    int protein;
    int alcohol;
};

void calcount(void)
{
char review;
    Calories caloric(456, 678, 343, 100);
    Calories *ptrCalories;
    ptrCalories = &caloric;

cout<< "Caloric content is: " << ptrCalories->Counter() <<endl;
cout<<endl;
cout<<"I guarantee you this is incorrect in terms of calorie counting"<<endl;
cout<<"At least it is using a pointer though!"<<endl;
cout<<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

namespace Ryan{
void func1(){
int a = 1;
int b = 2;
int c = 0;
c= a + b;
cout <<a<<" + "<<b<<" = "<<c<<endl;
}
}
namespace Ryan{
void func2(){
int a = 5;
int b = 9;
int c = 0;
c= a + b;
cout <<a<<" + "<<b<<" = "<<c<<endl;
}
}
void namegame(){
char review;
Ryan::func1();
Ryan::func2();
cout<<endl;

cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
void vect(){
char review;

 int audience;
 cout << "Every 5th person that hears my bad jokes will die:"<<endl;
 cout << "How many people are waiting to hear my joke?"<<endl;
 cin >> audience;

 vector<int> v;

 for (int i=0; i< audience; i++)
 {
   v.push_back(i+1);
 }

 int count = 1;
 while (v.size() >1){
   for (int i=0; i< v.size();)
   {
     if (count == 5){
       v.erase(v.begin()+i);
       count =0;
     }
     else {
       i++;
     }
     count ++;
   }
 }

cout<< "The worst spot you can be at is " <<v.at(0) <<endl;
cout<<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

class Weight
{
public:
	int getWeight(void);
	Weight( int wght);
	Weight(const Weight &obj);
	~Weight();
private:
	int *ptr;
};

Weight::Weight(int wght)
{
cout << "Constructor + pointer"<<endl;
ptr = new int;
*ptr = wght;
}
Weight::Weight(const Weight &obj)
{
cout <<"Copy constructor"<<endl;
ptr = new int;
*ptr = *obj.ptr;
}

Weight::~Weight(void)
{
cout<<"Freeing memory"<<endl;
delete ptr;
}
int Weight::getWeight(void)
{
return *ptr;
}
void display(Weight obj)
{
cout<< "Weight of individual:" <<obj.getWeight()<<endl;
}
void construction(){
char review;
Weight weight(200);
display(weight);
cout<<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
class overload
{
public:
    int a;
    int b;
    overload operator+(const overload& obj);
    void operator=(const overload& obj);
};

void overload::operator=(const overload& obj)
{
    (*this).a = obj.a;
    (*this).b = obj.b;

    return;
}

overload overload::operator+(const overload& obj2)
{
    overload tmp_obj = *this;
    tmp_obj.a = tmp_obj.a + obj2.a;
    tmp_obj.b = tmp_obj.b + obj2.b;
    return tmp_obj;
}


void overloadOperators(){
char review;
cout<<endl;

overload obj1, obj2, obj3;

obj1.a = 1;
cout<<obj1.a<<endl;
obj1.b = 1;
cout<<obj1.b<<endl;

obj2.a = 2;
cout<<obj2.a<<endl;
obj2.b = 2;
cout<<obj2.b<<endl;

obj3.a = 0;
obj3.b = 0;

obj3 = obj1 + obj2;

cout<<obj3.a<<endl;
cout<<obj3.b<<endl;
cout<<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
void STLboost(){
char review;
cout<<endl;
cout<<"Unfortunately, I could not figure out how to use boost"<<endl;
cout<<"For STL usage, I used a good amount in the vector portion"<<endl;
cout<<"I guess that means its time for another joke!"<<endl;
cout<<endl;
cout<<"A guy walks into a bar and asks for 1.4 root beers. The bartender says "
"'I'll    have to charge you extra, that's a root beer float'. The guy says' In that"
" case, better make it a double."<<endl;
cout<<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

class Shape{
	protected:
	int width;
	int height;
	public:
	Shape( int a=0, int b=0)
	{
		width = a;
		height = b;
	}
	virtual int area()
	{
	cout<<"Parent class"<<endl;

	}
};
class Square: public Shape{
	public:
		Square(int a=0, int b=0):Shape(a,b) {}
		int area()
		{
		cout<< "Square class area"<<endl;
		return (width * height);
		}
};
class Rectangle: public Shape{
   public:
      Rectangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      {
         cout << "Rectangle class area" <<endl;
         return (width * height);
      }
};
class Triangle: public Shape{
   public:
      Triangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      {
         cout << "Triangle class area" <<endl;
         return (width * height / 2);
      }
};
void Poly(){
char review;

Shape *shape;
Square squ(7,7);
Rectangle rec(10,7);
Triangle tri(10,5);
shape = &squ;
shape->area();
shape=&rec;
shape->area();
shape=&tri;
shape->area();
cout<<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

class Shapes
{
   public:
      void setWidth(int w)
      {
         width = w;
      }
      void setHeight(int h)
      {
         height = h;
      }
   protected:
      int width;
      int height;
};


class Rectangles: public Shapes
{
   public:
      int getArea()
      {
         return (width * height);
      }
};

class Squares: public Shapes
{
   public:
      int getArea()
      {
         return (width * height);
      }
};
class Triangles: public Shapes
{
   public:
      int getArea()
      {
         return ((width * height)/2);
      }
};



void inherit(){
char review;

   Rectangles Rect;

   Rect.setWidth(5);
   Rect.setHeight(7);

   Squares squ;

   squ.setWidth(8);
   squ.setHeight(8);

   Triangles tri;

   tri.setWidth(10);
   tri.setHeight(12);

   

 cout << "Total area Rectangle: " << Rect.getArea() << endl;
  cout << "Total area Square: " << squ.getArea() << endl;
   cout << "Total area Triangle: " << tri.getArea() << endl;


cout<<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
int division(int a, int b)
{
   if( b == 0 )
   {
      throw "You can't divide by 0";
   }
   return (a/b);
}

void except(){
char review;

int x = 1;
int y =0;
int z = 0;

try{
z=division(x,y);
cout<<z<<endl;

}catch (const char* msg) {
     cerr << msg << endl;
   }

cout<<"More jokes!"<<endl;
cout<<"A programmer puts two glasses on his bedside table before going to sleep. A full one, "
      "in case he gets thirsty, and an empty one, in case he doesnt."<<endl;

cout<<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}

string ToBeSolved(string word, string unsolved, char letter);
char GetNewGuess (string PrevGuesses);
string ToBeSolved( string word );
void playGame();
void playAgain();

void projectreview(){
cout<<endl;
playGame();

}
string ToBeSolved( string word, string unsolved, char letter )
{
    for (int i=0; i < word.size(); i++)
	{
        if (word.at(i) == letter)
		{
            unsolved.at(i) = letter; 
        }
    }
    return unsolved;
}

char GetNewGuess( string PrevGuesses )
{
    bool DoesItWork = false;
    char character;

    while (DoesItWork == false)
	{
        cout << "What is your guess? ";

		character = "abcdefghijklmnopqrstuvwxyz "[rand() % 26];

        while (DoesItWork == false)
		{
            if (PrevGuesses.find( character ) == string::npos )
			{
                DoesItWork = true;  
            }
			else
			{
                cout << "That does not work! Enter a new guess ";
                character = "abcdefghijklmnopqrstuvwxyz "[rand() % 26]; 
            }
        }
    }

    return character;
}

string ToBeSolved( string word )
{
    string unsolved;
    for (int i = 0; i < word.size() ; i++)
	{
        if (isalpha( word.at(i) ))
			{
            unsolved = unsolved + "~";  
			}
		else
			{
            unsolved = unsolved + word.at(i); 
			}
    }

    return unsolved;
}

static const char alpha[] =

"abcdefghijklmnopqrstuvwxyz ";

int stringLength = sizeof(alpha) - 1;

char genRandom()
{
    return alpha[rand() % stringLength];
}



void playGame()
{
string word;
	string unsolved;
	string ExtraCredit;
    char letter;
	string PrevGuesses;
    int lives = 10;
	bool win = false;



	cout<< "Welcome to the word guessing game" << endl;
	cout<< "Computer one, please enter your secret word" <<endl;

	srand(time(0));
	for (unsigned int z=0; z<20; z++)
	{
	word += genRandom();
	}

    cout << string(50, '\n');
    unsolved = ToBeSolved( word );

    cout << "Your random word  " << unsolved << endl;

    letter = GetNewGuess( PrevGuesses ); 
    PrevGuesses = PrevGuesses + letter;
    unsolved = ToBeSolved( word, unsolved, letter );

    if (word.find( letter ) == string::npos)
		{
        lives--; 
		}

    if (unsolved == word)
		{
        win = true;
		}

    while (lives > 0 && win == false )
		{
        cout << string(50, '\n');

        cout << "So far you have... " << unsolved << endl;
		cout << string(1, '\n');
		srand(time(0));



		cout<<string(1, '\n');

        cout << "Guesses as of this moment: " << PrevGuesses << endl;
        cout << "Current lives: " << lives << endl;

        letter = GetNewGuess( PrevGuesses );
        PrevGuesses = PrevGuesses + letter;
        unsolved = ToBeSolved( word, unsolved, letter );


        if (word.find( letter ) == string::npos)
			{
            lives--;
			}

        if (unsolved == word)
			{
            win = true;
			}
    }

    cout << string(50, '\n');
    cout << "Word: " << unsolved << endl << endl;
    cout << "Guessed so far: " << PrevGuesses << endl;
    cout << "Wrong guesses left: " << lives << endl << endl;

    if (win == false)
		{
        cout << "You have failed" << endl;
		cout << "The word was : " << word << endl;
		}
	else
		{
        cout << "You have guessed the correct word" << endl;
		}
		playAgain();
}

void playAgain()
{
   char playAgain;
   cout<<"Do you want to play again?"<<endl;
   cin>>playAgain;
   cin.ignore(256, '\n');

   if (playAgain == 'y' || playAgain == 'Y')
   {
       playGame();
   }

}
void extracredit(){
char review;

cout<< "Currently in construction"<<endl;
}
void headerfile()
{
char review;
    cout << "Namespace"<<endl;

    cout << "Calling namespace Farberr by A::f();"<<endl;
    Farberr::f( );
   
    cout << "Calling 'using namespace A' f();"<<endl;
    {
        using namespace Farberr;
         f( );
      
    }
    cout << "Calling 'using A::f ,  f()/g();"<<endl;
    using Farberr::f;
   
    f( );

cout<<endl;
cout<< "main : Final.cpp final.cpp "<<endl;
cout<< "	g++ Final.cpp final.cpp  -o main "<<endl;
cout<< "This is the makefile that was used for the header" <<endl;
cout<<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}
void fileIO(){
char review;


int count=0;
int n;
string num;
stringstream stream;
vector<int> values;
vector<int> :: iterator i;


ifstream ifs;
ifs.open("randomnumbers");
if (ifs.fail())
{
cout << "Input file failed" <<endl;
}

while (getline(ifs,num))
{
	stream << num;
		while (stream >> n)
		{
		values.push_back(n);
		count ++;
		}
}
	cout << " Count is " << count << endl;

	for (i = values.begin(); i !=values.end(); i++)
		{
		cout << *i << " " <<endl;
		}
cout<<endl;
cout<<endl;
cout << "Hit 'y' whenever you are ready to return to the main menu" <<endl;
cin >> review;

if (review == 'y' || review == 'Y') {
clearScreen();
Menu();
}
}




