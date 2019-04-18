#include <iostream>
#include <string>
#include <vector>
#include <random>
#include "functions.h"
//Create an Interactive Fiction game.
//Create a C++ program that uses more than one function.
//Control all your functions through the main function.
//Pass and return parameters to your functions.
//Your program must do something and be an interactive fiction game, it must not just demo functions.
//Have fun!

using namespace std;


int main()
{
	// Get character name from user
	string CharacterName;
	// Notice we have to catch the character name coming back from this function.
	// We do this with our characterName variable.
	CharacterName = GetCharacterName();
	// here we use char name
	welcomeUser(CharacterName);

	openingStory(CharacterName);

	randStroyandChoose();


	system("pause");
	return 0;




}





//this function randamizes the story and player choose
void randStroyandChoose()
{
	random_device rd; // obtain a random number from hardware
	mt19937 eng(rd()); // seed the generator
	uniform_int_distribution<> distr(0, 2); // define the range

	int myRandNumber = distr(eng);
	cout << myRandNumber;

	string bodyArray[3] = { "The body is filled with bullets.\n","The body is filled with stab wounds.\n","The body's skull is smashed in.\n" };
	string selected = bodyArray[myRandNumber];

	cout << selected;

	cout << "your weapons: Gun, Knife, Bat\n\n";
	string choose;
	cin >> choose;
	if (choose == "gun" && selected == bodyArray[0])
	{
		cout << "You found the murder weapon!\nYou Win!\n\n";
	}
	else if (choose == "bat" && selected == bodyArray[2])
	{
		cout << "You found the murder weapon!\nYou Win!\n\n";
	}
	else if (choose == "knife" && selected == bodyArray[1])
	{
		cout << "You found the murder weapon!\nYou Win!\n\n";
	}
	else if (choose != "gun", "bat", "knife")
	{
		cout << "invalid, pick gun, knife, or bat.\n\n";

	}
}