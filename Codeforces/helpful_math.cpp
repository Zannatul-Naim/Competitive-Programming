#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;
	string s = "";
	for(int i = 0; i < str.size(); i++) {
		if(str[i] == '+') continue;
		else s += str[i];
	}
	sort(s.begin(), s.end());

	for(int i = 0; i < s.size(); i++) {
		cout << s[i];
		if(i < s.size()-1) cout << '+';
	}
	
	cout << endl;

	return 0;
}
