#include <iostream>
using namespace std;

bool isSafe(int board[8][8], int row, int col) {
    for (int i = 0; i < row; i++)
        if (board[i][col]) return false;

    for (int i = row-1, j = col-1; i>=0 && j>=0; i--, j--)
        if (board[i][j]) return false;

    for (int i = row-1, j = col+1; i>=0 && j<8; i--, j++)
        if (board[i][j]) return false;

    return true;
}

bool solve(int board[8][8], int row) {
    if (row == 8) return true;

    for (int col = 0; col < 8; col++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 1;

            if (solve(board, row + 1))
                return true;

            board[row][col] = 0;
        }
    }
    return false;
}

int main() {
    int board[8][8] = {0};

    if (solve(board, 0)) {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++)
                cout << board[i][j] << " ";
            cout << endl;
        }
    } else {
        cout << "No solution found";
    }

    return 0;
}
