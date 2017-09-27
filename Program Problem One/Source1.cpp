/* 
Spencer Bullinger 9/25/2017
Program Problem 2: Take_in_Data
Goal: Store data in all of the six values we have descrined. Use numbers to compute sums, products, divisions, and subtractions
*/
// Libraries 
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
// Functions()
void pause() {
	cout << "Press Any Key To Continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';

}
// MAIN
void main() {
	// variables
	int x; //age
	int y; //gpa
	int z; //rank
	char name;
	//program
	cout << "What is the first letter of your first name?\n";
		cin >> name; // pauses for user imput
	cout << "Hello\n" << name << endl;
	cout << "How old are you?\n";
		cin >> x; //pauses for imput and holds value
	cout << "Oh. " << x;
	cout << "You must be in highschool then. What is your GPA (rounded to hundreds)?\n";
	cin >> y; //inputs gpa
	cout << y << " REALLY? My dog can score higher than that.n\";
		cout << "Well, what is your class rank?\n";
	cin >> z; //inputs rank
}