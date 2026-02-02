#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<ll> a(n), b(k, 0);
    for(int i = 0; i < n; i++) cin >> a[i], b[a[i] % k]++;


    bool f = 0;
    for(int i = 0; i < k; i++) if(b[i] % 2 != 0) f = 1; 
    
    cout << (f ? "No" : "Yes") << '\n';

    return 0;
}