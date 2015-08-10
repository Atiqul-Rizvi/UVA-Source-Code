#include<stdio.h>
#include<string.h>
int main()
{
    int a,b=0,c,f;
    char d[1000],e;
    scanf("%d",&a);
    getchar();
    while(a--){
        gets(d);
        c=strlen(d);
        printf("Case %d: ",++b);
        for(f=0;f<c;f++){
            int g=0,h;
            if(d[f]>='A'&&d[f]<='Z'){
                e=d[f];
            }
            else if(d[f]>='0'&&d[f]<='9'){
                g+=d[f]-'0';
                f++;
                while(d[f]>='0'&&d[f]<='9'){
                    g=g*10+d[f]-'0';
                    f++;
                }
                f--;
                for(h=0;h<g;h++){
                    printf("%c",e);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
