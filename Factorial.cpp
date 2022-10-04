#include<bits/stdc++.h>
using namespace std;
int factorial(int x){
     if(x==0 || x==1){
          return 1;
     }
     else{
          return  x* factorial(x-1);
     }
    
}
int main(){
     cout<<"Please Enter a Number"<<endl;
     int x;
     cin>>x;
    int y= factorial(x);
          cout<<"Factorial of that number is :"<<y<<endl;
    
     return 0;
   }   
