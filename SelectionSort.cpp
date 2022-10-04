#include<bits/stdc++.h>
using namespace std;
void Traversal(int *arr,int n){
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}
void SelectionSort(int *arr,int n)
{
     int indexOfMin,temp;
     for(int i=0;i<n-1;i++)
     {
            indexOfMin=i;
       for(int j=1+i;j<n;j++)
       {
          if(arr[j]<arr[indexOfMin]){
                indexOfMin= j;
         }
     }
          temp=arr[i];
          arr[i]=arr[indexOfMin];
          arr[indexOfMin]=temp;

     }
}
int main(){
     int arr[5]={7,3,6,5,8};
     int n=5;
     SelectionSort(arr,n);
     Traversal(arr,n);
}