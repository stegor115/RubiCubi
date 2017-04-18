/*RubiCubi is meant to be a Rubik's Cube simulator, with the eventual goal to solve the cube given any configuration.
TO:DO List:
Simulate Cube in Console
	Make it so user can make commands
Create visual representation of cube
Make solving algorithm
*/

#include <iostream>
#include <string>
#include "Cube.h"
using std::cout;
using std::cin;
using std::endl;

int main() {
	//Array declarations, the array's name is based on the cube in the center
	//Remember to account for the zero

	/*Cube arrangment explaination-----
	   Front: White / Left: Orange
	   Right: Red / Top: Blue
	   Bottom: Green / Back: Yellow
	-----------------------------------*/
	Cube cube;
	std::string input;
	cout << "You've been given a 3x3 Puzzle Cube!" << endl;
	while (true) //I would love to use a switch statement, but apparently they don't work for strings
	{
		cout << "Enter command: ";
		cin >> input;
		//Shows--------------------------------------------------------------------------------------------------------------------
		if (input == "show_white") 
		{
			cube.getWhite();
		} //end getWhite if

		else if (input == "show_red")
		{
			cube.getRed();
		}  //end getRed if

		else if (input == "show_blue")
		{
			cube.getBlue();
		}  //end getRed if

		else if (input == "show_green")
		{
			cube.getGreen();
		}  //end getRed if

		else if (input == "show_orange")
		{
			cube.getOrange();
		}  //end getRed if

		else if (input == "show_yellow")
		{
			cube.getYellow();
		}  //end getRed if

		//Clockwise Rotational---------------------------------------------------------------------------------------
		else if (input == "clock_right") 
		{
			cube.clockRight();
			cout << "Right side has been rotated clockwise." << endl;
		} //end clockRight if

		else if (input == "clock_left") 
		{
			cube.clockLeft();
			cout << "Left side has been rotated clockwise." << endl;
		} //end clockLeft if

		else if (input == "clock_top")
		{
			cube.clockTop();
			cout << "Top side has been rotated clockwise." << endl;
		} //end clockTop if

		else if (input == "clock_bottom")
		{
			cube.clockBottom();
			cout << "Bottom side has been rotated clockwise." << endl;
		} //end clockBottom if

		else if (input == "clock_front")
		{
			cube.clockFront();
			cout << "Front face has been rotated clockwise." << endl;
		} //end clockFront
		
		else if (input == "clock_back")
		{
			cube.clockBack();
			cout << "Back end has been rotated clockwise" << endl;
		} //end clockBack
		
		//Counter Clockwise turns------------------------------------------------------------------
		else if (input == "count_right")
		{
			cube.countRight();
			cout << "Right side has been rotated counter clockwise." << endl;
		} //end countRight if

		else if (input == "count_left")
		{
			cube.countLeft();
			cout << "Left side has been rotated counter clockwise." << endl;
		} //end countLeft if

		else if (input == "count_top")
		{
			cube.countTop();
			cout << "Top side has been rotated counter clockwise." << endl;
		} //end countTop if

		else if (input == "count_bottom")
		{
			cube.countBottom();
			cout << "Bottom side has been rotated counter clockwise" << endl;
		} //end countBottom if

		else if (input == "count_front")
		{
			cube.countFront();
			cout << "Front face has been rotated counter clockwise" << endl;
		} //end countFront if

		else if (input == "count_back")
		{
			cube.countBack();
			cout << "Back end has been rotated counter clockwise." << endl;
		} //end countBack if

		//Informational-----------------------------------------------------------------------------

		else if(input == "help")
		{
			cout << "\nAvailable commands:" << endl;
			//Show commands
			cout << "show_white - Shows white side of cube " << endl;
			cout << "show_red - Shows red side of cube" << endl;
			cout << "show_blue - Shows blue side of cube" << endl;
			cout << "show_green - Shows green side of cube" << endl;
			cout << "show_orange - Shows orange side of cube" << endl;
			cout << "show_yellow - Shows yellow side of cube" << endl;
			// Clockwise rotation commands
			// Might want to consider changing the command name
			cout << "\nclock_right - Rotates the right side of the cube clockwise" << endl;
			cout << "clock_left - Rotates the left side of the cube clockwise" << endl;
			cout << "clock_top - Rotates the top side of the cube clockwise" << endl;
			cout << "clock_bottom - Rotates the bottom side of the cube clockwise" << endl;
			cout << "clock_front - Rotates the front face of the cube clockwise" << endl;
			cout << "clock_back - Rotates the back end of the cube clockwise" << endl;
			//Counter Clockwise Rorations
			cout << "\ncount_right - Rotates the right side of the cube counter clockwise" << endl;
			cout << "count_left - Rotates the left side of the cube counter clockwise" << endl;
			cout << "count_top - Rotates the top of the cube counter clockwise." << endl;
			cout << "count_bottom - Rotates the bottom side of the cube counter clockwise" << endl;
			cout << "count_front - Rotates the front face of the cube counter clockwise" << endl;
			cout << "count_back - Rotates the back end of the cube counter clockwise" << endl;
			//Other informational commands
			cout << "\ninfo - Show explaination as to how the cube is interperted in the program" << endl;
			cout << "help - Shows list of commands available to the user" << endl;
			cout << "clear - Deletes all current text in console" << endl;
			cout << "quit - Ends program\n" << endl;
		} //end help

		else if (input == "info")
		{
			cout << "\nThe Cube is interpreted and handled as such:" << endl;
			cout << "Front = White\nTop = Blue\nBottom = Green\nRight = Red\nLeft = Orange\nBack = Yellow\n" << endl;
		} //end info if

		else if (input == "clear") 
		{
			system("cls");
			cout << "Console cleared. ";
		} // end clear if

		else if (input == "quit") 
		{
			break;
		} //end break condition if

		else 
		{
			cout << "Unrecognized command." << endl;
			cout << "Use command: help, for assistance." << endl;
		} //end error catch else
	} //end while
	return 0;
} //end main