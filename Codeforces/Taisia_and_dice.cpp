#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define input cin >>
#define output cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	int n, s, r;
	cin >> n >> s >> r;

	int v[n];

	v[0] = s-r;

	int m = s-r;

	for(int i = 1; i < n; i++) {
		v[i] = 1;
		r--;
	}
	int j = 1;
	while(r > 0) {
		if(v[j] < m) {
			v[j]++;
			r--;
		} else j++;
	}
	
	for(int i = 0; i < n; i++) {
		cout << v[i] << " ";
	} cout << endl;
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
