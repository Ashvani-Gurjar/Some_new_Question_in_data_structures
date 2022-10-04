//      ******
//     ******
//    ******
//   ******
//  ******
// ******




#include<bits/stdc++.h>
using namespace std;
int main(){
     cout<<"Enter the number of row"<<endl;
     int x;
     cin>>x;
     for(int i=1;i<=x;i++){

           for(int j=x;j>=1+i;j--){
               cout<<" ";
           }
          for(int j=1;j<=x;j++){
             cout<<"*";

          }
          cout<<endl;
     }
     
}