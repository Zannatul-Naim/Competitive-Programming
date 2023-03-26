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

	ll v[n];
	vector < ll > cp, cn;
	ll z = 0;
	
	for(int i = 0;i < n; i++) {
		cin >> v[i];
		if(v[i] > 0) cp.push_back(v[i]);
		else if(v[i] < 0) cn.push_back(v[i]);
		else z++;
	} 

	if(cp.size() > 3 || cn.size() > 3) {
		cout << "NO" << endl;
		return;
	}

	z = min(z, 5LL);

	vector < ll > a;

	for(auto i : cp) a.push_back(i);
	for(auto i : cn) a.push_back(i);
	for(int i = 0; i < z; i++) a.push_back(0);

	int nn = a.size();

	for(int i = 0; i < nn; i++) {
		for(int j = i+1; j < nn; j++) {
			for(int k = j+1; k < nn; k++) {

				ll x = a[i] + a[j] + a[k];
				bool f = 0;
				for(int l = 0; l < nn; l++) {
					if(a[l] == x) {
						f = true;
					}
				}
				if(!f) {
					cout << "NO" << endl;
					return;
				}
			}
		}
	}

	cout << "YES" << endl;
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
