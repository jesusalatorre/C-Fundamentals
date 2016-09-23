#include <iostream>

using namespace std;

int main()
{
    int k, lim;
    char i='A';
    cout << "Input the number: ";
    cin >> lim;

    for(k=1; k<=lim; k++){
        int p=k+64;
    for(i=65; i<=p; i++){
        cout << i;
    }
    cout << endl;
    }
    return 0;
}
