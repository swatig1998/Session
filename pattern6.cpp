#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    int sp=n-2,st=n/2,sp1=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=sp1;j++){
            cout<<"\t";
        }
        cout<<"*\t";
        for (int j = sp; j >= 0; j--)
        {
            cout<<"\t";
        }
        if(i!=st+1){
        cout<<"*\t";
        }

        if(i<=st){
            sp=sp-1;
            sp1+=1;
        }
        else{
            sp+=1;
            sp1-=1;
        }
        
        cout<<"\n";
    }

    return 0;
}