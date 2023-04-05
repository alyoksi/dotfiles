#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> arr;
vector<int> used;

void dfs(int v){
    used[v] = 1;
    for(int to : arr[v]){
        if(!used[to]){
            dfs(to);
        }
    }
}


// Составление списка предков
vector<int> p; // список предков
int cycle_start = -1;
int cycle_end = -1;

// true - нашел цикл
// used[i] = 
// 0, если не были
// 1, если вошли, но не вышли
// 2, вошли и вышли, те побывали там
bool dfs_cycle(int v){
    used[v] = 1;
    for(int to : arr[v]){
        if(used[to] == 0){
            p[to] = v;
            if(dfs_cycle(to)){
                return true;
            }
        }
        else if (used[to] == 1) {
            cycle_start = to;
            cycle_end = v;
            return true;
        }
    }
    used[v] = 2;
    return false;
}

void solve_for_dfs_new(){
    int n, m;
    cin >> n >> m;
    arr.resize(n);
    used.resize(n);
    p = vector<int>(n, -1);

    for(int i = 0; i < m; i++){
        int from, to;
        cin >> from >> to;
        from--; to--;
        arr[from].push_back(to);
    }

    for(int i = 0; i < n; i++){
        if(dfs_cycle(i)){
            break;
        }
    }

    if(cycle_start == -1){
        cout << "No cycle";
    }
    else{
        vector<int> cycle;
        cycle.push_back(cycle_start);
        for(int v = cycle_end; v != cycle_start; v = p[v]){
            cycle.push_back(v);
        }
        reverse(cycle.begin(), cycle.end());
    }
}
