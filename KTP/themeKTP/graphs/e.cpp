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
#define vvi vector<vector<int>> 
#define all(x) begin(x), end(x)

vi used;
vvi g;
vi tin;
vi tout;
int T=0;
void dfs(int v){
    used[v] = 1;
    tin[v] = T++;
    for(int to : g[v]){
        if(!used[to]){
            dfs(to);
        }
    }
    tout[v] = T++;
}
void solve(){
    int n; cin >> n;
    g = vvi(n+1);
    used = vi(n+1);
    tin = vi(n+1);
    tout= vi(n+1);
    int root = -1;

    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        if(tmp == 0)
            root = i+1;
        else{

            g[i+1].pb(tmp);
            g[tmp].pb(i+1);
        }
    }
    dfs(root);
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        if(tin[a] < tin[b] && tout[b] < tout[a]){
            cout << 1 << '\n';
        }
        else{
            cout << 0 << '\n';
        }
    }

}

int32_t main() {
    /*
    freopen("ancestor.in", "r", stdin);
    freopen("ancestor.out", "w", stdout);
    */
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
