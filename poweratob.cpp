#include<bits/stdc++.h>
using namespace std;
int power(int a , int b){
    if(b==0) return 1;
    int ans=1;
    if(b%2==1){
        ans=ans*a*power(a,b-1);
    }
    else{
        ans=ans*power(a*a,b/2);
    }
    return ans;
}
int main(){


    int a,b;
    cin>>a>>b;
    cout<<power(a,b);

    return 0;
}