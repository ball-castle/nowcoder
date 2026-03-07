#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// dp dp[i] 处理到位置i以前，且i位置为c的最小修改次数
ll a[100010];
ll dp[30], f[30];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    ll n = s.size();
    for(ll i = 0; i < n; i++) a[i] = s[i] - 'a';
    
    ll ans = n;
    for(ll i = 0; i < 26; i++) {
        for(ll j = 0; j < n; j++) {
            for(ll k = 0; k < n; k++) {
                ll idx1 = (j + i) % 26;
                ll idx2 = ((j - i) % 26 + 26) % 26;

                dp[idx1] = min(dp[idx1], dp[j] + (a[i] != idx1));
                dp[idx2] = min(dp[idx2], dp[j] + (a[i] != idx2));
            }
        }
    }
    for(ll i = 0; i < 26; i++) ans = min(ans, a[i]);
    cout << ans << '\n';

    return 0;
}