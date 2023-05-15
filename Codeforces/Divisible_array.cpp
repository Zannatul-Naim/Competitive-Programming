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

void print(bool f) {
	if(f) cout << "YES" << endl;
	else cout << "NO" << endl;
}

void solve() {

	int n;
	cin >> n;

	int x = n*(n+1)/2;

	if(x%n == 0) {
		for(int i = 1; i <= n; i++) {
			cout << i << " ";
		} cout << endl;
	} else {
		cout << 1+x%n << " ";
		for(int i = 2; i <= n; i++) {
			cout << i << " ";
		} cout << endl;
	}

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
