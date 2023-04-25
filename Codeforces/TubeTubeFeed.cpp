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

	int n, t;
	cin >> n >> t;

	int a[n], b[n];

	for(int i = 0; i < n; i++) cin >> a[i];
	for(int j = 0; j < n; j++) cin >> b[j];

	int ind = -1;
	int mx = -9999;

	for(int i = 0; i < n; i++) {
		if(b[i] > mx and a[i] <= t) {
			ind = i;
			mx = b[i];
		}
		t--;
	}

	if(ind == -1) cout << -1 << endl;
	else cout << ind+1 << endl;
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
