#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int st=n/2,sp=n/2,m=n/2;
    for(int i=1;i<=n;i++){
        for (int j = sp; j >= 0; j--)
        {
            cout<<"\t";
        }
        cout<<"*";
        for(int j=1;j<=st-2;j++){
            cout<<"\t";
        }
        if(i!=1 && i!=n){
            cout<<"*\t";
        }
        if(i<=m){
            sp-=1;
            st+=2;
        }
        else{
            sp+=1;
            st-=2;
        }
        cout<<"\n";
        
    }
    return 0;
}