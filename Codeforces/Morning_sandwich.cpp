#include<bits/stdc++.h>
#include<sstream>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


void solve() {
	
	int b, c, h;
	cin >> b >> c >> h;

	b--;
	int cnt = 1;
	while(b--) {
		if(c > 0) {
			c--;
			cnt+=2;
		} else if(h > 0) {
			h--;
			cnt+=2;
		} else {
			break;
		}
	}

	cout << cnt << endl;
}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) solve();

	return 0;
}
