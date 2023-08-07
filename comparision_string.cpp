#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int maxi=0;
        int res=1;
        for(int i=0;i<n-1;i++){
            if(str[i]==str[i+1]){
                res++;
            }
            else{
                maxi=max(res,maxi);
                res=1;
            }
        }
        maxi=max(res,maxi);
        res=0;
        cout<<maxi+1<<endl;
    }
}
// ><>>><<>