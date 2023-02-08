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

long long int factorial(int n) {
	return n * factorial(n-1);
}
void solve() {

	int n;
	cin >> n;

	if(n < 10) {
		cout << 1 << endl;
		return;
	}

	int ans = 0;

	string s = "";

	int l = log10(n) + 1;

	for(int i = 1; i <= l; i++) {

		s += '1';
		string temp = s;

		for(int j  = i+1; j <= l; j++) {
			temp += '0';
		}

		sort(temp.begin(), temp.end());

		do {
			if(temp <= to_string(n)) ans++;
		} while(next_permutation(temp.begin(), temp.end()));

	}
	
	cout << ans << endl;
}

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
