#include<bits/stdc++.h>
using namespace std;
long bm(long b,long p,long m)
{
    if(p==0){
        return 1;
    }
    if(p%2==0){
        long h=bm(b,p/2,m);
        return ((h%m)*(h%m))%m;
    }
    else{
        return ((b%m)*(bm(b,p-1,m)%m))%m;
    }
}
int main()
{
    long b,p,m,x;
    while(cin>>b>>p>>m){
        x=bm(b,p,m);
        cout<<x<<endl;
    }
    return 0;
}
