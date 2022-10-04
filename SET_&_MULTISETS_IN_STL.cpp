// Ordered_Set
// -- Contains unique elemnts
// -- Implements using balanced BST
// -- Elements are in sorted Ordered_Set
// -- Random access is not possible,i.e you cannot get i'th element in O(1)/O(log N)
// -- Present in #include<set> header file 



#include<bits/stdc++.h>
using namespace std;
int main(){
     set<int> s;
     s.insert(1);
     s.insert(2);
     s.insert(2);
     s.insert(3);
   

     // for Traversal
     for(auto i: s){
          cout<<i<<" ";
     }
     cout<<endl;
       // for Traversal
     for(auto i=s.begin();i!=s.end();i++){
          cout<<*i<<" ";
     }
     cout<<endl;
       // for Reverse_Traversal
     for(auto i= s.rbegin();i!=s.rend();i++){
          cout<<*i<<" ";
     }
     cout<<endl;
      // for Reverse_Traversal
     set<int,greater<int>>s1;
     s1.insert(1);
     s1.insert(2);
     s1.insert(3);
     s1.insert(4);
     for(auto i:s1){
          cout<<i<<" ";
     }
       cout<<endl;

     //  for Lower_bond and Upper_bond
    set<int> s3;
     s3.insert(1);
     s3.insert(3);
     s3.insert(5);
     s3.insert(6);
     s3.insert(7);

     cout<<*s3.lower_bound(2)<<endl;
     cout<<*s3.upper_bound(3)<<endl;    

     //  for erase the data from sets
      s3.erase(7);
      s3.erase(s3.begin());
      for(auto i:s3){
          cout<<i<<" ";
      }
      cout<<endl;



return 0;
}