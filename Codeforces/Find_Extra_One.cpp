#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main()
{
	fastIO();
	
	int t;
	int left = 0, right = 0;
	
	cin >> t;
	while(t--) {
	int a, b;
   	 cin >> a >> b;
    
        if(a > 0 ) right++;
        else if(a < 0) left++;
	}
	if(left == 1 || right == 1 || left == 0 || right == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
