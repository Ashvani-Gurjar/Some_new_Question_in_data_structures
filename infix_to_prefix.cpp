#include<bits/stdc++.h>
using namespace std;

int prec(char ct){
     if(ct=='^'){
          return 3;
     }
     else if(ct=='*' || ct == '/'){
          return 2;
     }
     else if(ct=='+' ||  ct=='-') {
          return 1;
     }
     else {
          return -1;
     }
}

string infixtopostfix(string st){
     stack<int>s;
     string res;

     for(int i=0;i<st.length();i++){
          if((st[i]>='a' && st[i]<='z') || (st[i]>='A' && st[i]<='Z')){
           res+=st[i];

          }
          else if(st[i]=='('){
               s.push(st[i]);
          }
          else if(st[i]==')'){
               while(!s.empty() && s.top()!='('){
                    res+=s.top();
                    s.pop();
               }
               if(!s.empty()){
                    s.pop();
               }
          }
               else{
               while(!s.empty() && prec(s.top())>prec(st[i])){
                    res+=s.top();
                    s.pop();
                  
               }
               s.push(st[i]);

          }
     }
     while(!s.empty()){
          res+=s.top();
          s.pop();
     }
     return res;
}



int main(){

cout<<infixtopostfix("(a-b/c)*(a/k-l)")<<endl;

return 0;
}