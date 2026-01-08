#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<long long> x(n);
    for(int i = 0; i < n; i++) cin >> x[i];

    sort(x.begin(), x.end());
    long long val = 1;
    for(auto i : x){
        if (i > val){
            cout << val << '\n';
            return 0;
        }
        val += i;
    }
    cout << val << '\n';
}