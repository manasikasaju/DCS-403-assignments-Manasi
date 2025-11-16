#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;
    cin >> n;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    cout << "Reversed = " << rev;
    return 0;
}
