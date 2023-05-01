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

	if(n == 1) {
		cout << 1 << endl;
		return;
	}

	if(n&1) {
		cout << -1 << endl;
		return;
	}

	for(int i = 0; i < n; i++) {
		if(i&1) {
			cout << i << " ";
		} else {
			cout << n-i << " ";
		}
	} 
	cout << endl;


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
