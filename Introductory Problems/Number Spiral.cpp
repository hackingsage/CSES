#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll row, col;
        cin >> row >> col;
        ll layer = max(row, col);
        if (layer % 2 == 1){
            swap(row,col);
        }

        if (layer == col){
            cout << (layer - 1) * (layer - 1) + 1 + (row - 1) << '\n';
        }
        else{
            cout << layer * layer - (col - 1) << '\n';
        }
    }

    return 0;
}