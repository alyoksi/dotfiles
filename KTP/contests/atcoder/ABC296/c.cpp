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
void solve(){
    int n, x;
    cin >> n >> x;
    set<int> arr;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        arr.insert(t);
    }
    for(auto a : arr){
        if(arr.find(a+x) != arr.end()){
            cout << "Yes";
            return;
        }
    }
    cout << "No";

}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
