#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    ll ans = 0;
    for(ll m = 5; m <= n; m *= 5){
        ans += n / m;
    }
    cout << ans << '\n';

    return 0;
}