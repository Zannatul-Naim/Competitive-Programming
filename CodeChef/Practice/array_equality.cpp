#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int gcd(int a, int b) {
	return b==0? a : gcd(b, a%b);
}

int lcm(int a, int b) {
	return (a * (b / gcd(a, b)));
}

bool isPrime(int n) {  // A number is Prime number or not.
	if(n < 2) return false;
	for(int i = 0; i*i <= n; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

long long int factorial(int n) {
	return n * factorial(n-1);
}

ll pow(int a, int n) {
	if(n == 0) return 1;
	if(n == 1) return a;
	ll t = pow(a, n/2);
	return t*t*pow(a, n%2);
}

template<class T>
void swap(T &a, T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}


void solve() {
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a+n);
  int mx = -1;
  int cnt = 1;
  for(int i = 0; i < n-1; i++) {
    if(a[i] == a[i+1]) cnt++;
    else {
      mx = cnt>mx?cnt:mx;
      cnt = 1;
    }
  }
  mx = cnt>mx?cnt:mx;
  if(((n&1) && (mx <= n/2+1)) || !(n&1) && (mx <= n/2)) cout <<"Yes" << endl;
  else cout << "No" << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
// solve();

	return 0;
}
