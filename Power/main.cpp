#include <iostream>
#include <cmath>

using namespace std;

int calculate(int n){
int x, result;
x=n+1;
result=x*x;
return result;
}

int calculate_with_pow(int n){
int x, result;
x=n+1;
result=pow(x,2);
return result;
}

int main()
{
    int n, result, result_2;
   cout << "Please input the value of n:" << endl;
   cin >> n;
   result=calculate(n);
   result_2=calculate_with_pow(n);

   cout << "Without pow: " << result << endl;
   cout << "With pow: " << result_2 << endl;

    return 0;
}
