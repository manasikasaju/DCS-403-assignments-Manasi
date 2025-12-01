#include <iostream>
using namespace std;

int fibTail(int n, int a, int b) {
    if (n == 0) return a;
    return fibTail(n - 1, b, a + b);
}

int main() {
    int n;
    cin >> n;
    cout << fibTail(n, 0, 1);
}
