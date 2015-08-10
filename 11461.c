#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b,c,d,e,f,g;
    while(scanf("%ld%ld",&a,&b)==2){
        if(a==0&&b==0){
            break;
        }
        c=0;
        d=sqrt(a);
        e=sqrt(b);
        for(f=d;f<=e;f++){
            g=pow(f,2);
            if(g>=a&&g<=b){
                c++;
            }
            if(g>b){
                break;
            }
        }
        printf("%ld\n",c);
    }
    return 0;
}
