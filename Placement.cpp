#include<bits/stdc++.h>
using namespace std;
int main(){
     int mx=INT_MIN;
     int x;
     cin>>x;
     int arr[x];
     for(int i=0;i<x;i++){
          
          cin>>arr[i];
     }
     for(int i=0;i<x;i++){
          mx=max(mx,arr[i]);
          cout<<mx<<" ";
     }
}