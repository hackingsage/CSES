#include <bits/stdc++.h>
using namespace std;

int n;
int apple[21];
long long answer = LONG_LONG_MAX;

void divide(int index, long long A, long long B){
    if (index == n){
        answer = min(answer, abs(A-B));
        return;
    }
    divide(index + 1, A + apple[index], B);
    divide(index + 1, A, B + apple[index]);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++) cin >> apple[i];

    divide(0, 0, 0);
    cout << answer << '\n';

    return 0;
}