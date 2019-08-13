#include <stdio.h>
void main()
{
    int num,m,n;
    scanf("%d",&m);
    scanf("%d",&n);
     for (num=m;num<=n;num++)
        {
               if(num%2==1)
                  printf("%d\t",num);
         }
                getch();
}
