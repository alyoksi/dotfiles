#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define fi first
#define se second
#define vi vector<int> 
#define vll vector<ll> 
#define vii vector<pair<int,int>> 
#define all(x) begin(x), end(x)

int sumdig(int num){
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void solve(){
    int n; cin >> n;
    if(n == 0 || n == 999999){
        cout << "Yes";
        return;
    }
    n++;
    string tmp = to_string(n);
    string s = "";
    for (int i = 0; i < (int)(6 - tmp.size()); i++) {
        s += "0";
    }
    s += tmp;
    //cout << s;
    //return ;
    string s1="", s2="";
    for (int i = 0; i < 6; i++) {
        if(i < 3) s1 += s[i];
        else s2 += s[i];
    }
    //cout << s1 << " " << s2 << "\n";
    int n1 = stoi(s1), n2 = stoi(s2);
    if(sumdig(n1) == sumdig(n2)){
        cout << "Yes";
        return;
    }


    n -= 2;
    tmp = to_string(n);
    s = "";
    for (int i = 0; i < (int)(6 - tmp.size()); i++)
        s += "0";
    s += tmp;
    s1="", s2="";
    for (int i = 0; i < 6; i++) {
        if(i < 3) s1 += s[i];
        else s2 += s[i];
    }
    n1 = stoi(s1), n2 = stoi(s2);
    //cout << n1 << " " << n2 << "\n";
    if(sumdig(n1) == sumdig(n2)){
        cout << "Yes";
        return;
    }
    cout << "No";
}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t

    while(t--) solve();

    return 0;
}
