#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// translate and modification
// find the pattern


char s[25][25];
ll dx[5] = {0, 0, 0, 1, -1};
ll dy[5] = {0, 1, -1, 0, 0};


void solve() {
    ll n;
    cin >> n;

    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= n; j++) cin >> s[i][j];
    }    

    ll f = 0;
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= n; j++) {
            if(s[i][j] == '*') {
                ll ct = 0;
                for(ll k = 1; k <= 4; k++) {
                    ll x = i + dx[k], y = j + dy[k];
                    if(0 < x && x <= n && 0 < y && y <= n && s[x][y] == '*') ct++;
                }
                if(ct == 3) f = 1;
            }
        } 
    }
    cout << (f ? 'T' : 'L') << '\n';
}





int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll T;
    cin >> T;
    while(T--) solve();

    return 0;
}