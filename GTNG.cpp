#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void checkme(int &themagicnumber, int &holder){

char ans;

	if (holder > themagicnumber){
		cout << themagicnumber << "---" << holder << endl;
		cout << "Too high. Try again" << endl;
		}
	else if (holder < themagicnumber){
		cout << themagicnumber << "---" << holder << endl;
		cout << "Too low. Try again." << endl;
		}
	else{
		cout << "YOU WIN, YOU GUESSED THE NUMBER!!!" << "Play again?" << endl;
		cin >> ans;
	}
}

int main(){
	int holder; //userinput
	int themagicnumber; //var to hold the magic number
	srand( time( 0 ) ); 
	//generate random number between 1-1000
	themagicnumber = rand() % 1000 + 1;
	cout << "I have a number between 1 and 1000. Can you guess my number?"<< endl;
	cout << "==GUESS THE NUMBER GAME==" << endl;
	cout << themagicnumber << endl;
	//user input, into variable
	cin >> holder;
	checkme(themagicnumber, holder);	
	return 0;
}


