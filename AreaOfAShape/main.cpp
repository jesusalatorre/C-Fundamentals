#include <iostream>
#include <string>

using namespace std;

char ShapePrompt(void){
    char response;
    //prompt user
    cout << "Please input the shape whose area you want to calculate(S or R for squares or rectangles, T for triangles and C for circles)" << endl;
    cin >> response;

    return response;
}

double RectangleArea(void){
    //declare variables
    double base, height, area;
    //prompt user
    cout << "Please input the value of the Base: " << endl;
    cin >> base;
    cout << "Please input the value of the Height: " << endl;
    cin >> height;
    //calculate area
    area=base*height;

    return area;
}

double TriangleArea(void){
    //declare variables
    double base, height, area;
    //prompt users
    cout << "Please input the value of the Base: " << endl;
    cin >> base;
    cout << "Please input the value of the Height: " << endl;
    cin >> height;
    //calculate area
    area=base*height/2.0;

    return area;
}

double CircleArea(void){
    //declare variables
    double radius, area;
    //prompt users
    cout << "Please input the value of the Radius: " << endl;
    cin >> radius;
    //calculate area
    area=(3.1415)*radius*radius;

    return area;
}

int main()
{
   char answer;
   string shape;

    double result;
   answer=ShapePrompt();
   if (answer=='S'|| answer=='s'||answer=='R'||answer=='r'){
    result=RectangleArea();
    shape="rectangle or square";

   }
   else if(answer=='t'||answer=='T'){
    result=TriangleArea();
    shape="triangle";
   }
    else if(answer=='c'||answer=='C'){
        result=CircleArea();
        shape="circle";
    }
    else{
        cout << "Answer not recognized as shape...";
        return 0;
    }

    cout << "The area of your " << shape << " is: " << result << " square units of space.";
    return 0;
}
