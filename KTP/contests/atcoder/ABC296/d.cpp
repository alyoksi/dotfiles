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

const ll INF = (ll)2e+18;

void solve(){
    long long n, m;
    cin >> n >> m;
    ll x;
    ll ans = INF;
    for (long long i = 1; i <= n; i++) {
        x = (m+i-1) / i;
        if(x <= n)
            ans = min(ans, i*x);
        if(i > x) break;
    }
    if(ans == INF){
        cout << -1;
    }
    else{
        cout << ans;
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
