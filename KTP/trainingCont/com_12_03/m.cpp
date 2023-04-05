#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define pb push_back
#define fi first
#define se second
#define end '\n'

void solve()
{
	ld s, m;
	cin >> s >> m;

	if (m <= s) {cout << s - m << endl; return;}

	ll c = 0;
	while(m != s)
	{
		ld sss = sqrt(m);
		if (sss == (int)sss)
		{
			m = sss;
			c++;
			cout << "1" << m << endl;
		}
		else 
		{
			c += m - (floor(sss)*floor(sss));
			m = floor(sss)*floor(sss);

			cout << "2" << m << endl;
		}


		if (m < s)
		{
			c += s - m;
			m = s;

			cout << "3" <<  m << endl;
		}

	}
	cout << c << endl;
}

int main()
{
	int t = 1;
	while(t--)
		solve();
	return 0;
}