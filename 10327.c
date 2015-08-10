#include<stdio.h>
int main()
{
    int a,b,e[1001],d,c,f;
    while(scanf("%d",&a)==1){
        for(c=1;c<=a;c++){
            scanf("%d",&e[c]);
        }
        f=0;
        for(c=1;c<=a;c++){
            for(d=c+1;d<=a;d++){
                if(e[c]>e[d]){
                    f++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",f);
    }
    return 0;
}
