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


void solve() {
  
  ll n;
  cin >> n;
  
  int c = 0, o = 0;
  
  for(int i = 0 ; i < n; i++) {
    
    int x;
    cin >> x;
    
    if(x == 1) o++;
    else c++;
    
  }
  
  if(o&1) c += (o/2 + 1);
  else c +=( o/2);
  
  cout << c << endl;
  
  
  
}

int main()
{
	fastIO();


	int t;
	cin >> t;

	while(t--) {
	  solve();
	}
// 	solve();

	return 0;
}
