#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
    int m;
    while(x!=0){
        m=y%x;
        y=x;
        x=m;
    }
    return y;
}
int main()
{
    int n,i,j,k,l,sum,m,o,p;
    string s;
    cin>>n;
    getchar();
    while(n--){
        getline(cin,s);
        l=s.length();
        int a[100];
        k=0;
        for(i=0;i<l;i++){
            m=0;
            if(s[i]>='0'&&s[i]<='9'){
                while(s[i]>='0'&&s[i]<='9'){
                    m=m*10+(s[i]-'0');
                    i++;
                }
                a[k++]=m;
            }
        }
        p=1;
        for(i=0;i<k-1;i++){
            for(j=i+1;j<k;j++){
                p=max(p,gcd(a[i],a[j]));
            }
        }
        cout<<p<<endl;
    }
    return 0;
}

