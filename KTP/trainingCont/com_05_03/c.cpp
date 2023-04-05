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
    vector<int> old(n);
    vector<int> newer;
    int len = n;
    for (int i = 0; i < n; i++) {
        cin >> old[i];
    }
    int ans = 0;
    int i = 0;
    while(len != 1){
        if(i == (int)old.size()){
            old = newer;
            newer.clear();
            i = 0;
        }
        if(i == (int)old.size() - 1){
            newer.pb(2*old[i]);
            ans++;
        }
        if(old[i] < old[i+1]){
            newer.pb(2*old[i]);
            ans++;
            old[i] *= 2;
        }
        if(i == (int)old.size() - 1){
            newer.pb(2*old[i]);
            ans++;
        }
        if(old[i] == old[i+1]){
            newer.pb(2*old[i]);
            len--;
            old[i+1] *= 2;
            i++;
        }
        if(i == (int)old.size() - 1){
            newer.pb(2*old[i]);
            ans++;
        }
        if(old[i] > old[i+1]){
            if( old[i] % old[i+1] != 0 ){
                cout << -1;
                return 0;
            }
            else{
                i++;
            }
        }
        cout << "1: ";
        for (int el : old) {
            cout << el << " ";
        }
        cout << "\n2: ";
        for (int el : newer) {
            cout << el << " ";
        }
        cout << '\n';
    }

    cout << ans;

    return 0;
}
