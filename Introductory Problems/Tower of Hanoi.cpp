#include <bits/stdc++.h>
using namespace std;

// O(2**N)
void solve(int n, int from, int to){
    if (n == 0) return;
    int other = 6 - from - to; // from ^ to
    solve(n-1, from, other);
    cout << from << ' ' << to << '\n';
    solve(n-1, other, to);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cout << (1 << n) - 1 << '\n'; // f(N) = 2**N - 1
    solve(n, 1, 3);

    return 0;
}