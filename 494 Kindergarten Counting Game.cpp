#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    int i,j,k,l;
    while(getline(cin,s)){
        l=s.length();
        k=0;
        for(i=0;i<l;i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                for(;;){
                    if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                        i++;
                    }
                    else{
                        k++;
                        break;
                    }
                }
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
