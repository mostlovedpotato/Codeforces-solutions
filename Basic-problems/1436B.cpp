#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<i;j++){  // first i numbers would be zeroes
                cout<<"0";
            }
            for(int k=0;k<2;k++){  //next two numbers would be 1s
                cout<<"1";
            }
            for(int m=i+2;m<n;m++){ //again remaining would be zeroes
                cout<<"0";
            }
            cout<<"\n";   //going to the next line
        }
        cout<<"1"; //last line will be first 1 and all zeroes and last 1
        for(int i=0;i<n-2;i++){
            cout<<"0";
        }
        cout<<"1 \n";
    }
    return 0;
}
