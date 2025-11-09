#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch))
        cout << ch << " is a letter." << endl;
    else if (isdigit(ch))
        cout << ch << " is a digit." << endl;
    else if (ispunct(ch))
        cout << ch << " is a special character." << endl;
    else
        cout << ch << " is another type of character." << endl;

    return 0;
}
