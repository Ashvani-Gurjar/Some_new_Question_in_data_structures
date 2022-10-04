#include<bits/stdc++.h>
using namespace std;

class base{
     public:
    virtual   void print(){
          cout<<"This is the base class's print function"<<endl;
     }
     void display(){
          cout<<"This is the base class's display funciton"<<endl;
     }
};
class deirved: public base{
public:
void print(){
     cout<<"this is the derieved class's print funtion"<<endl;
}
void display(){
     cout<<"this is the derived class's display funciton"<<endl;
}
};
int main(){
     base *baseptr;
     deirved d;
     baseptr = &d;

     baseptr ->print();
     baseptr ->display();

return 0;
}