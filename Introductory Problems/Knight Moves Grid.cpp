#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 5;
vector<pair<int, int>> dirs = {{-2,-1},{-2,1},{2,-1},{2,1},{-1,-2},{-1,2},{1,-2},{1,2}};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<vector<int>> dist(n, vector<int>(n, INF));
    vector<pair<int, int>> q;
    q.emplace_back(0,0);
    dist[0][0] = 0;

    for(int i = 0; i < (int) q.size(); i++){
        auto [row, col] = q[i];
        for(pair<int, int> dir : dirs){
            int r = row + dir.first;
            int c = col + dir.second;
            if (0 <= min(r, c) && max(r, c) < n && dist[r][c] == INF){
                dist[r][c] = dist[row][col] + 1;
                q.emplace_back(r, c);
            }
        }
    }

    for(int r = 0; r < n; r++){
        for(int c = 0; c < n; c++){
            cout << dist[r][c] << ' ';
        }
        cout << '\n';
    }

    return 0;
}