#include <iostream>
using namespace std;

int main() {
    int N, num = 1;
    cin >> N;

    int i = 1;
    do {
        int j = 1;
        do {
            cout << num << " ";
            num++;
            j++;
        } while (j <= i);
        cout << endl;
        i++;
    } while (i <= N);

    return 0;
}
