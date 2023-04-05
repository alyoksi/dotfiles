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
    int n; cin >> n;
    string s; cin >> s;
    if(n == 1){
        cout << "Yes";
        return ;
    }
    int flag = 0;
    for (int i = 0; i < n-1; i++) {
        if(s[i] == s[i+1]){
            flag = 1;
        }
    }
    cout << (flag ? "No" : "Yes");
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
