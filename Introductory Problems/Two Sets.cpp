#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a, b;
    long long A = 0, B = 0;
    for(int i = n; i > 0; i--){
        if (A > B){
            b.push_back(i);
            B += i;
        }
        else{
            a.push_back(i);
            A += i;
        }
    }

    if (A == B){
        cout << "YES\n";
        cout << a.size() << '\n';
        for(int i : a){
            cout << i << ' ';
        }
        cout << '\n';
        cout << b.size() << '\n';
        for(int i : b){
            cout << i << ' ';
        }
    }
    else cout << "NO\n";

    return 0;
}