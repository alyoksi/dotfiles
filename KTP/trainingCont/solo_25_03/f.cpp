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
    int n, m;
    cin >> n >> m;
    vi b(n-1);
    int prev;
    cin >> prev;
    int tmp;
    for (int i = 0; i < n-1; i++){
        cin >> tmp;
        b[i] = prev - tmp;
        prev = tmp;
    }
    vi c(m-1);
    for (int i = 0; i < m-1; i++){
        cin >> tmp;
        c[i] = prev - tmp;
        prev = tmp;
    }

    int ans = 0;


    cout << ans;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
