#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    map<int, int> last_pos;
    int l = 1;
    ll count = 0;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        l = max(l, last_pos[x] + 1);
        count += i - l + 1;
        last_pos[x] = i;
    }

    cout << count << "\n";
}
