#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back
#define YES 1
#define NO 0

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	int n, a, b, c, d;
	cin >> n >> a >> b >> c >> d;

	int x = a-b;
	int y = a+b;

	if(y*n < c-d or x*n > c+d) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}

}	

int main() {

	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
