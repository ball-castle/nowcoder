#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, y, n;
    cin >> x >> y >> n;
    vector<int> c(x), d(y);
    for(int i = 0; i < x; i++) cin >> c[i];
    for(int i = 0; i < y; i++) cin >> d[i];

    if(c[x - 1] != d[y - 1] || x + y - 1 > n) {cout << -1 << endl; return 0;}
    int ct = n - (x + y - 1);
    
    for(int i = 1; i <= ct; i++) cout << c[0] << " ";
    for(int i = 0; i < x - 1; i++) cout << c[i] << " ";
    for(int i = y - 1; i >= 0; i--) cout << d[i] << " ";
    cout << endl;

    return 0;

}