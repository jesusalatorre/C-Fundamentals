#include <iostream>

using namespace std;

int main()
{
    int capacity, element, num, position;
    bool validate=false, guess=false;
    cout << "Please input capacity of array" << endl;
    cin >> capacity;
    int array1 [capacity];
    cout << "Input unique values to fill array" << endl;

    for (int i=0;i<capacity;i++){
        cin >> element;
        array1[i]=element;
    }

    cout << "Input number you are looking for and input your guess position until you get the position right." << endl;
    cin >> num;
    while(guess==false){
    cin >> position;

    for (int k=0; k<capacity; k++)
        {
        if (num==array1[k]){
            validate=true;
            break;
        }
    }

    if (validate==false){
        cout << "The number you typed is not in the array." << endl;
        guess=true;
    }

    else if(validate==true){
    if (array1[position]==num){
        cout << "Congrats, you guessed right" <<endl;
        guess=true;
    }
    else{
        for (int j=0; j<capacity; j++){
            element=array1[j];
            if (element==num){
                    if (j<position){
                        cout << "Your guess was too high." << endl;
                    }
                    else if(j>position){
                        cout << "Your guess was too low." << endl;
                    }

            }
        }
    }
    }
    }
    return 0;
}
