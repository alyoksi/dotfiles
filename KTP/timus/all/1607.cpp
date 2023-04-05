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
    int a,b,c,d; cin >> a >> b >> c >> d;
    if(a >= c){ cout << a; return; }
    int n = (c-a + b+d - 1)/(b+d);
    if(a+n*b > c-(n-1)*d){
        cout << c - (n-1)*d;
    }
    else{
        cout << a+n*b;
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
