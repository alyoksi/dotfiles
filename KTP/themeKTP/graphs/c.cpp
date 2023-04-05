#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> arr;
vector<int> used;
vector<int> pred;

int cycle_start = -1;
int cycle_end = -1;

bool dfs(int v){ 
	used[v] = 1;
	for(int to : arr[v]){
		if(used[to] == 0){
			pred[to] = v;
			if(dfs(to)){
				return true;
			}
		}
		else if(used[to] == 1){
			cycle_start = to;
			cycle_end = v;
			return true;
		}
	}
	used[v] = 2;
	return false;
}

int main(){

	/*
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin); 
        freopen("output.out", "w", stdout);
    #endif
    */

    int n, m; 
    cin >> n >> m;
    arr.resize(n); 
    used.resize(n);
    pred.resize(n, -1);

    for (int i = 0; i < m; i++) {
        int from, to; 
        cin >> from >> to;
        from--; to--;
        arr[from].push_back(to);
    }
    for(int i = 0; i < n; i++){
    	if(dfs(i)){
    		break;
    	}
    }

    if(cycle_start == -1){
    	cout << "NO";
    }
    else{
    	cout << "YES" << '\n';
    	vector<int> cycle;
    	cycle.push_back(cycle_start);
    	for(int v = cycle_end; v != cycle_start; v = pred[v]){
    		cycle.push_back(v);
    	}
    	reverse(cycle.begin(), cycle.end());
    	for(int v : cycle){
    		cout << v + 1 << ' ';
    	}

    }

    return 0;
}
