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
        unordered_map<char,int> mp;
        int temp=0;
        int flag=0;
        for(int i=0;i<n;i++){
            if(mp.find(str[i])==mp.end()){
                mp[str[i]]=temp;
                temp=(temp==0?1:0);
            }
            else{
                if(mp[str[i]]!=temp){
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
                temp=(temp==0?1:0);
            }
        }
        if(flag==0) cout<<"YES"<<endl;
    }









    return 0;
}