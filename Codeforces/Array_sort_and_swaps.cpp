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

	int n, k;
	cin >> n >> k;

	int a[n], b[n];

	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];

	sort(a, a+n);
	sort(b, b+n, greater<int>());

	for(int i = 0; i < k; i++) {
		if(a[i] < b[i]) a[i] = b[i];
	}

	cout << accumulate(a, a+n, 0) << endl;
	

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
