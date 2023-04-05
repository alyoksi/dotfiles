#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define fi first
#define se second
#define end '\n'

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    vector<int> el(n);
    vector<pair<int,int>> arr(30001, pair<int,int>(-1, -1));
    for (int i = 0; i < n; i++) {
        cin >> el[i];
        if(arr[el[i]].fi != -1){
            arr[el[i]].se = i;
        }
        else{
            arr[el[i]].fi = i;
        }
    }
    int m; cin >> m;
    int tmp;
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        if(arr[tmp].fi >= 0 && arr[tmp].se >= 0){
            //TODO: нужна идея, как перезаписывать 
            /*
            for (int i = arr[tmp].fi; i <= arr[tmp].se; i++) {
                // el[i] = ...
            }
            */
        }
    }

    return 0;
}
