#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> times;
    for (int i = 0; i < n; i++) {
		int start, end;
		cin >> start >> end;
        times.push_back({start, end});
	}

    sort(times.begin(), times.end(), [](const pair<int, int> &a, const pair<int, int> &b){
        return a.second < b.second;
    });

    int time = 0, ans = 0;
    for(int i = 0; i < n; i++){
        if(times[i].first >= time){
            ans++;
            time = times[i].second;
        }
    }
    cout << ans << '\n';

}