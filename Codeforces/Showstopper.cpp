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

	int a[n], b[n];

	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];

	for(int i = 0; i < n; i++) {
		if(a[i] > a[n-1] or b[i] > b[n-1]) {
			swap(a[i], b[i]);
		}
		if(a[i] > a[n-1] or b[i] > b[n-1]) {
			cout << "NO" << endl;
			return;
		}
	}

	cout << "YES" << endl;

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
