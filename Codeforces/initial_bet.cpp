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
	
	int s = 0;
	for(int i = 0; i < 5; i++) {
		int x;
		cin >> x;

		s += x;
	}

	if(s != 0 and s%5 == 0) {
		cout << s/5 << endl;
	} else cout << -1 << endl;

}	

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
