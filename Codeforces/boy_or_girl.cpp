#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;
	
	sort(str.begin(), str.end());
	string s;
	s += str[0];
	// cout << s << endl;
	int j = 0;
	for(int i = 1; i < str.size();i++) {
		if(s[j] != str[i]) {
			s += str[i];
			j++;
		}
	}

	if(s.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
	else cout << "IGNORE HIM!" << endl;
	// cout << str << endl;
	// cout << s << endl;

	return 0;
}
