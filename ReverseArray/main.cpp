#include <iostream>

using namespace std;

int main()
{
    int capacity, element;
    cout << "Input array capacity" << endl;
    cin >> capacity;
    int array1 [capacity];
    cout << "Elements in the array: " << endl;
    //fill the array
    for (int i=0; i<capacity; i++){
        cin >> element;
        array1[i]=element;
    }
    cout << "The reverse order of this array is: " << endl;
    for (int j=capacity-1; j>=0; j--){
        cout << array1[j] << endl;
    }
    return 0;
}
