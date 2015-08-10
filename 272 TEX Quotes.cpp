#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    int i,j,k=0,l;
    while(getline(cin,s)){
        l=s.length();
        for(i=0;i<l;i++){
            if(s[i]=='"'){
                k=k+1;
                if(k%2==1){
                    cout<<"``";
                }
                else{
                    cout<<"''";
                }
            }
            else{
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
