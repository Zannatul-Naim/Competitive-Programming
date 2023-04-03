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

	map <int, int> mp;

	int a[n+1];

	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		if(mp[a[i]] == 0) mp[a[i]] = i;
	}

	if(is_sorted(a+1, a+n+1)) {
		cout << 0 << endl;
		return;
	}

	int f = -1;

	for(int i = n; i > 1; i--) {

		if(a[i-1] > a[i]) {
			f = i;
			break;
		}
	}

	int x = f;

	// for(auto i : mp) {
	// 	cout << i.first << " " << i.second << endl;
	// }

	// cout << f << endl;

	for(int i = f; i <= n; i++) {
		if(x > mp[a[i]]) f = i;
	}

	set < int > s;

	// cout << f << endl;

	for(int i = 1; i < f; i++) {
		s.insert(a[i]);
	}

	cout << s.size() << endl;

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
