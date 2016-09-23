#include <iostream>

using namespace std;

int main()
{
    int cap1, cap2, element;
    cout << "Input the bi-dimensional array's capacity (rows, columns):" << endl;
    cin >> cap1 >> cap2;

    int biarray[cap1][cap2];

    for (int i=0; i<cap1; i++){
        cout << "Input the " << cap2 << " values to fill out row #" << i+1 << endl;
        for (int j=0; j<cap2; j++){
            cin >> element;
            biarray[i][j]=element;
        }
    }
    cout << endl << "Displaying resultant array..." << endl << endl;

    for (int k=0; k<cap1; k++){
        for (int l=0; l<cap2; l++){
            cout << biarray[k][l] << " ";
        }
    cout << endl;
    }
    return 0;
}
