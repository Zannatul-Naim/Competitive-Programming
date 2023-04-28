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
	int ans = 0;
	int cmp = 0;
	for(int i = 1; i <= n; i++) {
		int tmp;
		cin >> tmp;

		if(tmp == -1) {
			if(cmp <= 0) {
				ans++;
			} else {
				cmp--;
			}
		} else {
			cmp += tmp;
		}
	}

	cout << ans << endl;

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
