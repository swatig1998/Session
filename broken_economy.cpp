#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cout<<"n: ";
    cin>>n;
    int arr[n+1];
    cout<<"\n array values: ";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"d: ";
    cin>>d;
    int min,max,ex;
    for(int i=1;i<=n;i++){
        if(arr[i]<d){
            min=arr[i];
            max=arr[i+1];
        }
        else{
            ex=arr[i];
            break;
        }
    }
    if(ex==d){
        cout<<d;
    }
    else{
        cout<<max<<"\n"<<min;
    }
    return 0;
}