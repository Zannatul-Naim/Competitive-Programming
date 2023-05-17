#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back
#define YES 1
#define NO 0

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void print(bool f) {
	if(f) cout << "YES" << endl;
	else cout << "NO" << endl;
}

void solve() {

	int n;
	cin >> n;

	int c[3];
	memset(c, 0, sizeof(c));

	for(int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		c[x%3]++;
	}
	int rem = n/3;
	int ans = 0;
	while(c[0] != c[1] or c[1] != c[2] or c[2] != c[0]) {
		for(int i = 0; i < 3; i++) {
			if(c[i] > rem) {
				ans++;
				c[i]--;
				c[(i+1)%3]++;
			}
		}
	}

	cout << ans << endl;

}	

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
