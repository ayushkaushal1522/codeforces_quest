#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> cc(n);
        for(int i=0;i<n;i++){
            cin>>cc[i];
        }
        sort(cc.begin(),cc.end());
        int p=0;
        int q=n-1;
        int res=0;
        while(p<q){
            res=res+cc[q]-cc[p];
            p++;
            q--;
        }
        cout<<res<<endl;
    }








    return 0;
}