// User prompted to guess for a number b/w 1 and 1000

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randGame(); // prototype
bool isRight( int, int ); // prototype

// func randGame selects int b/w 1 and 1000
// and checks the user's answer

void randGame()
{
	int answer; // the random int
	int guess; // the user input
	char response; // prompty 'y' or 'n' to continue

	// user loop that runs until user quits w/ 'n'
	do
	{
		// generates the correct answer
		answer = 1 + rand() % 1000;

		// console output/user prompt
		cout << "Here is a number between 1 & 1000!\n"
			 << "Try and guess what number it is.\n"
			 << "Please type a number. " << endl << "? ";
		cin >> guess;

		// continues untill user gets the right number
		while (!isRight ( guess, answer ) )
			cin >> guess;

		// asks user if they want to play again
		cout << "\nLooks like you got it!\n"
			 << "Play again (y or n)? ";
		cin  >> response;

		cout << endl;
	} while ( response == 'y' );
} // end func randGame
