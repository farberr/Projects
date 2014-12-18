/***********************************************************
* Author: Ryan Farber
* Date Created: 1/19/14
* Last Modification Date: 2/8/14
* Filename: Project four
* Overview: 3 games in 1 code
* Input:	computer does it all
* Output:	computer does it all
*
************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
using std::cin;
using std::cout;

void clearScreen();		// clears screen to make it a bit readable
void playAgain();		//play game 1 again
void playGame();		//the game menu
void gameMenu();		//Brings back to original screen

string ToBeSolved(string word, string unsolved, char letter);
char GetNewGuess (string PrevGuesses);		//For game 2
string ToBeSolved( string word );
void playGame1();

string ToBeSolved1(string word1, string unsolved1, char letter1);
char GetNewGuess1 (string PrevGuesses1);	//For game 3
string ToBeSolved1( string word1 );
void playGame2();


int main()
{
gameMenu();
	return 0;
}

void gameMenu()
{
char ans;
do
{
int gamechoice;


cout <<"Welcome to the Comp vs Comp game menu!" <<endl;
cout <<"Enter 1 to see two computers play number guess"<<endl;
cout << "Enter 2 to see two computers play word guess"<<endl;
cout <<"Enter 3 to see two computers play phrase guess"<<endl;
cout << "Press anything else to quit, I'll understand... " <<endl;

cin >>gamechoice;
cin.ignore();

switch (gamechoice)
 {
case 1:
playGame();
 }
switch (gamechoice)
 {
case 2:
playGame1();
 }
switch (gamechoice)
 {
case 3:
playGame2();
 }

cin >> ans;
}
while ('Y' == ans || 'y' == ans);

}

void playAgain()
{
  char playAgain;
  cout<<"Do you want to play again?"<<endl;
  cin>>playAgain;
  cin.ignore(256, '\n');

  if (playAgain == 'y' || playAgain == 'Y')
  {   clearScreen();
      playGame();
  }
  else
  {   clearScreen();
	  gameMenu();

}


}
void playAgain1()
{
  char playAgain1;
  cout<<"Do you want to play again?"<<endl;
  cin>>playAgain1;
  cin.ignore(256, '\n');

  if (playAgain1 == 'y' || playAgain1 == 'Y')
  {   clearScreen();
      playGame1();
  }
  else
  {   clearScreen();
	  gameMenu();

}


}
void playAgain2()
{
  char playAgain2;
  cout<<"Do you want to play again?"<<endl;
  cin>>playAgain2;
  cin.ignore(256, '\n');

  if (playAgain2 == 'y' || playAgain2 == 'Y')
  {   clearScreen();
      playGame2();
  }
  else
  {   clearScreen();
	  gameMenu();

}


}

void playGame()
{
    int guess;
    int n;
    int tries = 0;

cout << "Welcome to the guessing game. ";
cout << "Computer 1 please put in your secret number between 0 and 25."<<endl;

srand(time(0));
n = (1+(rand()%25+1)); // random number generated
cout<< n <<endl;
if (n < 1 or n>25)
{
cout<< "I'm sorry computer, I don't know how to program you to not do this, pick another number"<<endl;
srand(time(0));
int n = (rand()%25); // test to see if I programmed wrong
cout << n << endl;
}
cout<< "Computer 2, please guess Computer 1's number "<<endl;


int a = (1+(rand()%12-0)); // attempt to randomize the data more
int b = (1+(rand()%12-0));
guess = (a + b); // makes it a bit different
cout << guess <<endl;

while (guess!=n)
{
if (guess < n)
{
cout <<"Too low, Guess again" << endl;

a = (1+(rand()%12-0)); // attempt to randomize it more
   b = (1+(rand()%12-0));
   guess = (a + b);
   guess = guess + 1; // +1 to make it go higher
cout << guess <<endl;
tries++;

}
if (guess > n)
{
cout <<"Too high, Guess again" << endl;

a = (1+(rand()%12-0));
   b = (1+(rand()%12-0));
   guess = (a + b);
   guess = guess -1; // -1 to make it lower
cout << guess <<endl;
tries++;
}
}
if (guess==n)
{
cout << "You guessed it!"; // Hey! comp figured it out
tries++;
}

cout<<"It took you " <<tries<< " tries to get the secret number "<< n << endl;
playAgain(); // good indicator to see how many tries and the secret number
}

void    clearScreen()
{
  for (int i=0; i<=50; i++)
  {
      cout<<endl;
  }
}

string ToBeSolved( string word, string unsolved, char letter )
{
    for (int i=0; i < word.size(); i++)
	{
        if (word.at(i) == letter)
		{
            unsolved.at(i) = letter;  //fills in the choices
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

		character = "abcdefghijklmnopqrstuvwxyz"[rand() % 26]; //Gives a letter for the comp to guess

        while (DoesItWork == false)
		{
            if (PrevGuesses.find( character ) == string::npos )
			{
                DoesItWork = true;  // makes sure the letter doesn't repeat
            }
			else
			{
                cout << "That does not work! Enter a new guess ";
                character = "abcdefghijklmnopqrstuvwxyz"[rand() % 26]; //cin character for player version
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
            unsolved = unsolved + "~";  // puts ~ for phrase length
			}
		else
			{
            unsolved = unsolved + word.at(i); // updates phrase
			}
    }

    return unsolved;
}

static const char alpha[] =

"abcdefghijklmnopqrstuvwxyz";  // this creates the random string

int stringLength = sizeof(alpha) - 1;

char genRandom()
{
    return alpha[rand() % stringLength];
}



void playGame1()
{
string word;
	string unsolved;
	string ExtraCredit;
    char letter;
	string PrevGuesses;
    int lives = 1;
	bool win = false;



	cout<< "Welcome to the word guessing game" << endl;
	cout<< "Computer one, please enter your secret word" <<endl;

	srand(time(0));
	for (unsigned int z=0; z<15; z++) // this is needed to create the length of the word
	{
	word += genRandom();  // the finished random word
	}

    clearScreen();
    unsolved = ToBeSolved( word );

    cout << "Your random word  " << unsolved << endl;

    letter = GetNewGuess( PrevGuesses ); //The basic math I didnt get last time
    PrevGuesses = PrevGuesses + letter;
    unsolved = ToBeSolved( word, unsolved, letter );

    if (word.find( letter ) == string::npos)
		{
        lives--; // guesses overall
		}

    if (unsolved == word)
		{
        win = true;
		}

    while (lives > 0 && win == false )
		{
        clearScreen();

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

    clearScreen();
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
		playAgain1();
}

string ToBeSolved1( string word1, string unsolved1, char letter1 )
{
    for (int i=0; i < word1.size(); i++)
	{
        if (word1.at(i) == letter1)
		{
            unsolved1.at(i) = letter1;  //fills in the choices
        }
    }
    return unsolved1;
}

char GetNewGuess1( string PrevGuesses1 )
{
    bool DoesItWork = false;
    char character1;

    while (DoesItWork == false)
	{
        cout << "What is your guess? ";

		character1 = "abcdefghijklmnopqrstuvwxyz "[rand() % 26]; // notice the space, doesn't seem to bug it this time around

        while (DoesItWork == false)
		{
            if (PrevGuesses1.find( character1 ) == string::npos )
			{
                DoesItWork = true;  // makes sure the letter doesn't repeat
            }
			else
			{
                cout << "That does not work! Enter a new guess ";
                character1 = "abcdefghijklmnopqrstuvwxyz "[rand() % 26]; //cin character for player
            }
        }
    }

    return character1;
}

string ToBeSolved1( string word1 )
{
    string unsolved1;
    for (int i = 0; i < word1.size() ; i++)
	{
        if (isalpha( word1.at(i) ))
			{
            unsolved1 = unsolved1 + "~";  // puts ~ for phrase length
			}
		else
			{
            unsolved1 = unsolved1 + word1.at(i); // updates phrase
			}
    }

    return unsolved1;
}

static const char alpha1[] =

"abcdefghijklmnopqrstuvwxyz ";  // notice the space, this makes it into strings randomly

int stringLength1 = sizeof(alpha1) - 1;

char genRandom1()
{
    return alpha1[rand() % stringLength1];
}
void playGame2()
{
    string word1;
	string unsolved1;
    char letter1;
	string PrevGuesses1;
    int lives = 15;
	bool win = false;



	cout<< "Welcome to the word guessing game" << endl;
	cout<< "Computer one, please enter your secret word" <<endl;

	srand(time(0));
	for (unsigned int z=0; z<15; z++) // creates the phrase
	{
	word1 += genRandom1();
	}

    clearScreen();
    unsolved1 = ToBeSolved1( word1 );

    cout << "Your random word  " << unsolved1 << endl;

    letter1 = GetNewGuess1( PrevGuesses1 ); //The basic math I didnt get last time
    PrevGuesses1 = PrevGuesses1 + letter1;
    unsolved1 = ToBeSolved1( word1, unsolved1, letter1 );

    if (word1.find( letter1 ) == string::npos)
		{
        lives--; // guesses overall
		}

    if (unsolved1 == word1)
		{
        win = true;
		}

    while (lives > 0 && win == false )
		{
        clearScreen();

        cout << "So far you have... " << unsolved1 << endl;
		cout << string(1, '\n');
		srand(time(0));



		cout<<string(1, '\n');

        cout << "Guesses as of this moment: " << PrevGuesses1 << endl;
        cout << "Current lives: " << lives << endl;

        letter1 = GetNewGuess1( PrevGuesses1 );
        PrevGuesses1 = PrevGuesses1 + letter1;
        unsolved1 = ToBeSolved1( word1, unsolved1, letter1 );


        if (word1.find( letter1 ) == string::npos)
			{
            lives--;
			}

        if (unsolved1 == word1)
			{
            win = true;
			}
    }

    clearScreen();
    cout << "Word: " << unsolved1 << endl << endl;
    cout << "Guessed so far: " << PrevGuesses1 << endl;
    cout << "Wrong guesses left: " << lives << endl << endl;

    if (win == false)
		{
        cout << "You have failed" << endl;
		cout << "The word was : " << word1 << endl;
		}
	else
		{
        cout << "You have guessed the correct word" << endl;
		}
		playAgain2();
}
