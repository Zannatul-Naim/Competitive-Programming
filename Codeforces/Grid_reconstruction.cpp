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

	ll n;
	cin >> n;

	int a[2][n];

	a[0][0] = 2*n;
	a[1][n-1] = 2*n-1;

	int mx = 2*n - 2;
	int mn = 1;

	for(int i = 0; i < n-1; i++) {
		if(i&1) {
			a[0][i+1] = mx;
			a[1][i] = mx-1;
			mx -= 2;
		} else {
			a[1][i] = mn;
			a[0][i+1] = mn+1;
			mn += 2;
		}
	}

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		} cout << endl;
	} //cout << endl;
	
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
