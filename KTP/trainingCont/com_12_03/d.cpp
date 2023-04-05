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
    vector<int> bitmask(23, 0);
    vector<int> el(n);
    int ans = 0;
    int maxbit = 0;
    for (int i = 0; i < n; i++) {
        cin >> el[i];
        for (int j = 0; j <= 22; j++) {
            int mask = 1 << j;
            if((el[i] & mask) && j > maxbit){
                maxbit = j;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= maxbit; j++) {
            int mask = 1 << j;
            if(!(el[i] & mask)){
                if(el[i] == 2){
                    cout << j << " " << mask <<(el[i] & mask) << '\n';
                }
                bitmask[j]++;
            }
        }
    }
    for (int i = 0; i <= 22; i++) {
        if(bitmask[i] == 1){
            ans += (1 << i);
            break;
        }
    }

    cout << ans << "\n";
    /*
    for (int i = 0; i <= 5; i++) {
        cout << bitmask[i] << " ";
    }
    */
    return 0;
}
