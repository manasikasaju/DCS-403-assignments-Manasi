#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> arr[i][j];

    // reverse each row
    for(int i = 0; i < 3; i++) {
        int start = 0, end = 2;
        while(start < end) {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    // print
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}
