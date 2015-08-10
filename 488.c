#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h=0;
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        if(h==1){
            printf("\n");
        }
        h=1;
        scanf("%d%d",&c,&d);
        for(e=1;e<=d;e++){
            for(f=1;f<=c;f++){
                for(g=1;g<=f;g++){
                    printf("%d",f);
                }
                printf("\n");
            }
            for(g=c-1;g>=1;g--){
                for(f=1;f<=g;f++){
                    printf("%d",g);
                }
                printf("\n");
            }
            if(e!=d){
                printf("\n");
            }
        }
    }
    return 0;
}
