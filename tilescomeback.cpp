#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]==arr[n-1]){
            int count=0;
            int flag = 0;
            for(int i=0;i<n;i++){
                
                if(arr[i]==arr[0]){
                    count++;
                }
                if(count%k==0){
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0) cout<<"NO"<<endl;
        }
        else{
            int st = -1;
            int en = -1;
            int count=0;
            for(int i=0;i<n;i++){
                
                if(arr[i]==arr[0]){
                    count++;
                }
                if(count%k==0){
                    st = i;
                    break;
                }
            }
            count=0;
            for(int i=n-1;i>=0;i--){
                
                if(arr[i]==arr[n-1]){
                    count++;
                }
                if(count%k==0){
                    en = i;
                    break;
                }
            }
            if(st!=-1 && en!=-1 && st<en){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }


    }
    return 0;
}