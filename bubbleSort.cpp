#include<bits/stdc++.h>
using namespace std;
void Traversal(int *arr,int n){
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}
void BubbleSort(int *arr,int n){
     int temp;
     for(int i=0;i<n-1;i++){
          for(int j=0; j<n-i+1;j++){
                     if(arr[j]>arr[j+1]){
                         temp=arr[j];
                         arr[j]=arr[j+1];
                         arr[j+1]=temp;
                     }
          }
     }
}
int main(){
     int arr[5]={7,3,6,5,2};
     int n=5;
     BubbleSort(arr,n);
     Traversal(arr,n);
}