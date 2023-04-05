#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define fi first
#define se second
#define vi vector<int> 
#define vll vector<ll> 
#define vii vector<pair<int,int>> 
#define all(x) begin(x), end(x)

void solve(){
    int n, m;
    ll k;
    cin >> n >> m >> k;
    vii cost(n);
    vector<string> chan(n);
    vector<vector<ll>> dp(n+1, vector<ll>(m, 0));

    for (int i = 0; i < n; i++){
        cin >> cost[i].fi;
        cost[i].se = i;
    }
    sort(all(cost));
    reverse(all(cost));
    for (int i = 0; i < n; i++)
        cin >> chan[i];

    for (int i = 0; i < m; i++) {
        int cnt = 1;
        ull sum = 0;
        ll maxim = 0;
        for(int j = 0; j < n; j++){
            if(chan[cost[j].se][i] == '1'){
                if(i != 0){
                    dp[cnt][i] = max(maxim, dp[cnt][i-1]) + cost[j].fi + sum;
                    maxim = max(maxim, dp[cnt][i-1]);
                }
                else{
                    dp[cnt][i] = cost[j].fi + sum;
                }
                sum += cost[j].fi;
                cnt++;
            }
            else{
                if(i != 0)
                    dp[cnt][i] = dp[cnt][i-1];
            }
        }
        if(i != 0){
            while(cnt != n+1){
                dp[cnt][i] = max(maxim, dp[cnt][i-1]);
                maxim = max(maxim, dp[cnt][i-1]);
                cnt++;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < m; j++) {
            cout << dp[i][j] << " ";
        }
        cout << '\n';
    }
    return;

    for (int i = 1; i <= n; i++) {
        if(dp[i][m-1] >= k){
            cout << i;
            break;
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
