#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n+1);
    ll M = 0;
    for(int i = 1; i <= n; i++) cin >> a[i], M = max(M, a[i]);

    if(n == 1) {cout << a[1] << "\n"; return;}
    

    ll ans = a[1] + a[n] + (ll)(n - 2) * M;
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) solve();
    return 0;
}