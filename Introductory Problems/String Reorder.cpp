#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
	cin >> s;
	int n = s.length();
	
	vector<int> freq(26);
	for (char c : s) freq[c-'A']++;
	string answer;
	while ((int) answer.length() < n) {
		bool anything = false;
		pair<int,int> maxima{0, 0};
		for (int x : freq) {
			if (x > maxima.first) maxima = {x, maxima.first};
			else if (x > maxima.second) maxima.second = x;
		}
		for (int i = 0; i < 26; i++) {
			if (freq[i] > 0 && (answer.empty() || answer.back() != ('A' + i))) {
				freq[i]--;
				answer += ('A' + i);
				int suffix = n - (int) answer.length();
				bool can_finish = true;
				if (freq[i] > suffix/2) can_finish = false;
				if ((freq[i]+1 == maxima.first ? maxima.second : maxima.first) > (suffix+1)/2) can_finish = false;
				if (can_finish) {
					anything = true;
					break;
				}
				else {
					freq[i]++;
					answer.pop_back();
				}
			}
		}
		if (!anything) break;
	}
	if (answer.empty()) cout << "-1\n";
	else cout << answer << "\n";

    return 0;
}