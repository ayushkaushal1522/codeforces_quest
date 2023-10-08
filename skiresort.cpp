#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long int n,k,q;
        cin>>n>>k>>q;
        vector<long long int> arr(n);
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int v = 0;
        long long int c = 0;
        for(auto i : arr){
            if(i<=q){
                c++;
            }
            else{
                c = 0;
            }
            if(c>=k){
                v += c-k+1;
            }
        }
        cout<<v<<endl;
        
    }






    return 0;
}