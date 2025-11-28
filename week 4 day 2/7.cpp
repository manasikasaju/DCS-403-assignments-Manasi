#include <iostream>
using namespace std;

int main() {
    int A[2][3], B[3][2], C[2][2] = {0};

    // Input A
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            cin >> A[i][j];

    // Input B
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 2; j++)
            cin >> B[i][j];

    // Multiply
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 3; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
