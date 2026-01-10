#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x, n;
    cin >> x >> n;
    vector<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];

    set<pair<int, int>> ranges;
    ranges.insert({0, x});
    multiset<ll> range_len;

    range_len.insert(x);
    for (int i = 0; i < n; i++){
        ll pos = p[i];
        //finding the range in which pos lies
        auto it = ranges.upper_bound({ pos, 0 });
        it--;

        ll start = it->first;
        ll end = it->second;

        ranges.erase(it); //removing [L, R]
        range_len.erase(range_len.find(end - start)); // Removing R - L
        ranges.insert({start, pos});  //Inserting [L, P]
        ranges.insert({pos, end});    //Insertng [P, R]
        range_len.insert(pos - start);  //Inserting P - L
        range_len.insert(end - pos);    //Inserting R - P

        cout << *range_len.rbegin() << "\n";
    }
}