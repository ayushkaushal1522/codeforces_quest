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
        unordered_set<string> st;
        int ans=0;
        for(int i=0;i<n-1;i++){
            string temp="";
            temp+=str[i];
            temp+=str[i+1];
            if(st.find(temp)==st.end()){
                ans++;
                st.insert(temp);
            }
        }
        cout<<ans<<"\n";
    }
}