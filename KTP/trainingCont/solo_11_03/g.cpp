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
    int a, b;
    cin >> a >> b;
    string tmp = "";
    int h = 0, m = 0;
    int ha = 0, ma = 0;
    int hb = 0, mb = 0;
    for (int i = 0; i < 5; i++) {
        if(s[i] != ':'){
            tmp += s[i];
        }
        else{
            h = stoi(s);
            tmp = "";
        }
    }
    m = stoi(tmp);
    mb= m;
    hb = h;

    mb += b; 
    hb += mb/60;
    mb %= 60;
    //cout << hb << ":" << mb << "\n";
    if(hb > 23){
        hb = -1;
    }

    ma = m;
    ha = h;
    ma -= a; 
    if(ma < 0){
        ha -= (abs(ma) + 59)/60;
        ma = (ma % 60) + 60;
        if(ha < 0){
            ha = -1;
        }
    }
    else{
        ma %= 60;
    }
    if(ha == -1 && hb == -1){
        cout << s;
    }
    else if(ha == -1){
        if(mb == 0){
            cout << hb << ":" << mb << "\n";
            return 0;
        }
        if(mb > m){
            cout << hb << ":" << mb << "\n";
        }
        else
            cout << s; 
    }
    else if(hb == -1){
        if(ma > m){
            cout << ha << ":" << ma << "\n";
        }
        else
            cout << s; 
    }
    else{
        if(ma > mb){
            if(ma > m){
                cout << ha << ":" << ma << "\n";
            }
            else
                cout << s; 
        }
        else if(mb > ma){
            if(mb > m){
                cout << hb << ":" << mb << "\n";
            }
            else
                cout << s; 
        }
        else{
            if(ma > m){
                cout << ha << ":" << ma << "\n";
            }
            else
                cout << s; 
        }
    }

    return 0;
}
