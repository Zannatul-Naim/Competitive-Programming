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

	ll a = 0, b = 0;

	while(a < n) a = a*10 + 9;

	a /= 10;

	b = n - a;

	ll ans = 0;

	// cout << a << " " << b << endl;

	while(a) {
		ans += a%10;
		a /= 10;
	}

	while(b) {
		ans += b%10;
		b /= 10;
	}

	cout << ans << endl;

	return;


}

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

    // cerr << "Execution time: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";

    return 0;
}
