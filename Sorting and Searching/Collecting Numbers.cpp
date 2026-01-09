#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> indices(n+1);
    int round = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        indices[a[i]] = i;
    }

    for(int num = 1; num < n; num++) if(indices[num+1] < indices[num]) round++;

    cout << round << '\n';
}