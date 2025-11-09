#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Square root of " << fabs(num) << " = " << sqrt(fabs(num)) << endl;
    cout << "2 raised to power 3 = " << pow(2, 3) << endl;
    cout << "Absolute value of " << num << " = " << fabs(num) << endl;

    return 0;
}
