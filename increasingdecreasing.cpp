#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int x,y,n;
        cin>>x>>y>>n;
        vector<long long int> arr(n);
        arr[0] = x;
        arr[n-1]=y;
        long long int temp = 1;
        for(long long int i=n-2;i>=1;i--){
            arr[i] = arr[i+1]-temp;
            temp++;
        }
        if(arr[1]-arr[0]>arr[2]-arr[1]){
            for(long long int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
           
        }
        else{
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}