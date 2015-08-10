#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    while(scanf("%d",&a)==1){
        for(b=1;b<=a;b++){
            c=0;
            scanf("%d",&d);
            for(e=1;e<=d;e++){
                scanf("%d",&f);
                if(f>c){
                    c=f;
                }
            }
            printf("Case %d: %d\n",b,c);
        }
    }
    return 0;
}
