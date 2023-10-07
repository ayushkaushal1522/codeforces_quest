#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mini = INT_MAX;
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]<arr[i]) {cout<<0<<endl;flag=1;break;}
            else{
                mini = min(mini,arr[i+1]-arr[i]);
            }
        }
        if(flag==0){
            if(mini==0){
                cout<<1<<endl;
            }
            else{
                cout<<((mini/2)+1)<<endl;
            }
        }
    }

    return 0;
}