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
    
    ll ct = 0;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    for(ll i = 1; i <= n; i++) if(a[i] == 1) a[i] = 0, ct++;
    for(ll i = 2; i <= n; i++) if(a[i - 1] != 1 && a[i] != 1 && gcd(a[i - 1], a[i]) == 1) a[i] = 0, ct++;
    cout << ct << '\n';
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll T;
    cin >> T;
    while(T--) solve();

    return 0;
}