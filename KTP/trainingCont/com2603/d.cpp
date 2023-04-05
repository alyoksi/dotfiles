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
    int p, q;
    cin >> p >> q;
    string s; cin >> s;
    int n = (int)s.size();
    vi cnt(n+1, 0);
    for (int i = 0; i < n; i++) {
        if(s[i] == '1'){
            cnt[i+1] = cnt[i]+1;
        }
        else{
            cnt[i+1] = cnt[i];
        }
    }
    for (int i = 1; i <= n; i++)
        cnt[i] = q*cnt[i]-p*i;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if(cnt[i] > cnt[j]){
                ans++;
            }
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
