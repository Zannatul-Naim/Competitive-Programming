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

	int n, k;
	cin >> n >> k;

	pair < int, int > p[n];

	for(int i = 0; i < n; i++) cin >> p[i].second;
	for(int i = 0; i < n; i++) cin >> p[i].first;

	sort(p, p+n);

	int s = 0, i;

	for(i = 0; i < n; ) {
		
		s += k;

		while( i < n and p[i].second <= s ) {
			i++;
		}

		k -= p[i].first;

		if(k <= 0) break;
	}

	if( i == n ) {
		cout << "YES" << endl;
	} else cout << "NO" << endl;
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
