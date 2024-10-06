#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
int num1, num2;
cout << "Enter First Number:";
cin >> num1;
cout << "Enter Second Number:";
cin >> num2;
cout << "Smaller Number is:" << min(num1,num2);
return 0;
}