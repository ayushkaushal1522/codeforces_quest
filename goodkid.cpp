#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int mini = INT_MAX;
        long long int pro = 1;
        int z = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mini = min(mini,arr[i]);
            if(arr[i]!=0) pro*=arr[i];
            if(arr[i]==0) z++;
        }
        if(z>1) {cout<<0<<endl;continue;}
        if(mini!=0){
            pro=pro/mini;
        }
        pro*=(mini+1);
        cout<<pro<<endl;
    }





    return 0;
}