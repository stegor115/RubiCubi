#include "Cube.h"
#include <iostream>
int MAX_SIZE = 3;

Cube::Cube()
{
	char white[3][3] = { { 'W','W','W' },{ 'W','W','W' },{ 'W','W','W' } };
	char blue[3][3] = { { 'B','B','B' },{ 'B','B','B' },{ 'B','B','B' } };
	char red[3][3] = { { 'R','R','R' },{ 'R','R','R' },{ 'R','R','R' } };
	char green[3][3] = { { 'G','G','G' },{ 'G','G','G' },{ 'G','G','G' } };
	char orange[3][3] = { { 'O','O','O' },{ 'O','O','O' },{ 'O','O','O' } };
	char yellow[3][3] = { { 'Y','Y','Y' },{ 'Y','Y','Y' },{ 'Y','Y','Y' } };
}

//Gets----------------------------------------------------------------------------------------------------------------------------
void Cube::getWhite() 
{
	std::cout << "-------\n";
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << "|" << white[i][j];
		} //end nested for
		std::cout << "| \n-------\n";
	} //end 
}

void Cube::getRed()
{
	std::cout << "-------\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << "|" << red[i][j];
		} //end nested for
		std::cout << "| \n-------\n";
	} //end 
}

void Cube::getBlue()
{
	std::cout << "-------\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << "|" << blue[i][j];
		} //end nested for
		std::cout << "| \n-------\n";
	} //end 
}

void Cube::getGreen()
{
	std::cout << "-------\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << "|" << green[i][j];
		} //end nested for
		std::cout << "| \n-------\n";
	} //end 
}

void Cube::getOrange()
{
	std::cout << "-------\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << "|" << orange[i][j];
		} //end nested for
		std::cout << "| \n-------\n";
	} //end 
}

void Cube::getYellow()
{
	std::cout << "-------\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << "|" << yellow[i][j];
		} //end nested for
		std::cout << "| \n-------\n";
	} //end 
}

//Clockwise Rotations-----------------------------------------------------------------------------------------------------
//TODO: Make the FACES turn, like the "tire" part, not just the treads.
void Cube::clockRight()
{
	char temp[3][3]; //Holds value of a side to swap
	for (int i = 0; i < 3; i++) 
	{
		temp[i][2] = white[i][2];
		white[i][2] = green[i][2];
		green[i][2] = yellow[i][2];
		yellow[i][2] = blue[i][2];
		blue[i][2] = temp[i][2];
	}//end for

} //end clock right

void Cube::clockLeft()
{
	char temp[3][3];
	for (int i = 0; i < 3; i++) 
	{
		temp[i][0] = white[i][0];
		white[i][0] = blue[i][0];
		blue[i][0] = yellow[i][0];
		yellow[i][0] = green[i][0];
		green[i][0] = temp[i][0];
	} //end for
} //end clock left

void Cube::clockTop()
{
	char temp[3][3];
	for (int i = 0; i < 3; i++) 
	{
		temp[0][i] = white[0][i];
		white[0][i] = red[0][i];
		red[0][i] = yellow[0][i];
		yellow[0][i] = orange[0][i];
		orange[0][i] = temp[0][i];
	} //end for
} //end clock top

void Cube::clockBottom()
{
	char temp[3][3];
	for (int i = 0; i < 3; i++)
	{
		temp[2][i] = white[2][i];
		white[2][i] = orange[2][i];
		orange[2][i] = yellow[2][i];
		yellow[2][i] = red[2][i];
		red[2][i] = temp[2][i];
	} //end for
}// end clockBottom

void Cube::clockFront()
{
	char temp[3][3];
	for (int i = 0; i < 3; i++)
	{
		//This rotates the front face's sides relative to white side being the face of the cube.
		temp[2][i] = blue[2][i];
		blue[2][i] = orange[i][2];
		orange[i][2] = green[0][i];
		green[0][i] = red[i][0];
		red[i][0] = temp[2][i];
	} //end for
} //end clockFront

void Cube::clockBack()
{
	char temp[3][3];
	for (int i = 0; i < 3; i++)
	{
		temp[0][i] = blue[0][i];
		blue[0][i] = red[i][2];
		red[i][2] = green[2][i];
		green[2][i] = orange[i][0];
		orange[i][0] = temp[0][i];
	} //end for
} //end clockBack

//Counter Clockwise Rotations----------------------------------------------------------------------------------
//TODO: Make the FACES turn, like above
void Cube::countRight()
{
	char temp[3][3];
	for (int i = 0; i < 3; i++)
	{
		temp[i][2] = white[i][2];
		white[i][2] = blue[i][2];
		blue[i][2] = yellow[i][2];
		yellow[i][2] = green[i][2];
		green[i][2] = temp[i][2];
	} //end for

	 //Face rotation
	char charTemp;
	for (int i = 0; i < MAX_SIZE / 2; i++) {
		for (int j = i; j < MAX_SIZE - i - 1; j++)
		{
			charTemp = red[i][j];
			red[i][j] = red[j][MAX_SIZE - i - 1];
			red[j][MAX_SIZE - i - 1] = red[MAX_SIZE - i - 1][MAX_SIZE - j - 1];
			red[MAX_SIZE - i - 1][MAX_SIZE - j - 1] = red[MAX_SIZE - j - 1][i];
			red[MAX_SIZE - j - 1][i] = charTemp;
		} //end nested for
	} //end for

} // end count Right

void Cube::countLeft()
{
	char temp[3][3];
	for (int i = 0; i < 3; i++)
	{
		temp[i][0] = white[i][0];
		white[i][0] = green[i][0];
		green[i][0] = yellow[i][0];
		yellow[i][0] = blue[i][0];
		blue[i][0] = temp[i][0];
	} //end for

	  //Face rotation
	char charTemp;
	for (int i = 0; i < MAX_SIZE / 2; i++) {
		for (int j = i; j < MAX_SIZE - i - 1; j++)
		{
			charTemp = orange[i][j];
			orange[i][j] = orange[j][MAX_SIZE - i - 1];
			orange[j][MAX_SIZE - i - 1] = orange[MAX_SIZE - i - 1][MAX_SIZE - j - 1];
			orange[MAX_SIZE - i - 1][MAX_SIZE - j - 1] = orange[MAX_SIZE - j - 1][i];
			orange[MAX_SIZE - j - 1][i] = charTemp;
		} //end nested for
	} //end for
} //end count Left

void Cube::countTop()
{
	char temp[3][3];
	for (int i = 0; i < 3; i++) 
	{
		temp[0][i] = white[0][i];
		white[0][i] = orange[0][i];
		orange[0][i] = yellow[0][i];
		yellow[0][i] = red[0][i];
		red[0][i] = temp[0][i];
	} //end for

	//Face rotation
	char charTemp;
	for (int i = 0; i < MAX_SIZE / 2; i++) {
		for (int j = i; j < MAX_SIZE - i - 1; j++)
		{
			charTemp = blue[i][j];
			blue[i][j] = blue[j][MAX_SIZE - i - 1];
			blue[j][MAX_SIZE - i - 1] = blue[MAX_SIZE - i - 1][MAX_SIZE - j - 1];
			blue[MAX_SIZE - i - 1][MAX_SIZE - j - 1] = blue[MAX_SIZE - j - 1][i];
			blue[MAX_SIZE - j - 1][i] = charTemp;
		} //end nested for
	} //end for
} //end clock Top

void Cube::countFront()
{
	char temp[3][3];
	for (int i = 0; i < 3; i++)
	{
		temp[2][i] = blue[2][i];
		blue[2][i] = red[i][0];
		red[i][0] = green[0][i];
		green[0][i] = orange[i][2];
		orange[i][2] = temp[2][i];
	} //end for

	//Face rotation
	char charTemp;
	for (int i = 0; i < MAX_SIZE / 2; i++) {
		for (int j = i; j < MAX_SIZE - i - 1; j++)
		{
			charTemp = white[i][j];
			white[i][j] = white[j][MAX_SIZE - i - 1];
			white[j][MAX_SIZE - i - 1] = white[MAX_SIZE - i - 1][MAX_SIZE - j - 1];
			white[MAX_SIZE - i - 1][MAX_SIZE - j - 1] = white[MAX_SIZE - j - 1][i];
			white[MAX_SIZE - j - 1][i] = charTemp;
		} //end nested for
	} //end for
} //end count Front

void Cube::countBottom()
{
	char temp[3][3];
	for (int i = 0; i < 3; i++)
	{
		temp[2][i] = white[2][i];
		white[2][i] = red[2][i];
		red[2][i] = yellow[2][i];
		yellow[2][i] = orange[2][i];
		orange[2][i] = temp[2][i];
	} //end for

	//Face rotation
	char charTemp;
	for (int i = 0; i < MAX_SIZE / 2; i++) {
		for (int j = i; j < MAX_SIZE - i - 1; j++)
		{
			charTemp = green[i][j];
			green[i][j] = green[j][MAX_SIZE - i - 1];
			green[j][MAX_SIZE - i - 1] = green[MAX_SIZE - i - 1][MAX_SIZE - j - 1];
			green[MAX_SIZE - i - 1][MAX_SIZE - j - 1] = green[MAX_SIZE - j - 1][i];
			green[MAX_SIZE - j - 1][i] = charTemp;
		} //end nested for
	} //end for
} //end count Bottom

void Cube::countBack()
{
	char temp[3][3];
	for (int i = 0; i < 3; i++)
	{
		temp[0][i] = blue[0][i];
		blue[0][i] = orange[i][0];
		orange[i][0] = green[2][i];
		green[2][i] = red[i][2];
		red[i][2] = temp[0][i];
	} //end for

	//Face rotation, this time it's clockwise due to orientation
	char charTemp;
	for (int k = 0; k < 3; k++) //Repeat 3 times to get equivlant to clockwise, figure out better way later
	{
		for (int i = 0; i < MAX_SIZE / 2; i++) 
		{
			for (int j = i; j < MAX_SIZE - i - 1; j++)
			{
				charTemp = yellow[i][j];
				yellow[i][j] = yellow[j][MAX_SIZE - i - 1];
				yellow[j][MAX_SIZE - i - 1] = yellow[MAX_SIZE - i - 1][MAX_SIZE - j - 1];
				yellow[MAX_SIZE - i - 1][MAX_SIZE - j - 1] = yellow[MAX_SIZE - j - 1][i];
				yellow[MAX_SIZE - j - 1][i] = charTemp;
			} //end nested for
		} //end for
	} //end repeating for
} //end count Back