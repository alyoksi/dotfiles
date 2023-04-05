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
    vi arr(4);
    char tmp;
    for (int i = 0; i < 4; i++) {
        cin >> tmp; 
        arr[i] = tmp - '0';
    }
    int cnt = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = i+1; j < 4; j++) {
            if(arr[i] != arr[j]) cnt++;
        }
    }
    if(cnt == 1){
        cout << -1 << '\n';
    }
    else if(cnt == 4){
        cout << 6 << '\n';
    }
    else{
        cout << 4 << "\n";
    }

}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    cin >> t;

    while(t--) solve();

    return 0;
}
