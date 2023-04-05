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

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int cur = 0;
    int flag = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if(s[i] != 'b' && s[i] != 'a' && !flag){
            cur++;
        }
        if(s[i] != 'b' && flag){
            cnt++;
        }
        if(s[i] == 'a' && !flag){
            cnt += cur + 1;
            cur = 0;
            flag = 1;
        }
        if(s[i] == 'b'){
            cur = 0;
            flag = 0;
        }
    }
    cout << cnt;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
