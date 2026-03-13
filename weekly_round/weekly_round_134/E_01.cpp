#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
找规律
枚举 从特殊到一般
*/

char a[500010];

void solve() {
    int n;
    cin >> n;   
    int sum = 0;
    for(int i = 1; i <= n; i++) cin >> a[i], sum += a[i] - '0';
    if(sum == n) {cout << n << '\n'; return;}
    if(sum == 0) {cout << 0 << '\n'; return;}
    cout << n - 1 << '\n';
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}