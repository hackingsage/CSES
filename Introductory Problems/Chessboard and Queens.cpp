#include <bits/stdc++.h>
using namespace std;

long long ans = 0;

void place(int row, vector<string> grid){
    if(row == 8){
        ans++;
        return;
    }
    for(int col = 0; col < 8; col++){
        if(grid[row][col] == '.'){
            bool attacked = false;
            for(int r = 0; r < row; r++){
                if(grid[r][col] == 'Q'){
                    attacked = true;
                    break;
                }
            }
            for(int r = row - 1, c = col - 1; r >= 0 && c >= 0; r--, c--){
                if(grid[r][c] == 'Q'){
                    attacked = true;
                    break;
                }
            }
            for(int r = row - 1, c = col + 1; r >= 0 && c < 8; r--, c++){
                if(grid[r][c] == 'Q'){
                    attacked = true;
                    break;
                }
            }
            if(!attacked){
                grid[row][col] = 'Q';
                place(row+1, grid);
                grid[row][col] = '.';
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> grid(8);
    for(string& s: grid) cin >> s;
    place(0, grid);
    cout << ans << '\n';

    return 0;
}