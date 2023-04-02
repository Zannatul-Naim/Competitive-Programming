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

	int n;
	cin >> n;

	int x = 0;

	for(int i = 1; i <= n; i++) {
		int z;
		cin >> z;

		x ^= z;
	}

	if(n&1){
		cout << x << endl;
		return;
	}
	if(x == 0) {
		cout << 0 << endl;
		return;
	}

	cout << -1 << endl;

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
