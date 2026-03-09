#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int d[200010], m[200010];
/*
https://ac.nowcoder.com/acm/contest/129231/C 
贪心

*/ 



void solve() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> d[i];
    m[1] = d[1];
    for(int i = 2; i <= n; i++) m[i] = min(m[i - 1], d[i]);
    
    int ans = 0;
    for(int i = n; i >= 1; i--) if(m[i] >= ans) ans++;
    cout << ans << '\n';
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();

    return 0;
}