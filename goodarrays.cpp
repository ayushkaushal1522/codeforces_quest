#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
            long long int n;
            cin>>n;
            map<long long int ,long long int > mp;
            vector<long long int > nums(n);
            bool ifallone=true;

            for(int i=0;i<n;i++){
                cin>>nums[i];
                if(nums[i]!=1)ifallone=false;
                mp[nums[i]]++;
            }
        
            if(n==1 || ifallone) {
                cout<<"NO"<<endl;
                continue;
            }
            else{
                long long int one=0,allsum=0;
                for(auto ele:mp){
                    if(ele.first==1)one=ele.second;
                    else allsum=allsum+(ele.first*ele.second);
                }
                long long int  exceptone=n-one;
                allsum-=exceptone;
                if(allsum>=one){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
           
    }




    return 0;
}
