#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int li=-1;
        int length=0;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                if(li==-1){
                li=i;
                length=i-li+1;
                }
                else{
                length=i-li+1;
                }
            }
            else{
                li=-1;
                
            }
            ans=max(ans,length);
            
        }
        cout<<ans<<endl;
    }



    return 0;
}