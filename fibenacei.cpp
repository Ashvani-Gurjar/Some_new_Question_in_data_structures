#include<bits/stdc++.h>
using namespace std;
void fibenacei(int x){
   int a=0;
   int b=1;
   int sum=0;
   while(sum<=x){
     cout<<a<<" ";
     sum=a+b;
     a=b;
     b=sum;
   }
}
int main(){
     cout<<"Please Enter a Numbers"<<endl;
     int x;
     cin>>x;
     fibenacei(x);
    
     return 0;
   }   
