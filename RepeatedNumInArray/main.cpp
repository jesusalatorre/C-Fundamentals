#include <iostream>

using namespace std;

int main()
{
    int capacity, elem, counter =0;
    cout << "Input the array capacity:" << endl;
    cin >> capacity;
    int my_array[capacity];
//generate array
    for(int i=0; i<capacity; i++){
        cin >> elem;
            my_array[i]=elem;
            }

//test for repeats
    for (int k=0; k<capacity; k++){
        for (int j=k+1; j<capacity; j++){
            if (my_array[k]==my_array[j])
                counter++;
    }
}
cout << counter;
    return 0;
}
