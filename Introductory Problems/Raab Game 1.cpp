#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        int ties = n - a - b;

        if (ties < 0) cout << "NO\n";
        else{
            n -= ties;
            if (n >= 1 && (a == n || b == n)) cout << "NO\n";
            else{
                cout << "YES\n";
                //A
                for(int i = 1; i <= n; i++) cout << i << ' ';
                for(int i = n + 1; i <= n + ties; i++) cout << i << ' ';
                //B
                cout << '\n';
                for(int i = 1; i <= n; i++){
                    int x = i + a;
                    if (x > n) x-= n;
                    cout << x << ' ';
                }
                for(int i = n + 1; i <= n + ties; i++) cout << i << ' ';
                cout << '\n';
            }
        }
    }

    return 0;
}