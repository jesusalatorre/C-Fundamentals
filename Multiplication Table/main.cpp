#include <iostream>

using namespace std;

int main()
{
    int num1, num2, result, index=1;
    cout << "Input the two numbers for the multiplication table" << endl;
    cin >> num1;
    cin >> num2;

    do{
        result=index*num1;
        cout << num1 << " x " << index << " = " << result << endl;
        index++;
    }
    while(index<=num2);
    return 0;
}
