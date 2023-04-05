#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ptr = 1000000000;
    cout << "TRANSFER " << ptr << '\n';
    cout.flush();
    int sum = 0;
    string tmp;
    int cnt = 1;
    while(true){
        cin >> tmp;
        if(tmp == "FAILURE"){
            if(ptr == 1){
                cout << "DONE " << sum;
                cout.flush();
                break;
            }
            ptr /= 2;
        }
        else{
            sum += ptr;
            if(ptr > 1 && cnt % 2 == 1){
                ptr = (ptr + 1) / 2;
            }
            else if(ptr > 1 && cnt % 2 == 0){
                ptr = ptr - 0.25*ptr;
            }
        }
        cnt++;
        cout << "TRANSFER " << ptr << '\n';
        cout.flush();
    }
    // cout << " " << cnt;
    return 0;
}
