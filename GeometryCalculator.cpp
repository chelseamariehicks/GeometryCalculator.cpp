/*********************************************************************
**  Author:         Chelsea Hicks
**  Date:           12/14/2018
**  Description:    Calculates the area of a circle, rectangle, or 
**                  triangle based on the users choice.
*********************************************************************/

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

void areaCir(double);
void areaRec(double, double);
void areaTri(double, double);

int main()
{
    int choice;

//Introduces users to their options via a menu
   cout << "Welcome to the geometry calculator." << endl;
   cout << "Please select which option you would like to calculate:" << endl;
   cout << "1. Calculate the area of a circle" << endl;
   cout << "2. Calculate the area of a rectangle" << endl;
   cout << "3. Calculate the area of a triangle" << endl;
   cout << "4. Quit" << endl;
   cout << "Enter your choice (1-4):" << endl;

   cin >> choice;

/*If the user enters a choice between 1-3, the following switch case 
will use their choice to ask for necessary numbers and then call the 
function to calculate the area the user requested. */ 
   if (choice >= 1 && choice <= 3)
        switch (choice)
        {
            //Circle option
            case 1:
                double radius;

                cout << "Enter the radius of the circle:" << endl;
                cin >> radius;

                if (radius < 0)
                {
                    cout << "The radius must be greater than 0." << endl;
                }
                else
                areaCir(radius);

                break;
            
            //Rectangle option
            case 2:
                double length;
                double width;

                cout << "Enter the length of the rectangle:" << endl;
                cin >> length;
                cout << "Enter the width of the rectangle:" <<endl;
                cin >> width;

                if (length < 0 || width < 0)
                {
                    cout << "The length and width cannot be negative." << endl;
                }
                else
                areaRec(length, width);

                break;

            //Triangle option
            case 3:
                double base;
                double height;

                cout << "Enter the base of the triangle:" << endl;
                cin >> base;
                cout << "Enter the height of the triangle:" << endl;
                cin >> height;

                if (base < 0 || height < 0)
                {
                    cout << "The base and height cannot be negative." << endl;
                }
                else
                areaTri(base, height);

                break;
        }
    //Informs user if they made an invalid choice, any number != 1-4
    else if (choice != 1 || choice != 2 || choice != 3 || choice != 4)
    {
        cout << "Invalid entry! Please select an option between 1-4." << endl;
    }
    //Quits the program if user selects choice 4 
    else if (choice == 4)
    {
        cout << "You have successfully quit the program. Goodbye." << endl;
    }

    return 0;

}

//Function to calculate the area of a circle
void areaCir(double radius)
{
    double areaCircle;

    areaCircle = 3.14159 * pow(radius, 2);

    cout << "The area of a circle with a radius of " << radius << " is ";
    cout << areaCircle << "." << endl;
}

//Function to calculate the area of a rectangle
void areaRec(double length, double width)
{
    double areaRectangle;

    areaRectangle = length * width;

    cout << "The area of the rectangle with a length of " << length;
    cout << " and a width of " << width << " is " << areaRectangle << "." << endl;
}

//Function to calculate the area of a triangle
void areaTri(double base, double height)
{
    double areaTriangle;

    areaTriangle = (base * height) / 2.0;

    cout << "The area of a triangle with a base of " << base << " and a";
    cout << " height of " << height << " is " << areaTriangle << "." << endl;
}
