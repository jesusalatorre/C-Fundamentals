#include <iostream>

using namespace std;

int main()
{
    int n, i, result;
    bool prime;
    cout << "Please input the desired value of n: " << endl;
    cin >> n;


    for (i=2; i<n; i++)
     {
        result=n%i;
        if (result==0){
            prime=false;
            break;
            }
            else
                prime=true;
    }
     cout << prime << endl;

    return 0;
}
