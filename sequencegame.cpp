#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int et;
    cin>>et;
    while(et--){
        int num;
        cin>>num;
        vector<int> lll(num);
        for(int i=0;i<num;i++){
            cin>>lll[i];
        }
        vector<int> uuu;
        int pr=lll[0];
        uuu.push_back(pr);
        int temp=1;
        for(int i=1;i<num;i++){
           if(lll[i-1]<=lll[i]){
            uuu.push_back(lll[i]);
            temp++;
           }
           else{
                uuu.push_back(lll[i]);
                uuu.push_back(lll[i]);
                temp+=2;
           }
            
        }
        int ss = uuu.size();
        cout<<ss<<endl;
        for(auto i :uuu){
            cout<<i<<" ";
        }
        cout<<endl;
 
    }
 
    return 0;
}