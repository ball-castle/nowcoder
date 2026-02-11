#include <bits/stdc++.h>
using ll = long long;
using namespace std;

vector<ll> v1(100000);


int main() {
    ll n;
    cin >> n;

    for(ll i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        v1[u]++, v1[v]++;
    }
    
    for(ll i = 1; i <= n; i++) if(v1[i] == n - 1) cout << i << endl;
    
    return 0;
}