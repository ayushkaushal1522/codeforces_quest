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
        int count = 0;
        for(int i=0;i<n;i++){
            if(i+1 == arr[i]) count++;
        }
        if(count%2){
            count++;
        }
        cout<<(count/2)<<endl;
    }





    return 0;
}