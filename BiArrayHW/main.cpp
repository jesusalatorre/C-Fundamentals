#include <iostream>

using namespace std;

int main()
{
    int rows, columns, element;

    cout << "Input the number of rows in the array: " << endl;
    cin >> rows;
    cout << "Input the number of columns in the array: " << endl;
    cin >> columns;

    if (rows!=columns){
        cout << "The array is not squared. Process terminated." << endl;
    }
    else{

        int array1[rows][columns];
        int mirror[rows][columns];

        cout << "Input the values of the array, row by row : " << endl;
        for (int i=0; i<rows; i++){

                cout << "Row #: " << i+1 << endl;

            for (int j=0; j<columns; j++){

                cin >> element;
                array1[i][j]=element;
                mirror[i][j]=element;
            }
        }
        //Inversion
        cout << "Array filled. Row/Column Inversion proceeding." << endl;

        for (int k=0; k<rows; k++){
            for (int l=0; l<columns; l++){
                array1[l][k]=mirror[k][l];
            }
        }
        //printing out the inverted result
        for (int a=0; a<rows; a++){
            for (int b=0; b<columns; b++){
                cout << array1[a][b] << " ";
            }
            cout << endl;
        }
        }
    return 0;
}
