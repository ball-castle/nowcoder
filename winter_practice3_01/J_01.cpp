#include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll check(ll a, ll n) {
    ll ans = 0, h = 0, h1 = 0;
    h = 64 - __builtin_clzll(a);
    h1 = 64 - __builtin_clzll(n);
    if(h < h1) ans = (1ll << (h - 1));
    else ans = n - ((1ll << (h1 - 1)) - 1);
    return ans; 
}




void solve() {
    ll n, q;
    cin >> n >> q;
    
    while(q--) {
        ll x;
        cin >> x;

        ll ans = check(x, n);
        cout << ans << '\n';
    }
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}