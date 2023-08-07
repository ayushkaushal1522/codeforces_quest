#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int sum=0;
        for(int i=n-1;i>0;i--){
            arr[i]=(i+1)*2;
            sum+=(i+1)*2;
        }
        int res=n-(sum%n);
        arr[0]=res;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }










    return 0;
}