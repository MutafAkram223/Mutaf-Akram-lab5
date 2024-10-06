#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
int a,b,c;
cout << "Enter the value of a: " ;
cin >> a;
cout << "Enter the value of b: " ;
cin >> b;
cout << "Enter the value of c: " ;
cin >> c;

float discriminant = b*b -4*a*c;

if (discriminant > 0) {
float root1 = (-b + sqrt(discriminant)) / (2*a);
float root2 = (-b - sqrt(discriminant)) / (2*a);
        
cout << "The equation has two real and distinct roots:" << endl;
cout << "Root 1 = " << root1 << endl;
cout << "Root 2 = " << root2 << endl;}


if (discriminant == 0) {
float root = -b/2*a;

cout << "The equation has one real root:" << endl;
cout << "Root 1 = " << root << endl;}


if (discriminant < 0) {
float real_part = -b/2*a;
float imaginery_part = sqrt(-discriminant) / 2*a;

cout << "The equation has two complex roots:" << endl;
cout << "Root 1 = " << real_part << "+" << "i" << imaginery_part << endl;
cout << "Root 2 = " << real_part << "-" << "i" << imaginery_part << endl;}
}





