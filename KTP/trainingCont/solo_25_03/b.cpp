#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define vi vector<int> 
#define vii vector<pair<int,int>> 
#define all(x) begin(x), end(x)

void solve(){
    int n, k;
    cin >> n >> k;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if(n == 1){
        cout << 0;
        return;
    }

    int cnt = 0;
    int maxim = 0;
    int minim = 1000000001; 
    for (int i = 0; i < n; i++) {
        maxim = max(maxim, arr[i]);
        minim = min(minim, arr[i]);
        //cout << maxim << " " << minim << '\n';
        for (int j = i; j < n; j++) {
            maxim = max(maxim, arr[j]);
            minim = min(minim, arr[j]);
            if(maxim - minim == k) cnt++;
        }
        maxim = -1;
        minim = 1000000001; 
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
