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
	
	int a[n];
	
	for(int i = 0; i < n; i++) cin >> a[i];
		
	int ans = 0;
	int c = 0;
	for(int i = 0; i < n; i++) {
		
		if(a[i] == 0) {
			c++;
		} else {
			ans = max(c, ans);
			c = 0;
		}
		
	}
	ans = max(c, ans);
	
	cout << ans << endl;
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
