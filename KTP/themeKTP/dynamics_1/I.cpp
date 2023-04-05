#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define fi first
#define se second
#define vi vector<int> 
#define vvi vector<vector<int>> 
#define vll vector<ll> 
#define vii vector<pair<int,int>> 
#define all(x) begin(x), end(x)

const int mod = 1000000000+ 7;
void solve(){
    int n; cin >> n;
    if(n > 45){ cout << 0; return; }

    vector<vector<long long>> dp(10, vector<long long>(n+1, 0));
    vector<vector<long long>> newer(10, vector<long long>(n+1, 0));

    for (int i = 1; i < 10; i++){
        dp[i][1] = 1;
        newer[i][1] = 1;
    }
    if(n == 1){
        cout << 9; return;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < 10; j++) {
            dp[j][i] = (dp[j][i] + dp[j][i-1]) % mod;
            for (int k = 9; k > j; k--) {
                dp[j][i] = (dp[j][i] + dp[k][i-1]) % mod;
                newer[j][i] = (newer[j][i] + dp[k][i-1]) % mod;
            }
            if(i-j > 0)
                dp[j][i] -= newer[j][i-j];
        }
    }
    ll sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += dp[i][n];
    }
    cout << sum;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
