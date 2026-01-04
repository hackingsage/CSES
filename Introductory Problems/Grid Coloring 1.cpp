#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for(string& row : a){
        cin >> row;
    }

    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            set<char> s;
            if(row != 0) s.insert(a[row-1][col]);
            if(col != 0) s.insert(a[row][col-1]);
            s.insert(a[row][col]);

            for(char x = 'A'; x <= 'D'; x++){
                if(!s.count(x)){
                    a[row][col] = x;
                    break;
                }
            }
        }

        cout << a[row] << '\n';
    }

    return 0;
}