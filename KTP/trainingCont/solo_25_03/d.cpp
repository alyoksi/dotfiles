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
    int n, q;
    cin >> n >> q;
    vi arr(n);
    vi tim(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int tmp;
    while(q--){
        cin >> tmp;
        tmp--;
        tim[tmp]++;
    }
    int cur = 0;
    int cnt = 0;
    for (int i = n-1; i >= 0; i--) {
        cur += tim[i];
        arr[i] -= cur;
        if(arr[i] <= 0) cnt++;
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
