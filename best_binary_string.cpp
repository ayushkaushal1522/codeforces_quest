#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int len = str.length();
        char arr[len+1];
        if(str[0] == '?'){
            arr[0] = '0';
        }
        else{
            arr[0] = str[0];
        }
        for(int i=1;i<len;i++){
            if (str[i] == '?'){
                arr[i] = arr[i-1];  
            }
            else{
                arr[i] = str[i];
            }
        }
        arr[len] = '\0';
        cout<<arr<<"\n";
    }



    return 0;
}