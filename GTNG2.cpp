#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessGame(); //init func
bool isCorrect( int, int ); //init


// guessGame generates numbers between 1 and 1000 and checks user's guess
void guessGame()
{
   int answer; 
   int guess; 
   char response; 

   do 
   {
      answer = 1 + rand() % 1000;

      cout << "Can you guess my number between 1 and 1000?\n" << "Please type your first guess." << endl;
      cin >> guess;

      while ( !isCorrect( guess, answer ) )
	{ 
        	cin >> guess;      
	}
      cout << "\nYou guessed the number!!!" << "Would you like to play again (y or n)? ";
      cin >> response;

      cout << endl;
   } 
   while ( response == 'y' ); //if not = y, then it quits, if response =y it loops back to the begging of function
   
}

bool isCorrect( int g, int a )
{
   // guess is correct
   if ( g == a )
      return true;

   // guess is incorrect; 
   if ( g < a )
      cout << "Too low. Try again.\n? ";
   else
      cout << "Too high. Try again.\n? ";

   return false;
}


int main()
{
   srand( time( 0 ) ); 
   guessGame();

   return 0; 
} 
