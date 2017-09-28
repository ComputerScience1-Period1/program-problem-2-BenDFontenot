/* Heading

Ben Fontenot 9/26/2017

DataAcceptance : Take in Data 

Display Data, Accept User Response, Display Changed Data

*/

// Libraries
#include <iostream>
#include <conio.h>
#include <math.h>

// Namespaces
using namespace std;

// Functions()
void pause() {
	cout << "Press any to Enter the Unkwnown . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// Main
void main() {
	// Variables 
	int potato;
	float tomato;
	double tomatoes;
	bool beet_root = false;
	char frisk;
	int calc_1, calc_2, calc_3;

	// User Queries
	cout << "How many potatoes did you drop?";
	cin >> potato;
	cout << "How many tomatoes can you eat mutipled by pi?";
	cin >> tomato;
	cout << "How many tomatoes do you think exist mutiplied by 1x10^20";
	cin >> tomatoes;
	cout << "Do you know what a beet root is : Y/N";
	cin >> frisk;
	if (frisk == 'Y' || frisk == 'y') {
		beet_root = true; //Cannot figure out the error located here.
	}

	// After questions print out stored dta 
	cout << "How many " << potato << " potatoes did you drop. \n";
	cout << "How many " << tomato * 3.14 << "tomatoes can you eat mutiplied by pi." << endl;
	cout << "How many " << tomatoes * pow(10.0, 20) << "do you think exist mutiplied by 1x10^20" << '\n';
	cout << boolalpha << "The answer is " << beet_root << endl;

	// Change Values

	cout << "Enter a number : ";
	cin >> calc_1;
	cout << "Enter a number another number : ";
	cin >> calc_2;
	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl;
	calc_3 = calc_1 * calc_2;
	cout << calc_1 << " + " << calc_2 << " = " << calc_3 << endl;
	// Pause
	pause();
}