#include<bits/stdc++.h>
using namespace std;
int main(){
     //  int a=19;
     //  int *str;
     //  str=&a;
     // //  cout<<*str<<endl;
     //  *str=99;
     // //  cout<<a<<endl;
   
       // Pointer and arrays in code
      int arr[]={10,20,30};
     //  cout<<*arr<<endl;
     int *ptr=arr;
     // for(int i=0;i<3;i++){
     //      cout<<*ptr<<endl;
     //      ptr++;
     // }
     // for(int i=0;i<3;i++){
     //      cout<<*(arr+i)<<endl;
         
     // }
     int **q=&ptr;
     cout<<*q<<endl;
     cout<<**q<<endl;
       

         
return 0;
}