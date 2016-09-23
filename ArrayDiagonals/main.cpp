#include <iostream>

using namespace std;

int main()
{
    int cap1, cap2, element, k=0;
    bool validate=false;
    cout << "Input the bi-dimensional array's capacity (rows, columns):" << endl;
    cin >> cap1 >> cap2;

    if(cap1==cap2){
        validate=true;
    }
    if(validate==false){
        cout << "This is not a square grid" << endl;
    }
    else{

    int biarray[cap1][cap2];

    for (int i=0; i<cap1; i++){
        cout << "Input the " << cap2 << " values to fill out row #" << i+1 << endl;
        for (int j=0; j<cap2; j++){
            cin >> element;
            biarray[i][j]=element;
        }
    }
    //principal diagonal
    cout << "Principal diagonal" << endl;

    for (int j=0;j<cap1; j++){
        cout << biarray[j][k] << " ";
        k++;
    }
    //inverse diagonal
    cout << endl << "Inverse diagonal" << endl;

    k=cap2-1;
    for (int l=0; l<cap1; l++){
        cout << biarray[l][k] << " ";
        k--;
    }

    }

    return 0;
}
