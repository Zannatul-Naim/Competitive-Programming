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

	string s;
	cin >> s;

	int n = s.size();

	for(int i = 0; i < n/2; i++) {
		string x = s;
		swap(x[0], x[i]);
		swap(x[n-1], x[n-i-1]);
		if(x != s) {
			print(1);
			return;
		}
	}
	print(0);

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
