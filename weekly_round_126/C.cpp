#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    if(k == 0 && !(n & 1)) {for(int i = 1; i <= n / 2; i++) cout << i << " "; return 0;}
    if((n - k) % 2 != 0) {cout << -1 << endl; return 0;}
    
    for(int i = 1; i <= k; i++) cout << i << ' ';
    for(int i = k + 1; i <= k + 1 + (n - k) / 2 - 1; i++) cout << i << " " << i << " ";
    
    return 0;
}