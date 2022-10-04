#include<bits/stdc++.h>
using namespace std;
void Traversal(int *arr,int n){
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}
void InsertionSort(int *arr,int n){
     int key,j;
     for(int i=1;i<n;i++){
             key=arr[i];
             j=i-1;
         while(j>=0 && arr[j]>key){
           arr[j+1]=arr[j];
           j--;
         }
          arr[j+1]=key;
     }
}
int main(){
     int arr[5]={7,3,6,5,8};
     int n=5;
     InsertionSort(arr,n);
     Traversal(arr,n);
}