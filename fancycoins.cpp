#include<bits/stdc++.h>
using namespace std;
int main(){

    int l,u,n,d;
    cin>>l>>u>>n>>d;
    if(n>=l || (l%u<=n && l/u<=d)){
        cout<<0<<endl;
    }
    else{
        int newone = min(l/u,d);
        int oldone = min(l-u*newone , n);
        int rem = l-oldone-u*newone;
        if(rem%u==0){
            cout<<rem/u<<endl;
        }
        else if((u-rem%u)<=oldone){
            cout<<(rem/u)+1<<endl;
        }
        else cout<<(rem/u)+(rem%u)<<endl;

    }





    return 0;
}