#include<bits/stdc++.h>
using namespace std;

int smallestSubarrayWithSum(int *arr,int n,int x){
     int sum = 0;
     int minlength = n+1;
     int start=0,end=0;
     while(end<n){
          while(sum<=x && end<n){
               sum+=arr[end++];
         }
         while(sum>x && start<n){
           if(end-start<minlength){
               minlength = end -start;
           }

            sum-=arr[start++];


         }
     }
     return minlength;
}

int main(){
     int arr[] ={1,4,45,6,10,19};
     int x=51;
     int n=6;

     int minlength =smallestSubarrayWithSum(arr,n,x);

     if(minlength ==n+1){
          cout<<"No such Subarry are exits in array"<<endl;
     }
     else{
       cout<<"Smallest lenght subarray is: "<<minlength<<endl;
     }




return 0;
}