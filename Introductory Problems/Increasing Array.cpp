#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, mx, cnt = 0;
    cin >> n;
    vector<ll> x(n);
    for(ll i = 0; i < n; i++) cin >> x[i];

    for(ll i = 1; i < n; i++){
        mx = max(x[i], x[i-1]);
        cnt += mx - x[i];
        x[i] = mx;
    }
    cout << cnt << '\n';
    return 0;
}