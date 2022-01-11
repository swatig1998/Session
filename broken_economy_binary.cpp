#include<bits/stdc++.h>
#include<array>
using namespace std;
int main(){
    int n,d;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>d;
    int lo=0,hi=n;
    int ceil=arr[hi],floor=arr[lo];
    while(lo<=hi){
        int mid=(lo+hi)/2;
    if(arr[mid]<d){
        lo=mid+1;
        floor=arr[mid];
    }
    else if(arr[mid]>d){
        hi=mid-1;
        ceil=arr[mid];
    }
    else{
        floor=ceil=arr[mid];
        break;
    }
    }
    if(ceil==floor){
        cout<<floor;
    }
    else{
    cout<<ceil<<"\n"<<floor;}

    return 0;
}