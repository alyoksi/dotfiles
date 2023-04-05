#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define pb push_back
#define vi vector<int> 
#define vvi vector<vector<int>> 
#define vii vector<pair<int,int>> 
#define fi first
#define se first

vvi g;
vi used;
string s;
ll chars[26];
ll maxim = 1;
int flag = 0;

void dfs(int v, ll _max=1){
    used[v]=1;
    chars[s[v]-'a']++;
    _max = max(chars[s[v]-'a'], _max);
    maxim = max(maxim, _max);

    for (int to : g[v]) {
        if(used[to] == 0){
            dfs(to, _max);
        }
        else if(used[to]==1){
            flag = 1;
        }
    }
    used[v] = 2;
    chars[s[v]-'a']--;
}

void solve(){
    int n, m;
    cin >> n >> m;
    cin >> s;
    g = vvi(n);
    used = vi(n, 0);
    while(m--){
        int from, to;
        cin >> from >> to;
        if(from == to) flag = 1;
        from--; to--;
        g[from].pb(to);
    }

    if(flag) {cout << -1; return;}

    for (int i = 0; i < n; i++) {
        if(used[i] == 0){ dfs(i);}
            cnt++;
            if(flag)
                break;
        }
    } if(flag) cout << -1;
    else cout << maxim;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
