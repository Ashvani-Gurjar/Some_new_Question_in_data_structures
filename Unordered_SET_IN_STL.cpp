//  present in #include<unordered_set>header_file
//  contains unique elements
//  implemented using Hashing
//  elements are not in sorted order

//  Insertion : O(1) in avg cas
//  Deletion, O(N) in worst case
//  Deletion : O(1) in avg case, O(N) in worst case


#include<bits/stdc++.h>
using namespace std;
int main(){
     unordered_set<int > s;
     s.insert(1);
     s.insert(4);
     s.insert(8);
     s.insert(3);
     s.insert(6);
     for(auto i: s){
          cout<<i<<" ";
     }
     cout<<endl;

return 0;
}