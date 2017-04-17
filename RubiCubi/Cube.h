/*TODO:
Pass in arrays into class
Create Right, Left, Front, Back, Top, Bottom turns (clockwise)
Create Prime turns (counter-clockwise turns)*/

/*Cube arrangment explaination-----
Front: White / Left: Orange
Right: Red / Top: Blue
Bottom: Green / Back: Yellow
-----------------------------------*/
class Cube
{
	private:
		char white[3][3] = { { 'W','W','W' },{ 'W','W','W' },{ 'W','W','W' } };
		char blue[3][3] = { { 'B','B','B' },{ 'B','B','B' },{ 'B','B','B' } };
		char red[3][3] = { { 'R','R','R' },{ 'R','R','R' },{ 'R','R','R' } };
		char green[3][3] = { { 'G','G','G' },{ 'G','G','G' },{ 'G','G','G' } };
		char orange[3][3] = { { 'O','O','O' },{ 'O','O','O' },{ 'O','O','O' } };
		char yellow[3][3] = { { 'Y','Y','Y' },{ 'Y','Y','Y' },{ 'Y','Y','Y' } };
	public:
		//Gets
		void getWhite();
		void getRed();
		void getGreen();
		void getBlue();
		void getOrange();
		void getYellow();
		//Clockwise Rotations
		void clockRight();
		void clockLeft();
		void clockTop();
		void clockBottom();
		void clockFront();
		//Counter-Clockwise Rotations
		void countRight();
		void countTop();
		Cube();
};

