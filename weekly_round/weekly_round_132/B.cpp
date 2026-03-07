#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s;
    cin >> s;
    
    ll f = 0;
    for(ll i = 0; i < s.size(); i++) if(s[i] == '5' || s[i] == '0') f = 1;
    if(f) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll T;
    cin >> T;
    while(T--) solve();

    return 0;
}