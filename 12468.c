#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d%d",&a,&b)==2&&a>=0&&b>=0){
        c=abs(a-b);
        if(c>=50){
            c=100-c;
        }
        printf("%d\n",c);
    }
    return 0;
}
