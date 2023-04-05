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
    if(n > 2 || n == 0)
        cout << -1;
    else if(n == 2)
        cout << 3 << " " << 4 << " " << 5;
    else if(n == 1)
        cout << 1 << " " << 2 << " " << 3;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
