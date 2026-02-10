#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll p[200010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, q, s;
    cin >> n >> q >> s;
    for(ll i = 1; i <= n; i++) {
        ll t;
        cin >> t;
        p[i] = p[i - 1] + t;
    }

    while(q--) {
        ll x, y;
        cin >> x >> y;
        ll ans = s + p[x - 1] + y - 1;
        cout << ans << '\n';
    }

    return 0;
}