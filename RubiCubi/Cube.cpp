#include "Cube.h"
#include <iostream>

Cube::Cube()
{
	char white[3][3] = { { 'W','W','W' },{ 'W','W','W' },{ 'W','W','W' } };
	char blue[3][3] = { { 'B','B','B' },{ 'B','B','B' },{ 'B','B','B' } };
	char red[3][3] = { { 'R','R','R' },{ 'R','R','R' },{ 'R','R','R' } };
	char green[3][3] = { { 'G','G','G' },{ 'G','G','G' },{ 'G','G','G' } };
	char orange[3][3] = { { 'O','O','O' },{ 'O','O','O' },{ 'O','O','O' } };
	char yellow[3][3] = { { 'Y','Y','Y' },{ 'Y','Y','Y' },{ 'Y','Y','Y' } };
}

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

//Clockwise Rotations
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

//Counter Clockwise Rotations
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
} //end clock Top