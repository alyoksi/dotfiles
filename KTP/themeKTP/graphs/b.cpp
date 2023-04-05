#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int> 

int flag = 0;
vi used;
vector<vector<int>> g;

void dfs(int v, int prev){
    used[v] = 1;
    for (auto to : g[v]) {
        if(to == prev) continue;
        if(used[to] == 0)
            dfs(to, v);
        else 
            flag = 1;
    }
}

void solve(){
    int n; cin >> n;        
    used = vi(n+1);
    g = vector<vector<int>>(n+1);

    int tmp;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> tmp; 
            if(tmp == 1)
                g[i].pb(j);
        }
    }

    dfs(1, -1);
    for (int i = 1; i <= n; i++) {
        if(used[i] == 0){
            cout << "NO";
            return;
        }
    }
    if(flag)
        cout << "NO";
    else
        cout << "YES";
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    while(t--) solve();

    return 0;
}
