#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int oddmaxi=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0 && arr[i]<oddmaxi) oddmaxi=arr[i];
        }
        bool flag1=true;
        bool flag2=true;
        if(oddmaxi==INT_MAX){
            cout<<"YES"<<"\n";
            continue;
        }
        //for even
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0 && arr[i]<=oddmaxi){
                flag1=false;
            }
        }
        //for odd
        for(int i=0;i<n;i++){
            if(arr[i]%2==0 && arr[i]<=oddmaxi){
                flag2=false;
            }
        }
        if(flag1== true || flag2==true) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";



    }


    return 0;
}