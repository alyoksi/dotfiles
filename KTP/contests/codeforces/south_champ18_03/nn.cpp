#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;


int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    ll div = 2;
    ll res = 1;
    while(n > 1){
        int blocks = 0;
        int cnt = 1;
        int cur = 0;
        while(n % div == 0){
            n /= div;
            cur++;
            if(cur == cnt){
                blocks++;
                cnt++;
                cur = 0;
            }
        }
        if(blocks > 0) res *= blocks;
        if(div == 2) div++;
        else if (div != n) div+= 2;
    }
    cout << res*2 + 2;

    return 0;
}
