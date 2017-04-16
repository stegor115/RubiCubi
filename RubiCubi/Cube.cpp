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
void Cube::roRight()
{

}
