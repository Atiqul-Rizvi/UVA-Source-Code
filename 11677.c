#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4){
        if(a==0&&b==0&&c==0&&d==0){
            break;
        }
        else{
            e=c-a;
            f=d-b;
            if(f<0){
                f=f+60;
                e=e-1;
            }
            if(e<0){
                e=e+24;
            }
        }
        printf("%d\n",e*60+f);
    }
    return 0;
}
