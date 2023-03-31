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

	int a[n+1];

	for(int i = 1; i <= n; i++) cin >> a[i];

	for(int i = 1; i <= n; i++) {
		if(a[i] <= i) { 
			cout << "YES" << endl;
			return;
		}
	}
 
	cout << "NO" << endl;

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
