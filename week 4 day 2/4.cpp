#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        int maxi = arr[i][0];
        for(int j = 1; j < 3; j++){
            if(arr[i][j] > maxi)
                maxi = arr[i][j];
        }
        cout << "Max of row " << i+1 << " = " << maxi << endl;
    }

    return 0;
}
