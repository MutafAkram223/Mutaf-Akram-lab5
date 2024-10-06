#include <iostream>
using namespace std;

string checkAlphabetCase(char input);

int main() {
char input;
cout << "Enter either 'A' or 'a': ";
cin >> input;

string result = checkAlphabetCase(input);
cout << result << endl;
return 0;
}

string checkAlphabetCase(char input) {

if (input == 'A') {
return "You entered Capital A";
} 

if (input == 'a') {
return "You entered small a";
} 
}