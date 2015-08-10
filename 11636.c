#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d=1;
    while(scanf("%d",&a)==1&&(a>=0)){
        if(a==1){
            printf("Case %d: 0\n",d);
        }
        for(c=0;c<14;c++){
            if(pow(2,c)<a&&a<=pow(2,c+1)){
                printf("Case %d: %d\n",d,c+1);
            }
        }
        d++;
    }
    return 0;
}
