#include <bits/stdc++.h>
using namespace std;

const int N = 7;
const vector<pair<int,int>> dirs{{-1,0},{1,0},{0,1},{0,-1}};
const string moves = "UDRL";
long long answer;
bool visited[N][N];
string input;

bool isInside(int row, int col) {
	return 0 <= min(row, col) && max(row, col) < N;
}
bool isEmpty(int row, int col) {
	return isInside(row, col) && !visited[row][col];
}

void dfs(int row, int col, int i) {
	// checkerboard pattern
	if (row >= 1 && col >= 1 && isEmpty(row-1, col) && isEmpty(row, col-1) && !isEmpty(row-1, col-1)) {
		return;
	}
	if (row >= 1 && col <= N - 2 && isEmpty(row-1, col) && isEmpty(row, col+1) && !isEmpty(row-1, col+1)) {
		return;
	}
	if (row <= N-2 && col >= 1 && isEmpty(row+1, col) && isEmpty(row, col-1) && !isEmpty(row+1, col-1)) {
		return;
	}
	if (row <= N-2 && col <= N - 2 && isEmpty(row+1, col) && isEmpty(row, col+1) && !isEmpty(row+1, col+1)) {
		return;
	}
	
	// check of cross-pattern: empty cell above&below or left&right from you
	if (isEmpty(row-1, col) && isEmpty(row+1, col) && !isEmpty(row,col-1) && !isEmpty(row,col+1)) {
		return;
	}
	if (!isEmpty(row-1, col) && !isEmpty(row+1, col) && isEmpty(row,col-1) && isEmpty(row,col+1)) {
		return;
	}
	
	if (row == N - 1 && col == 0) {
		if (i == N * N - 1) answer++;
		return;
	}
	for (int j = 0; j < 4; j++) {
		if (input[i] != '?' && input[i] != moves[j]) continue;
		const pair<int,int>& dir = dirs[j];
		int r = row + dir.first;
		int c = col + dir.second;
		if (isInside(r, c) && !visited[r][c]) {
			visited[r][c] = true;
			dfs(r, c, i+1);
			visited[r][c] = false;
		}
	}
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> input;
    visited[0][0] = true;
    dfs(0,0,0);
    cout << answer << '\n';

    return 0;
}