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
    ull a,b,x,y;
    cin >> a >> b >> x >> y;

    ull gcda = gcd(x, y);
    x /= gcda;
    y /= gcda;
    cout << min(a/x, b/y);

    return 0;
}
