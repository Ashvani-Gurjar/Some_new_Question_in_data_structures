#include<bits/stdc++.h>
using namespace std;
bool  isprime(int x){
     for(int i=2;i<=sqrt(x);i++){
          if(x%i==0){
               return false;
          }
     }
     return true;

}
void prime(int x,int y){

     for(int i=x ;i<=y;i++){
          if(isprime(i)){
               cout<<i<<endl;
          }
       
     }
}
int main(){
     cout<<"Please Enter two Numbers"<<endl;
     int x,y;
     cin>>x>>y;
     prime(x,y);
    
     return 0;
   }   
