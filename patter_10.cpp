//     1
//    212
//   32123
//  4321234
// 543212345

#include<bits/stdc++.h>
using namespace std;
int main(){
     cout<<"Enter the Row number"<<endl;
     int x;
     cin>>x;
     for(int i=1;i<=x;i++){
          int j;
          for(j=1;j<=x-i;j++){
               cout<<" ";
          }
         int  k=i;
          for(;j<=x;j++){
               cout<<k--;
          }
          k=2;
           for(;j<=x+i-1;j++){
               cout<<k++;
          }
          cout<<endl;
    
     }

}