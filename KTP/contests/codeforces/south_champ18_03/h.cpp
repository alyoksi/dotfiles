#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n; cin >> n;
    ull ans = 0;
    double tmp = 1.0 / n; // multipl of proc in 0. format

    while(tmp < 1 || tmp < ans){
        tmp *= 100;
        ans++;
    }
    cout << ans;

    return 0;
}
