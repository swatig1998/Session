#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>d;
    int i=0;
    while(arr[i]!=d){
        i++;
    }
    int j=i;
    while(arr[i]==d){
        i++;
    }
    cout<<j<<"\n"<<i;
    return 0;
}