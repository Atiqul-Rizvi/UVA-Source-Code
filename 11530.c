#include<stdio.h>
#include<string.h>
int main()
{
    char ch[101],ch1[5];
    int t,i,j,k,c;
    scanf("%d",&t);
    gets(ch1);
    for(i=1;i<=t;i++){
        gets(ch);
        j=strlen(ch);
        c=0;
        for(k=0;k<j;k++){
            if(ch[k]=='a'){
                c++;
            }
            else if(ch[k]=='b'){
                c=c+2;
            }
            else if(ch[k]=='c'){
                c=c+3;
            }
            else if(ch[k]=='d'){
                c++;
            }
            else if(ch[k]=='e'){
                c=c+2;
            }
            else if(ch[k]=='f'){
                c=c+3;
            }
            else if(ch[k]=='g'){
                c++;
            }
            else if(ch[k]=='h'){
                c=c+2;
            }
            else if(ch[k]=='i'){
                c=c+3;
            }
            else if(ch[k]=='j'){
                c++;
            }
            else if(ch[k]=='k'){
                c=c+2;
            }
            else if(ch[k]=='l'){
                c=c+3;
            }
            else if(ch[k]=='m'){
                c++;
            }
            else if(ch[k]=='n'){
                c=c+2;
            }
            else if(ch[k]=='o'){
                c=c+3;
            }
            else if(ch[k]=='p'){
                c++;
            }
            else if(ch[k]=='q'){
                c=c+2;
            }
            else if(ch[k]=='r'){
                c=c+3;
            }
            else if(ch[k]=='s'){
                c=c+4;
            }
            else if(ch[k]=='t'){
                c++;
            }
            else if(ch[k]=='u'){
                c=c+2;
            }
            else if(ch[k]=='v'){
                c=c+3;
            }
            else if(ch[k]=='w'){
                c++;
            }
            else if(ch[k]=='x'){
                c=c+2;
            }
            else if(ch[k]=='y'){
                c=c+3;
            }
            else if(ch[k]=='z'){
                c=c+4;
            }
            else if(ch[k]==' '){
                c++;
            }
        }
        printf("Case #%d: %d\n",i,c);
    }
    return 0;
}
