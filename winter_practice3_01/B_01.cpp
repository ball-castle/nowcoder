#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
ll a[200010];
void solve() {
    ll n;
    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> a[i];

    ll m = min(n, (ll)50010), f = 0;
    for(ll i = 1; i <= m; i++) {
        for(ll j = i + 1; j <= m; j++) 
            if(gcd(a[i], a[j]) != 1) {cout << a[i] << ' ' << a[j] << '\n', f = 1; return;}
    }

    if(!f) cout << -1 << '\n';
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}