#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define fi first
#define se second
#define vi vector<int> 
#define vvi vector<vector<int>> 

vvi g;
vi used;

void dfs(int v, int p = -1){
    used[v] = 1;

    if(p != -1)
        cout << p << " " << v << '\n';

    for (int to : g[v]) {
        if(!used[to])
            dfs(to, v);
    }
}
void solve(){
    int n, m;
    cin >> n >> m;
    g = vvi(n+1);
    used = vi(n+1);
    while(m--){
        int from, to;
        cin >> from >> to;
        g[from].pb(to);
        g[to].pb(from);
    }
    dfs(1);
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
