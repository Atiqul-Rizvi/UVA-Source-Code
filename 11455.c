#include<stdio.h>
int main()
{
    int a,b,c,d,e,f[5];
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        scanf("%d%d%d%d",&f[0],&f[1],&f[2],&f[3]);
        if(f[0]==f[1]&&f[1]==f[2]&&f[2]==f[3]){
            printf("square\n");
        }
        else{
            for(c=0;c<3;c++){
                for(d=0;d<3-c;d++){
                    if(f[d]>f[d+1]){
                        e=f[d];
                        f[d]=f[d+1];
                        f[d+1]=e;
                    }
                }
            }
            if(f[0]==f[1]&&f[2]==f[3]){
                printf("rectangle\n");
            }
            else if(f[0]+f[1]+f[2]>f[3]){
                printf("quadrangle\n");
            }
            else{
                printf("banana\n");
            }
        }
    }
    return 0;
}
