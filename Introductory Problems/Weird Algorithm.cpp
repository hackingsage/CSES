#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    cout << n;
    while(n != 1){
        cout << ' ';
        if(n % 2 == 0){
            n /= 2;
            cout << n;
        }
        else{
            n = n * 3 + 1;
            cout << n;
        }
    }
    return 0;
}