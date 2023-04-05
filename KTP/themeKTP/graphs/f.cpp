#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define fi first
#define se second
#define vi vector<int> 
#define vll vector<ll> 
#define vvi vector<vector<int>> 
#define all(x) begin(x), end(x)

vvi g;
vvi edges;
vi used;
vi tin;
vi fup;
vi ans;
int cntt = 0;
int T = 0;
void dfs(int v, int p=-1){
    used[v] = 1;
    tin[v] = T++;
    fup[v] = tin[v];
    for(int to = 0; to < (int)g[v].size(); to++){
        if(p == g[v][to]) continue;
        if(used[g[v][to]])
            fup[v] = min(fup[v], tin[g[v][to]]);
        if(!used[g[v][to]]){
            dfs(g[v][to],v);
            fup[v] = min(fup[v], fup[g[v][to]]);
        }
        if(tin[v] < fup[g[v][to]]){
            ans.pb(edges[v][to]);
            cntt++;
        }
    }
}
void solve(){
    int n, m;
    cin >> n >> m;
    g = vvi(n);
    edges = vvi(n);
    used = vi(n);
    tin = vi(n);
    fup = vi(n);
    int cnt = 1;
    while(m--){
        int from, to;
        cin >> from >> to;
        from--; to--;
        g[from].pb(to);
        g[to].pb(from);

        edges[from].pb(cnt);
        edges[to].pb(cnt);
        cnt++;
    }
    for (int i = 0; i < n; i++) {
        if(!used[i]){
            dfs(i);
            T = 0;
        }
    }
    sort(all(ans));
    cout << cntt << '\n';
    for(auto edge : ans){
        cout << edge << '\n';
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("bridges.in", "r", stdin);
    freopen("bridges.out", "w", stdout);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
