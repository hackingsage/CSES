#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    vector<ll> nums(n-1);
    for(ll i = 0; i < n-1; i++) cin >> nums[i];
    sort(nums.begin(), nums.end());
    for(ll i = 0; i <n; i++){
        if(nums[i] != i + 1){
            cout << i + 1;
            return 0;
        }
    }
}