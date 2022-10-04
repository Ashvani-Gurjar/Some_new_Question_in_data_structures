// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *



#include<bits/stdc++.h>
using namespace std;
int main(){
     cout<<"Enter the Row number"<<endl;
     int x;
     cin>>x;
     for(int i=1;i<=x;i++)
     {
       for(int j=1;j<=i;j++)
          {
            cout<<"*"; 
          }
          int y=2*x-2*i;
          for(int j=1;j<=y;j++)
          {
          cout<<" ";   
          }
          for(int j=1;j<=i;j++)
          {
            cout<<"*"; 
          }
         cout<<endl;
     }
      for(int i=x;i>=1;i--)
     {
       for(int j=1;j<=i;j++)
          {
            cout<<"*"; 
          }
          int y=2*x-2*i;
          for(int j=1;j<=y;j++)
          {
          cout<<" ";   
          }
          for(int j=1;j<=i;j++)
          {
            cout<<"*"; 
          }
          
     cout<<endl;
     }

}