#include<stdio.h>
int main()
{
    int a,b,c,d;
    for(a=1;a<=10002;a++){
        scanf("%d%d",&b,&c);
        if((b==0)&&(c==0)){
            break;
        }
        d=(b-1)/c;
        if(d>26){
            printf("Case %d: impossible\n",a);
        }
        else{
            printf("Case %d: %d\n",a,d);
        }
    }
    return 0;
}
