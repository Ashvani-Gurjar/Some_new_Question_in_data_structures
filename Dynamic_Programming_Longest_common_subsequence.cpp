#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vvi vector<vi>
#define vii vector<pii>
const int N=1e3+2;
int dp[N][N];

int lcs(string &s1,string &s2,int n,int m){
     if(n==0 || m==0){
          return 0;
     }

     if(dp[n][m]!=-1){
          return dp[n][m];
     }


       if(s1[n-1] == s2[m-1]) 
      dp[n][m]= 1 + lcs(s1,s2,n-1,m-1);
     else{
          dp[n][m] = max(lcs(s1,s2,n,m-1),lcs(s1,s2,n-1,m));
     }
 
  return dp[n][m];

 


     // if(s1[n-1] == s2[m-1]) 
     // return 1 + lcs(s1,s2,n-1,m-1);
     // else{
     //      return max(lcs(s1,s2,n,m-1),lcs(s1,s2,n-1,m));
     // }
}
int main(){

     for(int i=0;i<N;i++){
          for(int j=0;j<N;j++){
               dp[i][j]=-1;
          }
     }

string s1,s2;
cin>>s1>>s2;

int n=s1.size();
int m=s2.size();

cout<<lcs(s1,s2,n,m)<<endl;



// Method --2
  
   vvi dp(n+1,vi(m+1,-1));
   for(int i=0;i<n+1;i++){
     for(int j=0;j<m+1;j++){
          if(i==0 || j==0){
               dp[i][j]=0;
               continue;
          }
          if(s1[i-1] == s2[j-1]){
               dp[i][j]=1+dp[i-1][j-1];
          }
          else{
               dp[i][j]=max(dp[i-1][j-1],dp[i][j-1]);
          }
     }
   }
   cout<<dp[n][m]<<endl;
return 0;
}