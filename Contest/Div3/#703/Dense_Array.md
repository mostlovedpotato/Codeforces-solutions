# Dense Array

[Problem Statement](https://codeforces.com/contest/1490/problem/A)

**As the question states we just want to fulfill one condition that is any two consecutive elements to have certain relation.**

**It states that max <= 2*min**

**where max and min are from two consecutive elements in array given**

**So, we can derive the logic that the number of elements between two numbers would be log2(max/min)-1**

**But instead doing log2 we can simply do while loop as below**

```
#include<iostream>

using namespace std;

void solve(){
    int n;
    cin>>n;
    int y;
    cin>>y;
    int ans=0;
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        int a=min(x,y),b=max(x,y);
        while(a*2 <b){
            ans++;
            a*=2;
        }
        y=x;
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
```
