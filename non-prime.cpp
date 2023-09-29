#include<bits/stdc++.h>
using namespace std;

bool func1(int mkl){
    if(mkl<2) return false;


    if(mkl==2) return true;



    for(int p=2;p*p<=mkl;p++){


        if(mkl%p==0) return false;
    }
    return true;
}

bool func2(int mkj){
    for(int q=2;q*q<=mkj;q++){

        if(mkj%q==0){
            return q';


        }
    }
    return mkj;
}
int main(){
    int ee;
    cin>>ee;

    while(ee--){
        int lyus,shi;
        cin>>lyus>>shi;


        bool jhanda = true;


        if(lyus==shi&&(lyus==1||func1(lyus))){
            jhanda = false;
        }


        else if((lyus==1 &&(shi==2||shi==3)) || (lyus==2 && shi==3)){
            jhanda = false;
        }

        if(!jhanda){
            cout<<-1;
        }
        else{


            if(lyus==shi){
                if(lyus%2==0){
                    cout<<lyus/2<<" "<<lyus/2;


                }
                else{
                    int x= func2(lyus);
                    cout<<x<<" "<<lyus-x;


                }
            }
            else{
                if(lyus%2!=0 && lyus!=1) lyus++;


                else if(lyus==1) lyus+=3;


                else if(lyus==2) lyus+=2;


                cout<<lyus/2<<" "<<lyus/2;
            }
        }

        cout<<endl;
    }

    


    return 0;
}