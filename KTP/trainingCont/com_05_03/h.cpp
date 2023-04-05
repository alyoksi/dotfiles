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
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int ans = 0;
    int k1 = y1 - 1;
    int k2 = m - y2;



    ans += (x2 - x1 + 1) * (k1 % 2 + k2 % 2);

    ans += (x1 - 1) * (m % 2);
    ans += (n - x2) * (m % 2);

    cout << (ans + 1) / 2;

    return 0;
}
