#include <iostream>
#include <cmath>
using namespace std;

double  findArea(double side1, double side2, double side3){

    double s=(side1 + side2+ side3)/2.0;

    double area= sqrt(s*(s-side1)*(s-side2)*(s-side3));

    return area;
}

int main(){

    double side1, side2, side3;

    cout<< "Enter the lenghts of the three sides of the triangle: ";
    cin>>side1>>side2>>side3;

    if(side1 <=0 || side2<=0 || side3<=0 || (side1+side2<=side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1)) {
         cout << "Invalid input. The sides cannot form a triangle." << endl;
         } else {
        // Calculate and display the area of the triangle
        double area = findArea(side1, side2, side3);
        cout << "The area of the triangle is: " << area << endl;
    }

    return 0;
}
