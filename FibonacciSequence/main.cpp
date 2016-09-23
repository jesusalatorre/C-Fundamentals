#include <iostream>

using namespace std;

//function for generating sequence
void FibonacciSequence(int TERMS){
//declaration of variables
    int term1=0, term2=1, term3;
//generating the fibonacci sequence
    for(int i=1; i<=TERMS; i++){
        cout << term1 << " ";
        term3=term1+term2;
        term1=term2;
        term2=term3;
    }
}

int main()
{
    int TERMS;
//prompt user for number of terms
    cout << "Please input the number (positive integer) of terms in the sequence you want to display: " << endl;
    cin >> TERMS;
//validation of user input
    while (TERMS<1.0)
    {
        cout << "This is an invalid number of terms, please try again: " ;
        cin >> TERMS;
    }

//access to the sequence generator
    FibonacciSequence(TERMS);

    return 0;
}
