#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// https://ac.nowcoder.com/acm/contest/126798/C

void solve() {
    string s;
    cin >> s;

    int n = s.length();
    for(int i = 0; i < n; i++) {
        if(s[i] >= '5') {
            int carry = 1;
            for(int j = i; j < n; j++) s[j] = '0';
            for(int j = i - 1; j >= 0; j--) {
                s[j]++;
                if(s[j] > '9') {
                    s[j] = '0';
                    carry = 1;
                }
                else {carry = 0; break;}
            }
            if(carry == 1) {s = '1' + s; break;}
        }
    }

    if(!s.empty()) s.back() = '0';
    cout << s << '\n';
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}