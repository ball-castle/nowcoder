#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod = 998244353;
vector<ll> m(200010);

void pre() {
    m[0] = 1;
    for(int i = 1; i <= 200005; i++) m[i] = m[i - 1] * i % mod;
}


void solve() {

    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end(), [&](ll x, ll y) {return x > y;});

    ll i = 0, j = 0, k = 0;
    while(i < n && j < n) {
        if(a[i] > b[j]) k++, i++;
        else j++;
    }

    cout << m[k] * m[n - k] % mod << '\n';
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    pre();
    while(T--) solve();

    return 0;
}