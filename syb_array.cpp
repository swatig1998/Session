#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int li=pow(2,n);
    for(int i=0;i<li;i++){
        int num=i;
        string s="";
        for(int j=n-1;j>=0;j--){
            if(num%2==0){
                s="-\t"+s;
                num/=2;
            }
            else{
                string s1="";
                s1+=to_string(arr[j]);

                s=s1+"\t"+s;
                num/=2;
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}