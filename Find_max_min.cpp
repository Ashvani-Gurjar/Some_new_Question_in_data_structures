#include<bits/stdc++.h>
using namespace std;
int main(){
     int x;
     cin>>x;
     int temp=INT_MIN;
     int res=INT_MAX;
     int arr[x];
     for(int i=0;i<x;i++){
          cin>>arr[i];
          if(temp<arr[i]){
               temp=arr[i];
          }
          if(res>arr[i]){
               res=arr[i];
          }
     }
     cout<<temp<<" "<<res<<endl;

}