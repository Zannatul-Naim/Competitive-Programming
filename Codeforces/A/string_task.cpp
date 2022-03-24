#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;
	string s = "";
	for(int i = 0; i < str.size(); i++) {
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y') {
			continue;
		}
		else {
			if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] + 'a' - 'A';
			s += str[i];
		}
	}
	for(int i = 0; i < s.size(); i++) {
		cout <<'.' << s[i];
	}
	cout << "\n";

	return 0;
}
