#include <bits/stdc++.h>
using namespace std;

int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int ans = 1;
    for(int i = 0; i < n; i++){
        ans = (2 * ans) % MOD;
    }
    cout << ans << '\n';
}