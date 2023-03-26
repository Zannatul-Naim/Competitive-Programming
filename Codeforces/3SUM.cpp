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

	ll n;
	cin >> n;

	vector < ll > v;

	int c[10];
	memset(c, 0, sizeof(c));
	
	for(int i = 0;i < n; i++) {
		ll x;
		cin >> x;

		if(c[x % 10] < 4) {
			c[x%10]++;
			v.push_back(x);
		}
	} 

	n = v.size();

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			for(int k = 0; k < n; k++) {

				if(i != j and j != k and k != i) {
					ll x = v[i] + v[j] + v[k];
					if(x%10 == 3) {
						cout << "YES" << endl;
						return;
					}
				}
			}
		}
	}

	cout << "NO" << endl;
	return;

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
