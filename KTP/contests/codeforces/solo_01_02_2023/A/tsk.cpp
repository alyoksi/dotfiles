#include <iostream>

using namespace std;
#define ull unsigned long long

int main(){
    int n; cin >> n;
    char s; 
    int num;

    ull sum = 0;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        cin >> s >> num;
        if(s == '+'){
            sum += num; cnt ++;
            cout.precision(15);
            if(sum == 0) cout << 0 << '\n';
            else cout << (double)sum / cnt << '\n';

        }
        else{
            sum -= num; cnt--;
            cout.precision(15);
            if(cnt == 0){
                cout << 0 << '\n';
            }
            else{
                cout << (double)sum / cnt << '\n';
            }
        }
    }
    return 0;
}
