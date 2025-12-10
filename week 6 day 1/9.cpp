#include <iostream>
using namespace std;
void someAlgorithm(int n){
    int x = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            x++;
        }
    }
    cout << "Output: " << x << endl;
}
int main(){ 
    someAlgorithm(10); 
}