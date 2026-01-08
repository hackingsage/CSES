#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<long long> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];

    sort(p.begin(), p.end());
    long long ans = 0;
    long long key = p[n/2];
    for(int i = 0; i < n; i++) ans += abs(key - p[i]);
    cout << ans << '\n';
}