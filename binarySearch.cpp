#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int *arr,int x)
{
     int mid;
     int low=0;
     int high=5;
  for(int i=0;i<5;i++)
  {
      mid=(low+high)/2;
      if(arr[mid]==x)
      {
          return 1;
      }
      else
      {
          if(arr[mid]<x)
          {
               low=mid+1;
          }
          else
          {
               high=mid-1;
          }

         }
  }
   return 0;
}
int main(){
     int arr[5]={2,3,5,6,7};
     int x;
     cin>>x;
     if(BinarySearch(arr,x)==1){
          cout<<"This number is in Array"<<endl;
     }
     else{
          cout<<"This number is not Present in Array"<<endl;
     }
}