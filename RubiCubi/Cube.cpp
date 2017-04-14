/*RubiCubi is meant to be a Rubik's Cube simulator, with the eventual goal to solve the cube given any configuration.
TO:DO List:
Simulate Cube in Console
Create visual representation of cube
Make solving algorithm
*/

#include <iostream>
using namespace std;

int main() {
	//Array declarations, the array's name is based on the cube in the center
	char white[3][3] = { {'W','W','W'},{'W','W','W'},{'W','W','W'} };
	char blue[3][3];
	char red[3][3];
	char green[3][3];
	char orange[3][3];
	char yellow[3][3];

	/*Cube arrangment explaination-----
	   Front: White / Left: Orange
	   Right: Red / Top: Blue
	   Bottom: Green / Back: Yellow
	-----------------------------------*/
	cout << white[3][3];


} //end main