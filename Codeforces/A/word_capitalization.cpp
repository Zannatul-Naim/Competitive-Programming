#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;
	
	if(str[0] >= 'a' && str[0] <= 'z')  str[0] += 'A' - 'a';
	cout << str << endl;

	return 0;
}
