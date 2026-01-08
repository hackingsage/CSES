#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<long long> x(n);
    for(int i = 0; i < n; i++) cin >> x[i];
    vector<long long> dp(n, 0);
    dp[0] = x[0];

    for(int i = 1; i < n; i++) dp[i] = max(x[i],dp[i-1] + x[i]);
    auto max_val = *max_element(dp.begin(), dp.end());
    cout << max_val << '\n';
}