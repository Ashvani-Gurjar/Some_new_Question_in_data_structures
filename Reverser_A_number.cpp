#include<bits/stdc++.h>
using namespace std;
int reverse(int x){
     int sum=0,s;
    while(x>0){
        s=x%10;
        sum=sum*10+s;
        x=x/10;
    }
     return  sum;
}
int main(){
     cout<<"Please Enter a Number"<<endl;
     int x;
     cin>>x;
    int y= reverse(x);
          cout<<"Reverse of that number is :"<<y<<endl;
    
     return 0;
   }   
