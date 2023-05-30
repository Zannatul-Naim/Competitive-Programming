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
	
	if(s[0] == '?') s[0] = '0';
	for(int i = 1; i < n; i++) {
		if(s[i] == '?') {
			s[i] = s[i-1];
		}
	}
	
	cout << s << endl;
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
