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

	string s;
	cin >> s;
	int c = 0;

	if(s[0] == '0') {
		cout << 0 << endl;
		return;
	}

	if(s[0] == '?') {
		for(int i = 1; i < s.size(); i++) {
			if(s[i] == '?') c++;
		}
		cout << 9*pow(10, c) << endl;
	} else {
		for(int i = 1; i < s.size(); i++) {
			if(s[i] == '?') c++;
		}
		if(c > 0) cout << pow(10, c) << endl;
		else cout << 1 << endl;
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
