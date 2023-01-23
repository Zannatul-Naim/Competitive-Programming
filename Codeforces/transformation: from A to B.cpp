#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int a, b;
	cin >> a >> b;
	
	// int cnt = 0;
	
	vector < int > v;
	v.push_back(b);
	
	while(b != a) {
		if(b%10 == 1 && b >= a) {
			b = (b-1)/10;
			v.push_back(b);
		}
		else if(b%2 == 0 && b >= a) {
			b /= 2;
			v.push_back(b);
		}
		else break;
	}
	
	// reverse
	// v.push_back(a);
	reverse(v.begin(), v.end());
	
	if(v[0] != a) {
		cout << "NO" << endl;
		return 0;
	} else {
		cout << "YES" << endl;
		cout << v.size() << endl;
	
		for(auto i : v) cout << i << " ";
		cout << endl;
	}

	return 0;
}
