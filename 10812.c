#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    while(scanf("%d",&a)==1){
        b=0;
        while(b<a){
            scanf("%d%d",&c,&d);
            if(d>c||(c-d)%2!=0){
                printf("impossible\n");
            }
            else{
                e=(c-d)/2;
                f=e+d;
                printf("%d %d\n",f,e);
            }
            b++;
        }
    }
    return 0;
}
