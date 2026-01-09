#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> last;
    int l = 0, best = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        l = max(l, last[x]);
        best = max(best, i - l);
        last[x] = i;
    }
    cout << best << "\n";
}