#include<bits/stdc++.h>
using namespace std;
int abs(int a)
{
    if(a>=0){
        return a;
    }
    else{
        return -a;
    }
}
int gcd(int f,int m)
{
    if(m==0){
        return f;
    }
    else{
        return gcd(m,(f%m));
    }
}
int main()
{
    int i,j,k,l,m,n,f;
    int a[1000];
    while((cin>>i)&&i){
        n=0;
        a[n++]=i;
        while((cin>>i)&&i){
            a[n++]=i;
        }
        f=0;
        for(j=0;j<n;j++){
            for(k=j+1;k<n;k++){
                if(a[j]-a[k]!=0){
                    f=gcd(abs(a[j]-a[k]),f);
                }
            }
        }
        cout<<f<<endl;
    }
    return 0;
}
