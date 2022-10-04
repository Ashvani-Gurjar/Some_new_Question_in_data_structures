#include<bits/stdc++.h>
using namespace std;

class student{
     string name;
     public:
     int age;
     bool gender;


 //  Parameterised --  CONSTRACTER ++++++       **************
       student(string s,int a,int g){
     cout<<"Parameterised Constructor"<<endl;
          name = s;
          age= a;
          gender = g;
       }
 
  //  Default Constracter ++++****
    
    student(){
     cout<<"Default Constractor"<<endl;
    }

       

            student(student &a){
               cout<<"Copy constractor"<<endl;  // Two types of  Shadow copy and  Deep copy we used deep copy

               name= a.name;
               age= a.age;
               gender =a.gender;
            }


            ~student(){
               cout<<"Destractor Called"<<endl;
            }


     void printInfo(){
          cout<<"Name =";
          cout<<name<<endl;
          cout<<"Age =";
          cout<<age<<endl;
          cout<<"Gender =";
          cout<<gender<<endl;
     }

     // operator overloading

     bool operator == (student &a){
          if(name==a.name && age==a.age && gender == a.gender){
               return true;
          }
          return false;
     }
};


int main(){
    
        student a("Ashvani",20,1);
     //    a.printInfo();
    
        student b("Rahul",32,0);   

        student c =a;

        if( b==a){
           cout<<"Same"<<endl;
        }
        else{
          cout<<"NOt Same"<<endl;
        }


return 0;
}