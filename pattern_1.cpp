// * * * * 
// *     *
// *     *
// *     *
// * * * *


#include<bits/stdc++.h>
using namespace std;
int main(){
     cout<<"Enter the Row number"<<endl;
     int x,y;
     cin>>x>>y;
     for(int i=1;i<=x;i++){
          for(int j=1;j<=y;j++)
          {
               if(i==1 ||  i==x ){
                    cout<<"*"<<" ";
               }
               else if(j==1 || j==y ){
                    cout<<"*"<<" ";
               }
               else{
                cout<<" "<<" ";    
               }
          }
     cout<<endl;
     }

}