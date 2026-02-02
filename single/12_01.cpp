#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    s.resize(4); // not reserve
    cin >> s;   
    
    reverse(s.begin(), s.end());
    cout << s;
    

    return 0;
}