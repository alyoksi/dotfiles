#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define fi first
#define se second
int poww(int n, int a){
    int res = 1;
    for (int i = 0; i < a; i++) 
        res *= n;
    return res;
}

int 

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    int n = stoi(s);
    string start="";
    for (int i = 0; i < (int)s.size(); i++) {
        start += s[0];
    }
    cout << start;




    return 0;
}
