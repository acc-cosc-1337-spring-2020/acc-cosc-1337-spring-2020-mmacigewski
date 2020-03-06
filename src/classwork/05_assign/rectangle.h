/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

#include <iostream>

class Rect
{
public:
	Rect(int w, int h) : iWidth{ w }, iHeight{ h } {iCalculateArea();} //initializer list to set width to h and height to h
	
	int iGetArea()const { return iArea; }

	friend std::ostream& operator<<(std::ostream& out, Rect& r);

private:
	void iCalculateArea();

	int iArea, iWidth, iHeight;
};