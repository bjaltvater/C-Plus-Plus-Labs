#include <iostream>
#include <iomanip>

using namespace std;


// This program uses a structure to hold data about a rectangle 
// It calculates the area and perimeter of a box 

// Brandon Altvater

struct Dimensions{
	float length;
	float width;
};

struct Results{
	float area;
	float perimeter;
};

struct Rectangle{
	Results result;
	Dimensions sizes;
};

float findArea(float, float);
float findPerimeter(float, float);


int main()
{
   Rectangle box;
	
   cout << "Enter the length of a rectangle: ";
   cin >> box.sizes.length;
   
   cout << "Enter the width of a rectangle: ";
   cin >> box.sizes.width;
   
   cout << endl << endl;
  
   cout << fixed << showpoint << setprecision(2);
   cout << "The area of the rectangle is " << findArea(box.sizes.length, box.sizes.width) << endl; 
   cout << "The perimeter of the recangle is " <<  findPerimeter(box.sizes.length, box.sizes.width)
        << endl;

   return 0;
}
float findArea(float length, float width)
{
return length * width;
}

float findPerimeter(float length, float width)
{
	return length * 2 + width * 2;
}