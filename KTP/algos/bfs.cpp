#include<bits/stdc++.h>

using namespace std;
using ull = unsigned long long;
using ll  = long long;
#define pb push_back
#define fi first
#define se second
#define vi vector<int> 
#define vvi vector<vector<int>> 
#define vii vector<pair<int,int>> 
#define all(x) begin(x), end(x)

queue<int> q;
vvi g;
vi used;
vi dist;

void bfs(int s){
    q.push(s);
    used[s] = 1;
    dist[s] = 0;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(auto to : g[v]){
            if(was[to] == 0){
                q.push(to);
                was[to] = 1;
                dist[to] = dist[v] + 1;
            }
        }
    }
} 




void solve(){
    
}
