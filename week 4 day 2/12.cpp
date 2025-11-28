#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> arr[i][j];

    // boundary: top row
    for(int j = 0; j < 3; j++)
        cout << arr[0][j] << " ";

    // right column (middle)
    for(int i = 1; i < 2; i++)
        cout << arr[i][2] << " ";

    // bottom row (reverse)
    for(int j = 2; j >= 0; j--)
        cout << arr[2][j] << " ";

    // left column (middle)
    for(int i = 1; i > 0; i--)
        cout << arr[i][0] << " ";
}
