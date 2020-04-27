#include <iostream>
using namespace std;

// Based on Collatz conjecture
int main(){
    long long int n;
    cin >> n;int c=5;
    while(n != 1){
        cout << n << " ";
        if (n%2)
            n=n*3 + 1;
        else 
            n/=2;
        c--;
    }
    cout << n;
    return 0;
}