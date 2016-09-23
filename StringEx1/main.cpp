#include <iostream>
#include <string>

using namespace std;

int main()
{
    string namevariable, mirror;
    cout << "Input the string" << endl;
    getline(cin, namevariable);

    int length=namevariable.length();

    for (int i=length; i>=0; i--){
        cout << namevariable[i];
    }

    return 0;
}
