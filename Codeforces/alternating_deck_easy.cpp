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

	int a = 1; 
	int b = 0;

	n--;

	bool bl = true;
	bool al = false;

	int i = 2;

	while(n) {
		if(bl) {

			if(i <= n) {
				b += i;
				n -= i;
			} else {
				if(!n) break;
				b += n;
				n = 0;
			} 
			i++;
			if(i <= n) {
				b += i;
				n -= i;
			} else {
				if(!n) break;
				b += n;
				n = 0;
				
			}
			i++;

			bl = false;
			
		} else {
			
			if(i <= n) {
				a += i;
				n -= i;
			} else {
				if(!n) break;
				a += n;
				n = 0;
			}
			i++;
			if(i <= n) {
				a += i;
				n -= i;
			} else {
				if(!n) break;
				a += n;
				n = 0;
			}
			i++;
			bl = true;
		}
	}

	cout << a << " " << b << endl;

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
