#include<bits/stdc++.h>
using namespace std;
int func(int n){
    int ar[n+1]={0};
    vector<int> ans;
    int i,j;
    for(int i=2;i<=n;i++){
        if(!ar[i]){
        ans.push_back(i);
        for(int j=i;j<=n;j+=i){
            ar[j]++;
        }
        }
    }
    int res=0;
    for(int i=0;i<=n;i++){
        if(ar[i]==2) res++;
    }
    return res;


}
int main(){

    int n;
    cin>>n;
    cout<<func(n)<<"\n";



    return 0;
}