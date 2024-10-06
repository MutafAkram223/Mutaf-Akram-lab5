#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
int num1, num2;
cout << "Enter Base Number:";
cin >> num1;
cout << "Enter Exponent Number:";
cin >> num2;
cout << num2 << "rasied to pwer of" << num1 << "is:" << pow(num1,num2);
return 0;
}