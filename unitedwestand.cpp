#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> brr(n);
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
        sort(brr.begin(),brr.end());
        int res=-1;
        for(int i=0;i<n-1;i++){
            int flag=0;
            for(int j=i+1;j<n;j++){
                if(brr[i]%brr[j]==0) flag=1;
            }
            if(flag==0) {res=brr[i];break;}
        }

        if(res==-1){
            cout<<-1<<endl;
            // cout<<endl;
        }
        

        else{
            vector<int> v;
            vector<int> c;
            for(int i=0;i<n;i++){
                if(brr[i]==res) v.push_back(brr[i]);
            }
            for(int i=0;i<n;i++){
                if(brr[i]!=res) c.push_back(brr[i]);
            }
            cout<<v.size()<<" "<<c.size()<<endl;
            for(auto it : v){
                cout<<it<<" ";
            }
            cout<<endl;
            for(auto it : c){
                cout<<it<<" ";
            }
            cout<<endl;

           
        }
            
            
            
    }






    return 0;
}