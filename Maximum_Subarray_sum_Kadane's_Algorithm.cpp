#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int main(){
     int n;
     cin>>n;
     vector<int> a(n);
     for(auto &i : a){
          cin>>i;
     }
     int curr =0;
     int maxTillNow=0;

     for(int i=0;i<n;i++){
          curr+=a[i];

          maxTillNow=max(curr,maxTillNow);

          if(curr<0)
          curr=0;
     }
     cout<<maxTillNow<<endl;
     





return 0;
}