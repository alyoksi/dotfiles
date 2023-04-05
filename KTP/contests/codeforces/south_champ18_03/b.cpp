#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define fi first
#define se second

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;

    if(n % 4 == 1)
        cout << n / 2 + 1;
    else
        cout << n / 2;

    return 0;
}
