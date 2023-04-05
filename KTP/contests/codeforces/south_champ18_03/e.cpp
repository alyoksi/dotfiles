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
    int n, m; cin >> n >> m;
    vector<pair<int,int>> arr(n+1);
    arr[1].fi = 3;
    arr[1].se = 1;
    for (int i = 2; i <= n; i++) {
        arr[i].se = arr[i-1].se + 2;
        arr[i].fi = arr[i-1].fi + 3*arr[i].se - (arr[i-1].se) -arr[i].se;
    }
    cout << arr[n].fi - arr[m].fi;

    return 0;
}
