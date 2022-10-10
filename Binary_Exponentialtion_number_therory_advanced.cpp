
//          Properties ----->>>
//  --- (a+b)%m = (a%m)+(b%m)
//  ----(a-b)%m = (a%m)-(b%m)
//  ----(a*b)%m = (a%m)*(b%m)
//  ----(a/b)%m = (a%m)*(1/b%m)


#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int N =1e5+2 ,MOD =1e9+7;

int power(int a,int n){

     //  recursive function

     
     if(n==0){
          return 1;
     }
     int p =power(a,n/2)%MOD;
     int (n&1){
          return (((p*p)%MOD)*a%MOD;
     }
     else{
          return (p*p)%MOD;
     }
}

int power(int a,int n){
     a%=MOD;
     int ans=1;
     while(n>0){
          if(n&1)
          ans = (ans*a)%MOD;
          a=(a*a)%MOD;
          n=n>>1;
     }
     return ans;
}


signed main(){
      
      int a,n;
      cin>>a>>n;
      cout<<power(a,n)<<endl;







return 0;
}