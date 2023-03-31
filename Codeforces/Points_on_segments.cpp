#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	int n, m;
	cin >> n >> m;

	int a[m+1] = {0};

	for(int i = 1; i <= n; i++) {

		int l, r;
		cin >> l >> r;

		for(int j = l; j <= r; j++) a[j] = 1;
	}

	// for(int i = 1; i <= m; i++) cout << a[i] << " ";
	// cout << endl;

	int cnt = 0;

	for(int i = 1; i<= m; i++) {

		if(!a[i]) cnt++;
	}
	cout << cnt << endl;

	if(cnt) {
		for(int i = 1; i <= m; i++) {
			if(!a[i]) cout << i << " ";
		} cout << endl;
	}

}

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
