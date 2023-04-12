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

	int s_a = 0, s_b = 0, s_c = 0;

	while(n--) {
		int a, b, c;
		cin >> a >> b >> c;

		s_a += a;
		s_b += b;
		s_c += c;
	}

	if(!s_a and !s_b and !s_c) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
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
