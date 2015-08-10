#include<stdio.h>
int main()
{
    long a,b,c,d,e,f,g,h;
    while(scanf("%ld%ld%ld",&c,&d,&e)==3){
        f=c*c;
        g=d*d;
        h=e*e;
        if(c!=0||d!=0||e!=0){
            if((h==f+g)||(f==g+h)||(g==f+h)){
                    printf("right\n");
            }
            else{
                    printf("wrong\n");
            }
        }
    }
    return 0;
}
