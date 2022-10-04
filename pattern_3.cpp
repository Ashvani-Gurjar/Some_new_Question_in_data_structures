// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21




#include<bits/stdc++.h>
using namespace std;
int main(){
     cout<<"Enter the number of row"<<endl;
     int x;
     cin>>x;
     int k=1;
     for(int i=0;i<x;i++){
          for(int j=0;j<i+1;j++){
                 cout<<k<<" ";
                  k++;
          }
          cout<<endl;
     }
}