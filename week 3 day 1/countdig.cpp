#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    do {
        count++;
        n /= 10;
    } while (n != 0);

    cout << "Digits = " << count;
    return 0;
}
