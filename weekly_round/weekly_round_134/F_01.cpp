#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 998244353;
int c[2010][2010]; // 因为暴力肯定不行，切割点太多 所以想到dp
ll dp0[2010], dp1[2010]; // 线性问题想dp,就看怎么划分 找递推 找条件 前缀dp(有切割必有最后一段)
char s[2010];
void solve() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> s[i];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) c[i][j] = 0;
    }
    for(int i = 1; i <= n; i++) dp0[i] = 0, dp1[i] = 0;
    
    for(int i = 1; i <= n; i++) c[i][i] = 1;
    for(int len = 2; len <= n; len++) {
        for(int l = 1; l + len - 1 <= n; l++) {
            int r = l + len - 1;
            if(s[l] != s[r]) continue;
            if(len == 2 || c[l + 1][r - 1] == 1) c[l][r] = 1; // 循环中用数组进行迭代
        }
    }
    dp0[0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j++) {
            if(!c[i][j]) continue;
            int len = j - i + 1;
            dp0[j] = (dp0[j] + dp0[i - 1]) % mod;
            dp1[j] = (dp1[j] + dp0[i - 1] * len % mod * len + dp1[i - 1]) % mod;
        }
    }
    cout << dp1[n] << '\n';
}





int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();

    return 0;
}