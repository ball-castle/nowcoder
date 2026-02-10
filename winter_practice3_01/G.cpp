#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll a[200010], b[200010];

void solve() {
    ll n, m;
    cin >> n >> m;
    ll suma = 0, sumb = 0;


    for(ll i = 1; i <= n; i++) cin >> a[i], suma += a[i];
    for(ll i = 1; i <= m; i++) cin >> b[i], sumb += b[i];

    sort(a + 1, a + n + 1, [&](ll x, ll y) {return x > y;});
    sort(b + 1, b + m + 1, [&](ll x, ll y) {return x > y;});

    ll ct = 0;
    if(suma > sumb) for(ll i = 1; i <= n && suma > sumb; i++) suma -= a[i], ct++;
    else if (suma < sumb) for(ll i = 1; i <= m && suma < sumb; i++) sumb -= b[i], ct++;
    else ct = 1;

    cout << ct << '\n';
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();

    return 0;
}