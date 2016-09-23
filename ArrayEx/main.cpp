#include <iostream>

using namespace std;

int main()
{
    int capacity, elem, counter=0;
    cout << "Input array capacity: " << endl;
    cin >> capacity;

    int array1 [capacity];
    int array2 [capacity];

    cout << "Please input the first array's values: ";
    for (int i=0; i<capacity; i++){
        cin >> elem;
        array1 [i]=elem;
    }
    cout << "Please input the second array's values: ";
    for (int i=0; i<capacity; i++){
        cin >> elem;
        array2 [i]=elem;
    }
    // check for repeats
    for (int i=0; i<capacity; i++){
        for (int j=0; j<capacity; j++){
            if (array1[i]==array2[j]){
                counter++;
                break;
            }
        }
    }
    cout << counter << " repeated numbers between the arrays.";
    return 0;
}
