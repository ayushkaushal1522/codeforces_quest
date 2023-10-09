#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> arr(n);
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        long long int ans =max(arr[n-1]*arr[n-2],arr[0]*arr[1]);
        cout<<ans<<endl;

    }





    return 0;
}