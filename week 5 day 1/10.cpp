#include <iostream>
using namespace std;

bool isPal(string s, int l, int r) {
    if (l >= r) return true;
    if (s[l] != s[r]) return false;
    return isPal(s, l + 1, r - 1);
}

int main() {
    string s;
    cin >> s;
    if (isPal(s, 0, s.size() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}
