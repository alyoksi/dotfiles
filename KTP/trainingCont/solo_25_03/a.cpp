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
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if(n == 1){
        cout << 1;
        return;
    }

    sort(all(arr));

    int flag = 0;
    int cnt = 0;

    if(arr[0] != arr[1]) cnt++;
    else flag = 1;
    for (int i = 1; i < n; i++) {
        if(i == n - 1){
            if(!flag) cnt++;
            break;
        }
        if(arr[i] == arr[i+1]) flag = 1;
        if(arr[i] != arr[i+1]){
            if(!flag){
                cnt++;
            }
            else{
                flag = 0;
            }
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
