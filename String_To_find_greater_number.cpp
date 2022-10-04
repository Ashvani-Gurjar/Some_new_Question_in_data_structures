#include<bits/stdc++.h>
using namespace std;
int main(){
     string str= "43375766456574";
     sort(str.begin(),str.end(),greater<int>());
     cout<<str<<endl;
return 0;
}