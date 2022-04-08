#include <bits/stdc++.h>

using namespace std;

int main()
{
   double n1, n2, n3, n4;
   cin >> n1 >> n2 >> n3 >> n4;
   double sum = n1*2 + n2*3 + n3*4 + n4*1;
   double avg = sum / 10;
   if(avg >= 5.0  &&  avg <= 6.9) {
       //cout << "Media: " << setprecision(1) << avg << endl;
       printf("Media: %0.1lf\n", avg);
       cout << "Aluno em exame." << endl;
       double x;
       cin >> x;
    //   cout << "Nota do exame: " << setprecision(1) << x << endl;
        printf("Nota do exame: %0.1lf\n", x);
       double avgg = (avg + x) / 2;
       if(avgg >= 5.0) cout << "Aluno aprovado." << endl;
       else cout << "Aluno reprovado." << endl;
    //   cout << "Media final: " << setprecision(1) << avgg << endl;
         printf("Media final: %0.1lf\n", avgg);
   }
   else if(avg >= 7.0) {
    //   cout << "Media: " << setprecision(1) << avg << endl;
         printf("Media: %0.1lf\n", avg);
       cout << "Aluno aprovado." << endl;
   }
   else {
    //   cout << "Media: " << setprecision(1) << avg << endl;
        printf("Media: %0.1lf\n", avg);
       cout << "Aluno reprovado." << endl;
   }
   
   return 0;
}
