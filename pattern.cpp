#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter:";
    cin>>n;
    int num=1;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            if(num!=n+1){
            cout<<num<<"\t";
            num+=1;
            }
            else{
                exit(1);
            }
        }
        cout<<"\n";
        
    }
    return 0;
}