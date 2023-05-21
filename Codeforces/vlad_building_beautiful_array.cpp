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

	int a[n];

	int e = 0, o = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];

		if(a[i]&1) o++;
		else e++;
	}

	if(o == n or e == n) {
		print(1);
		return;
	}

	sort(a, a+n);

	if(a[0]%2 == 0) print(0);
	else print(1);

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
