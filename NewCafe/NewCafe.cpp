// NewCafe.cpp : Defines the entry point for the application.
//

#include "NewCafe.h"
#include <string>
#include <iostream>

using namespace std;

// realized float may be better for this
static float total;
static float tax = 2.50;
// actual food offered
double bagel = 2.25;
double fountaindrink = 1.50;
double breakfastsandwich = 4.35;
double donut = 1.25;
double croissant = 3.00;
char answer = 0;
int amount = 0;

int main()
{
	


	cout << "Welcome to the " << endl;
	cout << R"(
    __  ___            _            __   ______      ____   
   /  |/  /___ _____ _(_)________ _/ /  / ____/___ _/ __/__ 
  / /|_/ / __ `/ __ `/ / ___/ __ `/ /  / /   / __ `/ /_/ _ \
 / /  / / /_/ / /_/ / / /__/ /_/ / /  / /___/ /_/ / __/  __/
/_/  /_/\__,_/\__, /_/\___/\__,_/_/   \____/\__,_/_/  \___/ 
             /____/                                          )" << '\n';
	cout << "We are excited for you to be here today!" << endl;
	cout << "Here's our menu: " << endl;
	cout << R"(               Bagel -- $2.25
               Fountain Drink -- $1.50
               Breakfast Sandwich -- $4.35
               Donut -- $1.25
               Croissant -- $3.00)" << '\n';

	cout << "Would you like to buy a bagel for $" << bagel << "? Please type in yes or no: ";
	string answer;
	std::cin >> answer;
	cout << "you type in: " << answer << ".";
	if (answer == "yes") {
		int amount;
		cout << "We have 12 bagels available?" << endl;
		cout << "How many did you want? Please type in a number 1 - 12." << endl;
		std::cin >> amount;
		cout << "You entered: " << amount << ".";
		cout << "Your total is $" << amount * bagel + total + tax << ".";
	}
	else if (answer == "no") {
		cout << "Awwww, you don't want bagels :( " << endl;
		cout << "Your total is $" << total << ".";
	}
	
	cout << "Would you like to buy a bagel for $" << fountaindrink << "? Please type in yes or no: ";
	string answer;
	std::cin >> answer;
	cout << "you type in: " << answer << ".";
	if (answer == "yes") {
		int amount;
		cout << "We have 6 fountain drinks available?" << endl;
		cout << "How many did you want? Please type in a number 1 - 12." << endl;
		std::cin >> amount;
		cout << "You entered: " << amount << ".";
		cout << "Your total is $" << amount * bagel + total + tax << ".";
	}
	else if (answer == "no") {
		cout << "Awwww, you don't want bagels :( " << endl;
		cout << "Your total is $" << total << ".";
	}
	
	
}
