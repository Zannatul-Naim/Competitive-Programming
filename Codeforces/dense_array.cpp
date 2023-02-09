#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define input cin >>
#define output cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int gcd(int a, int b) {
	return b==0? a : gcd(b, a%b);
}

int lcm(int a, int b) {
	return (a * (b / gcd(a, b)));
}

bool isPrime(int n) {  // A number is Prime number or not.
	if(n < 2) return false;
	for(int i = 2; i*i <= n; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

int factorial(int n) {
	return n * factorial(n-1);
}

void solve() {

	int n;
	cin >> n;

	vector < int > v(n);
	for(auto &i : v) cin >> i;

	int ans = 0;

	for(int i = 0; i < n-1; i++) {

		int a = min(v[i], v[i+1]);
		int b = max(v[i], v[i+1]);
		
		if(a*2 < b) {
			while(a*2 < b) {
				a *= 2;
				ans++;
			}
		}
	}

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
