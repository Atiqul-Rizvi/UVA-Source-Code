#include<iostream>
using namespace std;
int main()
{
    int k,l,s,r;
    while(cin>>k>>l){
        s=0;
        r=0;
        while(k>0){
            s+=k;
            r+=k;
            k=r/l;
            r=r%l;
        }
        cout<<s<<endl;
    }
    return 0;
}
