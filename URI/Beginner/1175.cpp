#include <iostream>

using namespace std;

int main() {

 int a[20],b[20];
   for(int i=0;i<20;i++)
   {
       cin>>a[i];
   }
   int j=0;
   for(int i=19;i>=0;i--)
   {
       b[j]=a[i];
       cout<<"N["<<j<<"] = "<<b[j]<<endl;
       j++;

   }

    return 0;
}
