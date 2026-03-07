#include <bits/stdc++.h>
using namespace std;
using ll = long long;



ll a[200010], b[200010];
void solve() {
    ll n;
    cin >> n;
    
    ll sum = 0, ct = 0;
    for(ll i = 1; i <= n; i++) {
        cin >> a[i], sum += a[i];
        if(a[i] % 2 == 0) ct++;
    }

    sum = sum * (n - 1);
    sum = sum - ct * (n - ct);

    sum = sum / 2;
    cout << sum << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll T;
    cin >> T;
    while(T--) solve();

    return 0;
}