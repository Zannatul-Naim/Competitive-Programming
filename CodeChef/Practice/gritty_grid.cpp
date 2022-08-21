#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n, m, x, y;
	    cin >> n >> m >> x >> y;
	    int sum = n+m;
	    if(((sum&1) == (x&1)) || ((sum&1) == (y&1))) cout << "Yes" << endl;
	    else cout << "No" << endl;
	    
	}
	return 0;
}
