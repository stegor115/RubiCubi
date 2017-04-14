/*RubiCubi is meant to be a Rubik's Cube simulator, with the eventual goal to solve the cube given any configuration.
TO:DO List:
Simulate Cube in Console
Create visual representation of cube
Make solving algorithm
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	//Array declarations, the array's name is based on the cube in the center
	//Remember to account for the zero
	char white[3][3] = { {'W','W','W'}, {'W','W','W'},{'W','W','W'} };
	char blue[3][3] = { { 'B','B','B' },{ 'B','B','B' },{ 'B','B','B' } };
	char red[3][3] = { { 'R','R','R' },{ 'R','R','R' },{ 'R','R','R' } };
	char green[3][3] = { { 'G','G','G' },{ 'G','G','G' },{ 'G','G','G' } };
	char orange[3][3] = { { 'O','O','O' },{ 'O','O','O' },{ 'O','O','O' } };
	char yellow[3][3] = { { 'Y','Y','Y' },{ 'Y','Y','Y' },{ 'Y','Y','Y' } };

	/*Cube arrangment explaination-----
	   Front: White / Left: Orange
	   Right: Red / Top: Blue
	   Bottom: Green / Back: Yellow
	-----------------------------------*/
	cout << white[0][0];
	return 0;
} //end main