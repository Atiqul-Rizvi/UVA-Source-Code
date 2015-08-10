#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&e);
    while(e--){
        scanf("%d:%d",&a,&b);
        c=11-a;
        d=60-b;
        if(d==60){
            d=0;
            c++;
        }
        if(c<=0){
            c+=12;
        }
        if(c==0){
            c=12;
        }
        if(c<10){
            printf("0%d:",c);
        }
        else{
            printf("%d:",c);
        }
        if(d<10){
            printf("0%d\n",d);
        }
        else{
            printf("%d\n",d);
        }
    }
    return 0;
}
