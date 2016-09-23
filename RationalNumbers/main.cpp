#include <iostream>

using namespace std;

int main()
{
    int value1, value2, value3, value4, result1, result2;

    cout << "Please input the four values that will make your two rational numbers (first two are top and bottom of the first, last two are top and bottom of the second)" << endl << "value1: ";
    cin >> value1;
    cout << endl << "value2: ";
    cin >> value2;
    cout << endl << "value3: ";
    cin >> value3;
    cout << endl << "value4: ";
    cin >> value4;

    result1=(value1*value4)+(value3*value2);
    result2= value2*value4;

    cout << endl << "The resultant rational number is: " << result1 << "/" << result2 << endl;

    return 0;
}
