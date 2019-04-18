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





