#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (islower(ch))
        cout << "Uppercase: " << (char)toupper(ch) << endl;
    else if (isupper(ch))
        cout << "Lowercase: " << (char)tolower(ch) << endl;
    else
        cout << "Not a letter." << endl;

    return 0;
}
