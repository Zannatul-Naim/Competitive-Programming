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

	int a[n+1];

	for(int i = 1; i <= n; i++) cin >> a[i];

	int c = 0;

	for(int i = 1; i <= n; i++) {
		if(a[i]%k != i%k) 
			c++;
	}

	if(c == 0) cout << 0 << endl;
	else if(c == 2) cout << 1 << endl;
	else cout << -1 << endl;

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
