#include<bits/stdc++.h>
using namespace std;
int main(){

     vector<int>v;
     v.push_back(1);
     v.push_back(2);
     v.push_back(3);
     v.push_back(6);
     v.push_back(4);
     for(int i=0;i<v.size();i++){
          cout<<v[i]<<endl;
     }//1 2 3

     vector<int>::iterator it;
     for(it=v.begin();it!=v.end();it++){
          cout<<*it<<endl;
     }// 1 2 3
     for(auto element:v){
          cout<<element<<endl;
     }// 1 2 3

     v.pop_back(); // 1 2

     vector<int> v2 (3,50);
     // 50 50 50 

     swap(v,v2); // In there v gets the values of v2 and v2 gets the valuse of v;
     for(auto i:v){
          cout<<i<<" ";
     }
     cout<<endl;
     for(auto i: v2){
          cout<<i<<" ";
     }

     sort(v.begin(),v.end());
      for(auto i:v){
          cout<<i<<" ";
     }

return 0;
}