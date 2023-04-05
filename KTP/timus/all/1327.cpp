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
    int a,b; cin >> a >> b;
    vi arr(b+1, 0);
    arr[1] = 1;
    for (int i = 2; i < b+1; i++)
        arr[i] = (i%2==1 ? arr[i-1]+1 : arr[i-1]);
    cout << arr[b] - arr[a-1];
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
