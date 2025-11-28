#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    bool isSym = true;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] != arr[j][i])
                isSym = false;
        }
    }

    if(isSym) cout << "Symmetric";
    else      cout << "Not symmetric";

    return 0;
}
