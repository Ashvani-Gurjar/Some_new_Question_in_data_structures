#include<bits/stdc++.h>
using namespace std;
int main(){
       //  To Convert lower letter to upper letters
       string str="fsfslkfhahlkghrwejcl";
       transform(str.begin(),str.end(),str.begin(),::toupper);
       cout<<str<<endl;
       //  To Convert upper letter to lower letters
       transform(str.begin(),str.end(),str.begin(),::tolower);
       cout<<str<<endl;

return 0;
}