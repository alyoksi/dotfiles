#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define fi first
#define se second
#define end '\n'

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    if(n == 1){
        cout << 1;
        return 0;
    }
    ull ans = 1;
    for (int i = 2; i <= n; i++)
        ans += 4ull*(i-1);
    
    cout << ans;

    return 0;
}
