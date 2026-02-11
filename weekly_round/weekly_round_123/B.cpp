#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> a(13), b(13);
    for(int i = 0; i < 13; i++) cin >> a[i];
    for(int i = 0; i < 13; i++) cin >> b[i];

    int ans = 0;
    for(int i = 0; i < 13; i++) ans += max(a[i] + b[i] - 4, 0);

    cout << ans << endl;
    return 0;

}