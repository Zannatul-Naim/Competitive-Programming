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

	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];

	sort(a, a+n);
	bool f = false;

	for(int i = 0; i < n; i++) {
		int c = 0;

		for(int j = 0; j < n; j++) {
			if(a[j] > i) c++;
		}
		if(c == i) {
			cout << c << endl;
			f = true;
			break;
		}
	}

	if(!f) cout << -1 << endl;

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
