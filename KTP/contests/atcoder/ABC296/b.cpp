#include<bits/stdc++.h>

using namespace std;
using ull = unsigned long long;
using ll  = long long;
#define pb push_back
#define fi first
#define se second
#define vi vector<int> 
#define vvi vector<vector<int>> 
#define vii vector<pair<int,int>> 
#define all(x) begin(x), end(x)

void solve(){
    char c;
    for (int i = 1; i <= 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> c; 
            if(c == '*'){
                cout << char('a'+j);
                cout << 9-i; 
            }
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
