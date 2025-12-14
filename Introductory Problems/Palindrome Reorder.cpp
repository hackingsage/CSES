#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int n = s.size();
    vector<int> freq(26);
    for(char c : s){
        freq[c-'A']++;
    }
    bool already_mid = false;
    int taken = 0;
    for(int c = 0; c < 26; c++){
        if (freq[c] % 2 == 1){
            if (n % 2 == 0 || already_mid){
                cout << "NO SOLUTION\n";
                return 0;
            }
            else{
                already_mid = true;
                s[n/2] = 'A' + c;
            }
            freq[c]--;
        }
        int half = freq[c] / 2;
        for(int i = 0; i < half; i++){
            s[taken + i] = s[n - 1 - taken - i] = 'A' + c;
        }
        taken += half;
    }
    cout << s << '\n';

    return 0;
}