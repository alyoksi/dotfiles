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
    string s; cin >> s;
    int ind = -1;
    int n = (int)s.size();
    for (int i = 0; i < n-1;i++) {
        if(s[i+1] - 'a' > s[i] - 'a'){
            ind = i;
            break;
        }
    }
    if(ind == -1){
        for (int i = 0; i < n-1; i++) {
            cout << s[i];
        }
    }
    else{
        for (int i = 0; i < n; i++) {
            if(ind != i){
                cout << s[i];
            }
        }
    }
    return 0;
}
