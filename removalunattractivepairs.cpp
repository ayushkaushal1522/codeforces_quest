#include<bits/stdc++.h>
using namespace std;
int main(){


    long long int t;
    cin>>t;
    while(t--){
        long long int n, maxFreq = 0;
        cin>>n;
        string s;
        cin>>s;
        map < char, long long int > freq;
        for(long long int i = 0 ; i < n ; i++) {
            freq[s[i]]++;
            maxFreq = max(maxFreq,freq[s[i]]);
         }
        if(maxFreq > (n/2))
            cout<<(n - (n-maxFreq)*2)<< endl;
        else
            cout<<n%2<<endl;
    }





    return 0;

}