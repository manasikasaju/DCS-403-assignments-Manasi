#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> key;

    int found = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1)
        cout << "Found at index " << found;
    else
        cout << "Not found";

    return 0;
}
