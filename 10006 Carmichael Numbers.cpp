#include<bits/stdc++.h>
using namespace std;
long long a[65001];
void s(long long n)
{
    long long i,j,k;
    k=sqrt(n);
    for(i=4;i<=n;i+=2){
        a[i]=1;
    }
    for(i=3;i<=k;i+=2){
        if(a[i]==0){
            for(j=i*i;j<=n;j+=2*i){
                a[j]=1;
            }
        }
    }
}
int main()
{
    s(65000);
    long long x,y,m,n,r,z,f,p;
    while(cin>>n){
        if(n==0){
            break;
        }
        if(a[n]==1 && n%2!=0){
            m=n;
            f=0;
            for(x=2;x<=n-1;x++){
                p=n;
                z=x;
                r=1;
                while(p){
                    if(p%2){
                        r=(r*z)%m;
                    }
                    z=(z*z)%m;
                    p/=2;
                }
                if(r!=x){
                    f=1;
                    break;
                }
            }
            if(f==1){
                cout<<n<<" is normal."<<endl;
            }
            else{
                cout<<"The number "<<n<<" is a Carmichael number."<<endl;
            }
        }
        else{
            cout<<n<<" is normal."<<endl;
        }
    }
    return 0;
}
