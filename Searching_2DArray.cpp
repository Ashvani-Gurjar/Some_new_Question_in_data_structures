#include<bits/stdc++.h>
using namespace std;
int main(){
      int x;
      cin>>x;
      int arr[x][x];
      for(int i=0;i<x;i++){
          for(int j=0;j<x;j++){
               cin>>arr[i][j];

          }
      }
      int key;
      cin>>key;
     int flage =0;
      for(int i=0;i<x;i++){
          for(int j=0;j<x;j++){
               if(arr[i][j]==key){
                    flage=1;
                    break;
               }
          }
          
      }
      if(flage==1){
          cout<<"Yes this number is present here"<<endl;
      }
      else{
          cout<<"No this number is not present here"<<endl;
      }
    
}
