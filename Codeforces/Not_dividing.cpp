#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
const int N = 2e5 + 1;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	int n;
	cin >> n;
	int a[n];
	for(auto &i : a) cin >> i;
	a[0]!=1?a[0]:a[0]+=1;
	for(int i = 1; i < n; i++) {
		if(a[i] == 1) a[i]++;
		if((a[i] % a[i-1] == 0)) {
			a[i]++;	
		}
	}

	for(auto i : a) cout << i << " ";
	cout << endl;

}


int main()
{
	fastIO();

	int t = 1;
	cin >> t;
	while (t--) {
        solve();
    }

	return 0;
}
