#include<bits/stdc++.h>
using namespace std;
        
bool  sorted(int arr[],int n){
       if(n==1){
          return true;
       }
     bool restArray = sorted(arr+1,n-1);
      return (arr[0]<arr[1] && restArray);
         }

int main(){
      int arr[]={1,2,3,4,5,6,7,8};
      if(sorted(arr,8)){
          cout<<"Give Array is sorted"<<endl;
      }
      else{
          cout<<"Girve Array is not sorted"<<endl;
      }
return 0;
}