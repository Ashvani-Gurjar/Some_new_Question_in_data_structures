#include<bits/stdc++.h>
using namespace std;

class student{
     public:
     string name;
     int age;
     bool gender;

     void printInfo(){
          cout<<"Name =";
          cout<<name<<endl;
          cout<<"Age =";
          cout<<age<<endl;
          cout<<"Gender =";
          cout<<gender<<endl;
     }
};


int main(){
          
     // student a;
     // a.name = 'Ashvnai';
     // a.age =20;
     // a.gender =1;

         student arr[3];
         for(int i=0;i<3;i++){
          cout<<"Name =";
          cin>>arr[i].name;
          cout<<"Age =";
          cin>>arr[i].age;
          cout<<"Gender =";
          cin>>arr[i].gender;
         }
     
          for(int i=0;i<3;i++){
               arr[i].printInfo();
          }

return 0;
}