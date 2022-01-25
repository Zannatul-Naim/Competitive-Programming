#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

 int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
    string str,s;
    cin>>str>>s;
    int arr[50];
    for(int i = 0; i < s.length(); i++)
    {
        for(int j = 0; j < str.length(); j++)
        {
            if(s[i] == str[j])
                arr[i] = j;
        }
    }
    int sum = 0;
    for(int i = 1; i < s.length(); i++)
    {
        sum += abs(arr[i] - arr[i - 1]);
    }
    cout<<sum<<"\n";
    }
     return 0;
 }
