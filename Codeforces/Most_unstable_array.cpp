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

	int n, m;
	cin >> n >> m;

	if(n == 1) {
		cout << 0 << endl;
		return;
	}

	if(n == 2) {
		cout << m << endl;
		return;
	}

	cout << 2*m << endl;

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
