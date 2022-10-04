#include<bits/stdc++.h>
using namespace std;
int factorial(int x){
     if(x==0|| x==1){
          return 1;

     }
     else
     {
          return x* factorial(x-1);
     }
}
void Solution(int x,int y){
      int ans= factorial(x)/(factorial(y)*factorial(x-y));
      cout<<ans<<endl;
}
int main(){
     cout<<"Please Enter the value of n or r in nCr :"<<endl;
     int x,y;
     cin>>x>>y;
     Solution(x,y);
    
     return 0;
   }   
