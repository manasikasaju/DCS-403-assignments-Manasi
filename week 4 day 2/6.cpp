#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], C[2][2];

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cin >> A[i][j];

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cin >> B[i][j];

    // Addition
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            C[i][j] = A[i][j] + B[i][j];

    // Print result
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
