#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         string s;
         cin>>s;
         string ans = "";
         int i=0;
        while(i<n)
        {
        char ch=s[i];
        ans+=ch;
        int j = i + 1;
        while (s[j]!=ch && j<n)
            j++;
        i = j + 1;
    }
    cout<<ans<<endl;
    }











    return 0;
}