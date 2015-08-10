#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    while(scanf("%d %d",&a,&b)==2){
        g=0;
        printf("%d %d ",a,b);
        if(a>b){
            d=b;
            b=a;
            a=d;
        }
        for(c=a;c<=b;c++){
            f=1;
            e=c;
            while(e>1){
                if(e%2==0){
                    e=e/2;
                }
                else{
                    e=(e*3)+1;
                }
                f++;
            }
            if(f>=g){
                g=f;
            }
        }
        printf("%d\n",g);
    }
    return 0;
}
