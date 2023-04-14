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

bool check(int a[], int x, int n) {
	vector < int > v;

	for(int i = 0; i < n; i++) {
		if(a[i] != x) v.push_back(a[i]);
	}

	for(int i = 0; i <= v.size()/2; i++) {
		if(v[i] != v[v.size()-i-1])
			return false;
	}

	return true;
}

void solve() {

	int n;
	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bool f = true;

	for(int i = 0; i <= n/2; i++) {
		if(a[i] != a[n-i-1]) {
			if(check(a, a[i], n) or check(a, a[n-i-1], n)) {
				cout << "YES" << endl;
				return;
			} else {
				cout << "NO" << endl;
				return;
			}
			f = false;
			break;
		}
	}
	if(f) cout << "YES" << endl;

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
