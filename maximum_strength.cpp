#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        string str1,str2;
        cin>>str1>>str2;
         while(str2.size()<str1.size()){
            str2="0"+str2;
        }
        while(str1.size()<str2.size()){
            str1="0"+str1;
        }
 
      bool flag=false;
      long long int ans=0;
      for(int i=0;i<str1.size();i++){
         if(flag){
            ans+=(long long int)9;
            continue;
         }
         if(str1[i]!=str2[i]){
            ans+=(abs(str1[i]-str2[i]));
            flag=true;
         }
      }
 
      cout<<ans<<endl;
    }




    return 0;
}