// NewCafe.cpp : Defines the entry point for the application.
//

#include "NewCafe.h"
#include <string>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <stdlib.h>


using namespace std;
// ascii art is from https://textkool.com/en/ascii-art-generator?hl=default&vl=default&font=Slant&text=Magical%20Cafe
//used from euchre project and stack overflow such as user input
// realized float may be better for this
static double total;
static float tax = 2.50;
// actual food offered
//had outside help to make this feel more believable
//my bf goes to places like Stan's and Dunkin a lot so he really helped
float bagel = 2.25;
float fountaindrink = 1.50;
float breakfastsandwich = 4.35;
float donut = 1.25;
float croissant = 3.00;
//user input
char answer = 0;
int amount = 0;
int money = 0;
//double change = 0.00;


int main()
{
	// only added the ascii art because I love the way it looks and it makes it personal

	system("Color D0");
	// makes the bg purple and the words black
	cout <<  "Welcome to the " << endl;
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
		//used to make the total actually add up
		//from stack overflow because I couldn't figure out how to add on to the total
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
		total = total + donut * amount + tax;
		cout << "An amount of $" << total << " has been added to your bag.";
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
		total = total + croissant * amount + tax;
		cout << "An amount of $" << total << " has been added to your bag.";
	}
	else if (answerD == "no") {
		cout << "Awwww, you don't want donuts :( " << endl;
		cout << "An amount of $" << total << " has been added to your bag.";
	}

	float change = 0.00;
	
	cout << " " << endl;
	cout << "Now you're ready for checkout." << endl;
	cout << "Your total is $" << total << ".";
	cout << " " << endl;
	cout << "You have to give whole numbers for money." << endl;
	std::cin >> money;
	cout << "Your entered: $" << money << ".";
	cout << " " << endl;
	//std::set precision(money = money - total);
	change = money - total;

	//set precision suggestion was from stack overflow, I wanted to get decimals involved but I had money as an int
	cout << "Your change is $" << change << ".";
	cout << " " << endl;
	//coinage = std::round(change * 100); ignore
	if (change > 0.00)
	{
		//got this from stack overflow and it saved my life
		int dollar = change / 1;
		change = std::fmod(change, 1); //change % 1

		int quarters = change / 0.25;
		change = std::fmod(change, 0.25);//change % 25;

		int dimes = change / 0.10;
		change = std::fmod(change, 0.10);//change % 10;

		int nickels = (change) / 0.05;
		//change = std::fmod(change, 0.05); //change % 5;
		
		int pennies = change;
		//change = std::fmod(change, 0.01);//change % 1

		cout << "The number of dollars is = " << dollar << endl;
		cout << "The number of quarters is = " << quarters << endl;
		cout << "The number of dimes is = " << dimes << endl;
		cout << "The number of nickels is = " << nickels << endl;
		cout << "The number of pennies is = " << pennies << endl;
		cout << " " << endl;
	}
	else {
		cout << "You don't have any change! How lucky for you!" << endl;
	}
	

	cout << "Thank you for shopping with us!! Press any key to exit." << endl;

	
}
