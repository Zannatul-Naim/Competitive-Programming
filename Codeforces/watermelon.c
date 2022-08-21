// Watermelon.c
#include<stdio.h>
    int main()
 {
        int w;
        while(scanf("%d",&w)==1)
        {
            if(w % 2 == 0 && w != 2)
                printf("YES\n");
            else
                printf("NO\n");
        }
        return 0;
}
