#include<bits/stdc++.h>
using namespace std;
int prime(int x){
     int flage=0;
     for(int i=2;i<=sqrt(x);i++){
          if(x%i==0){
             flage=1;
             break;
          }
     }
    return  flage==1?0:1;
}
int main(){
     cout<<"Please Enter a Number"<<endl;
     int x;
     cin>>x;
     if(prime(x)){
          cout<<"Yes This number is prime number "<<endl;
     }
     else{
          cout<<"NO This number is not prime number "<<endl;
     }
}