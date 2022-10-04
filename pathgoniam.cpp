#include<bits/stdc++.h>
using namespace std;
void pathagonian(int x,int y,int z){
     int a,b,c;
      a=max(max(x,y),z);

    if(a==x){
        b=y;
        c=z;
    }
    else if(y==a){
         b=x;
         c=z;
    }
    else{
       b=x;
       c=y;
    }
    if(a*a==b*b+c*c){
     cout<<"Pathogorian Triplate"<<endl;
    }
    else{
     cout<<"Not Pathogorian Triaplate"<<endl;
    }
}
int main(){
     int x,y,z;
     cin>>x>>y>>z;
     pathagonian(x,y,z);
}