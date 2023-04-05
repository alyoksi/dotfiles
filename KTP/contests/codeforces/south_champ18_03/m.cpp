#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define fi first
#define se second

int find_min(set<pair<string, int>> a){
    int minim = 1000000;
    for (pair<string,int> el : a) {
        minim = min(minim, el.se);
    }
    return minim;
}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    int lens = (int)s.size();
    int miner = 1000002;
    for (int i = lens / 2; i > 0; i--) {
        if(lens % i == 0){
            set<pair<string,int>> a;    
            string ss = ""; 
            for (int j = 0; j < lens; j++) {
                ss += s[j];
                if(j%i == (i - 1)){
                    a.insert({ss, 0});
                    ss = "";
                }
            }
            int ptr = 0;
            for (int j = 0; j < lens; j++) {
                for (pair<string, int> el : a) {
                    if((el).fi[ptr] != s[j]) (el).se++;
                } 
                ptr = (ptr+1) % i;
            }
            miner = min(miner, find_min(a));

            for (pair<string,int> el : a) {
                cout << el.fi << " " << el.se << "   ";
            }
            cout << "\n";
        }
    }
    cout << miner;

    return 0;
}
