#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, k;
    cin >> n >> k;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    sort(s.begin(), s.end(), [&](string a, string b) {return a.length() < b.length();});
    
    if(s[k - 1] == s[k]) {cout << -1 << endl; return 0;} // special judge
    cout << s[k - 1] << endl;
    return 0;
}