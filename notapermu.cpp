#include<bits/stdc++.h>
using namespace std;
int main()
{
        int et;
        cin >> et;
        while(et--)
        {
            string trs;
            cin>>trs;
            int num=trs.length();
            string abc=string(num,'(')+string(num,')');
            string xyz="";
            int pl=num;
            while(pl--){
                xyz += "()";
            }
            if (abc.find(trs) == string::npos)
            {
                cout<<"YES"<<endl;
                cout<<abc<<endl;
            }
            else if (xyz.find(trs)==string::npos)
            {
                cout<<"YES"<<endl;
                cout<<xyz<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        return 0;
}
