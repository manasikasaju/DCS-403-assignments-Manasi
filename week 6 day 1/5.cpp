#include <iostream>
using namespace std;
void someAlgorithm(int n){
    int x = 0;
    for(int i=1;i<=n;i*=2){
        x += i;
    }
    cout << "Output: " << x << endl;
}
int main(){ 
    someAlgorithm(32); 
}