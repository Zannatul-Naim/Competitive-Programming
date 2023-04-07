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

	if(s[1] == 'a') {
		cout << s[0] << " a " << s.substr(2, s.size()-2) << endl;
		return;
	} else {
		cout << s[0] << " " << s.substr(1, s.size()-2) << " " << s[s.size()-1] << endl;
		return;
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
