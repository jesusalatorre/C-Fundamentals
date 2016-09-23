#include <iostream>
#include <cmath>

using namespace std;

void generalFormula(double a, double b, double c){
    //declare variables
double X_1, X_2;
// calculate roots individually
X_1=((-1.0*b)+sqrt(b*b-4.0*a*c))/(2*a);
X_2=((-1.0*b)-sqrt(b*b-4.0*a*c))/(2*a);
//print results
cout << "The value of the first root, x_1 is: " << X_1 << endl;
cout << "The value of the second root, x_2 is: " << X_2 << endl;
}

int main()
{
    //declare variables
    double a, b, c;
    //prompt user for values
    cout << "Please input the values to be calculated in the General Formula." << endl << "Value of a: ";
    cin >> a;
    cout << endl << "Value of b: ";
    cin >> b;
    cout << endl << "Value of c: ";
    cin >> c;
    //plug values into function
    generalFormula(a, b, c);

    return 0;
}
