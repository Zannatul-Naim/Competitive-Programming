#include<bits/stdc++.h>
#include<sstream>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {
	
	int n, k;
	cin >> n >> k;
	
	int a[k];

	for(int i = 0; i < k; i++) {
		a[i] = 1;
	}
	
	int i = k-1;
	int s = k;
	while(i >= 0) {
		while(s + a[i] <= n) {
			s += a[i];
			a[i] *= 2;
		}
		i--;
	}
	
	if(s != n) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
		for(int i = 0; i < k; i++) {
			cout << a[i] << " ";
		} cout << endl;
	}
}

int main()
{
	fastIO();

	solve();

	return 0;
}
