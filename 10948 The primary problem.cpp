#include<bits/stdc++.h>
using namespace std;
long a[1000000];
void s(long n)
{
    long i,j,sq;
    sq=sqrt(n);
    for(i=4;i<=n;i+=2){
        a[i]=1;
    }
    for(i=3;i<=sq;i+=2){
        if(a[i]==0){
            for(j=i*i;j<=n;j+=2*i){
                a[j]=1;
            }
        }
    }
}
int main()
{
    s(1000000);
    long n,x,y;
    while(cin>>n){
        if(n==0){
            break;
        }
        if(n>0&&n<=2){
            cout<<n<<":"<<endl<<"NO WAY!"<<endl;
            continue;
        }
        for(x=2;x<=1000000;x++){
            if(a[x]==0){
                y=n-x;
                if(x>=n){
                    cout<<n<<":"<<endl<<"NO WAY!"<<endl;
                    break;
                }
                if(a[y]!=1){
                    cout<<n<<":"<<endl<<x<<"+"<<y<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
