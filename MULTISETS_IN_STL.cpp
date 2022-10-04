     ///  TIME COMPLEXITIES
     //   Insertion: O(logN)
     //   Deletion: O(logN)
     //   Upper_bound/Lower_bound: O(N)



#include<bits/stdc++.h>
using namespace std;
int main(){

     multiset<int> s;
     s.insert(1);
     s.insert(2);
     s.insert(3);
     s.insert(3);
     s.insert(5);
   
    ///  Traversal in multisets;
     for(auto i:s){
          cout<<i<<" ";
     }
     cout<<endl;

     /// It delete all the multielements in multisets
     s.erase(3);
     for(auto i:s){
          cout<<i<<" ";
     }
   // It delete only first occures of elements in multisets
     s.erase(s.find(3));
     for(auto i:s){
          cout<<i<<" ";
     }
     cout<<endl;

return 0;
}