#include<bits/stdc++.h>
using namespace std;
int main(){

    int ee;
    cin>>ee;
    while(ee--){
        int mm;
        cin>>mm;
        vector<int> store1(201);
        for(int i=0;i<mm;i++){
            int x,c;
            cin>>x>>c;
            if(store1[x]!=0){
                store1[x]=min(store1[x],c);
            }
            else{
                store1[x] = c;
            }
        }
        int mini=INT_MAX;
        for(int i=1;i<=200;i++){
            if(store1[i]!=0){
                int temp =  store1[i];
                if(temp%2==0) temp-=2;
                mini = min(mini,i+(temp/2));
                
            }
        }
        cout<<mini<<endl;
        
        
    }


    return 0;
}