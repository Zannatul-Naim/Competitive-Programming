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
	
	int n;
	cin >> n;
	int cnt = 0;
	for(int i = 1; i <= n; i++) {
		int x;
		cin >> x;

		if(x == i) cnt++;
	}
	if(cnt == 0) {
		cout << 0 << endl;
		return;
	}
	cout << (cnt / 2) + cnt%2 << endl;

}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) solve();

	return 0;
}
