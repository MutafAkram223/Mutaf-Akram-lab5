#include <iostream>
#include <iomanip>
using namespace std;

string timeTravel(int hours, int minutes) {
minutes += 15;

if (minutes >= 60) {
hours += 1;
minutes -= 60;
}

if (hours >= 24) {
hours -= 24;
}

string result = to_string(hours) + ":" + (minutes < 10 ? "0" : "") + to_string(minutes);
return result;
}

int main() {
int hours, minutes;

cout << "Enter current hour: ";
cin >> hours;

cout << "Enter current minutes: ";
cin >> minutes;

string futureTime = timeTravel(hours, minutes);
cout << "Future time: " << futureTime << endl;

return 0;
}