// 1 
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include<bits/stdc++.h>
using namespace std;
int main(){
     cout<<"Enter the number of row"<<endl;
     int x;
     cin>>x;
     int k=1;
     for(int i=0;i<x;i++){
          for(int j=0;j<i+1;j++){
           if((i+j)%2==0){
            cout<<1<<" ";
           }
           else{
            cout<<0<<" ";
           }
          }
          cout<<endl;
     }
}