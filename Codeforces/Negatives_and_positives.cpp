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

	ll n;
	cin >> n;

	vector < ll > v(n);

	for(auto &i: v) cin >> i;
	ll s = 0;

	for(auto i : v) s += i;

	ll s2 = 0;

	sort(v.begin(), v.end());

	for(ll i = 0; i < n; i++) {
		if(i < n-1 &&(v[i] <= 0 && v[i+1] <= 0)) {
			s2 += -(v[i]+v[i+1]);
			i++;
		} else if(i < n-1 && (v[i] < 0 && v[i+1] > 0)) {
			int x = -v[i];
			int y = v[i+1];
			s2 += max(x, y);
			s2 -= min(x, y);
			i++;
		}
		else s2 += v[i];
		// cout << s2 << endl;
	}

	cout << max(s,s2) << endl;


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
