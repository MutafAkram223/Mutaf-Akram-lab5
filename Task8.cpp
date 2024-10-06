#include <iostream>
using namespace std;
string EvenOdd (int num)
{
int sum =0;
while (num>0)
{sum += num % 10;
  num /= 10;}

if (sum % 2 == 0){
return "Evenish";}
else 
{return "Oddish";
}
}

int main ()
{ 
int num;
cout << "Enter the five digits number:";
cin >> num;
cout << EvenOdd (num) << endl;
return 0;
}
