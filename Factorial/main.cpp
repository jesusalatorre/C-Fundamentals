#include <iostream>

using namespace std;

int main()
{
    int index, result;
    cout << "Input the number for the factorial operation:" << endl;
    cin >> index;

    result=1;
    do{
        result=result*index;
        index--;
    }
    while (index>1);
    cout << "The result is: " << result;
    return 0;
}
