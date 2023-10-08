#include<bits/stdc++.h>
using namespace std;
int main(){



    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x1,y1,x2,y2;
        int ans1 = min(x1,n-x1+1);
        int ans2 = min(y1,n-y1+1);
        int x = min(ans1,ans2);

        ans1 = min(x2,n-x2+1);
        ans2 = min(y2,n-y2+1);
        int y = min(ans1,ans2);
        cout<<abs(x-y)<<endl;
    }




    return 0;
}