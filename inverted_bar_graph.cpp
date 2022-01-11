#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=1;i<=max;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>0){
                cout<<"*\t";
                arr[j]-=1;
            }
            else{
                cout<<" \t";
            }
        }
        cout<<"\n";
    }
    
    return 0;
}