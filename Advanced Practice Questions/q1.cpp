#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, D;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    D = b*b - 4*a*c;

    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2*a);
        double x2 = (-b - sqrt(D)) / (2*a);
        cout << "Roots are real and distinct: " << x1 << " and " << x2 << endl;
    } 
    else if (D == 0) {
        double x = -b / (2*a);
        cout << "Roots are real and equal: " << x << endl;
    } 
    else {
        cout << "Roots are imaginary." << endl;
    }

    return 0;
}
