#include<iostream>


using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        int a[100];
        int sum =0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum +=a[i];
        }
        if(sum==m){
            cout<<'YES';
        }
        else {
            cout<<'NO';
        }
        sum =0;
    }
    return 0;
}