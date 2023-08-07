#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(101,0);
        vector<int> v(n);
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr[temp]++;
            v[i]=temp;

        }
        int flag=0;
        for(int i=0;i<n;i++){
            if(v[i]==0) continue;
            if(arr[v[i]-1]==0) {flag=1;cout<<"NO"<<endl;break;}
            else{
                arr[v[i]-1]--;
            }
        }
        if(flag==0)
            cout<<"YES"<<endl;
    }





    return 0;
}