#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string s[7] = {"Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet"};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> a(7);
    for(int i = 0; i < 7; i++) cin >> a[i];
    
    int idx = 0;
    for(int i = 0; i < 7; i++) if(a[idx] < a[i]) idx = i;
    
    cout << s[idx] << '\n';

    return 0;
}