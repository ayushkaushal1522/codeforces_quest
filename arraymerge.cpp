#include <bits/stdc++.h>
using namespace std;

 
 
int main(){
   int t;                  
   cin>>t;
   while(t--){
      int n;               
      cin>>n;
      vector<int> arr(n),brr(n);
      for(int i=0;i<n;i++){
         cin>>arr[i];
      }
      for(int i=0;i<n;i++){
         cin>>brr[i];
      }
 
      map<int,int> mp1,mp2;
 
      int count=0;
      for(int i=0;i<n;i++){
         count++;
         if(i==n-1 or arr[i+1]!=arr[i]){
            if(mp1.find(arr[i])==mp1.end()){
               mp1[arr[i]]=count;
            }
            else{
               mp1[arr[i]]=max(mp1[arr[i]],count);
            }
            count=0;
         }
      }
 
      count=0;
      for(int i=0;i<n;i++){
         count++;
         if(i==n-1 or brr[i+1]!=brr[i]){
            if(mp2.find(brr[i])==mp2.end()){
               mp2[brr[i]]=count;
            }
            else{
               mp2[brr[i]]=max(mp2[brr[i]],count);
            }
            count=0;
         }
      }
 
      int res=0;
      for(auto it :mp1){
         res=max(res,(mp1[it.first]+mp2[it.first]));
      }
      for(auto it: mp2){
         res=max(res,(mp1[it.first]+mp2[it.first]));
      }
 
      cout<<res<<endl;
   }
   return 0;
}