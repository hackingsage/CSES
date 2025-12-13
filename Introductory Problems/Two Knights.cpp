#include <bits/stdc++.h>
using namespace std;

/*
23444432
34666643
46888864
46888864
46888864
46888864
34666643
23444432

*/

#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        ll size = i * i;
        ll all = size * (size - 1) / 2;
        ll atk = 0;
        atk += 8 * (i-4) * (i-4);
        atk += 6 * (i-4) * 4;
        atk += 4 * (i-3) * 4;
        atk += 3 * 8;
        atk += 2 * 4;
        atk /= 2;
        cout << all - atk << '\n';
    }

    return 0;
}