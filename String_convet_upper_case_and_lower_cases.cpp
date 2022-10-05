#include<bits/stdc++.h>
using namespace std;
int main(){
 string s =" DFGDFHDHDJHDFHJ";
 for(int i=0;i<s.size();i++){
     if(s[i]>='A' and s[i]<='Z'){
          cout<<char(s[i]+32);
     }else{
          cout<<s[i];
     }
 }

return 0;
}