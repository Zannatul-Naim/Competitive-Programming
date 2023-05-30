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
	
	string s;
	cin >> s;
	
	int c = 1;
	int mx = 0;
	
	for(int i = 0; i < n-1; i++) {
		if(s[i] == s[i+1]) c++;
		else {
			mx = max(mx, c);
			c = 1;
		}
	}
	mx = max(mx, c);
	
	cout << mx+1 << endl;

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
