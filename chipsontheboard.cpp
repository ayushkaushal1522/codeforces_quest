#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int  t;
    cin>>t;
    while(t--){
        long long int  n;
        cin>>n;
        long long int  sum1 = 0;
        long long int  sum2 = 0;
        vector<long long int > arr1(n);
        vector<long long int > arr2(n);
        for(long long int  i=0;i<n;i++){
            cin>>arr1[i];
            sum1+=arr1[i];
        }
        for(long long int  i=0;i<n;i++){
            cin>>arr2[i];
            sum2+=arr2[i];
        }
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        long long int  res = min(arr1[0]*n + sum2 , arr2[0]*n +sum1);
        cout<<res<<endl;
    }
    



    return 0;
}