#include<bits/stdc++.h>
using namespace std;

 void TowerOfHanoi(int n,char scr,char dest,char helpe){


  if(n==0){
     return;
  }
      TowerOfHanoi(n-1,scr,helpe,dest);
      cout<<"Move from"<<scr<<"to"<<dest<<endl;
      TowerOfHanoi(n-1,helpe,dest,scr);

 }
int main(){
 TowerOfHanoi(3,'A','C','B');
return 0;
}