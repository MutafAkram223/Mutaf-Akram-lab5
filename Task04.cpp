#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
int num1, num2;
cout << "Enter Base distance from tree:";
cin >> num1;
cout << "Enter angle of elevation:";
cin >> num2;
cout << "Distance of man from tree:" << num1 + tan(num2);
return 0;
}