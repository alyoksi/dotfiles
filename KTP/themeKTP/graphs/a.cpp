#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> arr(101);
vector<int> used(101, 0);

void dfs(int v){
    used[v] = 1;
    for(int to : arr[v]){
        if(!used[to])
            dfs(to);
    }
}


int main(){

    int n; cin >> n;
    int tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> tmp;
            if(tmp == 1){
                arr[i].push_back(j);
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(used[i] == 0){
            cnt++;
            dfs(i);
        }
    }
    cout << cnt << '\n';

    return 0;
}
