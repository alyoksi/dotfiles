#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define vi vector<int> 

vector<vector<int>> g;
vi used;
vi p;

int flag = 0;
int cs = -1;
int ce = -1;

void dfs(int v){
    used[v] = 1;
    for(int to : g[v]){
        if(used[to] == 0){
            p[to] = v;
            dfs(to);
        }
        else if(used[to] == 1){
            cs = to;
            ce = v;
            flag = 1;
        }
    }
    used[v] = 2; 
}

void solve(){
    int n, m; cin >> n >> m;
    used = vi(n);
    g = vector<vector<int>>(n);
    p = vi(n);
    for (int i = 0; i < m; i++) {
        int from, to;
        cin >> from >> to;
        from--; to--;
        g[from].pb(to);
    }
    for (int i = 0; i < n; i++) {
        if(!used[i]){
            dfs(i);
            if(flag){
                break;
            }
        }
    }
    if(cs == -1){
        cout << "NO";
        return;
    }
    cout << "YES\n";
    vi cycle;
    for(int v = ce; v != cs; v = p[v])
        cycle.pb(v+1);
    cycle.pb(cs+1);
    reverse(all(cycle));
    for (int el : cycle) {
        cout << el << " ";
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
