#include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll a[10010], b[10010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> a[i], b[i] = a[i];
    
    sort(b + 1, b + n + 1);

    ll m = n - 1, ans = 0;
    for(ll i = 1; i <= n; i++) {
        ll t = upper_bound(b + 1, b + n + 1, a[i]) - (b + 1);
        ll ct = t - 1;
        if(ct * 5 >= 4 * m) ans += a[i];
    }
    cout << ans << '\n';

    return 0;
}