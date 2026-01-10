#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> cubes(n);
    for(int i = 0; i < n; i++) cin >> cubes[i];

    long long ans = 0;
    multiset<long long> topElements;
    for(int i = 0; i < n; i++){
        auto it = topElements.upper_bound(cubes[i]);
        if(it == topElements.end()){
            ans++;
            topElements.insert(cubes[i]);
        }
        else{
            topElements.erase(it);
            topElements.insert(cubes[i]);
        }
    }

    cout << ans << '\n';

}