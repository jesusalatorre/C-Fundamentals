#include <iostream>

using namespace std;

int main()
{
    int startValue, endValue, tableValue, i, answer;

    cout << "Please input the start and end values for the table :" << endl;
    cin >> startValue >> endValue;
    cout << "Up to what value will your table reach? Please input: " << endl;
    cin >> tableValue;

   do{
       i=1;
    do{

        answer=i*startValue;
        cout << startValue << " X " << i << " = " << answer << endl;
        i++;
    }
    while(i<=tableValue);

    startValue++;
   }
    while(startValue<=endValue);
    return 0;

}
