#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        g=0;
        scanf("%d%d",&c,&d);
        for(e=c;e<=d;e++){
            f=e%2;
            if(f==1){
                g=g+e;
            }
        }
        printf("Case %d: %d\n",b,g);
    }
    return 0;
}
