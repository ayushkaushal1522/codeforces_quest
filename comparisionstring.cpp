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
        int maxi = 0;
        int count=0;
        for(int i=0;i<n;i++){
            if(str[i]=='>'){
                count++;
            }
            else{
                maxi=max(maxi,count);
                count=0;
            }
        }
        unordered_set<int> st;
        int temp = maxi+1;
        st.insert(temp);
        for(int i=0;i<n;i++){
            cout<<temp<<" ";
            if(str[i]=='>'){
                st.insert(temp);
                temp=temp-1;
                
            }
            else{
                st.insert(temp);
                temp=temp+1;
               
            }
            
        }
        cout<<st.size()<<endl;


    }


    return 0;
}