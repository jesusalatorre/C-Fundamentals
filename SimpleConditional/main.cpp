#include <iostream>

using namespace std;

int main()
{
    //declare variables
    double miles;
    //prompt user for variable values
    cout << "Please input miles: " << endl;
    cin >> miles;
    // check with simple conditional
    if (miles>=0)
            cout << 1.6*miles << " kilometers" << endl;
            else
            cout << "INVALID INPUT" << endl;

    cout << "END OF PROGRAM" << endl;

    return 0;
}
