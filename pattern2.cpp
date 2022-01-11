#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int j=1;j<=n;j++){
    for(int i=n-j;i>=0;i--){
        cout<<"    ";
    }
    for(int i=1;i<=j;i++){
        cout<<"*    ";
    }
    cout<<"\n";
    }
    return 0;
}