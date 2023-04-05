#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define vi vector<int> 
#define vvi vector<vector<int>> 
#define all(x) begin(x), end(x)

vi g;
vi used;
int flag = 0;

void dfs(int v, int cnt=1, int fi = -1, int se = -1){
    used[v] = 1;
    int to = g[v];

    if(used[to] == 0){
        if(cnt == 3)
            dfs(to, cnt, se, v);
        else
            dfs(to, cnt+1, se, v);
    }
    if(used[to] == 1){
        if(cnt == 3 && to == fi)
            flag = 1;
    }

    used[v] = 2;
}

void solve(){
    int n; cin >> n;
    g = vi(n+1);
    used = vi(n+1);

    for (int i = 1; i <= n; i++) {
        int tmp; cin >> tmp;
        g[i] = tmp;
    }
    for (int i = 0; i < n; i++) {
        if(!used[i]){
            dfs(i);
            if(flag) break;
        }
    }
    if(flag){ cout << "YES";}
    else{ cout << "NO"; }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
