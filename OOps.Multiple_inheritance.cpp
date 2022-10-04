#include<bits/stdc++.h>
using namespace std;

class A{     // Parent Class
     public:
     void Afunc(){
          cout<<"func A"<<endl;         
     }
};
class B{     
     public:      // Deraived class --- Single Inheritance:
      void Bfunc(){
          cout <<"Func B"<<endl;
      }
};

class C : public A, public B
{
     public:
};
int main(){

// B b;
// b.func();

C c;
c.Afunc();
c.Bfunc();


return 0;
}



