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
    map<string, int> m;
    while(n--){
        int k; string s;
        cin >> k >> s;
        if(k == 1){
            m[s]++;
        }
        else{
            cout << m[s] << '\n';
            if(m[s] > 0){
                m[s]--;
            }
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
