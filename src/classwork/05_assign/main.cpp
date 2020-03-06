//write include statemetns
#include "rectangle.h"

#include <iostream>
#include <vector>
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
using std::vector; using std::cout;

int main()
{
	vector<Rect> rect{Rect(4,5),Rect(10,10),Rect(100,10)}; //call class constructors within vector
	auto iTotalArea{ 0 };

	for (int i = 0; i < rect.size(); ++i)
	{
		cout << "Area of Rectangle " << i + 1 << " : ";
		cout << rect[i];
		iTotalArea += rect[i].iGetArea();
	}

	cout << "\nTotal area of all 3 rectangles: " << iTotalArea;

	return 0;
}