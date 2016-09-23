#include <iostream>
#include <cmath>

using namespace std;

double abcExpression(double a, double b, double c){
double result;
result=(pow(a,2.0)+pow(b,2.0))/(2.0*c);
return result;

}
int main()
{
    //declare variables
    double a, b, c, result;
    //prompt user for values
    cout << "Please input the value of a: " << endl;
    cin >> a;
    cout << "Please input the value of b: " << endl;
    cin >> b;
    cout << "Please input the value of c: " << endl;
    cin >> c;
    //call function
    result=abcExpression(a,b,c);
    //print result of calling function
    cout << "The result of the expression is: " << result << endl;

    return 0;
}
