#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define fi first
#define se second

int ans = 0;

void find(ll num, int ind){
    if(num >= ind) ans++;
    for(int k = ind; k*k <= num; k++){
        if(num % k == 0){
            if(num == k)
                ans++;
            else
                find(num/k, k+1);
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if(n == 1){
        cout << 1;
        return 0;
    }
    find(n, 2);
    cout << ans * 2;

    return 0;
}
