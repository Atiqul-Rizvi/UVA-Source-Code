#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g[1000],h=1;
    scanf("%d",&a);
    while(h<=a){
        int i=0;
        scanf("%d%d%d",&b,&c,&d);
        e=1;
        while(e<=b){
            scanf("%d",&g[e]);
            e++;
        }
        f=0;
        for(e=1;e<=b&&e<=c;e++){
            i=i+g[e];
            if(i>d){
                break;
            }
            f++;
        }
        printf("Case %d: %d\n",h,f);
        h++;
    }
    return 0;
}
