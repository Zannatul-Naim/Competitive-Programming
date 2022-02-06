#include <iostream>

using namespace std;

int main() {

 int t;
 cin>>t;
 while(t--)
 {
     long long int n,perfect=0;
     cin>>n;
     for(long long int i=1;i<n;i++)
     {
         if(n%i==0)
         perfect+=i;
     }
     if(n==perfect)
     cout<<n<<" eh perfeito"<<"\n";
     else
     cout<<n<<" nao eh perfeito"<<"\n";
 }

    return 0;
}
