#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n;
    while(cin>>n){
        l=1;
        for(i=1; ;){
            if(i%n==0){
                cout<<l<<endl;
                break;
            }
            i=((i%n)*10)+1;
            l++;
        }
    }
    return 0;
}
