#include <iostream>
 
using namespace std;
 
int main() {
 
   int n;
   cin>>n;
   for(int i=0;i<10;i++)
   {
       cout<<"N["<<i<<"]"<<" = "<<n<<endl;
       n=n+n;
   }
 
    return 0;
}
