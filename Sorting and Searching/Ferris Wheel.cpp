#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, x;
    cin >> n >> x;
    vector<long long> p(n);
    for(long long i = 0; i < n; i++) cin >> p[i];
    long long ans = 0;

    sort(p.begin(), p.end());
    long long l = 0;
    for(long long r = n - 1; r >= l; r--){
        if(p[l] + p[r] <= x) l++;
        ans++;
    }
    cout << ans << '\n';

    return 0;
}