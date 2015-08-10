#include <stdio.h>
int main ()
{
      int n,i,p,q,cnt=0,a[10000];
      while(scanf("%d",&n)==1 && n!=0)
      {
           cnt++;
           p=0;q=0;
           for(i=0;i<n;i++)
           {
                scanf("%d",&a[i]);
                if(a[i]>0)
                    p++;
                else
                    q++;
           }
           printf ("Case %d: %d\n",cnt,p-q);
      }
      return 0 ;
}
