#include<stdio.h>
int main()
{
    int p2,p3,p5,u[1501],a,b,c,d;
    u[1]=p2=p3=p5=1;
    for(d=2;d<=1500;d++){
        a=2*(u[p2]);
        b=3*(u[p3]);
        c=5*(u[p5]);
        if(a<b&&a<c){
            u[d]=a;
            p2++;
        }
        else if(b<a&&b<c){
            u[d]=b;
            p3++;
        }
        else if(c<a&&c<b){
            u[d]=c;
            p5++;
        }
        else if(a==b){
            p3++;
            d--;
        }
        else if(a==c){
            p5++;
            d--;
        }
        else if(b==c){
            p5++;
            d--;
        }
    }
    printf("The 1500'th ugly number is %d.\n",u[1500]);
    return 0;
}
