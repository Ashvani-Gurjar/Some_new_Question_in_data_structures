//            STANDARD TEMPLATE LIBRARY

//  MAPS                  UNORDERED MAPS
// Insertion O(logN)       O(1) on average
// Accessing O(logN)       O(1)
// Implemented: Red_Black using trees      Hash Tables(basically array of buckets)
//  map<int,int> mp                      unordered_map<int,int> unordered_map

#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i =a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
signed main(){

     map<int,int> m;
     m[8] =2;
     cout<<m[8]<<endl;
}