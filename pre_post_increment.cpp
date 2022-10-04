#include<iostream>
using namespace std;
int main(){
     int a=9;
     int b =++a;
     cout<<a<<" "<<b<<endl;
     int k=a+ b+ a++ + b++ + ++a + ++b;
     cout<<k<<" "<<endl;

}