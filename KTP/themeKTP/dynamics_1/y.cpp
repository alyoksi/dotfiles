#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n, m, t;
    cin >> n >> m >> t;

    vector<int> tim(t+1, 0);
    vector<int> colvo(t+1, 0);
    vector<ull> happiness(t+1, 0);
    vector<int> end(t+1, -1);
    vector<int> prev(t+1, 0);

    end[0] = -1;
    prev[0] = -1;
    tim[0] = 1;

    for (int i = 1; i <= n; ++i)
    {
        int time, hap;
        cin >> time >> hap;

        for(int j = t; j >= 0; j--){
            if(tim[j] != 1) continue; 
            if((j + time) > t) continue;
            if((colvo[j]+1) > m) continue;
            if(happiness[j+time] > (happiness[j] + hap)) continue;

            if(happiness[j+time] == (happiness[j] + hap)){
                if(colvo[j+time] < (colvo[j] + 1)){
                    colvo[j+time] = colvo[j] + 1;
                    end[j+time] = i;
                    prev[j+time] = j;
                }
                continue;
            }
            tim[j+time] = 1;
            colvo[j+time] = colvo[j] + 1;
            end[j+time] = i;
            prev[j+time] = j;
            happiness[j+time] = happiness[j] + hap;

            /*
            cout << "------------------------\n";
            cout << j+time << " : " << end[j+time] << " " << prev[i] << '\n';
            */
            
        }
    }

    ull maxim = 0;
    int k = 0;
    int last = -1;
    int next = -1;
    for(int i = 0; i <= t; i++){
        if(maxim < happiness[i]){
            maxim = happiness[i];
            k = colvo[i];
            last = end[i];
            next = prev[i];
        }
    }
    cout << maxim << '\n' << k << '\n'; 

    /*
    for(int el : end){
        cout << el << " ";
    }
    cout << '\n';
    for(int el : prev){
        cout << el << " ";
    }
    cout << '\n';
    */

    vector<int> ans;
    while(last != -1){
        ans.pb(last);
        last = end[next];
        next = prev[next];
    }
    sort(ans.begin(), ans.end());

    for(int el : ans){
        cout << el << ' ';
    }


    return 0;
}
