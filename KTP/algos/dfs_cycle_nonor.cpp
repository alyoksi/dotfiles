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

int flag = 0; // 1, if graph has a cycle
void dfs(int v, int prev){
    used[v] = 1;

    for(int to : g[v]){
        if(to == prev) continue;
        if(used[to] == 0) dfs(to, prev);
        else flag = 1;
}

void solve(){
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
