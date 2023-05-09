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
	
	string x = "codeforces";
	
	int c = 0;
	
	for(int i = 0; i < s.size(); i++) {
		if(s[i] != x[i]) c++;
	}
	
	cout << c << endl;

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
