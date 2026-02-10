#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    ll ans = -1e9;
    ans = max(ans, k + a[1]);
    for(int i = 1; i < n; i++) ans = max(ans, a[i] + a[i + 1]);
    ans = max(ans, a[n] + k);
    
    cout << ans << '\n';
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
    
    return 0;
}