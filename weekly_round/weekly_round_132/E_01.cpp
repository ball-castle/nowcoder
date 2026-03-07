#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
无权最短路 a -> b 最短步数 bfs 第一次到b就是最短
位数只会变多（剪枝）

vis[i] 到达i最短的步数
bfs 暴力 用 queue
*/


void solve() {
    int a, b, k;
    cin >> a >> b >> k;
    queue<int> q;
    q.push(a);

    vector<int> vis(10 * b + 1, 1e9); // 这个开ll会爆
    vis[a] = 0;

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        if(u + k < vis.size()) {
            if(vis[u] + 1 < vis[u + k]) {
                vis[u + k] = vis[u] + 1;
                q.push(u + k);
            }
        }

        if(u % 10 != 0) {
            int x = 0, d = vis[u];
            while(u) {
                x = x * 10 + (u % 10);
                u /= 10;
            }
            if(x < vis.size() && d + 1 < vis[x]) {
                vis[x] = d + 1;
                q.push(x);
            }
        }
    }
    cout << (vis[b] == 1e9 ? -1 : vis[b]) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();

    return 0;
}


