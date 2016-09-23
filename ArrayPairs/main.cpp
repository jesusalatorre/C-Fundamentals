#include <iostream>

using namespace std;

int main()
{
    int capacity, elem;
    cout << "Please input the capacity of both arrays:" << endl;
    cin >> capacity;

    int array1 [capacity];
    int array2 [capacity];

    //fill up array1
    cout << "Array 1 elements: "<< endl;
    for (int i=0; i<capacity; i++){
        cin >> elem;
        array1 [i]= elem;

    }
    //fill up array2
    cout << "Array 2 elements: " << endl;
     for (int i=0; i<capacity; i++){
        cin >> elem;
        array2 [i]= elem;
    }
    // comparing the two arrays
    cout << "Repeated numbers are: " << endl;
    for (int k=0;k<capacity;k++){
        for (int j=0; j<capacity; j++){
            if (array1[k]==array2[j]){
                cout << array1[k] << endl;
                break;
            }
        }
    }
    return 0;
}
