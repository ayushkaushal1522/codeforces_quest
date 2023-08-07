#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=0;
    for(int i=0;i<n;i++){
        int x=abs(i-arr[i]+1);
        if(x%k!=0) res++;
    }
    if(res==0) cout<<0<<endl;
    else if(res<=2) cout<<1<<endl;
    else cout<<-1<<endl;
    }






    return 0;
}