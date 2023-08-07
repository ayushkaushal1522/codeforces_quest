#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;
    while(t--){
            long long int n;
            cin >> n;
            long long int arr[n+1];
            arr[0] = 0;
            for(int i = 1 ; i <= n ;i++){
                cin>>arr[i];
                if(arr[i]==1) arr[i]=0;
                else arr[i]=1;
                arr[i]+=arr[i-1];
            }
            int flag=0;
            for(int i=1;i<n;i++){
                if(arr[i] == arr[n]-arr[i]){
                    flag=1;
                    cout<<i<<"\n";
                    break;
                }
            }
            if(flag==0) cout<<-1<<endl;

    }






    return 0;
}