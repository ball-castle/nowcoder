#include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

ll a[110], b[110];
ll c[110][110];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;

    for(ll i = 1; i <= n; i++) cin >> a[i];
    for(ll i = 1; i <= m; i++) cin >> b[i];
    
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= m; j++) c[i][j] = 1;    
    }

    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= m; j++) {
            ll d = gcd(a[i], b[j]);
            c[i][j] *= d;
            a[i] /= d; 
            b[j] /= d;
        }
    }

    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= m; j++) cout << c[i][j] << " ";
        cout << '\n';
    }


    return 0;
}