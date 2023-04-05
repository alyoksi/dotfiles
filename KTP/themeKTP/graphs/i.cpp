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

vector<vector<int>> g;
vi used;
vi ans;
int flag = 0;

void dfs(int v){ 
    used[v] = 1;
    for(int to : g[v]){
        if(used[to] == 0)
            dfs(to);
        else if(used[to] == 1){
            flag = 1;
            return;
        }
    }
    used[v] = 2;
    ans.pb(v);
}
void solve(){
    int n, m;
    cin >> n >> m;
    g = vector<vector<int>>(n+1);
    used = vi(n+1);
    while(m--){
        int to, from;
        cin >> to >> from;
        g[from].pb(to);
    }
    for (int i = 1; i <= n; i++) {
        if(!used[i]){
            dfs(i);
            if(flag){
                break;
            }
        }
    }
    if(flag){
        cout << "No";
    }
    else{
        cout << "Yes\n";
        for (int el : ans) {
            cout << el << ' ';
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
