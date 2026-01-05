#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n);
    vector<long long> b(m);
    for(long long i = 0; i < n; i++) cin >> a[i];
    for(long long i = 0; i < m; i++) cin >> b[i];
    long long ans = 0;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int aptr = 0, bptr = 0;
    while(aptr < n){
        while(bptr < m && b[bptr] < a[aptr]-k)  bptr++;
        if(bptr < m && a[aptr]-k <= b[bptr] && b[bptr] <= a[aptr]+k){
            ans++;
            aptr++;
            bptr++;
        } else aptr++;
    }
    cout << ans << '\n';

    return 0;
}