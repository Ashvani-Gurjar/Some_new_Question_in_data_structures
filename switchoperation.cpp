#include<bits/stdc++.h>
using namespace std;
int main(){
     cout<<"Enter + for Additon | Enter - for Subtraction | Enter * for multiplcation | Enter / for division";
     char k;
     cout<<endl;
     cin>>k;
     switch(k){
          case '+':
          cout<< "Additon of two number ";
          break;
          case '-':
          cout<<" Subtraction of two number ";
          break;
          
          case '*':
          cout<<" Multiplcation of two number ";
          break;
          
          case '/':
          cout<<" Division of two number ";
          break;
           
           default :
           cout<<"Enter char is wrong ";
     }


}