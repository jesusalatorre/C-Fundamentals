//Autor: Jesus Alatorre A00819508
// Tarea 1-p2: Circulo
// escrito el 18/8/2015

#include <iostream>

using namespace std;

int main()
{   //calculates surface area and volume of a sphere given the radius
    //declare variables
    double dradius, darea, dvolume;
    double dPI = 3.14159265359;
    // prompt user for value of radius
    cout << "Please input the length of the radius:" << endl;
    cin >> dradius;
    // make calculations for area and volume
    darea=4.0*dPI*dradius*dradius;
    dvolume=(4.0*dPI*dradius*dradius*dradius)/3.0;
    // print results
    cout << "The area of the circle of given radius is: " << darea << endl;
    cout << "And the volume of said circle is: " << dvolume << endl;

}

// test case: radius is 0, expect both area and volume to be 0.
//test case 2: radius is a negative value, expect area and volume to be correct in magnitude only
