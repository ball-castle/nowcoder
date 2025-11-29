#include <bits/stdc++.h>
using namespace std;
using ll = long long;




void solve() {
    ll n;
    cin >> n;
    vector<ll> a(310110);
    ll mi = 1e9, mx = 0;
    for(ll i = 0; i < n; i++) cin >> a[i], mi = min(mi, a[i]), mx = max(mx, a[i]);
    
    cout << mx - mi << endl;
}


int main() {
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}