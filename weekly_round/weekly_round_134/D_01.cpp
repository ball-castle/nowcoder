#include <bits/stdc++.h>
using namespace std;
using ll = long long;
/*
双指针 + 队列维护最大最小值
*/


int a[200010];
void solve() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    deque<int> mx, mn;

    int l = 1;
    ll ans = 0;
    for(int r = 1; r <= n; r++){
        while(!mx.empty() && a[mx.back()] < a[r]) mx.pop_back();
        mx.push_back(r);
        while(!mn.empty() && a[mn.back()] > a[r]) mn.pop_back();
        mn.push_back(r);

        while(!mx.empty() && !mn.empty() && a[mx.front()] - a[mn.front()] > 1) {
            if(mx.front() == l) mx.pop_front();
            if(mn.front() == l) mn.pop_front();
            l++;
        }
        ans += r - l + 1;
    }
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