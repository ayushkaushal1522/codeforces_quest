#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
 
    if(m<4)
    {
    cout<<"NO"<<endl;
    }
    else
    {
        string s="vika";
        int k=0;
        int cnt=0;
        for (int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[j][i]==s[k])
                {
                    cnt++;
                    k++;
                    break;
                }
            }
        }
 
        if(cnt==4)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<< endl;
        }
    }
}

    


    return 0;
}