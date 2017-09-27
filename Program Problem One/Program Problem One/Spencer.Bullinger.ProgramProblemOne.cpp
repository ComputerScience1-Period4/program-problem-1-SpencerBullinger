/*
Spencer Bullinger - 9/21/2017 Period 4
Assingment Name: Program Problem One
display full name, period, and hello world
*/
//libraries
#include <iostream>
#include <conio.h>
//Namespaces
using namespace std; //* *//
//Functions
void pause() {
	cout << "Press Any Key to Continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
//MAIN 
void main() {
	int period;
	period = 4;
		cout << "Spencer Bullinger P. " << period << " Hello World!" << endl;

		pause(); 
		return; 

}