#include <iostream>
 
using namespace std;
 
int main() {
      int n,in=0,out=0;
      cin>>n;
      for(int i=1;i<=n;i++)
      {
          long int x;
          cin>>x;
          if(x>=10 && x<=20)
          in++;
          else
          out++;
      }
      cout<<in<<" in"<<"\n";
      cout<<out<<" out"<<"\n";
 
    return 0;
}
