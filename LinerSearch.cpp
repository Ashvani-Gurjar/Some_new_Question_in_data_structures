#include<bits/stdc++.h>
using namespace std;
int linerSearch(int *arr,int x){
  for(int i=0;i<5;i++){
     if(arr[i]==x){
          return 1;
          break;
     }
     }
  return 0;
}
int main(){
     int arr[5]={4,3,2,6,7};
     int x;
     cin>>x;
     if(linerSearch(arr,x)){
          cout<<"This number is in Array"<<endl;
     }
     else{
          cout<<"This number is not Present in Array"<<endl;
     }
}