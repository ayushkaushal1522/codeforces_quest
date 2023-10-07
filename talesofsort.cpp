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
        int maxi = 0;;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i- 1]){
                if(maxi<arr[i- 1]){
                    maxi = arr[i - 1];
                }
            }
        }
        cout<<maxi<<endl;
    }

   


    return 0;
}

