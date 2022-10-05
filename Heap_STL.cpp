//  //  HEAPS STL 
//  Maxheap   :  priority-queue<int,vector<int>>
//  Minheap   :  priority-queue<int,vector<int>,greater<int>>

//  push O(logN)
//  pop  O(logN)
//  top   O(1)
//  size  O(1)


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
     priority_queue<int,vector<int>> pq;
     pq.push(2);
     pq.push(3);
     pq.push(1);
     pq.push(5);

     cout<<pq.top()<<endl;
    pq.pop();
     cout<<pq.top()<<endl;

     priority_queue<int,vector<int>,greater<int>> x;
     x.push(2);
     x.push(1);
     x.push(4);
     x.push(5);
     cout<<endl;

     cout<<x.top()<<endl;
     x.pop();
     cout<<x.top();
}