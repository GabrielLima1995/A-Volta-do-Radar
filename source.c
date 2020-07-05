#include<stdio.h>

int main ()
{
    int t,n,i,resto,mesa,pontas;

    scanf("%d",&t);
    while (t!=0)
    {

        for (i=0;i<t;i++)
        {
            scanf("%d",&n);
              resto = n%2;
            if (resto ==0)
            {
                mesa=n-2;
                pontas=2;
            }
            else
            {
               mesa=n-1;
               pontas=1;
            }

            printf("%d\n",2*mesa+pontas);
        }

      scanf("%d",&t);

    }

    return 0;
}
