#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define fi first
#define se second
// #define end '\n'

int cmp(pair<int, pair<int,int>> a, pair<int, pair<int,int>> b){
    if ( a.fi > b.fi ){
        return 0;
    }
    return 1;
}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, d;
    cin >> n >> m >> d;
    vector<pair<int, pair<int,int>>> arr(n);
    vector<int> days(n+1);

    for (int i = 0; i < n; i++) {
        cin >> arr[i].fi;
        arr[i].se.se = i;
    }
    sort(arr.begin(), arr.end(), cmp);

    days[1] = arr[0].fi;
    arr[0].se.fi = 1;

    int max_day = 1;
    int flag = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= max_day; j++) {
            if((arr[i].fi-days[j]-1) > d){
                arr[i].se.fi = j;
                days[j] = arr[i].fi;
                break;
            }
            if(j == max_day){
                flag = 1;
                break;
            }
        }
        if(flag){
            days[max_day+1] = arr[i].fi;
            max_day++;
            flag = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "num: " << arr[i].fi << " ";
        cout << "day: " << arr[i].se.fi <<  " ";
        cout << "start_poz: " << arr[i].se.se << " ";
        cout << "\n";
    }


    return 0;
}
