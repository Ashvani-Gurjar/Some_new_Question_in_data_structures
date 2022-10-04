#include<bits/stdc++.h>
using namespace std;
void Traversal(int *arr,int n){
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}
int partition(int *arr,int low,int high)
{
    int pirovt=arr[low];
    int i=low+1;
    int j=high;
    int temp;
    do{
     while(arr[i]<=pirovt){
          i++;
     }
     while(arr[j]>pirovt){
          j--;
     }
     if(i<j){
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
     }    
     }while(i<j);
     temp=arr[low];
     arr[low]=arr[j];
     arr[j]=temp;
     return j;
   
}
void QuickSort(int *arr,int low,int high){
     int partitionIndex;
     if(low<high){
          partitionIndex=partition(arr,low,high);
          QuickSort(arr,low,partitionIndex-1);
          QuickSort(arr,partitionIndex+1,high);
     }
}
int main(){
     int arr[5]={7,3,6,5,8};
     int n=5;
     QuickSort(arr,0,n-1);
     Traversal(arr,n);
}