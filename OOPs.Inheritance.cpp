#include<bits/stdc++.h>
using namespace std;

class A{     // Parent Class
     public:
     void Afunc(){
          cout<<"func A"<<endl;         
     }
};
class B : public A{     
     public:      // Deraived class --- Single Inheritance:
     
     
};

int main(){

B b;
b.Afunc();




return 0;
}