#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
      int n,m;
      cin>> n >> m;
      int a,b,c,d;
      bool flag = false;
      for(int i = 1; i <= n; i++)
      {
        cin >> a >> b >> c >> d;
        if(b == c)
          flag = true;
      }
      if((m*m) % 4 == 0 && flag == true)
        cout << "Yes" << "\n";
      else
        cout << "NO" << "\n";
    }
    return 0;
}




// second code
/*
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

	int n, m;
	cin >> n >> m;

	bool ans = false;

	while(n--) {
		int a, b, c, d;
		cin >> a >> b;
		cin >> c >> d;

		if(b == c) {
			ans = true;
		}
	}

	if(ans == true and m%2 == 0) {
		cout << "YES" << endl;
		return;
	}

	cout << "NO" << endl;

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

*/
