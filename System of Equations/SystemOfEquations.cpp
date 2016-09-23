// Autor: Jesus Alatorre A00819508
//Tarea 1: Sistema de ecuaciones
//escrito el 18/8/2015

#include <iostream>

using namespace std;

int main()
{
    //solves the system of equations ax+by=c, dx+ey=f given everything but x and y.
    //declare variables
    double dCONSTANT_A, dCONSTANT_B, dCONSTANT_C, dCONSTANT_D, dCONSTANT_E, dCONSTANT_F, dvariableX, dvariableY;
    // prompt user for values
    cout << "Please insert the value of the constant a:" << endl;
    cin >> dCONSTANT_A;
    cout << "Please insert the value of the constant b:" << endl;
    cin >> dCONSTANT_B;
    cout << "Please insert the value of the constant c:" << endl;
    cin >> dCONSTANT_C;
    cout << "Please insert the value of the constant d:" << endl;
    cin >> dCONSTANT_D;
    cout << "Please insert the value of the constant e:" << endl;
    cin >> dCONSTANT_E;
    cout << "Please insert the value of the constant f:" << endl;
    cin >> dCONSTANT_F;
    //calculate values
    dvariableX=(dCONSTANT_C*dCONSTANT_E-dCONSTANT_B*dCONSTANT_F)/(dCONSTANT_A*dCONSTANT_E-dCONSTANT_B*dCONSTANT_D);
    dvariableY=(dCONSTANT_A*dCONSTANT_F-dCONSTANT_C*dCONSTANT_D)/(dCONSTANT_A*dCONSTANT_E-dCONSTANT_B*dCONSTANT_D);
    //print results
    cout << "The value of x is:" << dvariableX << endl;
    cout << "The value of y is:" << dvariableY << endl;

}

//test case: constantA=0, constantB=0 should be infinities. test case 2: constantA=0, constantB=0, constantC=0, should be undefined.
