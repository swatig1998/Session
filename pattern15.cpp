#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sp=n/2,num=1,val1=1,val;
    int k=n/2;
    for(int i=1;i<=n;i++){
        for(int j=sp;j>=0;j--){
            cout<<"\t";
        }
        val=val1;
        for(int j=1;j<=num;j++){
            cout<<val<<"\t";
            int l=num/2;
            if(j<= l){
                val++;
            }
            else{
                val--;
            }
        }
        if(i<=k){
            val1++;
            num+=2;
            sp--;
        }
        else{
            val1--;
            num-=2;
            sp++;
        }
        cout<<"\n";
    }
    return 0;
}