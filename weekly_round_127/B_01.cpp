#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll a, ll b, ll c, ll d) {
    set<ll> s = {a, b, c, d};
    return s.size() == 4;
}



void solve() {
    vector<vector<ll>> grid(4, vector<ll>(4));
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) cin >> grid[i][j];
    }

    ll f = true;

    for(int i = 0; i < 4; i++) {
        if(!check(grid[i][0], grid[i][1], grid[i][2], grid[i][3])) f = 0;
        if(!check(grid[0][i], grid[1][i], grid[2][i], grid[3][i])) f = 0;
        
        int r = (i / 2) * 2;
        int c = (i % 2) * 2;
        if(!check(grid[r][c], grid[r][c + 1], grid[r + 1][c], grid[r + 1][c + 1])) f = 0;
    }
    
    if(f) cout << "YES" << endl;
    else cout << "NO" << endl;

}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}