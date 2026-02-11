#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// https://ac.nowcoder.com/acm/contest/127702


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s1, s2;
    cin >> s1;
    ll ct = 0;
    for(ll i = 0; i < (ll)s1.size(); i++) if(s1[i] != '0') {ct = i; break;}

    s2 = s1.substr(ct);
    cout << s2 << '\n';
    return 0;
}