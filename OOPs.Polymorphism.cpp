//             Polymorphism
//              /         \
            
//             /          \
//    compile time        run time
//        /      \                 \
//        /       \            virtural funcitons
// functon        operator
// overloading       overloading
                 

 
  
               //  function overloading

#include<bits/stdc++.h>
using namespace std;

class student{
  public:
     void fun(){
          cout<<"This is fuction with no arguments"<<endl;
     }
     void fun(int x){
          cout<<"This is function with int argument"<<endl;
     }
     void fun(double x){
          cout<<"This is fuction with double argument"<<endl;
     }
    
};

int main(){

 student std;
 std.fun();
 std.fun(4);
 std.fun(6.3);




return 0;
}