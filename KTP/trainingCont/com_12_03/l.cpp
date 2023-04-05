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
    if(n < 3){
        cout << "NO";
        return 0;
    }
    int pp, p;
    cin >> pp >> p;
    int cur;
    int flag = 0;
    for (int i = 2; i < n; i++) {
        cin >> cur; 
        if(cur >= 2200 && p >= 2200 && pp >= 2200){
            flag = 1;
        }
        pp = p;
        p = cur;
    }
    cout << (flag ? "YES" : "NO");
    return 0;
}
