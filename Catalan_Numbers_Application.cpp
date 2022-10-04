 //  Catalan Sequence
//   C0 =1;
//   C1 =1;
//   C2 =C0C1 + C1C0 =2
//   C3=C0C2 + C1C1 + C2C0 = 5

#include<bits/stdc++.h>
using namespace std;

int catalan(int n){
     if(n<=1){
          return 1;
     }
   int res =0;
     for(int i=0;i<=n-1;i++){
     res+=catalan(i)*catalan(n-i-1);

     }
     return res;
}

int main(){
 
  for(int i=0;i<10;i++){
     cout<<catalan(i)<<" ";
  }
cout<<endl;

return 0;
}