#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    ll n = 1, best = 1;
    cin >> s;
    
    for(ll i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]) n++;
        else n = 1;
        best = max(best,n);
    }
    cout << best << '\n';
    return 0;
}