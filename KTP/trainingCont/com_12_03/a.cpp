#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define fi first
#define se second

void check( vector<int> &a, int n){
    int flag = 1;
    for (int i = 0; i < n; i++) {
        if(a[i] != i){
            flag = 0;
            break;
        }
    }
    if(flag){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> arr(n);
    int summ = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i]--;
        if(arr[i] == i){
            summ++;
        }
    }
    int q; cin >> q;
    while(q--){
        int f, s; cin >> f >> s;
        f--; s--;
        int fp = (arr[f] == f ? 1 : 0);
        int fs = (arr[s] == s ? 1 : 0);
        int tmp = arr[f];
        arr[f] = arr[s];
        arr[s] = tmp;
        int ffp = (arr[f] == f ? 1 : 0);
        int ffs = (arr[s] == s ? 1 : 0);

        if(fp == 0 && ffp == 1){
            summ++;
        }
        if(fp == 1 && ffp == 0){
            summ--;
        }
        if(fs == 0 && ffs == 1){
            summ++;
        }
        if(fs == 1 && ffs == 0){
            summ--;
        }

        if(summ == n){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
