#include<stdio.h>
int main()
{
    long int a,b,c,to,an,ca,x,d;
    while(scanf("%ld",&ca)==1){
        for(d=0;d<ca;d++){
            scanf("%ld%ld%ld",&a,&b,&c);
            to=a+b;
            an=0;
            for(;;){
                x=to/c;
                an=an+x;
                to=to/c+to%c;
                if(to<c){
                    break;
                }
            }
            printf("%ld\n",an);
        }
    }
    return 0;
}
