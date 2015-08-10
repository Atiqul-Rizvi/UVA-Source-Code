#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,k,l,m,n;
    while(cin>>n){
        if(n==0){
            break;
        }
        else{
            cin>>s;
            l=s.length();
            k=l/n;
            for(i=1;i<=n;i++){
                m=i*k;
                for(j=m-1;j>=m-k;j--){
                    cout<<s[j];
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
