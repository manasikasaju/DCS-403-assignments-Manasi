#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            cout << i << " x " << j << " = " << i * j << endl;
            j++;
        } while (j <= 10);
        cout << endl;
        i++;
    } while (i <= 10);

    return 0;
}
