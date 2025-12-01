#include <iostream>
using namespace std;

void reverseStr(string &s, int l, int r) {
    if (l >= r) return;
    swap(s[l], s[r]);
    reverseStr(s, l + 1, r - 1);
}

int main() {
    string s;
    cin >> s;
    reverseStr(s, 0, s.size() - 1);
    cout << s;
}
