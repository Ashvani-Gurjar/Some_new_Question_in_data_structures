#include<bits/stdc++.h>
using namespace std;
bool ispower2(int n){
     return (n && !(n & n-1));

}
int main(){
       cout<<ispower2(6)<<endl;

return 0;
}