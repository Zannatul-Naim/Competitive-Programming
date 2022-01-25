#include <iostream>
using namespace std;
int main() 
{
  string str;
  cin>>str;
  int smallCount = 0 , bigCount = 0;
  for(int i = 0 ; i < str.length(); i++)
  {
    if(str[i] >= 'a' && str[i] <= 'z')
    smallCount++;
    else if(str[i] >= 'A' && str[i] <= 'Z')
    bigCount++; 
  }
  if(smallCount > bigCount)
  {
    for(int i = 0; i < str.length(); i++)
    {
       if(str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] + 'a' - 'A' ;
    }
  }
  else if(smallCount < bigCount)
  {
    for(int i = 0; i < str.length(); i++)
    {
       if(str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] + 'A' - 'a' ;
    }
  }
  if(smallCount == bigCount)
  {
    for(int i = 0; i < str.length(); i++)
    {
       if(str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] + 'a' - 'A' ;
    }
  }
  cout<<str<<endl;
  return 0 ;
}
