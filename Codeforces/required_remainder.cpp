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

	int x, y, n;
	cin >> x >> y >> n;

	int k = n - n%x ;

	if(k+y <= n) {
		cout << k+y << endl;
		return;
	}
	cout << k - (x-y) << endl;
	return;

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
