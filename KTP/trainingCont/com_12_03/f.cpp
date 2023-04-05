#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define fi first
#define se second
#define end '\n'

vector<vector<int>> arr;
vector<int> basis;
vector<int> used;

void dfs(int v){
    used[v] = 1;
    for(int to : arr[v]){
        if(!used[to] && (basis[v] != basis[to])){
            dfs(to);
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    basis.resize(n+1);
    for (int i = 0; i < n; i++) {
        cin >> basis[i+1];
    }
    
    arr = vector<vector<int>>(n+1);
    used = vector<int>(n+1);
    for (int i = 0; i < m; i++) {
        int from, to;     
        cin >> from >> to;
        arr[from].pb(to);
        arr[to].pb(from);
    }
    dfs(1);
    int flag = 1;
    for (int i = 1; i < n+1; i++) {
        if(!used[i]){
            flag = 0;
            break;
        }
    }
    cout << (flag ? "YES" : "NO");



    return 0;
}
