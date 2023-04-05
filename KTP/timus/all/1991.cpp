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
    int n, k;
    cin >> n >> k;
    ull all = n * k;
    ull cnt = 0;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if(k >= tmp)
            all -= tmp;
        else{
            all -= k;
            cnt += (tmp - k);
        }
    }
    cout << cnt << " " << all;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
