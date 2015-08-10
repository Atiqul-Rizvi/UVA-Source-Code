#include<bits/stdc++.h>
using namespace std;
long a[10000];
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
    s(10000);
    long m,n,x,x1,y,y1,p;
    cin>>m;
    while(m--){
        cin>>n;
        y1=0;
        x1=0;
        for(x=2;x<=n;x++){
            if(a[x]==0){
                p=n/x;
                y=n-p*x;
                if(y>y1){
                    y1=y;
                    x1=x;
                }
            }
        }
        cout<<x1<<endl;
    }
    return 0;
}
