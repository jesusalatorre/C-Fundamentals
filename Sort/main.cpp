#include <iostream>

using namespace std;

int main()
{
    //declare variables
    int integer1, integer2, integer3;
    //prompt user for values
    cout << "Please input the 3 integer values to be sorted: " << endl;
    cout << "Integer#1: ";
    cin >> integer1;
    cout << "Integer#2: ";
    cin >> integer2;
    cout << "Integer#3: ";
    cin >> integer3;
    //compare values
    if (integer1<=integer2&&integer2<=integer3)
        cout << integer1 << endl <<integer2 << endl << integer3;
    else if (integer1<=integer3&&integer3<=integer2)
            cout << integer1 << endl <<integer3 << endl << integer2;
    else if (integer2<=integer1&&integer1<=integer3)
            cout <<integer2 << endl <<integer1 << endl << integer3;
    else if (integer2<=integer3&&integer3<=integer1)
            cout << integer2 << endl << integer3 << endl <<integer1;
    else if (integer3<=integer1&&integer1<=integer2)
            cout << integer3 <<endl <<integer1 << endl <<integer2;
    else if (integer3<=integer2&&integer2<=integer1)
            cout << integer3 << endl <<integer2 << endl << integer1;

    return 0;
}
