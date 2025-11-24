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

    int low = 0, high = n - 1;
    int found = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (found != -1)
        cout << "Found at index " << found;
    else
        cout << "Not found";

    return 0;
}
