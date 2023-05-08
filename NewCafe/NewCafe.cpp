// NewCafe.cpp : Defines the entry point for the application.
//

#include "NewCafe.h"
#include <string>
#include <iostream>

using namespace std;
// ascii art is from https://textkool.com/en/ascii-art-generator?hl=default&vl=default&font=Slant&text=Magical%20Cafe
//used from euchre project and stack overflow such as user input
// realized float may be better for this
static float total;
static float tax = 2.50;
// actual food offered
double bagel = 2.25;
double fountaindrink = 1.50;
double breakfastsandwich = 4.35;
double donut = 1.25;
double croissant = 3.00;
//user input
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

	// for this I did try to do a loop but I couldn't, really it wouldn't work
	//also had issues with user input and now it works just fine
	cout << "Would you like to buy a bagel for $" << bagel << "? Please type in yes or no: ";
	string answer;
	std::cin >> answer;
	cout << "you type in: " << answer << ".";
	cout << " " << endl;
	if (answer == "yes") {
		int amount;
		cout << "We have 12 bagels available?" << endl;
		cout << "How many did you want? Please type in a number 1 - 12." << endl;
		std::cin >> amount;
		cout << "You entered: " << amount << ".";
		cout << " " << endl;
		total = total + bagel * amount + tax;
		cout << "Your total is $" << total << ".";
	}
	else if (answer == "no") {
		cout << "Awwww, you don't want bagels :( " << endl;
		cout << "Your total is $" << total << ".";
	}
	
	cout << "Would you like to buy a fountain drink for $" << fountaindrink << "? Please type in yes or no: ";
	string answerT;
	std::cin >> answerT;
	cout << "you type in: " << answerT << ".";
	cout << " " << endl;
	if (answerT == "yes") {
		int amount;
		cout << "We have 6 fountain drinks available?" << endl;
		cout << "How many did you want? Please type in a number 1 - 6." << endl;
		std::cin >> amount;
		cout << "You entered: " << amount << ".";
		cout << " " << endl;
		total = total + fountaindrink * amount + tax;
		cout << "An amount of $" << total << " has been added to your bag.";
	}
	else if (answerT == "no") {
		cout << "Awwww, you don't want fountain drinks :( " << endl;
		cout << "An amount of $" << total  << " has been added to your bag.";
	}

	cout << "Would you like to buy a breakfast sandwich for $" << breakfastsandwich << "? Please type in yes or no: ";
	string answerB;
	std::cin >> answerB;
	//cout << " " << endl;
	//put in the wrong place
	cout << "you type in: " << answerB << ".";
	cout << " " << endl;
	if (answerB == "yes") {
		int amount;
		cout << "We have 7 breakfast sandwiches available?" << endl;
		cout << "How many did you want? Please type in a number 1 - 7." << endl;
		std::cin >> amount;
		cout << "You entered: " << amount << ".";
		total = total + breakfastsandwich * amount + tax;
		cout << " " << endl;
		cout << "An amount of $" << total  << " has been added to your bag.";
	}
	else if (answerB == "no") {
		cout << "Awwww, you don't want breakfast sandwiches :( " << endl;
		cout << "An amount of $" << total << " has been added to your bag.";
	}

	cout << "Would you like to buy a donut for $" << donut << "? Please type in yes or no: ";
	string answerD;
	std::cin >> answerD;
	cout << "you type in: " << answerD << ".";
	cout << " " << endl;
	if (answerD == "yes") {
		int amount;
		cout << "We have 12 donuts available?" << endl;
		cout << "How many did you want? Please type in a number 1 - 12." << endl;
		std::cin >> amount;
		cout << "You entered: " << amount << ".";
		cout << " " << endl;
		cout << "An amount of $" << amount * donut + total + tax << " has been added to your bag.";
	}
	else if (answerD == "no") {
		cout << "Awwww, you don't want donuts :( " << endl;
		cout << "An amount of $" << total << " has been added to your bag.";
	}

	cout << "Would you like to buy a croissant for $" << croissant << "? Please type in yes or no: ";
	string answerC;
	std::cin >> answerC;
	cout << "you type in: " << answerC << ".";
	cout << " " << endl;
	if (answerC == "yes") {
		int amount;
		cout << "We have 20 croissants available?" << endl;
		cout << "How many did you want? Please type in a number 1 - 20." << endl;
		std::cin >> amount;
		cout << "You entered: " << amount << ".";
		cout << " " << endl;
		cout << "An amount of $" << amount * croissant + total + tax << " has been added to your bag.";
	}
	else if (answerD == "no") {
		cout << "Awwww, you don't want donuts :( " << endl;
		cout << "An amount of $" << total << " has been added to your bag.";
	}


	
	
}
