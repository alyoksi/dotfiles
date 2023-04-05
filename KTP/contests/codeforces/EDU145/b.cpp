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
    ull n; cin >> n; 
    if(n == 1){
        cout << 0 << "\n";
    }
    else{
        ull sqr = (ull)sqrtl(n);
        ull fir = sqr * sqr;
        if(n == fir)
            cout << sqr - 1 << "\n";
        else{
            cout << sqr << '\n';
        }
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
