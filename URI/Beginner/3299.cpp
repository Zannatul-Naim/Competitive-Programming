#include <iostream>

using namespace std;

int main()
{
   string s;
   cin >> s;
   bool flag = true;
   for(int i = 0; i < s.length(); i++)
   {
       if(s[i] == '1' && s[i + 1] == '3')
       {
           cout << s << " es de Mala Suerte" << "\n";
           flag = false;
           break;
       }
   }
   if(flag)
    cout << s << " NO es de Mala Suerte" << "\n";
   
   return 0;
}
