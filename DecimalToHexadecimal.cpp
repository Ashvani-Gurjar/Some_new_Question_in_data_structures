#include<bits/stdc++.h>
using namespace std;
string DecimalToHaxadecimal(int n){
        int x=1;
        string ans="";
        while(x<=n)
          x*=16;
          x/=16;
          while(x>0){
               int lastDigt=n/x;
               n-=lastDigt*x;
               x/=16;
               if(lastDigt<=9){
                    ans = ans + to_string(lastDigt);
              }
               else{
                    char c='A' + lastDigt -10;
                    ans.push_back(c);
           }
        }
       return ans;
             
}
int32_t main(){

     int n;
     cin>>n;
    cout<<DecimalToHaxadecimal(n)<<endl;
}