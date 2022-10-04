#include<bits/stdc++.h>
using namespace std;
int main(){
     int x;
     cin>>x;

     int arr[x+1];
     arr[x]=-1;
     for(int i=0;i<x;i++)
     {
      cin>>arr[i];
     }
  if(x==1){
     cout<<"1"<<endl;
     return 0;
  }
   
   int ans=0;
   int mx=-1;
   for(int i=0;i<x;i++){
     if(arr[i]>mx && arr[i]>arr[i+1]){
           ans++;
     }
     mx=max(mx,arr[i]);
   }
 cout<<ans<<endl;
 return 0;
}


