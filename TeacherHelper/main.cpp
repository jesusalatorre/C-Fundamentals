#include <iostream>
#include <string>

using namespace std;

int main()
{
    char response;
    double grade, average, sum=0.0;
    int gradeCount;
    string Name;


    do{
        gradeCount=1;
        cout << "Do you wish to add a student? (Y/N)" << endl;
        cin >> response;
        cout << "Student's Name (first_last): " << endl;
        cin >> Name;

        do{
            cout << endl << "Input Grade " << gradeCount << " :";
            cin >> grade;
            sum+=grade;
            gradeCount++;
        }
        while(gradeCount<=3);

        average=sum/3;
        cout << Name << " Average: " << average << endl;
    }
   while (response=='Y');
    return 0;
}
