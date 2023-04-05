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
    vi one(21, 0);

    vi arr(n);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        //ans += arr[i];
    }
    for (int i = 0; i < 21; i++) {
        int mask = (1 << i);
        for (int j = 0; j < n; j++) {
            if(arr[j] & mask) one[i]++;
        }
    }
    for (int i = 0; i < 21; i++) {
        if(one[i] > 0){
            ans += 1ll*one[i]*one[i]*one[i] * (1 << i);
            ans += 1ll*one[i] * (n-one[i]) * (n-one[i]) * (1 << i) * 3;
        }
    }
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
