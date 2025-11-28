#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> arr[i][j];

    // reverse each column
    for(int j = 0; j < 3; j++) {
        int top = 0, bottom = 2;
        while(top < bottom) {
            swap(arr[top][j], arr[bottom][j]);
            top++;
            bottom--;
        }
    }

    // print
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}
