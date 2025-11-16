#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=n; i>=1; i--){
        for(int s=1; s<=n-i; s++) cout << " ";
        for(int star=1; star<=2*i-1; star++) cout << "*";
        cout << endl;
    }
}
