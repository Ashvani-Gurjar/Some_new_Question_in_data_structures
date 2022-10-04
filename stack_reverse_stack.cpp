#include<bits/stdc++.h>
using namespace std;

void insertBottom(stack<int> &st, int element){
      
      if(st.empty()){
          st.push(element);
          return;
      }
      
      int data =st.top();
      st.pop();
      insertBottom(st,element);

      st.push(data);

}

void reverse(stack<int> &st){

     if(st.empty()){
          return;
     }

     int ans=st.top();
     st.pop();
     reverse(st);
     insertBottom(st,ans);
}


int main(){

     stack<int> st;
     st.push(1);
     st.push(2);
     st.push(3);
     st.push(4);

     reverse(st);
     while(!st.empty()){
          cout<<st.top()<<endl;
          st.pop();

     }
     cout<<endl;





return 0;
}