//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
#include<bits/stdc++.h>
using namespace std;
int main(){
     cout<<"Enter the number of row"<<endl;
     int x;
     cin>>x;
     for(int i=1;i<=x;i++){
           for(int j=1;j<=x-i;j++){
           cout<<" ";
          }
          for(int j=1;j<=2*i-1;j++){
                cout<<"*";
          }
          cout<<endl;
     }
      for(int i=x;i>=1;i--){
           for(int j=1;j<=x-i;j++){
           cout<<" ";
          }
          for(int j=1;j<=2*i-1;j++){
                cout<<"*";
          }
          cout<<endl;
     }
     
}