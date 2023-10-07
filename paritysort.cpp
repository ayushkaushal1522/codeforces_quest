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
        vector<int> arr1;
        vector<int> arr2;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0) arr1.push_back(arr[i]);
            else arr2.push_back(arr[i]);
        }
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());

        int x=0;
        int y=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                arr[i] = arr1[x];
                x++;
            }
            else{
                arr[i] = arr2[y];
                y++;
            }
        }
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                flag=1;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}