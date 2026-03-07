#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll a[100010];
// easy problem -> degree
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    for(ll i = 1; i <= n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        a[u]++, a[v]++;
    }

    for(ll i = 1; i <= n; i++) a[i]--;
    for(ll i = 1; i <= n; i++) if(a[i] > 2) {cout << 0 << '\n'; return 0;}
    ll ct = 0;
    for(ll i = 1; i <= n; i++) if(a[i] == 2) ct++;
    cout << n - ct << '\n';
           
    return 0;
}