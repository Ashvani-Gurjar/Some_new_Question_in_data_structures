#include<bits/stdc++.h>
using namespace std;

class complex{
  int real, imag;
  private:
      complex(int r=0,int i=0){
          real = r;
          imag = i;
      }
      complex operator + (complex const &obj){
          complex res;
          res.imag = imag + obj.imag;
          res.real = real + obj.real;
          return res;
      }
      void display(){
          cout<<real<<" +i"<<imag<<endl;
      }
};



int32_t main(){
     complex c1;
     complex c2;       
    
     c1(3,4);
     c2(6,7);
    complex  c3 = c1 + c2;
    c3.display();

return 0;
}