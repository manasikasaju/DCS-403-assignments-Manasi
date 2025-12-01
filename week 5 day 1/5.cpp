#include <iostream>
using namespace std;

int powerTail(int a, int b, int ans) {
    if (b == 0) return ans;
    return powerTail(a, b - 1, ans * a);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << powerTail(a, b, 1);
}
